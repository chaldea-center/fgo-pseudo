void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5D1F6 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoListViewManager_TypeInfo);
    byte_4A5D1F6 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void __fastcall ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D1F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5D1F5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v6, v7, v8);
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
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D1F1 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
    byte_4A5D1F1 = 1;
  }
  v6 = sub_1B887FC(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall ItemLinkInfoListViewManager__CreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noneDataLabel; // x21
  UnityEngine_Component_o *HasViewItem; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x21
  const MethodInfo *v11; // x2
  UILabel_o *v12; // x21
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_4A5D1EF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_7426/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/);
    byte_4A5D1EF = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
                                                 v11);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0LL);
      v12 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7426/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v12 )
        goto LABEL_18;
      UILabel__set_text(v12, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v9);
        UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, v8);
      }
      return;
    }
LABEL_18:
    sub_1B8880C(HasViewItem, v7);
  }
}


void __fastcall ItemLinkInfoListViewManager__CreateListSub(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  ItemLinkInfoListViewManager_o *v4; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float y; // s11
  float x; // s9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Component_o **current; // x23
  System_Collections_Generic_List_object__o *klass; // x20
  _BOOL4 v13; // w24
  UnityEngine_Object_o *v14; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x21
  int *monitor; // x8
  float v19; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *objectList; // x22
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int *v33; // x8
  UnityEngine_Object_o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  UnityEngine_Component_o *v37; // x21
  ItemLinkInfoListViewManager_o *v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  int *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x22
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x1
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  int *v53; // x8
  UnityEngine_Object_o *v54; // x21
  _BOOL8 v55; // x0
  __int64 v56; // x1
  UnityEngine_Component_o *v57; // x21
  ItemLinkInfoListViewManager_o *v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  int *v61; // x8
  System_Collections_Generic_List_object__o *v62; // x22
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x1
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int *v71; // x8
  int32_t v72; // w21
  Il2CppObject *Item; // x24
  Il2CppObject *baseViewItemPrefab; // x22
  Il2CppObject *v75; // x22
  _BOOL8 v76; // x0
  __int64 v77; // x1
  Il2CppObject *Component_object; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  ItemLinkInfoListViewObject_o *v82; // x23
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // x1
  ItemLinkInfoListViewManager_c *v85; // x0
  __int64 v86; // x1
  const MethodInfo *v87; // x2
  float Height; // s0
  float v89; // s10
  float BOARD_OFFSET_X; // s0
  float v91; // s13
  __int64 v92; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x8
  __int64 v103; // x1
  int32_t v104; // w2
  int32_t v105; // w3
  System_Collections_Generic_List_object__o *v106; // x0
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x8
  UIScrollView_o *scrollView; // x0
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-C0h] BYREF

  v4 = this;
  if ( (byte_4A5D1F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1B885B0(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D1F0 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  if ( !byte_4A55CE1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1B8880C(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v113 = v112;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v113,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v9 )
      break;
    current = (UnityEngine_Component_o **)v113.fields._current;
    if ( !v113.fields._current )
      sub_1B8880C(v9, v10);
    klass = (System_Collections_Generic_List_object__o *)v113.fields._current[3].klass;
    if ( klass )
      v13 = System_Linq_Enumerable__Any_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v113.fields._current[3].klass,
              (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    else
      v13 = 0;
    v14 = (UnityEngine_Object_o *)current[3];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( v15 )
    {
      v17 = current[3];
      if ( v13 )
      {
        if ( !v17 )
          sub_1B8880C(v15, v16);
        monitor = (int *)v17[1].monitor;
        if ( !monitor )
          sub_1B8880C(v15, v16);
        v19 = y + (float)((float)monitor[43] * -0.5);
      }
      else
      {
        v19 = y;
        if ( !v17 )
          sub_1B8880C(v15, v16);
      }
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[3], 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, v19, z, v21);
      objectList = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
      v23 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v17, 0LL);
      v26 = v23;
      if ( !objectList )
        sub_1B8880C(v23, v23);
      items = objectList->fields._items;
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B8880C(v23, v23);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v23,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
      v33 = (int *)v17[1].monitor;
      if ( !v33 )
        sub_1B8880C(v31, v32);
      y = y - (float)v33[43];
    }
    if ( v13 )
    {
      v34 = (UnityEngine_Object_o *)current[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
      if ( v35 )
      {
        v37 = current[4];
        if ( !v37 )
          sub_1B8880C(v35, v36);
        v38 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[4], 0LL);
        v41 = (int *)v37[1].monitor;
        if ( !v41 )
          sub_1B8880C(v38, v39);
        ItemLinkInfoListViewManager__InitTransform(
          v38,
          (UnityEngine_GameObject_o *)v38,
          x,
          (float)(y + (float)((float)v41[43] * -0.5)) + 1.0,
          z,
          v40);
        v42 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
        v43 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v37, 0LL);
        v46 = v43;
        if ( !v42 )
          sub_1B8880C(v43, v43);
        v47 = v42->fields._items;
        v48 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v42->fields._version;
        if ( !v47 )
          sub_1B8880C(v43, v43);
        v49 = v42->fields._size;
        if ( (unsigned int)v49 >= v47->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            v43,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &v47->obj.klass + v49;
          v42->fields._size = v49 + 1;
          v50[4] = (Il2CppClass *)v46;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v46, v44, v45);
        }
        v53 = (int *)v37[1].monitor;
        if ( !v53 )
          sub_1B8880C(v51, v52);
        y = y - (float)v53[43];
      }
      v54 = (UnityEngine_Object_o *)current[5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v55 = UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
      if ( v55 )
      {
        v57 = current[5];
        if ( !v57 )
          sub_1B8880C(v55, v56);
        v58 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[5], 0LL);
        v61 = (int *)v57[1].monitor;
        if ( !v61 )
          sub_1B8880C(v58, v59);
        ItemLinkInfoListViewManager__InitTransform(
          v58,
          (UnityEngine_GameObject_o *)v58,
          x,
          y + (float)((float)v61[43] * -0.5),
          z,
          v60);
        v62 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
        v63 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v57, 0LL);
        v66 = v63;
        if ( !v62 )
          sub_1B8880C(v63, v63);
        v67 = v62->fields._items;
        v68 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v62->fields._version;
        if ( !v67 )
          sub_1B8880C(v63, v63);
        v69 = v62->fields._size;
        if ( (unsigned int)v69 >= v67->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v62,
            v63,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v67->obj.klass + v69;
          v62->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)v66;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v66, v64, v65);
        }
        v71 = (int *)v57[1].monitor;
        if ( !v71 )
          sub_1B8880C(v55, v56);
        y = y - (float)v71[43];
      }
      if ( !klass )
        sub_1B8880C(v55, v56);
      if ( klass->fields._size >= 1 )
      {
        v72 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v72,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v4->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v75 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v76 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v75, 0LL, 0LL);
          if ( !v76 )
          {
            if ( !v75 )
              sub_1B8880C(v76, v77);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v75,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v82 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1B8880C(0LL, v79);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[3], (int32_t)Item, v80, v81);
            ItemLinkInfoListViewObject__SetupDisp(v82, v83);
            GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v75, v4->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v82, v84);
            if ( !Item )
              sub_1B8880C(v85, v86);
            v89 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[9].monitor) )
              v91 = 0.0;
            else
              v91 = -1.0;
            if ( BYTE3(Item[9].monitor) )
            {
              v85 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v85 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v85->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v85,
              (UnityEngine_GameObject_o *)v75,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v89 * 0.5) + v91),
              z,
              v87);
            listParent = v4->fields.listParent;
            if ( !listParent )
              sub_1B8880C(0LL, v92);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v75, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1B8880C(0LL, v95);
            v99 = itemLinkInfoObjectList->fields._items;
            v100 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v99 )
              sub_1B8880C(itemLinkInfoObjectList, v95);
            v101 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v101 >= v99->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v82,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
            }
            else
            {
              v102 = &v99->obj.klass + v101;
              itemLinkInfoObjectList->fields._size = v101 + 1;
              v102[4] = (Il2CppClass *)v82;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v102 + 4), (int32_t)v82, v96, v97);
            }
            v106 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
            if ( !v106 )
              sub_1B8880C(0LL, v103);
            v107 = v106->fields._items;
            v108 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v106->fields._version;
            if ( !v107 )
              sub_1B8880C(v106, v103);
            v109 = v106->fields._size;
            if ( (unsigned int)v109 >= v107->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v106,
                v75,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
            }
            else
            {
              v110 = &v107->obj.klass + v109;
              v106->fields._size = v109 + 1;
              v110[4] = (Il2CppClass *)v75;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v75, v104, v105);
            }
            y = y - (float)(v89 + v4->fields.boardSpace);
          }
          ++v72;
        }
        while ( v72 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v113,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v4->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall ItemLinkInfoListViewManager__DeleteCallback(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D1F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    byte_4A5D1F4 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1B8880C(0LL, v4);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
  }
}


