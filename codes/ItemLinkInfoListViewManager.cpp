void ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_5973AD3 & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoListViewManager_TypeInfo);
    byte_5973AD3 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973AD2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5973AD2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemLinkInfoObjectList,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5973ACD & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
    byte_5973ACD = 1;
  }
  v6 = sub_2213CCC(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v6 + 32),
    (int32_t)itemLinkInfoGroupList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void ItemLinkInfoListViewManager__CreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *noneDataLabel; // x22
  UnityEngine_Component_o *HasViewItem; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x22
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  UILabel_o *v15; // x22
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_5973ACB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7846/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/);
    byte_5973ACB = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
  {
    noneDataLabel = (UnityEngine_Object_o *)this->fields.noneDataLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
                                                 v13);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0);
      v15 = this->fields.noneDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7846/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0);
      if ( !v15 )
        goto LABEL_18;
      UILabel__set_text(v15, (System_String_o *)HasViewItem, 0);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v11);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, List, 0);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v11);
      }
      return;
    }
LABEL_18:
    sub_2213CDC(HasViewItem, v10);
  }
}


void ItemLinkInfoListViewManager__CreateListSub(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoListViewManager_o *v5; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float y; // s11
  float x; // s9
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  UnityEngine_Object_o *monitor; // x21
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Component_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  float ItemDetailOffsetPositionY; // s0
  float v20; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x23
  _BOOL8 v39; // x0
  __int64 v40; // x1
  UnityEngine_Component_o *v41; // x23
  ItemLinkInfoListViewManager_o *v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  int *v45; // x8
  System_Collections_Generic_List_object__o *v46; // x24
  Il2CppObject *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  Il2CppObject *v54; // x1
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  int *v60; // x8
  UnityEngine_Object_o *v61; // x23
  _BOOL8 v62; // x0
  __int64 v63; // x1
  UnityEngine_Component_o *v64; // x22
  ItemLinkInfoListViewManager_o *v65; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x2
  int *v68; // x8
  System_Collections_Generic_List_object__o *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  Il2CppObject *v77; // x1
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  int *v84; // x8
  int32_t v85; // w22
  __int64 v86; // x1
  Il2CppObject *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v89; // x23
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *Component_object; // x0
  __int64 v93; // x1
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  ItemLinkInfoListViewObject_o *v100; // x24
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  ItemLinkInfoListViewManager_c *v103; // x0
  __int64 v104; // x1
  const MethodInfo *v105; // x2
  float Height; // s0
  float v107; // s10
  float BOARD_OFFSET_X; // s0
  float v109; // s14
  __int64 v110; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v113; // x1
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x8
  __int64 v125; // x1
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  System_Collections_Generic_List_object__o *v132; // x0
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x8
  UIScrollView_o *scrollView; // x0
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+20h] [xbp-C0h] BYREF

  v5 = this;
  if ( (byte_5973ACC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_2213A60(&ItemLinkInfoListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973ACC = 1;
  }
  memset(&v140, 0, sizeof(v140));
  if ( !byte_5969AE0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_2213CDC(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v140 = v139;
  v139.fields._list = 0;
  *(_QWORD *)&v139.fields._index = &v140;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v140,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v10 )
      break;
    current = v140.fields._current;
    if ( !v140.fields._current )
      sub_2213CDC(v10, v11);
    monitor = (UnityEngine_Object_o *)v140.fields._current[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v14 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( v14 )
    {
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      ItemDetailOffsetPositionY = ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
                                    (ItemLinkInfoListViewManager_o *)v14,
                                    (ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current,
                                    isDispStoneDetail,
                                    v15);
      if ( !v16 )
        sub_2213CDC(v17, v18);
      v20 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v16, 0);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v20, z, v22);
      objectList = (System_Collections_Generic_List_object__o *)v5->fields.objectList;
      v24 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v16, 0);
      v31 = v24;
      if ( !objectList
        || (items = objectList->fields._items,
            v33 = Method_System_Collections_Generic_List_GameObject__Add__,
            ++objectList->fields._version,
            !items) )
      {
        sub_2213CDC(v24, v24);
      }
      size = objectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v24,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v31, v25, v26, v27, v28, v29, v30);
      }
      y = y - ItemLinkInfoDetailObject__get_AreaHeight((ItemLinkInfoDetailObject_o *)v16, 0);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v38 = (UnityEngine_Object_o *)current[2].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      v39 = UnityEngine_Object__op_Inequality(v38, 0, 0);
      if ( v39 )
      {
        v41 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v41 )
          sub_2213CDC(v39, v40);
        v42 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0);
        v45 = (int *)v41[1].monitor;
        if ( !v45 )
          sub_2213CDC(v42, v43);
        ItemLinkInfoListViewManager__InitTransform(
          v42,
          (UnityEngine_GameObject_o *)v42,
          x,
          (float)(y + (float)((float)v45[43] * -0.5)) + 1.0,
          z,
          v44);
        v46 = (System_Collections_Generic_List_object__o *)v5->fields.objectList;
        v47 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v41, 0);
        v54 = v47;
        if ( !v46
          || (v55 = v46->fields._items,
              v56 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++v46->fields._version,
              !v55) )
        {
          sub_2213CDC(v47, v47);
        }
        v57 = v46->fields._size;
        if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            v47,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          v46->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v54;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v54, v48, v49, v50, v51, v52, v53);
        }
        v60 = (int *)v41[1].monitor;
        if ( !v60 )
          sub_2213CDC(v59, v40);
        y = y - (float)v60[43];
      }
      v61 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
      v62 = UnityEngine_Object__op_Inequality(v61, 0, 0);
      if ( v62 )
      {
        v64 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v64 )
          sub_2213CDC(v62, v63);
        v65 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v64, 0);
        v68 = (int *)v64[1].monitor;
        if ( !v68 )
          sub_2213CDC(v65, v66);
        ItemLinkInfoListViewManager__InitTransform(
          v65,
          (UnityEngine_GameObject_o *)v65,
          x,
          y + (float)((float)v68[43] * -0.5),
          z,
          v67);
        v69 = (System_Collections_Generic_List_object__o *)v5->fields.objectList;
        v70 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v64, 0);
        v77 = v70;
        if ( !v69
          || (v78 = v69->fields._items,
              v79 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++v69->fields._version,
              !v78) )
        {
          sub_2213CDC(v70, v70);
        }
        v80 = v69->fields._size;
        if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v69,
            v70,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &v78->obj.klass + v80;
          v69->fields._size = v80 + 1;
          v81[4] = (Il2CppClass *)v77;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 4), (int32_t)v77, v71, v72, v73, v74, v75, v76);
        }
        v84 = (int *)v64[1].monitor;
        if ( !v84 )
          sub_2213CDC(v82, v83);
        y = y - (float)v84[43];
      }
      if ( klass->fields._size >= 1 )
      {
        v85 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v85,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v5->fields.baseViewItemPrefab;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
          v89 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v90 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v89, 0, 0);
          if ( !v90 )
          {
            if ( !v89 )
              sub_2213CDC(v90, v91);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v89,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v100 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_2213CDC(0, v93);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&Component_object[3],
              (int32_t)Item,
              v94,
              v95,
              v96,
              v97,
              v98,
              v99);
            ItemLinkInfoListViewObject__SetupDisp(v100, v101);
            GameObjectExtensions__SetParent_42897232((UnityEngine_GameObject_o *)v89, v5->fields.listParent, 0);
            Height = ItemLinkInfoListViewObject__GetHeight(v100, v102);
            if ( !Item )
              sub_2213CDC(v103, v104);
            v107 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[10].klass) )
              v109 = 0.0;
            else
              v109 = -1.0;
            if ( BYTE3(Item[10].klass) )
            {
              v103 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !*(&ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo, v104);
                v103 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v103->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v103,
              (UnityEngine_GameObject_o *)v89,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v107 * 0.5) + v109),
              z,
              v105);
            listParent = v5->fields.listParent;
            if ( !listParent )
              sub_2213CDC(0, v110);
            layer = UnityEngine_GameObject__get_layer(listParent, 0);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v89, layer, 0);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v5->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList
              || (v121 = itemLinkInfoObjectList->fields._items,
                  v122 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__,
                  ++itemLinkInfoObjectList->fields._version,
                  !v121) )
            {
              sub_2213CDC(itemLinkInfoObjectList, v113);
            }
            v123 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v100,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
            }
            else
            {
              v124 = &v121->obj.klass + v123;
              itemLinkInfoObjectList->fields._size = v123 + 1;
              v124[4] = (Il2CppClass *)v100;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v124 + 4),
                (int32_t)v100,
                v114,
                v115,
                v116,
                v117,
                v118,
                v119);
            }
            v132 = (System_Collections_Generic_List_object__o *)v5->fields.objectList;
            if ( !v132
              || (v133 = v132->fields._items,
                  v134 = Method_System_Collections_Generic_List_GameObject__Add__,
                  ++v132->fields._version,
                  !v133) )
            {
              sub_2213CDC(v132, v125);
            }
            v135 = v132->fields._size;
            if ( (unsigned int)v135 >= LODWORD(v133->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v132,
                v89,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
            }
            else
            {
              v136 = &v133->obj.klass + v135;
              v132->fields._size = v135 + 1;
              v136[4] = (Il2CppClass *)v89;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v136 + 4),
                (int32_t)v89,
                v126,
                v127,
                v128,
                v129,
                v130,
                v131);
            }
            y = y - (float)(v107 + v5->fields.boardSpace);
          }
          ++v85;
        }
        while ( v85 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v5->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0);
}


