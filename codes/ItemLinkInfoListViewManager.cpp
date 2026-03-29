void ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4D332A1 & 1) == 0 )
  {
    sub_1C93AD4(&ItemLinkInfoListViewManager_TypeInfo);
    byte_4D332A1 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D332A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D332A0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemLinkInfoObjectList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *ItemLinkInfoListViewManager__CoCreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isSynchro,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D3329B & 1) == 0 )
  {
    sub_1C93AD4(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
    byte_4D3329B = 1;
  }
  v6 = sub_1C93D20(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void ItemLinkInfoListViewManager__CreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noneDataLabel; // x22
  UnityEngine_Component_o *HasViewItem; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x22
  const MethodInfo *v12; // x2
  UILabel_o *v13; // x22
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_4D33299 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_7563/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/);
    byte_4D33299 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
  {
    noneDataLabel = (UnityEngine_Object_o *)this->fields.noneDataLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    HasViewItem = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(noneDataLabel, 0, 0);
    if ( ((unsigned __int8)HasViewItem & 1) != 0 )
    {
      HasViewItem = (UnityEngine_Component_o *)this->fields.noneDataLabel;
      if ( !HasViewItem )
        goto LABEL_18;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(HasViewItem, 0);
      HasViewItem = (UnityEngine_Component_o *)ItemLinkInfoListViewManager__HasViewItem(
                                                 gameObject,
                                                 itemLinkInfoGroupList,
                                                 v12);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0);
      v13 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7563/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0);
      if ( !v13 )
        goto LABEL_18;
      UILabel__set_text(v13, (System_String_o *)HasViewItem, 0);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v10);
        UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, List, 0);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v10);
      }
      return;
    }
LABEL_18:
    sub_1C93D2C(HasViewItem, v9);
  }
}