void __fastcall ItemLinkInfoListViewManager__DestroyList(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5D1F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D1F2 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1B8880C(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v7 = this->fields.objectList;
  if ( !v7 )
    goto LABEL_20;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
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
    sub_1B8880C(objectList, method);
  }
}


bool __fastcall ItemLinkInfoListViewManager__HasViewItem(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19
  Il2CppClass *klass; // x0
  int v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D1F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    this = (ItemLinkInfoListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    byte_4A5D1F3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !itemLinkInfoGroupList )
    sub_1B8880C(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v10.fields._current )
      sub_1B8880C(v4, v5);
    klass = v10.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v8 = 4;
      goto LABEL_11;
    }
  }
  v8 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v6 && v8 == 4;
}


void __fastcall ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_33724224(obj, x, y, z, 0LL);
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
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v10; // x9
  __int128 v11; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  bool result; // w0
  const MethodInfo *v16; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Component_o *v23; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v39; // x0
  int *v40; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v44; // x19
  ItemLinkInfoListViewManager_o *v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  int *v48; // x8
  System_Collections_Generic_List_object__o *v49; // x20
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
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
  ServantStatusBattleListViewItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v68; // t1
  Il2CppObject *Component_object; // x0
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
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
  int32_t v88; // w3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x8
  __int64 v94; // x1
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
  System_Collections_Generic_List_Enumerator_T__o v105[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v106; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v107; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v108; // [xsp+68h] [xbp-48h] BYREF

  v108 = this;
  v4 = this;
  if ( (byte_4A5D1F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1B885B0(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D1F7 = 1;
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
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    v4 = v108;
    byte_4A55CE1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v105,
    itemLinkInfoGroupList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v10 = v108;
  v11 = *(_OWORD *)&v105[0].fields._list;
  p__7__wrap2 = &v108->fields.__7__wrap2;
  v105[1] = v105[0];
  v108->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v105[0].fields._current;
  *(_OWORD *)&v10->fields.__7__wrap2.fields._list = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v13, v14);
  v108->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v108->fields.__7__wrap2,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v108, v16);
      v58 = v108;
      result = 0;
      v108->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v58->fields.__7__wrap2.fields._index = 0LL;
      v58->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v108->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1B8880C(v108, v16);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v19 )
    {
      v23 = (UnityEngine_Component_o *)current->fields.itemDetailObj;
      if ( !v23 )
        sub_1B8880C(v19, v20);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0LL);
      monitor = (int *)v23[1].monitor;
      if ( !monitor )
        sub_1B8880C(gameObject, v25);
      if ( !_4__this )
        sub_1B8880C(gameObject, v25);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v108->fields._basePosition_5__2.fields.x,
        v108->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
        v108->fields._basePosition_5__2.fields.z,
        v26);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v29 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v23, 0LL);
      v32 = v29;
      if ( !objectList )
        sub_1B8880C(v29, v29);
      items = objectList->fields._items;
      v34 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B8880C(v29, v29);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v29,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
      }
      v40 = (int *)v23[1].monitor;
      if ( !v40 )
        sub_1B8880C(v37, v38);
      v39 = v108;
      v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y - (float)v40[43];
    }
    else
    {
      v39 = v108;
    }
    viewItemList = current->fields.viewItemList;
    v39->fields._viewItemList_5__4 = viewItemList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v39->fields._viewItemList_5__4, (int32_t)viewItemList, v21, v22);
    viewItemList_5__4 = v108->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v44 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v44 )
      sub_1B8880C(this, method);
    v45 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    v48 = (int *)v44[1].monitor;
    if ( !v48 )
      sub_1B8880C(v45, v46);
    if ( !_4__this )
      sub_1B8880C(v45, v46);
    ItemLinkInfoListViewManager__InitTransform(
      v45,
      (UnityEngine_GameObject_o *)v45,
      v108->fields._basePosition_5__2.fields.x,
      v108->fields._basePosition_5__2.fields.y + (float)((float)v48[43] * -0.5),
      v108->fields._basePosition_5__2.fields.z,
      v47);
    v49 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v50 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v44, 0LL);
    v53 = v50;
    if ( !v49 )
      sub_1B8880C(v50, v50);
    v54 = v49->fields._items;
    v55 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v49->fields._version;
    if ( !v54 )
      sub_1B8880C(v50, v50);
    v56 = v49->fields._size;
    if ( (unsigned int)v56 >= v54->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        v50,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v49->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v53;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v53, v51, v52);
    }
    v59 = (int *)v44[1].monitor;
    if ( !v59 )
      sub_1B8880C(this, method);
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
    p_viewItemList_5__4 = (ServantStatusBattleListViewItem_o *)&v4->fields._viewItemList_5__4;
    v66 = (System_Collections_Generic_List_object__o *)v68;
    if ( !v68 )
      sub_1B8880C(this, method);
    if ( v60 >= v66->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1B88554(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v66,
             v60,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1B8880C(Item, v62);
    v63 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v65 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v65,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v4 = v108;
LABEL_64:
    v60 = v4->fields._i_5__5 + 1;
  }
  if ( !v65 )
    sub_1B8880C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v65,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v73 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1B8880C(0LL, v70);
  Component_object[3].klass = (Il2CppClass *)v63;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[3], (int32_t)v63, v71, v72);
  ItemLinkInfoListViewObject__SetupDisp(v73, v74);
  GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v65, _4__this->fields.listParent, 0LL);
  Height = ItemLinkInfoListViewObject__GetHeight(v73, v75);
  if ( !v63 )
    sub_1B8880C(v76, v77);
  v80 = Height;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE3(v63[9].monitor) )
    v82 = 0.0;
  else
    v82 = -1.0;
  if ( BYTE3(v63[9].monitor) )
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
    sub_1B8880C(0LL, v83);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v65, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1B8880C(0LL, v86);
  v90 = itemLinkInfoObjectList->fields._items;
  v91 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v90 )
    sub_1B8880C(itemLinkInfoObjectList, v86);
  v92 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v92 >= v90->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v73,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    itemLinkInfoObjectList->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v73;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v93 + 4), (int32_t)v73, v87, v88);
  }
  v97 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v97 )
    sub_1B8880C(0LL, v94);
  v98 = v97->fields._items;
  v99 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v97->fields._version;
  if ( !v98 )
    sub_1B8880C(v97, v94);
  v100 = v97->fields._size;
  if ( (unsigned int)v100 >= v98->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v97,
      v65,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = &v98->obj.klass + v100;
    v97->fields._size = v100 + 1;
    v101[4] = (Il2CppClass *)v65;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v101 + 4), (int32_t)v65, v95, v96);
  }
  v104 = v108;
  v108->fields._basePosition_5__2.fields.y = v108->fields._basePosition_5__2.fields.y
                                           - (float)(v80 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v104 = v108;
  }
  v104->fields.__2__current = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v104->fields.__2__current, 0, v102, v103);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  if ( (byte_4A5D1F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    byte_4A5D1F8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}