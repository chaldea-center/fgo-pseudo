void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE62A & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoListViewManager_TypeInfo, v1);
    byte_49FE62A = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void __fastcall ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FE629 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_49FE629 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v12, v13, v14);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FE626 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList);
    byte_49FE626 = 1;
  }
  v6 = sub_1B64314(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList, isSynchro);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall ItemLinkInfoListViewManager__CreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *noneDataLabel; // x21
  UnityEngine_Component_o *HasViewItem; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x21
  const MethodInfo *v14; // x2
  UILabel_o *v15; // x21
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_49FE624 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_7395/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, v8);
    byte_49FE624 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
                                                 v14);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0LL);
      v15 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7395/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v15 )
        goto LABEL_18;
      UILabel__set_text(v15, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v12);
        UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, v11);
      }
      return;
    }
LABEL_18:
    sub_1B64324(HasViewItem);
  }
}


void __fastcall ItemLinkInfoListViewManager__CreateListSub(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  ItemLinkInfoListViewManager_o *v4; // x19
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
  __int64 v16; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float y; // s11
  float x; // s9
  _BOOL8 v21; // x0
  UnityEngine_Component_o **current; // x23
  System_Collections_Generic_List_object__o *klass; // x20
  _BOOL4 v24; // w24
  UnityEngine_Object_o *v25; // x21
  _BOOL8 v26; // x0
  UnityEngine_Component_o *v27; // x21
  int *monitor; // x8
  float v29; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_object__o *objectList; // x22
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x0
  int *v42; // x8
  UnityEngine_Object_o *v43; // x21
  _BOOL8 v44; // x0
  UnityEngine_Component_o *v45; // x21
  ItemLinkInfoListViewManager_o *v46; // x0
  const MethodInfo *v47; // x2
  int *v48; // x8
  System_Collections_Generic_List_object__o *v49; // x22
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x1
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x0
  int *v59; // x8
  UnityEngine_Object_o *v60; // x21
  _BOOL8 v61; // x0
  UnityEngine_Component_o *v62; // x21
  ItemLinkInfoListViewManager_o *v63; // x0
  const MethodInfo *v64; // x2
  int *v65; // x8
  System_Collections_Generic_List_object__o *v66; // x22
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x1
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  int *v75; // x8
  int32_t v76; // w21
  Il2CppObject *Item; // x24
  Il2CppObject *baseViewItemPrefab; // x22
  Il2CppObject *v79; // x22
  _BOOL8 v80; // x0
  Il2CppObject *Component_object; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  ItemLinkInfoListViewObject_o *v84; // x23
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x1
  ItemLinkInfoListViewManager_c *v87; // x0
  const MethodInfo *v88; // x2
  float Height; // s0
  float v90; // s10
  float BOARD_OFFSET_X; // s0
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  int32_t v94; // w2
  int32_t v95; // w3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x8
  int32_t v101; // w2
  int32_t v102; // w3
  System_Collections_Generic_List_object__o *v103; // x0
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x8
  UIScrollView_o *scrollView; // x0
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+20h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_49FE625 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v8);
    sub_1B640C8(&ItemLinkInfoListViewManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v14);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    this = (ItemLinkInfoListViewManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    byte_49FE625 = 1;
  }
  memset(&v110, 0, sizeof(v110));
  if ( !byte_49F7111 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, itemLinkInfoGroupList);
    byte_49F7111 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1B64324(this);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v109,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v110 = v109;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v110,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v21 )
      break;
    current = (UnityEngine_Component_o **)v110.fields._current;
    if ( !v110.fields._current )
      sub_1B64324(v21);
    klass = (System_Collections_Generic_List_object__o *)v110.fields._current[3].klass;
    if ( klass )
      v24 = System_Linq_Enumerable__Any_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v110.fields._current[3].klass,
              (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    else
      v24 = 0;
    v25 = (UnityEngine_Object_o *)current[3];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( v26 )
    {
      v27 = current[3];
      if ( v24 )
      {
        if ( !v27 )
          sub_1B64324(v26);
        monitor = (int *)v27[1].monitor;
        if ( !monitor )
          sub_1B64324(v26);
        v29 = y + (float)((float)monitor[43] * -0.5);
      }
      else
      {
        v29 = y;
        if ( !v27 )
          sub_1B64324(v26);
      }
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[3], 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, v29, z, v31);
      objectList = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
      v33 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v27, 0LL);
      v36 = v33;
      if ( !objectList )
        sub_1B64324(v33);
      items = objectList->fields._items;
      v38 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B64324(v33);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v33,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
      }
      v42 = (int *)v27[1].monitor;
      if ( !v42 )
        sub_1B64324(v41);
      y = y - (float)v42[43];
    }
    if ( v24 )
    {
      v43 = (UnityEngine_Object_o *)current[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v44 = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( v44 )
      {
        v45 = current[4];
        if ( !v45 )
          sub_1B64324(v44);
        v46 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[4], 0LL);
        v48 = (int *)v45[1].monitor;
        if ( !v48 )
          sub_1B64324(v46);
        ItemLinkInfoListViewManager__InitTransform(
          v46,
          (UnityEngine_GameObject_o *)v46,
          x,
          y + (float)((float)v48[43] * -0.5),
          z,
          v47);
        v49 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
        v50 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v45, 0LL);
        v53 = v50;
        if ( !v49 )
          sub_1B64324(v50);
        v54 = v49->fields._items;
        v55 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v49->fields._version;
        if ( !v54 )
          sub_1B64324(v50);
        v56 = v49->fields._size;
        if ( (unsigned int)v56 >= v54->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            v50,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v49->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v53;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v53, v51, v52);
        }
        v59 = (int *)v45[1].monitor;
        if ( !v59 )
          sub_1B64324(v58);
        y = y - (float)v59[43];
      }
      v60 = (UnityEngine_Object_o *)current[5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v61 = UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( v61 )
      {
        v62 = current[5];
        if ( !v62 )
          sub_1B64324(v61);
        v63 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[5], 0LL);
        v65 = (int *)v62[1].monitor;
        if ( !v65 )
          sub_1B64324(v63);
        ItemLinkInfoListViewManager__InitTransform(
          v63,
          (UnityEngine_GameObject_o *)v63,
          x,
          y + (float)((float)v65[43] * -0.5),
          z,
          v64);
        v66 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
        v67 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v62, 0LL);
        v70 = v67;
        if ( !v66 )
          sub_1B64324(v67);
        v71 = v66->fields._items;
        v72 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v66->fields._version;
        if ( !v71 )
          sub_1B64324(v67);
        v73 = v66->fields._size;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v66,
            v67,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &v71->obj.klass + v73;
          v66->fields._size = v73 + 1;
          v74[4] = (Il2CppClass *)v70;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v70, v68, v69);
        }
        v75 = (int *)v62[1].monitor;
        if ( !v75 )
          sub_1B64324(v61);
        y = y - (float)v75[43];
      }
      if ( !klass )
        sub_1B64324(v61);
      if ( klass->fields._size >= 1 )
      {
        v76 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v76,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v4->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v79 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v80 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v79, 0LL, 0LL);
          if ( !v80 )
          {
            if ( !v79 )
              sub_1B64324(v80);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v79,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v84 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1B64324(0LL);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[3], (int32_t)Item, v82, v83);
            ItemLinkInfoListViewObject__SetupDisp(v84, v85);
            GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)v79, v4->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v84, v86);
            if ( !Item )
              sub_1B64324(v87);
            v90 = Height;
            if ( BYTE2(Item[9].monitor) )
            {
              v87 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v87 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v87->static_fields->BOARD_OFFSET_X;
            }
            else
            {
              BOARD_OFFSET_X = 0.0;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v87,
              (UnityEngine_GameObject_o *)v79,
              x + BOARD_OFFSET_X,
              y - (float)(v90 * 0.5),
              z,
              v88);
            listParent = v4->fields.listParent;
            if ( !listParent )
              sub_1B64324(0LL);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v79, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1B64324(0LL);
            v97 = itemLinkInfoObjectList->fields._items;
            v98 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v97 )
              sub_1B64324(itemLinkInfoObjectList);
            v99 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v99 >= v97->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v84,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = &v97->obj.klass + v99;
              itemLinkInfoObjectList->fields._size = v99 + 1;
              v100[4] = (Il2CppClass *)v84;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v84, v94, v95);
            }
            v103 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
            if ( !v103 )
              sub_1B64324(0LL);
            v104 = v103->fields._items;
            v105 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v103->fields._version;
            if ( !v104 )
              sub_1B64324(v103);
            v106 = v103->fields._size;
            if ( (unsigned int)v106 >= v104->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v103,
                v79,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v107 = &v104->obj.klass + v106;
              v103->fields._size = v106 + 1;
              v107[4] = (Il2CppClass *)v79;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v107 + 4), (int32_t)v79, v101, v102);
            }
            y = y - (float)(v90 + v4->fields.boardSpace);
          }
          ++v76;
        }
        while ( v76 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v110,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v4->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0LL);
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
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FE627 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FE627 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v9 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B64324(v9);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v11 = this->fields.objectList;
  if ( !v11 )
    goto LABEL_20;
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
    sub_1B64324(objectList);
  }
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
  bool v9; // w19
  Il2CppClass *klass; // x0
  int v11; // w21
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE628 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    this = (ItemLinkInfoListViewManager_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v7);
    byte_49FE628 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !itemLinkInfoGroupList )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v9 = v8;
    if ( !v8 )
      break;
    if ( !v13.fields._current )
      sub_1B64324(v8);
    klass = v13.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v11 = 4;
      goto LABEL_11;
    }
  }
  v11 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v9 && v11 == 4;
}