void ItemLinkInfoListViewManager__DeleteCallback(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5973AD1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    byte_5973AD1 = 1;
  }
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  memset(&v5, 0, sizeof(v5));
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_2213CDC(0, v4);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
  }
}


void ItemLinkInfoListViewManager__DestroyList(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5973ACF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973ACF = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v13, 0, sizeof(v13));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_2213CDC(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13.fields._current, 0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v8 = this->fields.objectList;
  if ( !v8 )
    goto LABEL_20;
  size = v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(objectList, method);
  }
}


float ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
        ItemLinkInfoListViewManager_o *this,
        ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *itemLinkInfoGroup,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  float v6; // s8
  ItemLinkInfoDetailObject_o *itemDetailObj; // x19
  float Height; // s0
  float v9; // s1
  float AreaHeight; // s9
  float v11; // s8

  if ( (byte_5973ACE & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_2213A60(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    byte_5973ACE = 1;
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
                                                (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( itemDetailObj )
        {
          Height = ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0);
          v9 = -0.5;
          return Height * v9;
        }
LABEL_14:
        sub_2213CDC(this, itemLinkInfoGroup);
      }
    }
    if ( !itemDetailObj )
      goto LABEL_14;
    AreaHeight = ItemLinkInfoDetailObject__get_AreaHeight(itemDetailObj, 0);
    if ( AreaHeight > ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0) )
    {
      v11 = ItemLinkInfoDetailObject__get_AreaHeight(itemDetailObj, 0);
      Height = fmaxf(v11 - ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0), 0.0);
      v9 = 0.5;
      return Height * v9;
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
  __int64 v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973AD0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    this = (ItemLinkInfoListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    byte_5973AD0 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !itemLinkInfoGroupList )
    sub_2213CDC(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v11.fields._current )
      sub_2213CDC(v4, v5);
    v7 = *(System_Collections_Generic_IEnumerable_TSource__o **)((char *)&v11.fields._current->klass
                                                               + (unsigned __int64)&dword_30);
    if ( v7 )
    {
      if ( System_Linq_Enumerable__Any_object_(
             v7,
             (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
      {
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v6;
}


void ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_42891620(obj, x, y, z, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v8; // x19
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  int v11; // w8
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  Il2CppObject *current; // x8
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v16; // x9
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  bool result; // w0
  const MethodInfo *v24; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *v25; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  ItemLinkInfoDetailObject_o *v35; // x19
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s8
  float y; // s10
  ItemLinkInfoListViewManager_o *v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  float Height; // s0
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v56; // x20
  float v57; // s8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v59; // x0
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  __int64 v61; // x1
  UnityEngine_Object_o *listDescriptionObj; // x19
  _BOOL8 v63; // x0
  __int64 v64; // x1
  UnityEngine_Component_o *v65; // x19
  ItemLinkInfoListViewManager_o *v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v70; // x20
  Il2CppObject *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x1
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v85; // x8
  __int64 v86; // x19
  int *v87; // x8
  __int64 v88; // x1
  Il2CppObject *Item; // x0
  __int64 v90; // x1
  Il2CppObject *v91; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v93; // x19
  _BOOL8 v94; // x0
  __int64 v95; // x1
  System_Collections_Generic_List_object__o *v96; // x0
  MissionNaviTransitionBoardItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v98; // t1
  Il2CppObject *Component_object; // x0
  __int64 v100; // x1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  ItemLinkInfoListViewObject_o *v107; // x20
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x1
  ItemLinkInfoListViewManager_c *v110; // x0
  __int64 v111; // x1
  const MethodInfo *v112; // x2
  float v113; // s0
  float v114; // s8
  float BOARD_OFFSET_X; // s0
  float v116; // s9
  __int64 v117; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v120; // x1
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x8
  __int64 v132; // x1
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  System_Collections_Generic_List_object__o *v139; // x0
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x8
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v150; // x0
  UIScrollView_o *scrollView; // x8
  System_Collections_Generic_List_Enumerator_T__o v152[2]; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v153; // [xsp+38h] [xbp-88h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v154; // [xsp+40h] [xbp-80h] BYREF
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v155; // [xsp+48h] [xbp-78h] BYREF

  v8 = this;
  v155 = this;
  if ( (byte_5973AD4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_2213A60(&ItemLinkInfoListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973AD4 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  v153 = 0;
  v154 = &v155;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_60;
  }
  if ( _1__state )
  {
    result = 0;
  }
  else
  {
    v11 = (unsigned __int8)byte_5969AE0;
    v8->fields.__1__state = -1;
    if ( !v11 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      v8 = v155;
      byte_5969AE0 = 1;
    }
    itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v8->fields.itemLinkInfoGroupList;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&v8->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    v8->fields._basePosition_5__2.fields.z = z;
    if ( !itemLinkInfoGroupList )
      sub_2213CDC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v152,
      itemLinkInfoGroupList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    current = v152[0].fields._current;
    v16 = v155;
    v152[1] = v152[0];
    *(_OWORD *)&v155->fields.__7__wrap2.fields._list = *(_OWORD *)&v152[0].fields._list;
    v16->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.__7__wrap2, 0, v17, v18, v19, v20, v21, v22);
    v155->fields.__1__state = -3;
    do
    {
LABEL_12:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v155->fields.__7__wrap2,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
      {
        ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v155, v24);
        v85 = v155;
        result = 0;
        *(_QWORD *)&v155->fields.__7__wrap2.fields._index = 0;
        v85->fields.__7__wrap2.fields._current = 0;
        v85->fields.__7__wrap2.fields._list = 0;
        goto LABEL_38;
      }
      v25 = v155->fields.__7__wrap2.fields._current;
      if ( !v25 )
        sub_2213CDC(v155, v24);
      itemDetailObj = (UnityEngine_Object_o *)v25->fields.itemDetailObj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      v27 = UnityEngine_Object__op_Inequality(itemDetailObj, 0, 0);
      if ( v27 )
      {
        v35 = v25->fields.itemDetailObj;
        if ( !v35 )
          sub_2213CDC(v27, v28);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25->fields.itemDetailObj, 0);
        x = v155->fields._basePosition_5__2.fields.x;
        y = v155->fields._basePosition_5__2.fields.y;
        Height = ItemLinkInfoDetailObject__get_Height(v35, 0);
        if ( !_4__this )
          sub_2213CDC(v39, v40);
        ItemLinkInfoListViewManager__InitTransform(
          v39,
          gameObject,
          x,
          y + (float)(Height * -0.5),
          v155->fields._basePosition_5__2.fields.z,
          v41);
        objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
        v44 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0);
        v51 = v44;
        if ( !objectList
          || (items = objectList->fields._items,
              v53 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++objectList->fields._version,
              !items) )
        {
          sub_2213CDC(v44, v44);
        }
        size = objectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            v44,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v51;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)v51, v45, v46, v47, v48, v49, v50);
        }
        v56 = v155;
        v57 = v155->fields._basePosition_5__2.fields.y;
        v56->fields._basePosition_5__2.fields.y = v57 - ItemLinkInfoDetailObject__get_AreaHeight(v35, 0);
      }
      viewItemList = v25->fields.viewItemList;
      v59 = v155;
      v155->fields._viewItemList_5__4 = viewItemList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v59->fields._viewItemList_5__4,
        (int32_t)viewItemList,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      viewItemList_5__4 = v155->fields._viewItemList_5__4;
    }
    while ( !viewItemList_5__4
         || !System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
               (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
    listDescriptionObj = (UnityEngine_Object_o *)v25->fields.listDescriptionObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
    v63 = UnityEngine_Object__op_Inequality(listDescriptionObj, 0, 0);
    if ( v63 )
    {
      v65 = (UnityEngine_Component_o *)v25->fields.listDescriptionObj;
      if ( !v65 )
        sub_2213CDC(v63, v64);
      v66 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v25->fields.listDescriptionObj,
                                               0);
      monitor = (int *)v65[1].monitor;
      if ( !monitor )
        sub_2213CDC(v66, v67);
      if ( !_4__this )
        sub_2213CDC(v66, v67);
      ItemLinkInfoListViewManager__InitTransform(
        v66,
        (UnityEngine_GameObject_o *)v66,
        v155->fields._basePosition_5__2.fields.x,
        v155->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
        v155->fields._basePosition_5__2.fields.z,
        v68);
      v70 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v71 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v65, 0);
      v78 = v71;
      if ( !v70
        || (v79 = v70->fields._items,
            v80 = Method_System_Collections_Generic_List_GameObject__Add__,
            ++v70->fields._version,
            !v79) )
      {
        sub_2213CDC(v71, v71);
      }
      v81 = v70->fields._size;
      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v70,
          v71,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = &v79->obj.klass + v81;
        v70->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)v78;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v82 + 4), (int32_t)v78, v72, v73, v74, v75, v76, v77);
      }
      v87 = (int *)v65[1].monitor;
      if ( !v87 )
        sub_2213CDC(v83, v84);
      v8 = v155;
      v155->fields._basePosition_5__2.fields.y = v155->fields._basePosition_5__2.fields.y - (float)v87[43];
    }
    else
    {
      v8 = v155;
    }
    v88 = 0;
    for ( v8->fields._i_5__5 = 0; ; v8->fields._i_5__5 = v88 )
    {
      v98 = v8->fields._viewItemList_5__4;
      p_viewItemList_5__4 = (MissionNaviTransitionBoardItem_o *)&v8->fields._viewItemList_5__4;
      v96 = (System_Collections_Generic_List_object__o *)v98;
      if ( !v98 )
        sub_2213CDC(0, v88);
      if ( (int)v88 >= v96->fields._size )
      {
        p_viewItemList_5__4->klass = 0;
        sub_2213A04(p_viewItemList_5__4, 0, v2, v3, v4, v5, v6, v7);
        goto LABEL_12;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               v96,
               v88,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
      if ( !_4__this )
        sub_2213CDC(Item, v90);
      v91 = Item;
      baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
      v93 = UnityEngine_Object__Instantiate_object_(
              baseViewItemPrefab,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v94 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v93, 0, 0);
      if ( !v94 )
        break;
      v8 = v155;
LABEL_60:
      v88 = (unsigned int)(v8->fields._i_5__5 + 1);
    }
    if ( !v93 )
      sub_2213CDC(v94, v95);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v93,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    v107 = (ItemLinkInfoListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_2213CDC(0, v100);
    Component_object[3].klass = (Il2CppClass *)v91;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&Component_object[3],
      (int32_t)v91,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    ItemLinkInfoListViewObject__SetupDisp(v107, v108);
    GameObjectExtensions__SetParent_42897232((UnityEngine_GameObject_o *)v93, _4__this->fields.listParent, 0);
    v113 = ItemLinkInfoListViewObject__GetHeight(v107, v109);
    if ( !v91 )
      sub_2213CDC(v110, v111);
    v114 = v113;
    BOARD_OFFSET_X = -1.0;
    if ( BYTE3(v91[10].klass) )
      v116 = 0.0;
    else
      v116 = -1.0;
    if ( BYTE3(v91[10].klass) )
    {
      v110 = ItemLinkInfoListViewManager_TypeInfo;
      if ( !*(&ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo, v111);
        v110 = ItemLinkInfoListViewManager_TypeInfo;
      }
      BOARD_OFFSET_X = v110->static_fields->BOARD_OFFSET_X;
    }
    ItemLinkInfoListViewManager__InitTransform(
      (ItemLinkInfoListViewManager_o *)v110,
      (UnityEngine_GameObject_o *)v93,
      BOARD_OFFSET_X + v155->fields._basePosition_5__2.fields.x,
      v155->fields._basePosition_5__2.fields.y - (float)((float)(v114 * 0.5) + v116),
      v155->fields._basePosition_5__2.fields.z,
      v112);
    listParent = _4__this->fields.listParent;
    if ( !listParent )
      sub_2213CDC(0, v117);
    layer = UnityEngine_GameObject__get_layer(listParent, 0);
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v93, layer, 0);
    itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
    if ( !itemLinkInfoObjectList
      || (v128 = itemLinkInfoObjectList->fields._items,
          v129 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__,
          ++itemLinkInfoObjectList->fields._version,
          !v128) )
    {
      sub_2213CDC(itemLinkInfoObjectList, v120);
    }
    v130 = itemLinkInfoObjectList->fields._size;
    if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemLinkInfoObjectList,
        (Il2CppObject *)v107,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
    }
    else
    {
      v131 = &v128->obj.klass + v130;
      itemLinkInfoObjectList->fields._size = v130 + 1;
      v131[4] = (Il2CppClass *)v107;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v131 + 4), (int32_t)v107, v121, v122, v123, v124, v125, v126);
    }
    v139 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    if ( !v139
      || (v140 = v139->fields._items,
          v141 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++v139->fields._version,
          !v140) )
    {
      sub_2213CDC(v139, v132);
    }
    v142 = v139->fields._size;
    if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v139,
        v93,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
    }
    else
    {
      v143 = &v140->obj.klass + v142;
      v139->fields._size = v142 + 1;
      v143[4] = (Il2CppClass *)v93;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v143 + 4), (int32_t)v93, v133, v134, v135, v136, v137, v138);
    }
    v150 = v155;
    scrollView = _4__this->fields.scrollView;
    v155->fields._basePosition_5__2.fields.y = v155->fields._basePosition_5__2.fields.y
                                             - (float)(v114 + _4__this->fields.boardSpace);
    if ( scrollView )
    {
      UIScrollView__ResetPosition(scrollView, 0);
      v150 = v155;
    }
    v150->fields.__2__current = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v150->fields.__2__current, 0, v144, v145, v146, v147, v148, v149);
    result = 1;
    v155->fields.__1__state = 1;
  }
LABEL_38:
  v86 = v153;
  if ( v153 )
  {
    sub_20129B0(&v154, method);
    sub_2213CD4(v86);
  }
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_5973AD5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    byte_5973AD5 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    v3);
}