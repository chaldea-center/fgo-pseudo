void ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C3A320 & 1) == 0 )
  {
    sub_1C32C20(&ItemLinkInfoListViewManager_TypeInfo);
    byte_4C3A320 = 1;
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

  if ( (byte_4C3A31F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C3A31F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v6, v7, v8);
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

  if ( (byte_4C3A31A & 1) == 0 )
  {
    sub_1C32C20(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
    byte_4C3A31A = 1;
  }
  v6 = sub_1C32E6C(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
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
  const MethodInfo *v9; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x22
  const MethodInfo *v11; // x2
  UILabel_o *v12; // x22
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_4C3A318 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7519/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/);
    byte_4C3A318 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
                                                 v11);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0);
      v12 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7519/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0);
      if ( !v12 )
        goto LABEL_18;
      UILabel__set_text(v12, (System_String_o *)HasViewItem, 0);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v9);
        UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, List, 0);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v9);
      }
      return;
    }
LABEL_18:
    sub_1C32E7C(HasViewItem);
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
  Il2CppObject *current; // x22
  UnityEngine_Object_o *monitor; // x21
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Component_o *v16; // x21
  __int64 v17; // x0
  float ItemDetailOffsetPositionY; // s0
  float v19; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x0
  int *v32; // x8
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v34; // x23
  _BOOL8 v35; // x0
  UnityEngine_Component_o *v36; // x23
  ItemLinkInfoListViewManager_o *v37; // x0
  const MethodInfo *v38; // x2
  int *v39; // x8
  System_Collections_Generic_List_object__o *v40; // x24
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x1
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x0
  int *v50; // x8
  UnityEngine_Object_o *v51; // x23
  _BOOL8 v52; // x0
  UnityEngine_Component_o *v53; // x22
  ItemLinkInfoListViewManager_o *v54; // x0
  const MethodInfo *v55; // x2
  int *v56; // x8
  System_Collections_Generic_List_object__o *v57; // x23
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x0
  int *v67; // x8
  int32_t v68; // w22
  Il2CppObject *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v71; // x23
  _BOOL8 v72; // x0
  Il2CppObject *Component_object; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  ItemLinkInfoListViewObject_o *v76; // x24
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x1
  ItemLinkInfoListViewManager_c *v79; // x0
  const MethodInfo *v80; // x2
  float Height; // s0
  float v82; // s10
  float BOARD_OFFSET_X; // s0
  float v84; // s13
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x8
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Collections_Generic_List_object__o *v96; // x0
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4C3A319 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C32C20(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A319 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  if ( !byte_4C313D1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1C32E7C(this);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v103,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v104 = v103;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v11 )
      break;
    current = v104.fields._current;
    if ( !v104.fields._current )
      sub_1C32E7C(v11);
    monitor = (UnityEngine_Object_o *)v104.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( v14 )
    {
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      ItemDetailOffsetPositionY = ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
                                    (ItemLinkInfoListViewManager_o *)v14,
                                    (ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current,
                                    isDispStoneDetaila,
                                    v15);
      if ( !v16 )
        sub_1C32E7C(v17);
      v19 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v16, 0);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v19, z, v21);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v23 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v16, 0);
      v26 = v23;
      if ( !objectList )
        sub_1C32E7C(v23);
      items = objectList->fields._items;
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C32E7C(v23);
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v23,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
      v32 = (int *)v16[2].monitor;
      if ( !v32 )
        sub_1C32E7C(v31);
      y = y - (float)(*(float *)&v16[3].fields.m_CachedPtr + (float)v32[43]);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v34 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__op_Inequality(v34, 0, 0);
      if ( v35 )
      {
        v36 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v36 )
          sub_1C32E7C(v35);
        v37 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0);
        v39 = (int *)v36[1].monitor;
        if ( !v39 )
          sub_1C32E7C(v37);
        ItemLinkInfoListViewManager__InitTransform(
          v37,
          (UnityEngine_GameObject_o *)v37,
          x,
          (float)(y + (float)((float)v39[43] * -0.5)) + 1.0,
          z,
          v38);
        v40 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v41 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v36, 0);
        v44 = v41;
        if ( !v40 )
          sub_1C32E7C(v41);
        v45 = v40->fields._items;
        v46 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v40->fields._version;
        if ( !v45 )
          sub_1C32E7C(v41);
        v47 = v40->fields._size;
        if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            v41,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &v45->obj.klass + v47;
          v40->fields._size = v47 + 1;
          v48[4] = (Il2CppClass *)v44;
          sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v44, v42, v43);
        }
        v50 = (int *)v36[1].monitor;
        if ( !v50 )
          sub_1C32E7C(v49);
        y = y - (float)v50[43];
      }
      v51 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v52 = UnityEngine_Object__op_Inequality(v51, 0, 0);
      if ( v52 )
      {
        v53 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v53 )
          sub_1C32E7C(v52);
        v54 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v53, 0);
        v56 = (int *)v53[1].monitor;
        if ( !v56 )
          sub_1C32E7C(v54);
        ItemLinkInfoListViewManager__InitTransform(
          v54,
          (UnityEngine_GameObject_o *)v54,
          x,
          y + (float)((float)v56[43] * -0.5),
          z,
          v55);
        v57 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v58 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v53, 0);
        v61 = v58;
        if ( !v57 )
          sub_1C32E7C(v58);
        v62 = v57->fields._items;
        v63 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v57->fields._version;
        if ( !v62 )
          sub_1C32E7C(v58);
        v64 = v57->fields._size;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v57,
            v58,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v57->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v61;
          sub_1C32BC4((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
        }
        v67 = (int *)v53[1].monitor;
        if ( !v67 )
          sub_1C32E7C(v66);
        y = y - (float)v67[43];
      }
      if ( klass->fields._size >= 1 )
      {
        v68 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v68,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v71 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v72 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v71, 0, 0);
          if ( !v72 )
          {
            if ( !v71 )
              sub_1C32E7C(v72);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v71,
                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v76 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1C32E7C(0);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[3], (int32_t)Item, v74, v75);
            ItemLinkInfoListViewObject__SetupDisp(v76, v77);
            GameObjectExtensions__SetParent_36042476((UnityEngine_GameObject_o *)v71, v6->fields.listParent, 0);
            Height = ItemLinkInfoListViewObject__GetHeight(v76, v78);
            if ( !Item )
              sub_1C32E7C(v79);
            v82 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[10].klass) )
              v84 = 0.0;
            else
              v84 = -1.0;
            if ( BYTE3(Item[10].klass) )
            {
              v79 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v79 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v79->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v79,
              (UnityEngine_GameObject_o *)v71,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v82 * 0.5) + v84),
              z,
              v80);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1C32E7C(0);
            layer = UnityEngine_GameObject__get_layer(listParent, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v71, layer, 0);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1C32E7C(0);
            v90 = itemLinkInfoObjectList->fields._items;
            v91 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v90 )
              sub_1C32E7C(itemLinkInfoObjectList);
            v92 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v76,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = &v90->obj.klass + v92;
              itemLinkInfoObjectList->fields._size = v92 + 1;
              v93[4] = (Il2CppClass *)v76;
              sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v76, v87, v88);
            }
            v96 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v96 )
              sub_1C32E7C(0);
            v97 = v96->fields._items;
            v98 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v96->fields._version;
            if ( !v97 )
              sub_1C32E7C(v96);
            v99 = v96->fields._size;
            if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v96,
                v71,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = &v97->obj.klass + v99;
              v96->fields._size = v99 + 1;
              v100[4] = (Il2CppClass *)v71;
              sub_1C32BC4((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v71, v94, v95);
            }
            y = y - (float)(v82 + v6->fields.boardSpace);
          }
          ++v68;
        }
        while ( v68 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v6->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0);
}