void ItemLinkInfoListViewManager__CreateListSub(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoListViewManager_o *v6; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float y; // s11
  float x; // s9
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  UnityEngine_Object_o *monitor; // x21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  float ItemDetailOffsetPositionY; // s0
  float v21; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  int *v39; // x8
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v41; // x23
  _BOOL8 v42; // x0
  __int64 v43; // x1
  UnityEngine_Component_o *v44; // x23
  ItemLinkInfoListViewManager_o *v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  int *v48; // x8
  System_Collections_Generic_List_object__o *v49; // x24
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  Il2CppObject *v57; // x1
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  int *v64; // x8
  UnityEngine_Object_o *v65; // x23
  _BOOL8 v66; // x0
  __int64 v67; // x1
  UnityEngine_Component_o *v68; // x22
  ItemLinkInfoListViewManager_o *v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x2
  int *v72; // x8
  System_Collections_Generic_List_object__o *v73; // x23
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  Il2CppObject *v81; // x1
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  int *v88; // x8
  int32_t v89; // w22
  Il2CppObject *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v92; // x23
  _BOOL8 v93; // x0
  __int64 v94; // x1
  Il2CppObject *Component_object; // x0
  __int64 v96; // x1
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  ItemLinkInfoListViewObject_o *v103; // x24
  const MethodInfo *v104; // x1
  const MethodInfo *v105; // x1
  ItemLinkInfoListViewManager_c *v106; // x0
  __int64 v107; // x1
  const MethodInfo *v108; // x2
  float Height; // s0
  float v110; // s10
  float BOARD_OFFSET_X; // s0
  float v112; // s13
  __int64 v113; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v116; // x1
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x8
  __int64 v128; // x1
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  System_Collections_Generic_List_object__o *v135; // x0
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4D3329A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C93AD4(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3329A = 1;
  }
  memset(&v143, 0, sizeof(v143));
  if ( !byte_4D2A139 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1C93D2C(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v142,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v143 = v142;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v143,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v11 )
      break;
    current = v143.fields._current;
    if ( !v143.fields._current )
      sub_1C93D2C(v11, v12);
    monitor = (UnityEngine_Object_o *)v143.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( v15 )
    {
      v17 = (UnityEngine_Component_o *)current[1].monitor;
      ItemDetailOffsetPositionY = ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
                                    (ItemLinkInfoListViewManager_o *)v15,
                                    (ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current,
                                    isDispStoneDetaila,
                                    v16);
      if ( !v17 )
        sub_1C93D2C(v18, v19);
      v21 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v17, 0);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v21, z, v23);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v25 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v17, 0);
      v32 = v25;
      if ( !objectList )
        sub_1C93D2C(v25, v25);
      items = objectList->fields._items;
      v34 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C93D2C(v25, v25);
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v25,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      }
      v39 = (int *)v17[2].monitor;
      if ( !v39 )
        sub_1C93D2C(v37, v38);
      y = y - (float)(*(float *)&v17[3].fields.m_CachedPtr + (float)v39[43]);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v41 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v42 = UnityEngine_Object__op_Inequality(v41, 0, 0);
      if ( v42 )
      {
        v44 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v44 )
          sub_1C93D2C(v42, v43);
        v45 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0);
        v48 = (int *)v44[1].monitor;
        if ( !v48 )
          sub_1C93D2C(v45, v46);
        ItemLinkInfoListViewManager__InitTransform(
          v45,
          (UnityEngine_GameObject_o *)v45,
          x,
          (float)(y + (float)((float)v48[43] * -0.5)) + 1.0,
          z,
          v47);
        v49 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v50 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v44, 0);
        v57 = v50;
        if ( !v49 )
          sub_1C93D2C(v50, v50);
        v58 = v49->fields._items;
        v59 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v49->fields._version;
        if ( !v58 )
          sub_1C93D2C(v50, v50);
        v60 = v49->fields._size;
        if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            v50,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &v58->obj.klass + v60;
          v49->fields._size = v60 + 1;
          v61[4] = (Il2CppClass *)v57;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v61 + 4), (int32_t)v57, v51, v52, v53, v54, v55, v56);
        }
        v64 = (int *)v44[1].monitor;
        if ( !v64 )
          sub_1C93D2C(v62, v63);
        y = y - (float)v64[43];
      }
      v65 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v66 = UnityEngine_Object__op_Inequality(v65, 0, 0);
      if ( v66 )
      {
        v68 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v68 )
          sub_1C93D2C(v66, v67);
        v69 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v68, 0);
        v72 = (int *)v68[1].monitor;
        if ( !v72 )
          sub_1C93D2C(v69, v70);
        ItemLinkInfoListViewManager__InitTransform(
          v69,
          (UnityEngine_GameObject_o *)v69,
          x,
          y + (float)((float)v72[43] * -0.5),
          z,
          v71);
        v73 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v74 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v68, 0);
        v81 = v74;
        if ( !v73 )
          sub_1C93D2C(v74, v74);
        v82 = v73->fields._items;
        v83 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v73->fields._version;
        if ( !v82 )
          sub_1C93D2C(v74, v74);
        v84 = v73->fields._size;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v73,
            v74,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v73->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v81;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v81, v75, v76, v77, v78, v79, v80);
        }
        v88 = (int *)v68[1].monitor;
        if ( !v88 )
          sub_1C93D2C(v86, v87);
        y = y - (float)v88[43];
      }
      if ( klass->fields._size >= 1 )
      {
        v89 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v89,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v92 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v93 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v92, 0, 0);
          if ( !v93 )
          {
            if ( !v92 )
              sub_1C93D2C(v93, v94);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v92,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v103 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1C93D2C(0, v96);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&Component_object[3],
              (int32_t)Item,
              v97,
              v98,
              v99,
              v100,
              v101,
              v102);
            ItemLinkInfoListViewObject__SetupDisp(v103, v104);
            GameObjectExtensions__SetParent_36750884((UnityEngine_GameObject_o *)v92, v6->fields.listParent, 0);
            Height = ItemLinkInfoListViewObject__GetHeight(v103, v105);
            if ( !Item )
              sub_1C93D2C(v106, v107);
            v110 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[10].klass) )
              v112 = 0.0;
            else
              v112 = -1.0;
            if ( BYTE3(Item[10].klass) )
            {
              v106 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v106 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v106->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v106,
              (UnityEngine_GameObject_o *)v92,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v110 * 0.5) + v112),
              z,
              v108);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1C93D2C(0, v113);
            layer = UnityEngine_GameObject__get_layer(listParent, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v92, layer, 0);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1C93D2C(0, v116);
            v124 = itemLinkInfoObjectList->fields._items;
            v125 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v124 )
              sub_1C93D2C(itemLinkInfoObjectList, v116);
            v126 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v126 >= LODWORD(v124->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v103,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
            }
            else
            {
              v127 = &v124->obj.klass + v126;
              itemLinkInfoObjectList->fields._size = v126 + 1;
              v127[4] = (Il2CppClass *)v103;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v127 + 4), (int32_t)v103, v117, v118, v119, v120, v121, v122);
            }
            v135 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v135 )
              sub_1C93D2C(0, v128);
            v136 = v135->fields._items;
            v137 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v135->fields._version;
            if ( !v136 )
              sub_1C93D2C(v135, v128);
            v138 = v135->fields._size;
            if ( (unsigned int)v138 >= LODWORD(v136->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v135,
                v92,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
            }
            else
            {
              v139 = &v136->obj.klass + v138;
              v135->fields._size = v138 + 1;
              v139[4] = (Il2CppClass *)v92;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v139 + 4), (int32_t)v92, v129, v130, v131, v132, v133, v134);
            }
            y = y - (float)(v110 + v6->fields.boardSpace);
          }
          ++v89;
        }
        while ( v89 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v143,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v6->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0);
}


