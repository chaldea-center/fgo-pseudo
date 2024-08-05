void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00726 & 1) == 0 )
  {
    sub_1B64870(&ItemLinkInfoListViewManager_TypeInfo, v1);
    byte_4A00726 = 1;
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
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A00725 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v4);
    sub_1B64870(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4A00725 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemLinkInfoObjectList, (int32_t)v9, v10, v11);
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

  if ( (byte_4A00721 & 1) == 0 )
  {
    sub_1B64870(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList);
    byte_4A00721 = 1;
  }
  v6 = sub_1B64ABC(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)itemLinkInfoGroupList, v9, v10);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x21
  const MethodInfo *v15; // x2
  UILabel_o *v16; // x21
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_4A0071F & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__, v5);
    sub_1B64870(&LocalizationManager_TypeInfo, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&StringLiteral_7396/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, v8);
    byte_4A0071F = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
                                                 v15);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0LL);
      v16 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7396/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v16 )
        goto LABEL_18;
      UILabel__set_text(v16, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v13);
        UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, v12);
      }
      return;
    }
LABEL_18:
    sub_1B64ACC(HasViewItem, v11);
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
  __int64 v22; // x1
  UnityEngine_Component_o **current; // x23
  System_Collections_Generic_List_object__o *klass; // x20
  _BOOL4 v25; // w24
  UnityEngine_Object_o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  UnityEngine_Component_o *v29; // x21
  int *monitor; // x8
  float v31; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_object__o *objectList; // x22
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  int *v45; // x8
  UnityEngine_Object_o *v46; // x21
  _BOOL8 v47; // x0
  __int64 v48; // x1
  UnityEngine_Component_o *v49; // x21
  ItemLinkInfoListViewManager_o *v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  int *v53; // x8
  System_Collections_Generic_List_object__o *v54; // x22
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x1
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  int *v65; // x8
  UnityEngine_Object_o *v66; // x21
  _BOOL8 v67; // x0
  __int64 v68; // x1
  UnityEngine_Component_o *v69; // x21
  ItemLinkInfoListViewManager_o *v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  int *v73; // x8
  System_Collections_Generic_List_object__o *v74; // x22
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x1
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  int *v83; // x8
  int32_t v84; // w21
  Il2CppObject *Item; // x24
  Il2CppObject *baseViewItemPrefab; // x22
  Il2CppObject *v87; // x22
  _BOOL8 v88; // x0
  __int64 v89; // x1
  Il2CppObject *Component_object; // x0
  __int64 v91; // x1
  int32_t v92; // w2
  int32_t v93; // w3
  ItemLinkInfoListViewObject_o *v94; // x23
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // x1
  ItemLinkInfoListViewManager_c *v97; // x0
  __int64 v98; // x1
  const MethodInfo *v99; // x2
  float Height; // s0
  float v101; // s10
  float BOARD_OFFSET_X; // s0
  float v103; // s13
  __int64 v104; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x8
  __int64 v115; // x1
  int32_t v116; // w2
  int32_t v117; // w3
  System_Collections_Generic_List_object__o *v118; // x0
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x8
  UIScrollView_o *scrollView; // x0
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+20h] [xbp-C0h] BYREF

  v4 = this;
  if ( (byte_4A00720 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v6);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v7);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v8);
    sub_1B64870(&ItemLinkInfoListViewManager_TypeInfo, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v11);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v12);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v14);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    this = (ItemLinkInfoListViewManager_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v16);
    byte_4A00720 = 1;
  }
  memset(&v125, 0, sizeof(v125));
  if ( !byte_49F9201 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, itemLinkInfoGroupList);
    byte_49F9201 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1B64ACC(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v125 = v124;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v125,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v21 )
      break;
    current = (UnityEngine_Component_o **)v125.fields._current;
    if ( !v125.fields._current )
      sub_1B64ACC(v21, v22);
    klass = (System_Collections_Generic_List_object__o *)v125.fields._current[3].klass;
    if ( klass )
      v25 = System_Linq_Enumerable__Any_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v125.fields._current[3].klass,
              (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    else
      v25 = 0;
    v26 = (UnityEngine_Object_o *)current[3];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( v27 )
    {
      v29 = current[3];
      if ( v25 )
      {
        if ( !v29 )
          sub_1B64ACC(v27, v28);
        monitor = (int *)v29[1].monitor;
        if ( !monitor )
          sub_1B64ACC(v27, v28);
        v31 = y + (float)((float)monitor[43] * -0.5);
      }
      else
      {
        v31 = y;
        if ( !v29 )
          sub_1B64ACC(v27, v28);
      }
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[3], 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, v31, z, v33);
      objectList = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
      v35 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v29, 0LL);
      v38 = v35;
      if ( !objectList )
        sub_1B64ACC(v35, v35);
      items = objectList->fields._items;
      v40 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B64ACC(v35, v35);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v35,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
      }
      v45 = (int *)v29[1].monitor;
      if ( !v45 )
        sub_1B64ACC(v43, v44);
      y = y - (float)v45[43];
    }
    if ( v25 )
    {
      v46 = (UnityEngine_Object_o *)current[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v47 = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
      if ( v47 )
      {
        v49 = current[4];
        if ( !v49 )
          sub_1B64ACC(v47, v48);
        v50 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[4], 0LL);
        v53 = (int *)v49[1].monitor;
        if ( !v53 )
          sub_1B64ACC(v50, v51);
        ItemLinkInfoListViewManager__InitTransform(
          v50,
          (UnityEngine_GameObject_o *)v50,
          x,
          (float)(y + (float)((float)v53[43] * -0.5)) + 1.0,
          z,
          v52);
        v54 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
        v55 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v49, 0LL);
        v58 = v55;
        if ( !v54 )
          sub_1B64ACC(v55, v55);
        v59 = v54->fields._items;
        v60 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v54->fields._version;
        if ( !v59 )
          sub_1B64ACC(v55, v55);
        v61 = v54->fields._size;
        if ( (unsigned int)v61 >= v59->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            v55,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &v59->obj.klass + v61;
          v54->fields._size = v61 + 1;
          v62[4] = (Il2CppClass *)v58;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v58, v56, v57);
        }
        v65 = (int *)v49[1].monitor;
        if ( !v65 )
          sub_1B64ACC(v63, v64);
        y = y - (float)v65[43];
      }
      v66 = (UnityEngine_Object_o *)current[5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v67 = UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
      if ( v67 )
      {
        v69 = current[5];
        if ( !v69 )
          sub_1B64ACC(v67, v68);
        v70 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(current[5], 0LL);
        v73 = (int *)v69[1].monitor;
        if ( !v73 )
          sub_1B64ACC(v70, v71);
        ItemLinkInfoListViewManager__InitTransform(
          v70,
          (UnityEngine_GameObject_o *)v70,
          x,
          y + (float)((float)v73[43] * -0.5),
          z,
          v72);
        v74 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
        v75 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v69, 0LL);
        v78 = v75;
        if ( !v74 )
          sub_1B64ACC(v75, v75);
        v79 = v74->fields._items;
        v80 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v74->fields._version;
        if ( !v79 )
          sub_1B64ACC(v75, v75);
        v81 = v74->fields._size;
        if ( (unsigned int)v81 >= v79->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            v75,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &v79->obj.klass + v81;
          v74->fields._size = v81 + 1;
          v82[4] = (Il2CppClass *)v78;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v78, v76, v77);
        }
        v83 = (int *)v69[1].monitor;
        if ( !v83 )
          sub_1B64ACC(v67, v68);
        y = y - (float)v83[43];
      }
      if ( !klass )
        sub_1B64ACC(v67, v68);
      if ( klass->fields._size >= 1 )
      {
        v84 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v84,
                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v4->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v87 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v88 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v87, 0LL, 0LL);
          if ( !v88 )
          {
            if ( !v87 )
              sub_1B64ACC(v88, v89);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v87,
                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v94 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1B64ACC(0LL, v91);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1B64814((ServantStatusBattleListViewItem_o *)&Component_object[3], (int32_t)Item, v92, v93);
            ItemLinkInfoListViewObject__SetupDisp(v94, v95);
            GameObjectExtensions__SetParent_33382212((UnityEngine_GameObject_o *)v87, v4->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v94, v96);
            if ( !Item )
              sub_1B64ACC(v97, v98);
            v101 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE2(Item[9].monitor) )
              v103 = 0.0;
            else
              v103 = -1.0;
            if ( BYTE2(Item[9].monitor) )
            {
              v97 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v97 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v97->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v97,
              (UnityEngine_GameObject_o *)v87,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v101 * 0.5) + v103),
              z,
              v99);
            listParent = v4->fields.listParent;
            if ( !listParent )
              sub_1B64ACC(0LL, v104);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v87, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1B64ACC(0LL, v107);
            v111 = itemLinkInfoObjectList->fields._items;
            v112 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v111 )
              sub_1B64ACC(itemLinkInfoObjectList, v107);
            v113 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v113 >= v111->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v94,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
            }
            else
            {
              v114 = &v111->obj.klass + v113;
              itemLinkInfoObjectList->fields._size = v113 + 1;
              v114[4] = (Il2CppClass *)v94;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v114 + 4), (int32_t)v94, v108, v109);
            }
            v118 = (System_Collections_Generic_List_object__o *)v4->fields.objectList;
            if ( !v118 )
              sub_1B64ACC(0LL, v115);
            v119 = v118->fields._items;
            v120 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v118->fields._version;
            if ( !v119 )
              sub_1B64ACC(v118, v115);
            v121 = v118->fields._size;
            if ( (unsigned int)v121 >= v119->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v118,
                v87,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
            }
            else
            {
              v122 = &v119->obj.klass + v121;
              v118->fields._size = v121 + 1;
              v122[4] = (Il2CppClass *)v87;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v87, v116, v117);
            }
            y = y - (float)(v101 + v4->fields.boardSpace);
          }
          ++v84;
        }
        while ( v84 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v125,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v4->fields.scrollView;
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

  if ( (byte_4A00724 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__, v5);
    byte_4A00724 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1B64ACC(0LL, v7);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
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

  if ( (byte_4A00722 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_4A00722 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64ACC(v9, v10);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1B64ACC(objectList, method);
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
  __int64 v9; // x1
  bool v10; // w19
  Il2CppClass *klass; // x0
  int v12; // w21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A00723 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    this = (ItemLinkInfoListViewManager_o *)sub_1B64870(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v7);
    byte_4A00723 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !itemLinkInfoGroupList )
    sub_1B64ACC(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v14.fields._current )
      sub_1B64ACC(v8, v9);
    klass = v14.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  GameObjectExtensions__SetLocalPosition_33376600(obj, x, y, z, 0LL);
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
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Component_o *v34; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v50; // x0
  int *v51; // x8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v55; // x19
  ItemLinkInfoListViewManager_o *v56; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x2
  int *v59; // x8
  System_Collections_Generic_List_object__o *v60; // x20
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
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
  ServantStatusBattleListViewItem_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v79; // t1
  Il2CppObject *Component_object; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
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
  int32_t v99; // w3
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x8
  __int64 v105; // x1
  int32_t v106; // w2
  int32_t v107; // w3
  System_Collections_Generic_List_object__o *v108; // x0
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x8
  int32_t v113; // w2
  int32_t v114; // w3
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v115; // x0
  System_Collections_Generic_List_Enumerator_T__o v116[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v117; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v118; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v119; // [xsp+68h] [xbp-48h] BYREF

  v119 = this;
  v4 = this;
  if ( (byte_4A00727 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v7);
    sub_1B64870(&ItemLinkInfoListViewManager_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v10);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v11);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v13);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v15);
    byte_4A00727 = 1;
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
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    v4 = v119;
    byte_49F9201 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v4->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v4->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v4->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1B64ACC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v116,
    itemLinkInfoGroupList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v21 = v119;
  v22 = *(_OWORD *)&v116[0].fields._list;
  p__7__wrap2 = &v119->fields.__7__wrap2;
  v116[1] = v116[0];
  v119->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v116[0].fields._current;
  *(_OWORD *)&v21->fields.__7__wrap2.fields._list = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v24, v25);
  v119->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v119->fields.__7__wrap2,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
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
      sub_1B64ACC(v119, v27);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v30 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v30 )
    {
      v34 = (UnityEngine_Component_o *)current->fields.itemDetailObj;
      if ( !v34 )
        sub_1B64ACC(v30, v31);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0LL);
      monitor = (int *)v34[1].monitor;
      if ( !monitor )
        sub_1B64ACC(gameObject, v36);
      if ( !_4__this )
        sub_1B64ACC(gameObject, v36);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v119->fields._basePosition_5__2.fields.x,
        v119->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
        v119->fields._basePosition_5__2.fields.z,
        v37);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v40 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v34, 0LL);
      v43 = v40;
      if ( !objectList )
        sub_1B64ACC(v40, v40);
      items = objectList->fields._items;
      v45 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1B64ACC(v40, v40);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v40,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v43;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v43, v41, v42);
      }
      v51 = (int *)v34[1].monitor;
      if ( !v51 )
        sub_1B64ACC(v48, v49);
      v50 = v119;
      v119->fields._basePosition_5__2.fields.y = v119->fields._basePosition_5__2.fields.y - (float)v51[43];
    }
    else
    {
      v50 = v119;
    }
    viewItemList = current->fields.viewItemList;
    v50->fields._viewItemList_5__4 = viewItemList;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v50->fields._viewItemList_5__4, (int32_t)viewItemList, v32, v33);
    viewItemList_5__4 = v119->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
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
      sub_1B64ACC(this, method);
    v56 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    v59 = (int *)v55[1].monitor;
    if ( !v59 )
      sub_1B64ACC(v56, v57);
    if ( !_4__this )
      sub_1B64ACC(v56, v57);
    ItemLinkInfoListViewManager__InitTransform(
      v56,
      (UnityEngine_GameObject_o *)v56,
      v119->fields._basePosition_5__2.fields.x,
      v119->fields._basePosition_5__2.fields.y + (float)((float)v59[43] * -0.5),
      v119->fields._basePosition_5__2.fields.z,
      v58);
    v60 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v61 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v55, 0LL);
    v64 = v61;
    if ( !v60 )
      sub_1B64ACC(v61, v61);
    v65 = v60->fields._items;
    v66 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v60->fields._version;
    if ( !v65 )
      sub_1B64ACC(v61, v61);
    v67 = v60->fields._size;
    if ( (unsigned int)v67 >= v65->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v60,
        v61,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v65->obj.klass + v67;
      v60->fields._size = v67 + 1;
      v68[4] = (Il2CppClass *)v64;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v64, v62, v63);
    }
    v70 = (int *)v55[1].monitor;
    if ( !v70 )
      sub_1B64ACC(this, method);
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
    p_viewItemList_5__4 = (ServantStatusBattleListViewItem_o *)&v4->fields._viewItemList_5__4;
    v77 = (System_Collections_Generic_List_object__o *)v79;
    if ( !v79 )
      sub_1B64ACC(this, method);
    if ( v71 >= v77->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1B64814(p_viewItemList_5__4, 0, v2, v3);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v77,
             v71,
             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1B64ACC(Item, v73);
    v74 = Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v76 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_1B64ACC(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v76,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v84 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1B64ACC(0LL, v81);
  Component_object[3].klass = (Il2CppClass *)v74;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&Component_object[3], (int32_t)v74, v82, v83);
  ItemLinkInfoListViewObject__SetupDisp(v84, v85);
  GameObjectExtensions__SetParent_33382212((UnityEngine_GameObject_o *)v76, _4__this->fields.listParent, 0LL);
  Height = ItemLinkInfoListViewObject__GetHeight(v84, v86);
  if ( !v74 )
    sub_1B64ACC(v87, v88);
  v91 = Height;
  BOARD_OFFSET_X = -1.0;
  if ( BYTE2(v74[9].monitor) )
    v93 = 0.0;
  else
    v93 = -1.0;
  if ( BYTE2(v74[9].monitor) )
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
    sub_1B64ACC(0LL, v94);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v76, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1B64ACC(0LL, v97);
  v101 = itemLinkInfoObjectList->fields._items;
  v102 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v101 )
    sub_1B64ACC(itemLinkInfoObjectList, v97);
  v103 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v103 >= v101->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v84,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = &v101->obj.klass + v103;
    itemLinkInfoObjectList->fields._size = v103 + 1;
    v104[4] = (Il2CppClass *)v84;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v104 + 4), (int32_t)v84, v98, v99);
  }
  v108 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v108 )
    sub_1B64ACC(0LL, v105);
  v109 = v108->fields._items;
  v110 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v108->fields._version;
  if ( !v109 )
    sub_1B64ACC(v108, v105);
  v111 = v108->fields._size;
  if ( (unsigned int)v111 >= v109->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v76,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &v109->obj.klass + v111;
    v108->fields._size = v111 + 1;
    v112[4] = (Il2CppClass *)v76;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v112 + 4), (int32_t)v76, v106, v107);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v115->fields.__2__current, 0, v113, v114);
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

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
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
  if ( (byte_4A00728 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method);
    byte_4A00728 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}