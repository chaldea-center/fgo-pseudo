void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BD922 & 1) == 0 )
  {
    sub_1B4CF90(&ItemLinkInfoListViewManager_TypeInfo, v1);
    byte_49BD922 = 1;
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

  if ( (byte_49BD921 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v4);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_49BD921 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v9, v10, v11);
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

  if ( (byte_49BD91C & 1) == 0 )
  {
    sub_1B4CF90(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList);
    byte_49BD91C = 1;
  }
  v6 = sub_1B4D1DC(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
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

  if ( (byte_49BD91A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_7329/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, v10);
    byte_49BD91A = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7329/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v17 )
        goto LABEL_18;
      UILabel__set_text(v17, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v14);
        UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v14);
      }
      return;
    }
LABEL_18:
    sub_1B4D1EC(HasViewItem, v13);
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
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v46; // x23
  _BOOL8 v47; // x0
  __int64 v48; // x1
  UnityEngine_Component_o *v49; // x23
  ItemLinkInfoListViewManager_o *v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  int *v53; // x8
  System_Collections_Generic_List_object__o *v54; // x24
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x1
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  int *v65; // x8
  UnityEngine_Object_o *v66; // x23
  _BOOL8 v67; // x0
  __int64 v68; // x1
  UnityEngine_Component_o *v69; // x22
  ItemLinkInfoListViewManager_o *v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  int *v73; // x8
  System_Collections_Generic_List_object__o *v74; // x23
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  Il2CppObject *v78; // x1
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  int *v85; // x8
  int32_t v86; // w22
  Il2CppObject *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v89; // x23
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *Component_object; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  ItemLinkInfoListViewObject_o *v96; // x24
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x1
  ItemLinkInfoListViewManager_c *v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x2
  float Height; // s0
  float v103; // s10
  float BOARD_OFFSET_X; // s0
  float v105; // s13
  __int64 v106; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v109; // x1
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x8
  __int64 v117; // x1
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  System_Collections_Generic_List_object__o *v120; // x0
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v128; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_49BD91B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v8);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v9);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v10);
    sub_1B4CF90(&ItemLinkInfoListViewManager_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v16);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    this = (ItemLinkInfoListViewManager_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    byte_49BD91B = 1;
  }
  memset(&v128, 0, sizeof(v128));
  if ( !byte_49B5361 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, itemLinkInfoGroupList);
    byte_49B5361 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1B4D1EC(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v127,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v128 = v127;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v128,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v23 )
      break;
    current = v128.fields._current;
    if ( !v128.fields._current )
      sub_1B4D1EC(v23, v24);
    monitor = (UnityEngine_Object_o *)v128.fields._current[1].monitor;
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
        sub_1B4D1EC(v30, v31);
      v33 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v33, z, v35);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v37 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v29, 0LL);
      v40 = v37;
      if ( !objectList )
        sub_1B4D1EC(v37, v37);
      items = objectList->fields._items;
      v42 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B4D1EC(v37, v37);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v37,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v40;
        sub_1B4CF34((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v40, v38, v39);
      }
      y = y - ItemLinkInfoDetailObject__get_AreaHeight((ItemLinkInfoDetailObject_o *)v29, 0LL);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v46 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v47 = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
      if ( v47 )
      {
        v49 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v49 )
          sub_1B4D1EC(v47, v48);
        v50 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0LL);
        v53 = (int *)v49[1].monitor;
        if ( !v53 )
          sub_1B4D1EC(v50, v51);
        ItemLinkInfoListViewManager__InitTransform(
          v50,
          (UnityEngine_GameObject_o *)v50,
          x,
          (float)(y + (float)((float)v53[43] * -0.5)) + 1.0,
          z,
          v52);
        v54 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v55 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v49, 0LL);
        v58 = v55;
        if ( !v54 )
          sub_1B4D1EC(v55, v55);
        v59 = v54->fields._items;
        v60 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v54->fields._version;
        if ( !v59 )
          sub_1B4D1EC(v55, v55);
        v61 = v54->fields._size;
        if ( (unsigned int)v61 >= v59->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            v55,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &v59->obj.klass + v61;
          v54->fields._size = v61 + 1;
          v62[4] = (Il2CppClass *)v58;
          sub_1B4CF34((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v58, v56, v57);
        }
        v65 = (int *)v49[1].monitor;
        if ( !v65 )
          sub_1B4D1EC(v63, v64);
        y = y - (float)v65[43];
      }
      v66 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v67 = UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
      if ( v67 )
      {
        v69 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v69 )
          sub_1B4D1EC(v67, v68);
        v70 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
        v73 = (int *)v69[1].monitor;
        if ( !v73 )
          sub_1B4D1EC(v70, v71);
        ItemLinkInfoListViewManager__InitTransform(
          v70,
          (UnityEngine_GameObject_o *)v70,
          x,
          y + (float)((float)v73[43] * -0.5),
          z,
          v72);
        v74 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v75 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v69, 0LL);
        v78 = v75;
        if ( !v74 )
          sub_1B4D1EC(v75, v75);
        v79 = v74->fields._items;
        v80 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v74->fields._version;
        if ( !v79 )
          sub_1B4D1EC(v75, v75);
        v81 = v74->fields._size;
        if ( (unsigned int)v81 >= v79->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            v75,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &v79->obj.klass + v81;
          v74->fields._size = v81 + 1;
          v82[4] = (Il2CppClass *)v78;
          sub_1B4CF34((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v78, v76, v77);
        }
        v85 = (int *)v69[1].monitor;
        if ( !v85 )
          sub_1B4D1EC(v83, v84);
        y = y - (float)v85[43];
      }
      if ( klass->fields._size >= 1 )
      {
        v86 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v86,
                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v89 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v90 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v89, 0LL, 0LL);
          if ( !v90 )
          {
            if ( !v89 )
              sub_1B4D1EC(v90, v91);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v89,
                                 (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v96 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1B4D1EC(0LL, v93);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1B4CF34((CGThumbnailListItem_o *)&Component_object[3], (int32_t)Item, v94, v95);
            ItemLinkInfoListViewObject__SetupDisp(v96, v97);
            GameObjectExtensions__SetParent_34075384((UnityEngine_GameObject_o *)v89, v6->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v96, v98);
            if ( !Item )
              sub_1B4D1EC(v99, v100);
            v103 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[9].monitor) )
              v105 = 0.0;
            else
              v105 = -1.0;
            if ( BYTE3(Item[9].monitor) )
            {
              v99 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v99 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v99->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v99,
              (UnityEngine_GameObject_o *)v89,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v103 * 0.5) + v105),
              z,
              v101);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1B4D1EC(0LL, v106);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v89, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1B4D1EC(0LL, v109);
            v113 = itemLinkInfoObjectList->fields._items;
            v114 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v113 )
              sub_1B4D1EC(itemLinkInfoObjectList, v109);
            v115 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v115 >= v113->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v96,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
            }
            else
            {
              v116 = &v113->obj.klass + v115;
              itemLinkInfoObjectList->fields._size = v115 + 1;
              v116[4] = (Il2CppClass *)v96;
              sub_1B4CF34((CGThumbnailListItem_o *)(v116 + 4), (int32_t)v96, v110, v111);
            }
            v120 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v120 )
              sub_1B4D1EC(0LL, v117);
            v121 = v120->fields._items;
            v122 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v120->fields._version;
            if ( !v121 )
              sub_1B4D1EC(v120, v117);
            v123 = v120->fields._size;
            if ( (unsigned int)v123 >= v121->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v120,
                v89,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
            }
            else
            {
              v124 = &v121->obj.klass + v123;
              v120->fields._size = v123 + 1;
              v124[4] = (Il2CppClass *)v89;
              sub_1B4CF34((CGThumbnailListItem_o *)(v124 + 4), (int32_t)v89, v118, v119);
            }
            y = y - (float)(v103 + v6->fields.boardSpace);
          }
          ++v86;
        }
        while ( v86 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v128,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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

  if ( (byte_49BD920 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__, v5);
    byte_49BD920 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1B4D1EC(0LL, v7);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
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

  if ( (byte_49BD91E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49BD91E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B4D1EC(v9, v10);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1B4D1EC(objectList, method);
  }
}


float __fastcall ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
        ItemLinkInfoListViewManager_o *this,
        ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *itemLinkInfoGroup,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  float v6; // s8
  ItemLinkInfoDetailObject_o *itemDetailObj; // x19
  float Height; // s0
  float v9; // s1
  float AreaHeight; // s0
  float v11; // s0

  if ( (byte_49BD91D & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1B4CF90(
                                              &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___,
                                              itemLinkInfoGroup);
    byte_49BD91D = 1;
  }
  v6 = 0.0;
  if ( !isDispStoneDetail )
  {
    if ( !itemLinkInfoGroup )
      goto LABEL_14;
    this = (ItemLinkInfoListViewManager_o *)itemLinkInfoGroup->fields.viewItemList;
    itemDetailObj = itemLinkInfoGroup->fields.itemDetailObj;
    if ( this )
    {
      this = (ItemLinkInfoListViewManager_o *)System_Linq_Enumerable__Any_object_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                                (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( itemDetailObj )
        {
          Height = ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0LL);
          v9 = -0.5;
          return Height * v9;
        }
LABEL_14:
        sub_1B4D1EC(this, itemLinkInfoGroup);
      }
    }
    if ( !itemDetailObj )
      goto LABEL_14;
    AreaHeight = ItemLinkInfoDetailObject__get_AreaHeight(itemDetailObj, 0LL);
    if ( AreaHeight > ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0LL) )
    {
      v11 = ItemLinkInfoDetailObject__get_AreaHeight(itemDetailObj, 0LL);
      Height = fmaxf(v11 - ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0LL), 0.0);
      v9 = 0.5;
      return Height * v9;
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

  if ( (byte_49BD91F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    this = (ItemLinkInfoListViewManager_o *)sub_1B4CF90(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v7);
    byte_49BD91F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !itemLinkInfoGroupList )
    sub_1B4D1EC(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v14.fields._current )
      sub_1B4D1EC(v8, v9);
    klass = v14.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  GameObjectExtensions__SetLocalPosition_34069660(obj, x, y, z, 0LL);
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
  ItemLinkInfoDetailObject_o *v34; // x19
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s8
  float y; // s10
  ItemLinkInfoListViewManager_o *v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  float Height; // s0
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x1
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v51; // x20
  float v52; // s8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v54; // x0
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v57; // x19
  ItemLinkInfoListViewManager_o *v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v62; // x20
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x1
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v71; // x8
  int *v72; // x8
  int32_t v73; // w8
  Il2CppObject *Item; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v78; // x19
  System_Collections_Generic_List_object__o *v79; // x9
  CGThumbnailListItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v81; // t1
  Il2CppObject *Component_object; // x0
  __int64 v83; // x1
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  ItemLinkInfoListViewObject_o *v86; // x20
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  ItemLinkInfoListViewManager_c *v89; // x0
  __int64 v90; // x1
  const MethodInfo *v91; // x2
  float v92; // s0
  float v93; // s8
  float BOARD_OFFSET_X; // s0
  float v95; // s9
  __int64 v96; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v99; // x1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x8
  __int64 v107; // x1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_Collections_Generic_List_object__o *v110; // x0
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x8
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v117; // x0
  System_Collections_Generic_List_Enumerator_T__o v118[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v119; // [xsp+38h] [xbp-78h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v120; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v121; // [xsp+48h] [xbp-68h] BYREF

  v4 = this;
  v121 = this;
  if ( (byte_49BD923 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v7);
    sub_1B4CF90(&ItemLinkInfoListViewManager_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v13);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v15);
    byte_49BD923 = 1;
  }
  v119 = 0LL;
  v120 = &v121;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -3;
    goto LABEL_59;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
    v4 = v121;
    byte_49B5361 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v118,
    itemLinkInfoGroupList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v21 = v121;
  v22 = *(_OWORD *)&v118[0].fields._list;
  p__7__wrap2 = &v121->fields.__7__wrap2;
  v118[1] = v118[0];
  v121->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v118[0].fields._current;
  *(_OWORD *)&v21->fields.__7__wrap2.fields._list = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)p__7__wrap2, 0, v24, v25);
  v121->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v121->fields.__7__wrap2,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v121, v27);
      v71 = v121;
      result = 0;
      v121->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v71->fields.__7__wrap2.fields._index = 0LL;
      v71->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v121->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1B4D1EC(v121, v27);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v30 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v30 )
    {
      v34 = current->fields.itemDetailObj;
      if ( !v34 )
        sub_1B4D1EC(v30, v31);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current->fields.itemDetailObj, 0LL);
      x = v121->fields._basePosition_5__2.fields.x;
      y = v121->fields._basePosition_5__2.fields.y;
      Height = ItemLinkInfoDetailObject__get_Height(v34, 0LL);
      if ( !_4__this )
        sub_1B4D1EC(v38, v39);
      ItemLinkInfoListViewManager__InitTransform(
        v38,
        gameObject,
        x,
        y + (float)(Height * -0.5),
        v121->fields._basePosition_5__2.fields.z,
        v40);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v43 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      v46 = v43;
      if ( !objectList )
        sub_1B4D1EC(v43, v43);
      items = objectList->fields._items;
      v48 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B4D1EC(v43, v43);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v43,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v46;
        sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v46, v44, v45);
      }
      v51 = v121;
      v52 = v121->fields._basePosition_5__2.fields.y;
      v51->fields._basePosition_5__2.fields.y = v52 - ItemLinkInfoDetailObject__get_AreaHeight(v34, 0LL);
    }
    viewItemList = current->fields.viewItemList;
    v54 = v121;
    v121->fields._viewItemList_5__4 = viewItemList;
    sub_1B4CF34((CGThumbnailListItem_o *)&v54->fields._viewItemList_5__4, (int32_t)viewItemList, v32, v33);
    viewItemList_5__4 = v121->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v57 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v57 )
      sub_1B4D1EC(this, method);
    v58 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    monitor = (int *)v57[1].monitor;
    if ( !monitor )
      sub_1B4D1EC(v58, v59);
    if ( !_4__this )
      sub_1B4D1EC(v58, v59);
    ItemLinkInfoListViewManager__InitTransform(
      v58,
      (UnityEngine_GameObject_o *)v58,
      v121->fields._basePosition_5__2.fields.x,
      v121->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v121->fields._basePosition_5__2.fields.z,
      v60);
    v62 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v63 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v57, 0LL);
    v66 = v63;
    if ( !v62 )
      sub_1B4D1EC(v63, v63);
    v67 = v62->fields._items;
    v68 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v62->fields._version;
    if ( !v67 )
      sub_1B4D1EC(v63, v63);
    v69 = v62->fields._size;
    if ( (unsigned int)v69 >= v67->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v62,
        v63,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      v62->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v66;
      sub_1B4CF34((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v66, v64, v65);
    }
    v72 = (int *)v57[1].monitor;
    if ( !v72 )
      sub_1B4D1EC(this, method);
    v4 = v121;
    v121->fields._basePosition_5__2.fields.y = v121->fields._basePosition_5__2.fields.y - (float)v72[43];
  }
  else
  {
    v4 = v121;
  }
  v73 = 0;
  for ( v4->fields._i_5__5 = 0; ; v4->fields._i_5__5 = v73 )
  {
    v81 = v4->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (CGThumbnailListItem_o *)&v4->fields._viewItemList_5__4;
    v79 = (System_Collections_Generic_List_object__o *)v81;
    if ( !v81 )
      sub_1B4D1EC(this, method);
    if ( v73 >= v79->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1B4CF34(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v79,
             v73,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1B4D1EC(Item, v75);
    v76 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v78 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v78,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v4 = v121;
LABEL_59:
    v73 = v4->fields._i_5__5 + 1;
  }
  if ( !v78 )
    sub_1B4D1EC(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v78,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v86 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1B4D1EC(0LL, v83);
  Component_object[3].klass = (Il2CppClass *)v76;
  sub_1B4CF34((CGThumbnailListItem_o *)&Component_object[3], (int32_t)v76, v84, v85);
  ItemLinkInfoListViewObject__SetupDisp(v86, v87);
  GameObjectExtensions__SetParent_34075384((UnityEngine_GameObject_o *)v78, _4__this->fields.listParent, 0LL);
  v92 = ItemLinkInfoListViewObject__GetHeight(v86, v88);
  if ( !v76 )
    sub_1B4D1EC(v89, v90);
  v93 = v92;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE3(v76[9].monitor) )
    v95 = 0.0;
  else
    v95 = -1.0;
  if ( BYTE3(v76[9].monitor) )
  {
    v89 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v89 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v89->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v89,
    (UnityEngine_GameObject_o *)v78,
    BOARD_OFFSET_X + v121->fields._basePosition_5__2.fields.x,
    v121->fields._basePosition_5__2.fields.y - (float)((float)(v93 * 0.5) + v95),
    v121->fields._basePosition_5__2.fields.z,
    v91);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1B4D1EC(0LL, v96);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v78, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1B4D1EC(0LL, v99);
  v103 = itemLinkInfoObjectList->fields._items;
  v104 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v103 )
    sub_1B4D1EC(itemLinkInfoObjectList, v99);
  v105 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v105 >= v103->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v86,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v103->obj.klass + v105;
    itemLinkInfoObjectList->fields._size = v105 + 1;
    v106[4] = (Il2CppClass *)v86;
    sub_1B4CF34((CGThumbnailListItem_o *)(v106 + 4), (int32_t)v86, v100, v101);
  }
  v110 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v110 )
    sub_1B4D1EC(0LL, v107);
  v111 = v110->fields._items;
  v112 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v110->fields._version;
  if ( !v111 )
    sub_1B4D1EC(v110, v107);
  v113 = v110->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v110,
      v78,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v110->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v78;
    sub_1B4CF34((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v78, v108, v109);
  }
  v117 = v121;
  v121->fields._basePosition_5__2.fields.y = v121->fields._basePosition_5__2.fields.y
                                           - (float)(v93 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v117 = v121;
  }
  v117->fields.__2__current = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v117->fields.__2__current, 0, v115, v116);
  result = 1;
  v121->fields.__1__state = 1;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  if ( (byte_49BD924 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method);
    byte_49BD924 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}