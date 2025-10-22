void ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C595F0 & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoListViewManager_TypeInfo);
    byte_4C595F0 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C595EF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C595EF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v6, v7, v8);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C595EA & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
    byte_4C595EA = 1;
  }
  v6 = sub_1C3E7B0(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
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

  if ( (byte_4C595E8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_7520/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/);
    byte_4C595E8 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7520/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0);
      if ( !v13 )
        goto LABEL_18;
      UILabel__set_text(v13, (System_String_o *)HasViewItem, 0);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v10);
        UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, List, 0);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v10);
      }
      return;
    }
LABEL_18:
    sub_1C3E7C0(HasViewItem, v9);
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
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int *v35; // x8
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v37; // x23
  _BOOL8 v38; // x0
  __int64 v39; // x1
  UnityEngine_Component_o *v40; // x23
  ItemLinkInfoListViewManager_o *v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  int *v44; // x8
  System_Collections_Generic_List_object__o *v45; // x24
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x1
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  int *v56; // x8
  UnityEngine_Object_o *v57; // x23
  _BOOL8 v58; // x0
  __int64 v59; // x1
  UnityEngine_Component_o *v60; // x22
  ItemLinkInfoListViewManager_o *v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  int *v64; // x8
  System_Collections_Generic_List_object__o *v65; // x23
  Il2CppObject *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x1
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  int *v76; // x8
  int32_t v77; // w22
  Il2CppObject *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v80; // x23
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *Component_object; // x0
  __int64 v84; // x1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  ItemLinkInfoListViewObject_o *v87; // x24
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x1
  ItemLinkInfoListViewManager_c *v90; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x2
  float Height; // s0
  float v94; // s10
  float BOARD_OFFSET_X; // s0
  float v96; // s13
  __int64 v97; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v100; // x1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x8
  __int64 v108; // x1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  System_Collections_Generic_List_object__o *v111; // x0
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4C595E9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C3E564(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C595E9 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  if ( !byte_4C506A1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1C3E7C0(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v118,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v119 = v118;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v119,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v11 )
      break;
    current = v119.fields._current;
    if ( !v119.fields._current )
      sub_1C3E7C0(v11, v12);
    monitor = (UnityEngine_Object_o *)v119.fields._current[1].monitor;
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
        sub_1C3E7C0(v18, v19);
      v21 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v17, 0);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v21, z, v23);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v25 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v17, 0);
      v28 = v25;
      if ( !objectList )
        sub_1C3E7C0(v25, v25);
      items = objectList->fields._items;
      v30 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C3E7C0(v25, v25);
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v25,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C3E508((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v26, v27);
      }
      v35 = (int *)v17[2].monitor;
      if ( !v35 )
        sub_1C3E7C0(v33, v34);
      y = y - (float)(*(float *)&v17[3].fields.m_CachedPtr + (float)v35[43]);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v37 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = UnityEngine_Object__op_Inequality(v37, 0, 0);
      if ( v38 )
      {
        v40 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v40 )
          sub_1C3E7C0(v38, v39);
        v41 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0);
        v44 = (int *)v40[1].monitor;
        if ( !v44 )
          sub_1C3E7C0(v41, v42);
        ItemLinkInfoListViewManager__InitTransform(
          v41,
          (UnityEngine_GameObject_o *)v41,
          x,
          (float)(y + (float)((float)v44[43] * -0.5)) + 1.0,
          z,
          v43);
        v45 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v46 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v40, 0);
        v49 = v46;
        if ( !v45 )
          sub_1C3E7C0(v46, v46);
        v50 = v45->fields._items;
        v51 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v45->fields._version;
        if ( !v50 )
          sub_1C3E7C0(v46, v46);
        v52 = v45->fields._size;
        if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            v46,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &v50->obj.klass + v52;
          v45->fields._size = v52 + 1;
          v53[4] = (Il2CppClass *)v49;
          sub_1C3E508((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v49, v47, v48);
        }
        v56 = (int *)v40[1].monitor;
        if ( !v56 )
          sub_1C3E7C0(v54, v55);
        y = y - (float)v56[43];
      }
      v57 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v58 = UnityEngine_Object__op_Inequality(v57, 0, 0);
      if ( v58 )
      {
        v60 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v60 )
          sub_1C3E7C0(v58, v59);
        v61 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v60, 0);
        v64 = (int *)v60[1].monitor;
        if ( !v64 )
          sub_1C3E7C0(v61, v62);
        ItemLinkInfoListViewManager__InitTransform(
          v61,
          (UnityEngine_GameObject_o *)v61,
          x,
          y + (float)((float)v64[43] * -0.5),
          z,
          v63);
        v65 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v66 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v60, 0);
        v69 = v66;
        if ( !v65 )
          sub_1C3E7C0(v66, v66);
        v70 = v65->fields._items;
        v71 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v65->fields._version;
        if ( !v70 )
          sub_1C3E7C0(v66, v66);
        v72 = v65->fields._size;
        if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v65,
            v66,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &v70->obj.klass + v72;
          v65->fields._size = v72 + 1;
          v73[4] = (Il2CppClass *)v69;
          sub_1C3E508((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v69, v67, v68);
        }
        v76 = (int *)v60[1].monitor;
        if ( !v76 )
          sub_1C3E7C0(v74, v75);
        y = y - (float)v76[43];
      }
      if ( klass->fields._size >= 1 )
      {
        v77 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v77,
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v80 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v81 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v80, 0, 0);
          if ( !v81 )
          {
            if ( !v80 )
              sub_1C3E7C0(v81, v82);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v80,
                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v87 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1C3E7C0(0, v84);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1C3E508((CGThumbnailListItem_o *)&Component_object[3], (int32_t)Item, v85, v86);
            ItemLinkInfoListViewObject__SetupDisp(v87, v88);
            GameObjectExtensions__SetParent_36182008((UnityEngine_GameObject_o *)v80, v6->fields.listParent, 0);
            Height = ItemLinkInfoListViewObject__GetHeight(v87, v89);
            if ( !Item )
              sub_1C3E7C0(v90, v91);
            v94 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[10].klass) )
              v96 = 0.0;
            else
              v96 = -1.0;
            if ( BYTE3(Item[10].klass) )
            {
              v90 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v90 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v90->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v90,
              (UnityEngine_GameObject_o *)v80,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v94 * 0.5) + v96),
              z,
              v92);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1C3E7C0(0, v97);
            layer = UnityEngine_GameObject__get_layer(listParent, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v80, layer, 0);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1C3E7C0(0, v100);
            v104 = itemLinkInfoObjectList->fields._items;
            v105 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v104 )
              sub_1C3E7C0(itemLinkInfoObjectList, v100);
            v106 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v87,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v107 = &v104->obj.klass + v106;
              itemLinkInfoObjectList->fields._size = v106 + 1;
              v107[4] = (Il2CppClass *)v87;
              sub_1C3E508((CGThumbnailListItem_o *)(v107 + 4), (int32_t)v87, v101, v102);
            }
            v111 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v111 )
              sub_1C3E7C0(0, v108);
            v112 = v111->fields._items;
            v113 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v111->fields._version;
            if ( !v112 )
              sub_1C3E7C0(v111, v108);
            v114 = v111->fields._size;
            if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v111,
                v80,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
            }
            else
            {
              v115 = &v112->obj.klass + v114;
              v111->fields._size = v114 + 1;
              v115[4] = (Il2CppClass *)v80;
              sub_1C3E508((CGThumbnailListItem_o *)(v115 + 4), (int32_t)v80, v109, v110);
            }
            y = y - (float)(v94 + v6->fields.boardSpace);
          }
          ++v77;
        }
        while ( v77 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v119,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v6->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0);
}


