void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B04A1E & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoListViewManager_TypeInfo, v1);
    byte_4B04A1E = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void __fastcall ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B04A1D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v4);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4B04A1D = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ItemLinkInfoListViewManager__CoCreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isSynchro,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B04A18 & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList);
    byte_4B04A18 = 1;
  }
  v6 = sub_1BC3254(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall ItemLinkInfoListViewManager__CreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *noneDataLabel; // x22
  UnityEngine_Component_o *HasViewItem; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x22
  const MethodInfo *v16; // x2
  UILabel_o *v17; // x22
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_4B04A16 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_7442/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, v10);
    byte_4B04A16 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
  {
    noneDataLabel = (UnityEngine_Object_o *)this->fields.noneDataLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                 v16);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0LL);
      v17 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7442/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v17 )
        goto LABEL_18;
      UILabel__set_text(v17, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v14);
        UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v14);
      }
      return;
    }
LABEL_18:
    sub_1BC3264(HasViewItem, v13);
  }
}


void __fastcall ItemLinkInfoListViewManager__CreateListSub(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoListViewManager_o *v6; // x19
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
  __int64 v18; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float y; // s11
  float x; // s9
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x22
  UnityEngine_Object_o *monitor; // x21
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_Component_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  float ItemDetailOffsetPositionY; // s0
  float v33; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  int *v47; // x8
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v49; // x23
  _BOOL8 v50; // x0
  __int64 v51; // x1
  UnityEngine_Component_o *v52; // x23
  ItemLinkInfoListViewManager_o *v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  int *v56; // x8
  System_Collections_Generic_List_object__o *v57; // x24
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  int *v68; // x8
  UnityEngine_Object_o *v69; // x23
  _BOOL8 v70; // x0
  __int64 v71; // x1
  UnityEngine_Component_o *v72; // x22
  ItemLinkInfoListViewManager_o *v73; // x0
  __int64 v74; // x1
  const MethodInfo *v75; // x2
  int *v76; // x8
  System_Collections_Generic_List_object__o *v77; // x23
  Il2CppObject *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
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
  const MethodInfo *v98; // x3
  ItemLinkInfoListViewObject_o *v99; // x24
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x1
  ItemLinkInfoListViewManager_c *v102; // x0
  __int64 v103; // x1
  const MethodInfo *v104; // x2
  float Height; // s0
  float v106; // s10
  float BOARD_OFFSET_X; // s0
  float v108; // s13
  __int64 v109; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v112; // x1
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x8
  __int64 v120; // x1
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  System_Collections_Generic_List_object__o *v123; // x0
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4B04A17 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v9);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v10);
    sub_1BC3008(&ItemLinkInfoListViewManager_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v16);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    this = (ItemLinkInfoListViewManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v18);
    byte_4B04A17 = 1;
  }
  memset(&v131, 0, sizeof(v131));
  if ( !byte_4AFBDB1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, itemLinkInfoGroupList);
    byte_4AFBDB1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1BC3264(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v130,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v131 = v130;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v131,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v23 )
      break;
    current = v131.fields._current;
    if ( !v131.fields._current )
      sub_1BC3264(v23, v24);
    monitor = (UnityEngine_Object_o *)v131.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( v27 )
    {
      v29 = (UnityEngine_Component_o *)current[1].monitor;
      ItemDetailOffsetPositionY = ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
                                    (ItemLinkInfoListViewManager_o *)v27,
                                    (ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current,
                                    isDispStoneDetaila,
                                    v28);
      if ( !v29 )
        sub_1BC3264(v30, v31);
      v33 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v33, z, v35);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v37 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v29, 0LL);
      v40 = v37;
      if ( !objectList )
        sub_1BC3264(v37, v37);
      items = objectList->fields._items;
      v42 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1BC3264(v37, v37);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v37,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v40;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v40, v38, v39);
      }
      v47 = (int *)v29[2].monitor;
      if ( !v47 )
        sub_1BC3264(v45, v46);
      y = y - (float)(*(float *)&v29[3].fields.m_CachedPtr + (float)v47[43]);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v49 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v50 = UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
      if ( v50 )
      {
        v52 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v52 )
          sub_1BC3264(v50, v51);
        v53 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0LL);
        v56 = (int *)v52[1].monitor;
        if ( !v56 )
          sub_1BC3264(v53, v54);
        ItemLinkInfoListViewManager__InitTransform(
          v53,
          (UnityEngine_GameObject_o *)v53,
          x,
          (float)(y + (float)((float)v56[43] * -0.5)) + 1.0,
          z,
          v55);
        v57 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v58 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v52, 0LL);
        v61 = v58;
        if ( !v57 )
          sub_1BC3264(v58, v58);
        v62 = v57->fields._items;
        v63 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v57->fields._version;
        if ( !v62 )
          sub_1BC3264(v58, v58);
        v64 = v57->fields._size;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v57,
            v58,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v57->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v61;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
        }
        v68 = (int *)v52[1].monitor;
        if ( !v68 )
          sub_1BC3264(v66, v67);
        y = y - (float)v68[43];
      }
      v69 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v70 = UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
      if ( v70 )
      {
        v72 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v72 )
          sub_1BC3264(v70, v71);
        v73 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v72, 0LL);
        v76 = (int *)v72[1].monitor;
        if ( !v76 )
          sub_1BC3264(v73, v74);
        ItemLinkInfoListViewManager__InitTransform(
          v73,
          (UnityEngine_GameObject_o *)v73,
          x,
          y + (float)((float)v76[43] * -0.5),
          z,
          v75);
        v77 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v78 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v72, 0LL);
        v81 = v78;
        if ( !v77 )
          sub_1BC3264(v78, v78);
        v82 = v77->fields._items;
        v83 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v77->fields._version;
        if ( !v82 )
          sub_1BC3264(v78, v78);
        v84 = v77->fields._size;
        if ( (unsigned int)v84 >= v82->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v77,
            v78,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v77->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v81;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v81, v79, v80);
        }
        v88 = (int *)v72[1].monitor;
        if ( !v88 )
          sub_1BC3264(v86, v87);
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
                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v92 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v93 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v92, 0LL, 0LL);
          if ( !v93 )
          {
            if ( !v92 )
              sub_1BC3264(v93, v94);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v92,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v99 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1BC3264(0LL, v96);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1BC2FAC((CGThumbnailListItem_o *)&Component_object[3], (int32_t)Item, v97, v98);
            ItemLinkInfoListViewObject__SetupDisp(v99, v100);
            GameObjectExtensions__SetParent_35217636((UnityEngine_GameObject_o *)v92, v6->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v99, v101);
            if ( !Item )
              sub_1BC3264(v102, v103);
            v106 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[9].monitor) )
              v108 = 0.0;
            else
              v108 = -1.0;
            if ( BYTE3(Item[9].monitor) )
            {
              v102 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v102 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v102->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v102,
              (UnityEngine_GameObject_o *)v92,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v106 * 0.5) + v108),
              z,
              v104);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1BC3264(0LL, v109);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v92, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1BC3264(0LL, v112);
            v116 = itemLinkInfoObjectList->fields._items;
            v117 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v116 )
              sub_1BC3264(itemLinkInfoObjectList, v112);
            v118 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v118 >= v116->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v99,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
            }
            else
            {
              v119 = &v116->obj.klass + v118;
              itemLinkInfoObjectList->fields._size = v118 + 1;
              v119[4] = (Il2CppClass *)v99;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v119 + 4), (int32_t)v99, v113, v114);
            }
            v123 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v123 )
              sub_1BC3264(0LL, v120);
            v124 = v123->fields._items;
            v125 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v123->fields._version;
            if ( !v124 )
              sub_1BC3264(v123, v120);
            v126 = v123->fields._size;
            if ( (unsigned int)v126 >= v124->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v123,
                v92,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
            }
            else
            {
              v127 = &v124->obj.klass + v126;
              v123->fields._size = v126 + 1;
              v127[4] = (Il2CppClass *)v92;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v127 + 4), (int32_t)v92, v121, v122);
            }
            y = y - (float)(v106 + v6->fields.boardSpace);
          }
          ++v89;
        }
        while ( v89 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v131,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v6->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall ItemLinkInfoListViewManager__DeleteCallback(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B04A1C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__, v5);
    byte_4B04A1C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1BC3264(0LL, v7);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
  }
}