void ItemLinkInfoListViewManager__DeleteCallback(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3329F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    byte_4D3329F = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C93D2C(0, v4);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
  }
}


void ItemLinkInfoListViewManager__DestroyList(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D3329D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3329D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C93D2C(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._current, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v7 = this->fields.objectList;
  if ( !v7 )
    goto LABEL_20;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_1C93D2C(objectList, method);
  }
}


float ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
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

  if ( (byte_4D3329C & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    byte_4D3329C = 1;
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
                                                (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
        sub_1C93D2C(this, itemLinkInfoGroup);
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


bool ItemLinkInfoListViewManager__HasViewItem(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  int v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D3329E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    this = (ItemLinkInfoListViewManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    byte_4D3329E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !itemLinkInfoGroupList )
    sub_1C93D2C(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v10.fields._current )
      sub_1C93D2C(v4, v5);
    v7 = *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&v10.fields._current->klass
                                                               + (unsigned __int64)&dword_30);
    if ( v7
      && System_Linq_Enumerable__Any_object_(
           v7,
           (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v8 = 4;
      goto LABEL_11;
    }
  }
  v8 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v6 && v8 == 4;
}


void ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_36745272(obj, x, y, z, 0);
  GameObjectExtensions__ResetLocalRotation(obj, 0);
  GameObjectExtensions__ResetLocalScale(obj, 0);
}


UnityEngine_GameObject_o *ItemLinkInfoListViewManager__get_ListParentObject(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.listParent;
}


UIScrollBar_o *ItemLinkInfoListViewManager__get_ScrollBar(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollBar;
}


void ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor(
        ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ItemLinkInfoListViewManager__CoCreateList_d__17___ctor(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ItemLinkInfoListViewManager__CoCreateList_d__17__MoveNext(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v8; // x19
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v14; // x9
  __int128 v15; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v24; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct ItemLinkInfoDetailObject_o *v35; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  struct UIWidget_o *widget; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v55; // x0
  struct UILabel_o *itemDetailLabel; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v60; // x19
  ItemLinkInfoListViewManager_o *v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v65; // x20
  Il2CppObject *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  Il2CppObject *v73; // x1
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v78; // x8
  int *v79; // x8
  int32_t v80; // w8
  Il2CppObject *Item; // x0
  __int64 v82; // x1
  Il2CppObject *v83; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v85; // x19
  System_Collections_Generic_List_object__o *v86; // x9
  GrandQuestFolderBoardItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v88; // t1
  Il2CppObject *Component_object; // x0
  __int64 v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  ItemLinkInfoListViewObject_o *v97; // x20
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x1
  ItemLinkInfoListViewManager_c *v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x2
  float Height; // s0
  float v104; // s8
  float BOARD_OFFSET_X; // s0
  float v106; // s9
  __int64 v107; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v110; // x1
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x8
  __int64 v122; // x1
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  System_Collections_Generic_List_object__o *v129; // x0
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x8
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v140; // x0
  System_Collections_Generic_List_Enumerator_T__o v141[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v142; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v143; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v144; // [xsp+68h] [xbp-48h] BYREF

  v144 = this;
  v8 = this;
  if ( (byte_4D332A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C93AD4(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D332A2 = 1;
  }
  v142 = 0;
  v143 = &v144;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_64;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    v8 = v144;
    byte_4D2A139 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v8->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v8->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v8->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v141,
    itemLinkInfoGroupList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v14 = v144;
  v15 = *(_OWORD *)&v141[0].fields._list;
  p__7__wrap2 = &v144->fields.__7__wrap2;
  v141[1] = v141[0];
  v144->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v141[0].fields._current;
  *(_OWORD *)&v14->fields.__7__wrap2.fields._list = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p__7__wrap2, 0, v17, v18, v19, v20, v21, v22);
  v144->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v144->fields.__7__wrap2,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v144, v24);
      v78 = v144;
      v144->fields.__7__wrap2.fields._list = 0;
      *(_QWORD *)&v78->fields.__7__wrap2.fields._index = 0;
      v78->fields.__7__wrap2.fields._current = 0;
      return 0;
    }
    current = v144->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1C93D2C(v144, v24);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(itemDetailObj, 0, 0);
    if ( v27 )
    {
      v35 = current->fields.itemDetailObj;
      if ( !v35 )
        sub_1C93D2C(v27, v28);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0);
      widget = v35->fields.widget;
      if ( !widget )
        sub_1C93D2C(gameObject, v37);
      if ( !_4__this )
        sub_1C93D2C(gameObject, v37);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v144->fields._basePosition_5__2.fields.x,
        v144->fields._basePosition_5__2.fields.y + (float)((float)widget->fields.mHeight * -0.5),
        v144->fields._basePosition_5__2.fields.z,
        v38);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v41 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0);
      v48 = v41;
      if ( !objectList )
        sub_1C93D2C(v41, v41);
      items = objectList->fields._items;
      v50 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C93D2C(v41, v41);
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v41,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v48;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v48, v42, v43, v44, v45, v46, v47);
      }
      itemDetailLabel = v35->fields.itemDetailLabel;
      if ( !itemDetailLabel )
        sub_1C93D2C(v53, v54);
      v55 = v144;
      v144->fields._basePosition_5__2.fields.y = v144->fields._basePosition_5__2.fields.y
                                               - (float)(v35->fields.itemDetailLabelMargin
                                                       + (float)itemDetailLabel->fields.mHeight);
    }
    else
    {
      v55 = v144;
    }
    viewItemList = current->fields.viewItemList;
    v55->fields._viewItemList_5__4 = viewItemList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v55->fields._viewItemList_5__4,
      (int32_t)viewItemList,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    viewItemList_5__4 = v144->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0,
                                                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v60 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v60 )
      sub_1C93D2C(this, method);
    v61 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0);
    monitor = (int *)v60[1].monitor;
    if ( !monitor )
      sub_1C93D2C(v61, v62);
    if ( !_4__this )
      sub_1C93D2C(v61, v62);
    ItemLinkInfoListViewManager__InitTransform(
      v61,
      (UnityEngine_GameObject_o *)v61,
      v144->fields._basePosition_5__2.fields.x,
      v144->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v144->fields._basePosition_5__2.fields.z,
      v63);
    v65 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v66 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v60, 0);
    v73 = v66;
    if ( !v65 )
      sub_1C93D2C(v66, v66);
    v74 = v65->fields._items;
    v75 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v65->fields._version;
    if ( !v74 )
      sub_1C93D2C(v66, v66);
    v76 = v65->fields._size;
    if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v65,
        v66,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v74->obj.klass + v76;
      v65->fields._size = v76 + 1;
      v77[4] = (Il2CppClass *)v73;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v73, v67, v68, v69, v70, v71, v72);
    }
    v79 = (int *)v60[1].monitor;
    if ( !v79 )
      sub_1C93D2C(this, method);
    v8 = v144;
    v144->fields._basePosition_5__2.fields.y = v144->fields._basePosition_5__2.fields.y - (float)v79[43];
  }
  else
  {
    v8 = v144;
  }
  v80 = 0;
  for ( v8->fields._i_5__5 = 0; ; v8->fields._i_5__5 = v80 )
  {
    v88 = v8->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (GrandQuestFolderBoardItem_o *)&v8->fields._viewItemList_5__4;
    v86 = (System_Collections_Generic_List_object__o *)v88;
    if ( !v88 )
      sub_1C93D2C(this, method);
    if ( v80 >= v86->fields._size )
    {
      p_viewItemList_5__4->klass = 0;
      sub_1C93A78(p_viewItemList_5__4, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v86,
             v80,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1C93D2C(Item, v82);
    v83 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v85 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v85,
                                                                  0,
                                                                  0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v8 = v144;
LABEL_64:
    v80 = v8->fields._i_5__5 + 1;
  }
  if ( !v85 )
    sub_1C93D2C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v85,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v97 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1C93D2C(0, v90);
  Component_object[3].klass = (Il2CppClass *)v83;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[3], (int32_t)v83, v91, v92, v93, v94, v95, v96);
  ItemLinkInfoListViewObject__SetupDisp(v97, v98);
  GameObjectExtensions__SetParent_36750884((UnityEngine_GameObject_o *)v85, _4__this->fields.listParent, 0);
  Height = ItemLinkInfoListViewObject__GetHeight(v97, v99);
  if ( !v83 )
    sub_1C93D2C(v100, v101);
  v104 = Height;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE3(v83[10].klass) )
    v106 = 0.0;
  else
    v106 = -1.0;
  if ( BYTE3(v83[10].klass) )
  {
    v100 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v100 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v100->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v100,
    (UnityEngine_GameObject_o *)v85,
    BOARD_OFFSET_X + v144->fields._basePosition_5__2.fields.x,
    v144->fields._basePosition_5__2.fields.y - (float)((float)(v104 * 0.5) + v106),
    v144->fields._basePosition_5__2.fields.z,
    v102);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1C93D2C(0, v107);
  layer = UnityEngine_GameObject__get_layer(listParent, 0);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v85, layer, 0);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1C93D2C(0, v110);
  v118 = itemLinkInfoObjectList->fields._items;
  v119 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v118 )
    sub_1C93D2C(itemLinkInfoObjectList, v110);
  v120 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v97,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
  }
  else
  {
    v121 = &v118->obj.klass + v120;
    itemLinkInfoObjectList->fields._size = v120 + 1;
    v121[4] = (Il2CppClass *)v97;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v121 + 4), (int32_t)v97, v111, v112, v113, v114, v115, v116);
  }
  v129 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v129 )
    sub_1C93D2C(0, v122);
  v130 = v129->fields._items;
  v131 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v129->fields._version;
  if ( !v130 )
    sub_1C93D2C(v129, v122);
  v132 = v129->fields._size;
  if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v129,
      v85,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = &v130->obj.klass + v132;
    v129->fields._size = v132 + 1;
    v133[4] = (Il2CppClass *)v85;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v133 + 4), (int32_t)v85, v123, v124, v125, v126, v127, v128);
  }
  v140 = v144;
  v144->fields._basePosition_5__2.fields.y = v144->fields._basePosition_5__2.fields.y
                                           - (float)(v104 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0);
    v140 = v144;
  }
  v140->fields.__2__current = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v140->fields.__2__current, 0, v134, v135, v136, v137, v138, v139);
  v144->fields.__1__state = 1;
  return 1;
}


Il2CppObject *ItemLinkInfoListViewManager__CoCreateList_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ItemLinkInfoListViewManager__CoCreateList_d__17__System_Collections_IEnumerator_Reset(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *ItemLinkInfoListViewManager__CoCreateList_d__17__System_Collections_IEnumerator_get_Current(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ItemLinkInfoListViewManager__CoCreateList_d__17__System_IDisposable_Dispose(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(this, method);
}


void ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D332A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    byte_4D332A3 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}