void ItemLinkInfoListViewManager__DeleteCallback(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3A31E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    byte_4C3A31E = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C32E7C(0);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
  }
}


void ItemLinkInfoListViewManager__DestroyList(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3A31C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A31C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_1C32E7C(v4);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11.fields._current, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.objectList;
  if ( !v6 )
    goto LABEL_20;
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
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
    sub_1C32E7C(objectList);
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

  if ( (byte_4C3A31B & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    byte_4C3A31B = 1;
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
                                                (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
        sub_1C32E7C(this);
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
  bool v5; // w19
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  int v7; // w21
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3A31D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    this = (ItemLinkInfoListViewManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    byte_4C3A31D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !itemLinkInfoGroupList )
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v5 = v4;
    if ( !v4 )
      break;
    if ( !v9.fields._current )
      sub_1C32E7C(v4);
    v6 = *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&v9.fields._current->klass
                                                               + (unsigned __int64)&dword_30);
    if ( v6
      && System_Linq_Enumerable__Any_object_(
           v6,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v7 = 4;
      goto LABEL_11;
    }
  }
  v7 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v5 && v7 == 4;
}


void ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_36036864(obj, x, y, z, 0);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ItemLinkInfoDetailObject_o *v22; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v24; // x2
  struct UIWidget_o *widget; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v36; // x0
  struct UILabel_o *itemDetailLabel; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v41; // x19
  ItemLinkInfoListViewManager_o *v42; // x0
  const MethodInfo *v43; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v45; // x20
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x1
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v54; // x8
  int *v55; // x8
  int32_t v56; // w8
  Il2CppObject *Item; // x0
  Il2CppObject *v58; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v60; // x19
  System_Collections_Generic_List_object__o *v61; // x9
  CGThumbnailListItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v63; // t1
  Il2CppObject *Component_object; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ItemLinkInfoListViewObject_o *v67; // x20
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  ItemLinkInfoListViewManager_c *v70; // x0
  const MethodInfo *v71; // x2
  float Height; // s0
  float v73; // s8
  float BOARD_OFFSET_X; // s0
  float v75; // s9
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x8
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_Collections_Generic_List_object__o *v87; // x0
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v94; // x0
  System_Collections_Generic_List_Enumerator_T__o v95[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v96; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v97; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v98; // [xsp+68h] [xbp-48h] BYREF

  v98 = this;
  v4 = this;
  if ( (byte_4C3A321 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C32C20(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A321 = 1;
  }
  v96 = 0;
  v97 = &v98;
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
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    v4 = v98;
    byte_4C313D1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    v95,
    itemLinkInfoGroupList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v10 = v98;
  v11 = *(_OWORD *)&v95[0].fields._list;
  p__7__wrap2 = &v98->fields.__7__wrap2;
  v95[1] = v95[0];
  v98->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v95[0].fields._current;
  *(_OWORD *)&v10->fields.__7__wrap2.fields._list = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)p__7__wrap2, 0, v13, v14);
  v98->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v98->fields.__7__wrap2,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v98, v16);
      v54 = v98;
      result = 0;
      v98->fields.__7__wrap2.fields._list = 0;
      *(_QWORD *)&v54->fields.__7__wrap2.fields._index = 0;
      v54->fields.__7__wrap2.fields._current = 0;
      return result;
    }
    current = v98->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1C32E7C(v98);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality(itemDetailObj, 0, 0);
    if ( v19 )
    {
      v22 = current->fields.itemDetailObj;
      if ( !v22 )
        sub_1C32E7C(v19);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0);
      widget = v22->fields.widget;
      if ( !widget )
        sub_1C32E7C(gameObject);
      if ( !_4__this )
        sub_1C32E7C(gameObject);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v98->fields._basePosition_5__2.fields.x,
        v98->fields._basePosition_5__2.fields.y + (float)((float)widget->fields.mHeight * -0.5),
        v98->fields._basePosition_5__2.fields.z,
        v24);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v27 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      v30 = v27;
      if ( !objectList )
        sub_1C32E7C(v27);
      items = objectList->fields._items;
      v32 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C32E7C(v27);
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v27,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v30, v28, v29);
      }
      itemDetailLabel = v22->fields.itemDetailLabel;
      if ( !itemDetailLabel )
        sub_1C32E7C(v35);
      v36 = v98;
      v98->fields._basePosition_5__2.fields.y = v98->fields._basePosition_5__2.fields.y
                                              - (float)(v22->fields.itemDetailLabelMargin
                                                      + (float)itemDetailLabel->fields.mHeight);
    }
    else
    {
      v36 = v98;
    }
    viewItemList = current->fields.viewItemList;
    v36->fields._viewItemList_5__4 = viewItemList;
    sub_1C32BC4((CGThumbnailListItem_o *)&v36->fields._viewItemList_5__4, (int32_t)viewItemList, v20, v21);
    viewItemList_5__4 = v98->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0,
                                                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v41 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v41 )
      sub_1C32E7C(this);
    v42 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0);
    monitor = (int *)v41[1].monitor;
    if ( !monitor )
      sub_1C32E7C(v42);
    if ( !_4__this )
      sub_1C32E7C(v42);
    ItemLinkInfoListViewManager__InitTransform(
      v42,
      (UnityEngine_GameObject_o *)v42,
      v98->fields._basePosition_5__2.fields.x,
      v98->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v98->fields._basePosition_5__2.fields.z,
      v43);
    v45 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v46 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v41, 0);
    v49 = v46;
    if ( !v45 )
      sub_1C32E7C(v46);
    v50 = v45->fields._items;
    v51 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v45->fields._version;
    if ( !v50 )
      sub_1C32E7C(v46);
    v52 = v45->fields._size;
    if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        v46,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->obj.klass + v52;
      v45->fields._size = v52 + 1;
      v53[4] = (Il2CppClass *)v49;
      sub_1C32BC4((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v49, v47, v48);
    }
    v55 = (int *)v41[1].monitor;
    if ( !v55 )
      sub_1C32E7C(this);
    v4 = v98;
    v98->fields._basePosition_5__2.fields.y = v98->fields._basePosition_5__2.fields.y - (float)v55[43];
  }
  else
  {
    v4 = v98;
  }
  v56 = 0;
  for ( v4->fields._i_5__5 = 0; ; v4->fields._i_5__5 = v56 )
  {
    v63 = v4->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (CGThumbnailListItem_o *)&v4->fields._viewItemList_5__4;
    v61 = (System_Collections_Generic_List_object__o *)v63;
    if ( !v63 )
      sub_1C32E7C(this);
    if ( v56 >= v61->fields._size )
    {
      p_viewItemList_5__4->klass = 0;
      sub_1C32BC4(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v61,
             v56,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1C32E7C(Item);
    v58 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v60 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v60,
                                                                  0,
                                                                  0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v4 = v98;
LABEL_64:
    v56 = v4->fields._i_5__5 + 1;
  }
  if ( !v60 )
    sub_1C32E7C(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v60,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v67 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1C32E7C(0);
  Component_object[3].klass = (Il2CppClass *)v58;
  sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[3], (int32_t)v58, v65, v66);
  ItemLinkInfoListViewObject__SetupDisp(v67, v68);
  GameObjectExtensions__SetParent_36042476((UnityEngine_GameObject_o *)v60, _4__this->fields.listParent, 0);
  Height = ItemLinkInfoListViewObject__GetHeight(v67, v69);
  if ( !v58 )
    sub_1C32E7C(v70);
  v73 = Height;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE3(v58[10].klass) )
    v75 = 0.0;
  else
    v75 = -1.0;
  if ( BYTE3(v58[10].klass) )
  {
    v70 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v70 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v70->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v70,
    (UnityEngine_GameObject_o *)v60,
    BOARD_OFFSET_X + v98->fields._basePosition_5__2.fields.x,
    v98->fields._basePosition_5__2.fields.y - (float)((float)(v73 * 0.5) + v75),
    v98->fields._basePosition_5__2.fields.z,
    v71);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1C32E7C(0);
  layer = UnityEngine_GameObject__get_layer(listParent, 0);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v60, layer, 0);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1C32E7C(0);
  v81 = itemLinkInfoObjectList->fields._items;
  v82 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v81 )
    sub_1C32E7C(itemLinkInfoObjectList);
  v83 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v67,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    itemLinkInfoObjectList->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v67;
    sub_1C32BC4((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v67, v78, v79);
  }
  v87 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v87 )
    sub_1C32E7C(0);
  v88 = v87->fields._items;
  v89 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v87->fields._version;
  if ( !v88 )
    sub_1C32E7C(v87);
  v90 = v87->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v87,
      v60,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v87->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v60;
    sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v60, v85, v86);
  }
  v94 = v98;
  v98->fields._basePosition_5__2.fields.y = v98->fields._basePosition_5__2.fields.y
                                          - (float)(v73 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0);
    v94 = v98;
  }
  v94->fields.__2__current = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v94->fields.__2__current, 0, v92, v93);
  result = 1;
  v98->fields.__1__state = 1;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  if ( (byte_4C3A322 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    byte_4C3A322 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}