void __fastcall ItemLinkInfoListViewManager__DestroyList(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B04A1A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B04A1A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1BC3264(v9, v10);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.objectList;
  if ( !v12 )
    goto LABEL_20;
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BC3264(objectList, method);
  }
}


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

  if ( (byte_4B04A19 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1BC3008(
                                              &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___,
                                              itemLinkInfoGroup);
    byte_4B04A19 = 1;
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
                                                (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
        sub_1BC3264(this, itemLinkInfoGroup);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w19
  Il2CppClass *klass; // x0
  int v12; // w21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B04A1B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    this = (ItemLinkInfoListViewManager_o *)sub_1BC3008(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v7);
    byte_4B04A1B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !itemLinkInfoGroupList )
    sub_1BC3264(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v14.fields._current )
      sub_1BC3264(v8, v9);
    klass = v14.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v10 && v12 == 4;
}


void __fastcall ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_35212024(obj, x, y, z, 0LL);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v4; // x19
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
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v21; // x9
  __int128 v22; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool result; // w0
  const MethodInfo *v27; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ItemLinkInfoDetailObject_o *v34; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  struct UIWidget_o *widget; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v50; // x0
  struct UILabel_o *itemDetailLabel; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v55; // x19
  ItemLinkInfoListViewManager_o *v56; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v60; // x20
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x1
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v69; // x8
  int *v70; // x8
  int32_t v71; // w8
  Il2CppObject *Item; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v76; // x19
  System_Collections_Generic_List_object__o *v77; // x9
  CGThumbnailListItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v79; // t1
  Il2CppObject *Component_object; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  ItemLinkInfoListViewObject_o *v84; // x20
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x1
  ItemLinkInfoListViewManager_c *v87; // x0
  __int64 v88; // x1
  const MethodInfo *v89; // x2
  float Height; // s0
  float v91; // s8
  float BOARD_OFFSET_X; // s0
  float v93; // s9
  __int64 v94; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v97; // x1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x8
  __int64 v105; // x1
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  System_Collections_Generic_List_object__o *v108; // x0
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x8
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v115; // x0
  System_Collections_Generic_List_Enumerator_T__o v116[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v117; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v118; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v119; // [xsp+68h] [xbp-48h] BYREF

  v119 = this;
  v4 = this;
  if ( (byte_4B04A1F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v7);
    sub_1BC3008(&ItemLinkInfoListViewManager_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v10);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v13);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    byte_4B04A1F = 1;
  }
  v117 = 0LL;
  v118 = &v119;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -3;
    goto LABEL_64;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    v4 = v119;
    byte_4AFBDB1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v116,
    itemLinkInfoGroupList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v21 = v119;
  v22 = *(_OWORD *)&v116[0].fields._list;
  p__7__wrap2 = &v119->fields.__7__wrap2;
  v116[1] = v116[0];
  v119->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v116[0].fields._current;
  *(_OWORD *)&v21->fields.__7__wrap2.fields._list = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)p__7__wrap2, 0, v24, v25);
  v119->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v119->fields.__7__wrap2,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v119, v27);
      v69 = v119;
      result = 0;
      v119->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v69->fields.__7__wrap2.fields._index = 0LL;
      v69->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v119->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1BC3264(v119, v27);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v30 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v30 )
    {
      v34 = current->fields.itemDetailObj;
      if ( !v34 )
        sub_1BC3264(v30, v31);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0LL);
      widget = v34->fields.widget;
      if ( !widget )
        sub_1BC3264(gameObject, v36);
      if ( !_4__this )
        sub_1BC3264(gameObject, v36);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v119->fields._basePosition_5__2.fields.x,
        v119->fields._basePosition_5__2.fields.y + (float)((float)widget->fields.mHeight * -0.5),
        v119->fields._basePosition_5__2.fields.z,
        v37);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v40 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      v43 = v40;
      if ( !objectList )
        sub_1BC3264(v40, v40);
      items = objectList->fields._items;
      v45 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1BC3264(v40, v40);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v40,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v43;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v43, v41, v42);
      }
      itemDetailLabel = v34->fields.itemDetailLabel;
      if ( !itemDetailLabel )
        sub_1BC3264(v48, v49);
      v50 = v119;
      v119->fields._basePosition_5__2.fields.y = v119->fields._basePosition_5__2.fields.y
                                               - (float)(v34->fields.itemDetailLabelMargin
                                                       + (float)itemDetailLabel->fields.mHeight);
    }
    else
    {
      v50 = v119;
    }
    viewItemList = current->fields.viewItemList;
    v50->fields._viewItemList_5__4 = viewItemList;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v50->fields._viewItemList_5__4, (int32_t)viewItemList, v32, v33);
    viewItemList_5__4 = v119->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v55 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v55 )
      sub_1BC3264(this, method);
    v56 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    monitor = (int *)v55[1].monitor;
    if ( !monitor )
      sub_1BC3264(v56, v57);
    if ( !_4__this )
      sub_1BC3264(v56, v57);
    ItemLinkInfoListViewManager__InitTransform(
      v56,
      (UnityEngine_GameObject_o *)v56,
      v119->fields._basePosition_5__2.fields.x,
      v119->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v119->fields._basePosition_5__2.fields.z,
      v58);
    v60 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v61 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v55, 0LL);
    v64 = v61;
    if ( !v60 )
      sub_1BC3264(v61, v61);
    v65 = v60->fields._items;
    v66 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v60->fields._version;
    if ( !v65 )
      sub_1BC3264(v61, v61);
    v67 = v60->fields._size;
    if ( (unsigned int)v67 >= v65->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v60,
        v61,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v65->obj.klass + v67;
      v60->fields._size = v67 + 1;
      v68[4] = (Il2CppClass *)v64;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v64, v62, v63);
    }
    v70 = (int *)v55[1].monitor;
    if ( !v70 )
      sub_1BC3264(this, method);
    v4 = v119;
    v119->fields._basePosition_5__2.fields.y = v119->fields._basePosition_5__2.fields.y - (float)v70[43];
  }
  else
  {
    v4 = v119;
  }
  v71 = 0;
  for ( v4->fields._i_5__5 = 0; ; v4->fields._i_5__5 = v71 )
  {
    v79 = v4->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (CGThumbnailListItem_o *)&v4->fields._viewItemList_5__4;
    v77 = (System_Collections_Generic_List_object__o *)v79;
    if ( !v79 )
      sub_1BC3264(this, method);
    if ( v71 >= v77->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1BC2FAC(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v77,
             v71,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1BC3264(Item, v73);
    v74 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v76 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v76,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v4 = v119;
LABEL_64:
    v71 = v4->fields._i_5__5 + 1;
  }
  if ( !v76 )
    sub_1BC3264(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v76,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v84 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1BC3264(0LL, v81);
  Component_object[3].klass = (Il2CppClass *)v74;
  sub_1BC2FAC((CGThumbnailListItem_o *)&Component_object[3], (int32_t)v74, v82, v83);
  ItemLinkInfoListViewObject__SetupDisp(v84, v85);
  GameObjectExtensions__SetParent_35217636((UnityEngine_GameObject_o *)v76, _4__this->fields.listParent, 0LL);
  Height = ItemLinkInfoListViewObject__GetHeight(v84, v86);
  if ( !v74 )
    sub_1BC3264(v87, v88);
  v91 = Height;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE3(v74[9].monitor) )
    v93 = 0.0;
  else
    v93 = -1.0;
  if ( BYTE3(v74[9].monitor) )
  {
    v87 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v87 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v87->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v87,
    (UnityEngine_GameObject_o *)v76,
    BOARD_OFFSET_X + v119->fields._basePosition_5__2.fields.x,
    v119->fields._basePosition_5__2.fields.y - (float)((float)(v91 * 0.5) + v93),
    v119->fields._basePosition_5__2.fields.z,
    v89);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1BC3264(0LL, v94);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v76, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1BC3264(0LL, v97);
  v101 = itemLinkInfoObjectList->fields._items;
  v102 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v101 )
    sub_1BC3264(itemLinkInfoObjectList, v97);
  v103 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v103 >= v101->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v84,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = &v101->obj.klass + v103;
    itemLinkInfoObjectList->fields._size = v103 + 1;
    v104[4] = (Il2CppClass *)v84;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v104 + 4), (int32_t)v84, v98, v99);
  }
  v108 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v108 )
    sub_1BC3264(0LL, v105);
  v109 = v108->fields._items;
  v110 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v108->fields._version;
  if ( !v109 )
    sub_1BC3264(v108, v105);
  v111 = v108->fields._size;
  if ( (unsigned int)v111 >= v109->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v76,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &v109->obj.klass + v111;
    v108->fields._size = v111 + 1;
    v112[4] = (Il2CppClass *)v76;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v112 + 4), (int32_t)v76, v106, v107);
  }
  v115 = v119;
  v119->fields._basePosition_5__2.fields.y = v119->fields._basePosition_5__2.fields.y
                                           - (float)(v91 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v115 = v119;
  }
  v115->fields.__2__current = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v115->fields.__2__current, 0, v113, v114);
  result = 1;
  v119->fields.__1__state = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  if ( (byte_4B04A20 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method);
    byte_4B04A20 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}