void ItemLinkInfoListViewManager__DeleteCallback(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C595EE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    byte_4C595EE = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C3E7C0(0, v4);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
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

  if ( (byte_4C595EC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C595EC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C3E7C0(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._current, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1C3E7C0(objectList, method);
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

  if ( (byte_4C595EB & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    byte_4C595EB = 1;
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
                                                (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
        sub_1C3E7C0(this, itemLinkInfoGroup);
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

  if ( (byte_4C595ED & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    this = (ItemLinkInfoListViewManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    byte_4C595ED = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !itemLinkInfoGroupList )
    sub_1C3E7C0(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v10.fields._current )
      sub_1C3E7C0(v4, v5);
    v7 = *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&v10.fields._current->klass
                                                               + (unsigned __int64)&dword_30);
    if ( v7
      && System_Linq_Enumerable__Any_object_(
           v7,
           (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v8 = 4;
      goto LABEL_11;
    }
  }
  v8 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  GameObjectExtensions__SetLocalPosition_36176396(obj, x, y, z, 0);
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
  const MethodInfo *v3; // x3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v4; // x19
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v10; // x9
  __int128 v11; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  const MethodInfo *v16; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ItemLinkInfoDetailObject_o *v23; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  struct UIWidget_o *widget; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v39; // x0
  struct UILabel_o *itemDetailLabel; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v44; // x19
  ItemLinkInfoListViewManager_o *v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v49; // x20
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x1
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v58; // x8
  int *v59; // x8
  int32_t v60; // w8
  Il2CppObject *Item; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v65; // x19
  System_Collections_Generic_List_object__o *v66; // x9
  CGThumbnailListItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v68; // t1
  Il2CppObject *Component_object; // x0
  __int64 v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  ItemLinkInfoListViewObject_o *v73; // x20
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  ItemLinkInfoListViewManager_c *v76; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x2
  float Height; // s0
  float v80; // s8
  float BOARD_OFFSET_X; // s0
  float v82; // s9
  __int64 v83; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v86; // x1
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x8
  __int64 v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Collections_Generic_List_object__o *v97; // x0
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x8
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v104; // x0
  System_Collections_Generic_List_Enumerator_T__o v105[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v106; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v107; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v108; // [xsp+68h] [xbp-48h] BYREF

  v108 = this;
  v4 = this;
  if ( (byte_4C595F1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C3E564(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C595F1 = 1;
  }
  v106 = 0;
  v107 = &v108;
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
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    v4 = v108;
    byte_4C506A1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v105,
    itemLinkInfoGroupList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v10 = v108;
  v11 = *(_OWORD *)&v105[0].fields._list;
  p__7__wrap2 = &v108->fields.__7__wrap2;
  v105[1] = v105[0];
  v108->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v105[0].fields._current;
  *(_OWORD *)&v10->fields.__7__wrap2.fields._list = v11;
  sub_1C3E508((CGThumbnailListItem_o *)p__7__wrap2, 0, v13, v14);
  v108->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v108->fields.__7__wrap2,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v108, v16);
      v58 = v108;
      result = 0;
      v108->fields.__7__wrap2.fields._list = 0;
      *(_QWORD *)&v58->fields.__7__wrap2.fields._index = 0;
      v58->fields.__7__wrap2.fields._current = 0;
      return result;
    }
    current = v108->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1C3E7C0(v108, v16);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality(itemDetailObj, 0, 0);
    if ( v19 )
    {
      v23 = current->fields.itemDetailObj;
      if ( !v23 )
        sub_1C3E7C0(v19, v20);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0);
      widget = v23->fields.widget;
      if ( !widget )
        sub_1C3E7C0(gameObject, v25);
      if ( !_4__this )
        sub_1C3E7C0(gameObject, v25);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v108->fields._basePosition_5__2.fields.x,
        v108->fields._basePosition_5__2.fields.y + (float)((float)widget->fields.mHeight * -0.5),
        v108->fields._basePosition_5__2.fields.z,
        v26);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v29 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
      v32 = v29;
      if ( !objectList )
        sub_1C3E7C0(v29, v29);
      items = objectList->fields._items;
      v34 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C3E7C0(v29, v29);
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v29,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C3E508((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
      }
      itemDetailLabel = v23->fields.itemDetailLabel;
      if ( !itemDetailLabel )
        sub_1C3E7C0(v37, v38);
      v39 = v108;
      v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y
                                               - (float)(v23->fields.itemDetailLabelMargin
                                                       + (float)itemDetailLabel->fields.mHeight);
    }
    else
    {
      v39 = v108;
    }
    viewItemList = current->fields.viewItemList;
    v39->fields._viewItemList_5__4 = viewItemList;
    sub_1C3E508((CGThumbnailListItem_o *)&v39->fields._viewItemList_5__4, (int32_t)viewItemList, v21, v22);
    viewItemList_5__4 = v108->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0,
                                                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v44 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v44 )
      sub_1C3E7C0(this, method);
    v45 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0);
    monitor = (int *)v44[1].monitor;
    if ( !monitor )
      sub_1C3E7C0(v45, v46);
    if ( !_4__this )
      sub_1C3E7C0(v45, v46);
    ItemLinkInfoListViewManager__InitTransform(
      v45,
      (UnityEngine_GameObject_o *)v45,
      v108->fields._basePosition_5__2.fields.x,
      v108->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v108->fields._basePosition_5__2.fields.z,
      v47);
    v49 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v50 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v44, 0);
    v53 = v50;
    if ( !v49 )
      sub_1C3E7C0(v50, v50);
    v54 = v49->fields._items;
    v55 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v49->fields._version;
    if ( !v54 )
      sub_1C3E7C0(v50, v50);
    v56 = v49->fields._size;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        v50,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v49->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v53;
      sub_1C3E508((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v53, v51, v52);
    }
    v59 = (int *)v44[1].monitor;
    if ( !v59 )
      sub_1C3E7C0(this, method);
    v4 = v108;
    v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y - (float)v59[43];
  }
  else
  {
    v4 = v108;
  }
  v60 = 0;
  for ( v4->fields._i_5__5 = 0; ; v4->fields._i_5__5 = v60 )
  {
    v68 = v4->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (CGThumbnailListItem_o *)&v4->fields._viewItemList_5__4;
    v66 = (System_Collections_Generic_List_object__o *)v68;
    if ( !v68 )
      sub_1C3E7C0(this, method);
    if ( v60 >= v66->fields._size )
    {
      p_viewItemList_5__4->klass = 0;
      sub_1C3E508(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v66,
             v60,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1C3E7C0(Item, v62);
    v63 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v65 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v65,
                                                                  0,
                                                                  0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v4 = v108;
LABEL_64:
    v60 = v4->fields._i_5__5 + 1;
  }
  if ( !v65 )
    sub_1C3E7C0(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v65,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v73 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1C3E7C0(0, v70);
  Component_object[3].klass = (Il2CppClass *)v63;
  sub_1C3E508((CGThumbnailListItem_o *)&Component_object[3], (int32_t)v63, v71, v72);
  ItemLinkInfoListViewObject__SetupDisp(v73, v74);
  GameObjectExtensions__SetParent_36182008((UnityEngine_GameObject_o *)v65, _4__this->fields.listParent, 0);
  Height = ItemLinkInfoListViewObject__GetHeight(v73, v75);
  if ( !v63 )
    sub_1C3E7C0(v76, v77);
  v80 = Height;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE3(v63[10].klass) )
    v82 = 0.0;
  else
    v82 = -1.0;
  if ( BYTE3(v63[10].klass) )
  {
    v76 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v76 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v76->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v76,
    (UnityEngine_GameObject_o *)v65,
    BOARD_OFFSET_X + v108->fields._basePosition_5__2.fields.x,
    v108->fields._basePosition_5__2.fields.y - (float)((float)(v80 * 0.5) + v82),
    v108->fields._basePosition_5__2.fields.z,
    v78);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1C3E7C0(0, v83);
  layer = UnityEngine_GameObject__get_layer(listParent, 0);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v65, layer, 0);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1C3E7C0(0, v86);
  v90 = itemLinkInfoObjectList->fields._items;
  v91 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v90 )
    sub_1C3E7C0(itemLinkInfoObjectList, v86);
  v92 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v73,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    itemLinkInfoObjectList->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v73;
    sub_1C3E508((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v73, v87, v88);
  }
  v97 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v97 )
    sub_1C3E7C0(0, v94);
  v98 = v97->fields._items;
  v99 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v97->fields._version;
  if ( !v98 )
    sub_1C3E7C0(v97, v94);
  v100 = v97->fields._size;
  if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v97,
      v65,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = &v98->obj.klass + v100;
    v97->fields._size = v100 + 1;
    v101[4] = (Il2CppClass *)v65;
    sub_1C3E508((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v65, v95, v96);
  }
  v104 = v108;
  v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y
                                           - (float)(v80 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0);
    v104 = v108;
  }
  v104->fields.__2__current = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v104->fields.__2__current, 0, v102, v103);
  result = 1;
  v108->fields.__1__state = 1;
  return result;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C595F2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    byte_4C595F2 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}