void __fastcall ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_33375564(obj, x, y, z, 0LL);
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
  int32_t v3; // w3
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
  int32_t v25; // w3
  bool result; // w0
  const MethodInfo *v27; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_Component_o *v33; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v35; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x1
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v47; // x0
  int *v48; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v52; // x19
  ItemLinkInfoListViewManager_o *v53; // x0
  const MethodInfo *v54; // x2
  int *v55; // x8
  System_Collections_Generic_List_object__o *v56; // x20
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x1
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v65; // x8
  int *v66; // x8
  int32_t v67; // w8
  Il2CppObject *Item; // x0
  Il2CppObject *v69; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v71; // x19
  System_Collections_Generic_List_object__o *v72; // x9
  ServantStatusBattleListViewItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v74; // t1
  Il2CppObject *Component_object; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  ItemLinkInfoListViewObject_o *v78; // x20
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  ItemLinkInfoListViewManager_c *v81; // x0
  const MethodInfo *v82; // x2
  float Height; // s0
  float v84; // s8
  float BOARD_OFFSET_X; // s0
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  int32_t v88; // w2
  int32_t v89; // w3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x8
  int32_t v95; // w2
  int32_t v96; // w3
  System_Collections_Generic_List_object__o *v97; // x0
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x8
  int32_t v102; // w2
  int32_t v103; // w3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v104; // x0
  System_Collections_Generic_List_Enumerator_T__o v105[2]; // [xsp+8h] [xbp-98h] BYREF
  __int64 v106; // [xsp+38h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v107; // [xsp+40h] [xbp-60h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v108; // [xsp+48h] [xbp-58h] BYREF

  v4 = this;
  v108 = this;
  if ( (byte_49FE62B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v7);
    sub_1B640C8(&ItemLinkInfoListViewManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    byte_49FE62B = 1;
  }
  v106 = 0LL;
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
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    v4 = v108;
    byte_49F7111 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    v105,
    itemLinkInfoGroupList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v21 = v108;
  v22 = *(_OWORD *)&v105[0].fields._list;
  p__7__wrap2 = &v108->fields.__7__wrap2;
  v105[1] = v105[0];
  v108->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v105[0].fields._current;
  *(_OWORD *)&v21->fields.__7__wrap2.fields._list = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v24, v25);
  v108->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v108->fields.__7__wrap2,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v108, v27);
      v65 = v108;
      result = 0;
      v108->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v65->fields.__7__wrap2.fields._index = 0LL;
      v65->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v108->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1B64324(v108);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v30 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v30 )
    {
      v33 = (UnityEngine_Component_o *)current->fields.itemDetailObj;
      if ( !v33 )
        sub_1B64324(v30);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0LL);
      monitor = (int *)v33[1].monitor;
      if ( !monitor )
        sub_1B64324(gameObject);
      if ( !_4__this )
        sub_1B64324(gameObject);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v108->fields._basePosition_5__2.fields.x,
        v108->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
        v108->fields._basePosition_5__2.fields.z,
        v35);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v38 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v33, 0LL);
      v41 = v38;
      if ( !objectList )
        sub_1B64324(v38);
      items = objectList->fields._items;
      v43 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B64324(v38);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v38,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v41;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v41, v39, v40);
      }
      v48 = (int *)v33[1].monitor;
      if ( !v48 )
        sub_1B64324(v46);
      v47 = v108;
      v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y - (float)v48[43];
    }
    else
    {
      v47 = v108;
    }
    viewItemList = current->fields.viewItemList;
    v47->fields._viewItemList_5__4 = viewItemList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields._viewItemList_5__4, (int32_t)viewItemList, v31, v32);
    viewItemList_5__4 = v108->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v52 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v52 )
      sub_1B64324(this);
    v53 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    v55 = (int *)v52[1].monitor;
    if ( !v55 )
      sub_1B64324(v53);
    if ( !_4__this )
      sub_1B64324(v53);
    ItemLinkInfoListViewManager__InitTransform(
      v53,
      (UnityEngine_GameObject_o *)v53,
      v108->fields._basePosition_5__2.fields.x,
      v108->fields._basePosition_5__2.fields.y + (float)((float)v55[43] * -0.5),
      v108->fields._basePosition_5__2.fields.z,
      v54);
    v56 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v57 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v52, 0LL);
    v60 = v57;
    if ( !v56 )
      sub_1B64324(v57);
    v61 = v56->fields._items;
    v62 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v56->fields._version;
    if ( !v61 )
      sub_1B64324(v57);
    v63 = v56->fields._size;
    if ( (unsigned int)v63 >= v61->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        v57,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &v61->obj.klass + v63;
      v56->fields._size = v63 + 1;
      v64[4] = (Il2CppClass *)v60;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v60, v58, v59);
    }
    v66 = (int *)v52[1].monitor;
    if ( !v66 )
      sub_1B64324(this);
    v4 = v108;
    v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y - (float)v66[43];
  }
  else
  {
    v4 = v108;
  }
  v67 = 0;
  for ( v4->fields._i_5__5 = 0; ; v4->fields._i_5__5 = v67 )
  {
    v74 = v4->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (ServantStatusBattleListViewItem_o *)&v4->fields._viewItemList_5__4;
    v72 = (System_Collections_Generic_List_object__o *)v74;
    if ( !v74 )
      sub_1B64324(this);
    if ( v67 >= v72->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1B6406C(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v72,
             v67,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1B64324(Item);
    v69 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v71 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v71,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v4 = v108;
LABEL_64:
    v67 = v4->fields._i_5__5 + 1;
  }
  if ( !v71 )
    sub_1B64324(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v71,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v78 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1B64324(0LL);
  Component_object[3].klass = (Il2CppClass *)v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[3], (int32_t)v69, v76, v77);
  ItemLinkInfoListViewObject__SetupDisp(v78, v79);
  GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)v71, _4__this->fields.listParent, 0LL);
  Height = ItemLinkInfoListViewObject__GetHeight(v78, v80);
  if ( !v69 )
    sub_1B64324(v81);
  v84 = Height;
  if ( BYTE2(v69[9].monitor) )
  {
    v81 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v81 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v81->static_fields->BOARD_OFFSET_X;
  }
  else
  {
    BOARD_OFFSET_X = 0.0;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v81,
    (UnityEngine_GameObject_o *)v71,
    BOARD_OFFSET_X + v108->fields._basePosition_5__2.fields.x,
    v108->fields._basePosition_5__2.fields.y - (float)(v84 * 0.5),
    v108->fields._basePosition_5__2.fields.z,
    v82);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1B64324(0LL);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v71, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1B64324(0LL);
  v91 = itemLinkInfoObjectList->fields._items;
  v92 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v91 )
    sub_1B64324(itemLinkInfoObjectList);
  v93 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v93 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v78,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    itemLinkInfoObjectList->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v78;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v78, v88, v89);
  }
  v97 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v97 )
    sub_1B64324(0LL);
  v98 = v97->fields._items;
  v99 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v97->fields._version;
  if ( !v98 )
    sub_1B64324(v97);
  v100 = v97->fields._size;
  if ( (unsigned int)v100 >= v98->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v97,
      v71,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = &v98->obj.klass + v100;
    v97->fields._size = v100 + 1;
    v101[4] = (Il2CppClass *)v71;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v101 + 4), (int32_t)v71, v95, v96);
  }
  v104 = v108;
  v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y
                                           - (float)(v84 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v104 = v108;
  }
  v104->fields.__2__current = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v104->fields.__2__current, 0, v102, v103);
  result = 1;
  v108->fields.__1__state = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FE62C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method);
    byte_49FE62C = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}