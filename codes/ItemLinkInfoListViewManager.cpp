void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BDEF40 & 1) == 0 )
  {
    sub_1C21E38(&ItemLinkInfoListViewManager_TypeInfo);
    byte_4BDEF40 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void __fastcall ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDEF3F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BDEF3F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.itemLinkInfoObjectList,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


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

  if ( (byte_4BDEF3A & 1) == 0 )
  {
    sub_1C21E38(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
    byte_4BDEF3A = 1;
  }
  v6 = sub_1C22084(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)itemLinkInfoGroupList, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall ItemLinkInfoListViewManager__CreateList(
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

  if ( (byte_4BDEF38 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_7603/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/);
    byte_4BDEF38 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
                                                 v12);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0LL);
      v13 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7603/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v13 )
        goto LABEL_18;
      UILabel__set_text(v13, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v10);
        UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v10);
      }
      return;
    }
LABEL_18:
    sub_1C22094(HasViewItem, v9);
  }
}


void __fastcall ItemLinkInfoListViewManager__CreateListSub(
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_object__o *klass; // x21
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  int *v61; // x8
  UnityEngine_Object_o *v62; // x23
  _BOOL8 v63; // x0
  __int64 v64; // x1
  UnityEngine_Component_o *v65; // x22
  ItemLinkInfoListViewManager_o *v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  int *v69; // x8
  System_Collections_Generic_List_object__o *v70; // x23
  Il2CppObject *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
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
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  ItemLinkInfoListViewObject_o *v100; // x24
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  ItemLinkInfoListViewManager_c *v103; // x0
  __int64 v104; // x1
  const MethodInfo *v105; // x2
  float Height; // s0
  float v107; // s10
  float BOARD_OFFSET_X; // s0
  float v109; // s13
  __int64 v110; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v113; // x1
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x8
  __int64 v125; // x1
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  System_Collections_Generic_List_object__o *v132; // x0
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4BDEF39 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C21E38(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEF39 = 1;
  }
  memset(&v140, 0, sizeof(v140));
  if ( !byte_4BD6BB1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1C22094(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v140 = v139;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v140,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v11 )
      break;
    current = v140.fields._current;
    if ( !v140.fields._current )
      sub_1C22094(v11, v12);
    monitor = (UnityEngine_Object_o *)v140.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( v15 )
    {
      v17 = (UnityEngine_Component_o *)current[1].monitor;
      ItemDetailOffsetPositionY = ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
                                    (ItemLinkInfoListViewManager_o *)v15,
                                    (ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current,
                                    isDispStoneDetaila,
                                    v16);
      if ( !v17 )
        sub_1C22094(v18, v19);
      v21 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v21, z, v23);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v25 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v17, 0LL);
      v32 = (int64_t)v25;
      if ( !objectList )
        sub_1C22094(v25, v25);
      items = objectList->fields._items;
      v34 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C22094(v25, v25);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v25,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
      y = y - ItemLinkInfoDetailObject__get_AreaHeight((ItemLinkInfoDetailObject_o *)v17, 0LL);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v38 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v39 = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( v39 )
      {
        v41 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v41 )
          sub_1C22094(v39, v40);
        v42 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0LL);
        v45 = (int *)v41[1].monitor;
        if ( !v45 )
          sub_1C22094(v42, v43);
        ItemLinkInfoListViewManager__InitTransform(
          v42,
          (UnityEngine_GameObject_o *)v42,
          x,
          (float)(y + (float)((float)v45[43] * -0.5)) + 1.0,
          z,
          v44);
        v46 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v47 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v41, 0LL);
        v54 = (int64_t)v47;
        if ( !v46 )
          sub_1C22094(v47, v47);
        v55 = v46->fields._items;
        v56 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v46->fields._version;
        if ( !v55 )
          sub_1C22094(v47, v47);
        v57 = v46->fields._size;
        if ( (unsigned int)v57 >= v55->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            v47,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          v46->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v54;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v58 + 4), v54, v48, v49, v50, v51, v52, v53);
        }
        v61 = (int *)v41[1].monitor;
        if ( !v61 )
          sub_1C22094(v59, v60);
        y = y - (float)v61[43];
      }
      v62 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v63 = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
      if ( v63 )
      {
        v65 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v65 )
          sub_1C22094(v63, v64);
        v66 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v65, 0LL);
        v69 = (int *)v65[1].monitor;
        if ( !v69 )
          sub_1C22094(v66, v67);
        ItemLinkInfoListViewManager__InitTransform(
          v66,
          (UnityEngine_GameObject_o *)v66,
          x,
          y + (float)((float)v69[43] * -0.5),
          z,
          v68);
        v70 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v71 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v65, 0LL);
        v78 = (int64_t)v71;
        if ( !v70 )
          sub_1C22094(v71, v71);
        v79 = v70->fields._items;
        v80 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v70->fields._version;
        if ( !v79 )
          sub_1C22094(v71, v71);
        v81 = v70->fields._size;
        if ( (unsigned int)v81 >= v79->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            v71,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &v79->obj.klass + v81;
          v70->fields._size = v81 + 1;
          v82[4] = (Il2CppClass *)v78;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v82 + 4), v78, v72, v73, v74, v75, v76, v77);
        }
        v85 = (int *)v65[1].monitor;
        if ( !v85 )
          sub_1C22094(v83, v84);
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
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v89 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v90 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v89, 0LL, 0LL);
          if ( !v90 )
          {
            if ( !v89 )
              sub_1C22094(v90, v91);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v89,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v100 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1C22094(0LL, v93);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1C21DDC((PartyOrganizationUtility_o *)&Component_object[3], (int64_t)Item, v94, v95, v96, v97, v98, v99);
            ItemLinkInfoListViewObject__SetupDisp(v100, v101);
            GameObjectExtensions__SetParent_34803496((UnityEngine_GameObject_o *)v89, v6->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v100, v102);
            if ( !Item )
              sub_1C22094(v103, v104);
            v107 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[9].monitor) )
              v109 = 0.0;
            else
              v109 = -1.0;
            if ( BYTE3(Item[9].monitor) )
            {
              v103 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
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
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1C22094(0LL, v110);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v89, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1C22094(0LL, v113);
            v121 = itemLinkInfoObjectList->fields._items;
            v122 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v121 )
              sub_1C22094(itemLinkInfoObjectList, v113);
            v123 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v123 >= v121->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v100,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
            }
            else
            {
              v124 = &v121->obj.klass + v123;
              itemLinkInfoObjectList->fields._size = v123 + 1;
              v124[4] = (Il2CppClass *)v100;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v124 + 4), (int64_t)v100, v114, v115, v116, v117, v118, v119);
            }
            v132 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v132 )
              sub_1C22094(0LL, v125);
            v133 = v132->fields._items;
            v134 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v132->fields._version;
            if ( !v133 )
              sub_1C22094(v132, v125);
            v135 = v132->fields._size;
            if ( (unsigned int)v135 >= v133->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v132,
                v89,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
            }
            else
            {
              v136 = &v133->obj.klass + v135;
              v132->fields._size = v135 + 1;
              v136[4] = (Il2CppClass *)v89;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v136 + 4), (int64_t)v89, v126, v127, v128, v129, v130, v131);
            }
            y = y - (float)(v107 + v6->fields.boardSpace);
          }
          ++v86;
        }
        while ( v86 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v6->fields.scrollView;
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

  if ( (byte_4BDEF3E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    byte_4BDEF3E = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C22094(0LL, v4);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
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

  if ( (byte_4BDEF3C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEF3C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C22094(v4, v5);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1C22094(objectList, method);
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

  if ( (byte_4BDEF3B & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C21E38(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    byte_4BDEF3B = 1;
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
                                                (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( itemDetailObj )
        {
          Height = ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0LL);
          v9 = -0.5;
          return Height * v9;
        }
LABEL_14:
        sub_1C22094(this, itemLinkInfoGroup);
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
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19
  Il2CppClass *klass; // x0
  int v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDEF3D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    this = (ItemLinkInfoListViewManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    byte_4BDEF3D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !itemLinkInfoGroupList )
    sub_1C22094(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v10.fields._current )
      sub_1C22094(v4, v5);
    klass = v10.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v8 = 4;
      goto LABEL_11;
    }
  }
  v8 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  GameObjectExtensions__SetLocalPosition_34797772(obj, x, y, z, 0LL);
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
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v14; // x9
  __int128 v15; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  const MethodInfo *v24; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v56; // x20
  float v57; // s8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v59; // x0
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v62; // x19
  ItemLinkInfoListViewManager_o *v63; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v67; // x20
  Il2CppObject *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v80; // x8
  int *v81; // x8
  int32_t v82; // w8
  Il2CppObject *Item; // x0
  __int64 v84; // x1
  int64_t v85; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v87; // x19
  System_Collections_Generic_List_object__o *v88; // x9
  PartyOrganizationUtility_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v90; // t1
  Il2CppObject *Component_object; // x0
  __int64 v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  ItemLinkInfoListViewObject_o *v99; // x20
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x1
  ItemLinkInfoListViewManager_c *v102; // x0
  __int64 v103; // x1
  const MethodInfo *v104; // x2
  float v105; // s0
  float v106; // s8
  float BOARD_OFFSET_X; // s0
  float v108; // s9
  __int64 v109; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x8
  __int64 v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Collections_Generic_List_object__o *v131; // x0
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x8
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v142; // x0
  System_Collections_Generic_List_Enumerator_T__o v143[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v144; // [xsp+38h] [xbp-78h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v145; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v146; // [xsp+48h] [xbp-68h] BYREF

  v8 = this;
  v146 = this;
  if ( (byte_4BDEF41 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
    sub_1C21E38(&ItemLinkInfoListViewManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEF41 = 1;
  }
  v144 = 0LL;
  v145 = &v146;
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
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v8 = v146;
    byte_4BD6BB1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v8->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v8->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v8->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v143,
    itemLinkInfoGroupList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v14 = v146;
  v15 = *(_OWORD *)&v143[0].fields._list;
  p__7__wrap2 = &v146->fields.__7__wrap2;
  v143[1] = v143[0];
  v146->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v143[0].fields._current;
  *(_OWORD *)&v14->fields.__7__wrap2.fields._list = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v17, v18, v19, v20, v21, v22);
  v146->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v146->fields.__7__wrap2,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v146, v24);
      v80 = v146;
      result = 0;
      v146->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v80->fields.__7__wrap2.fields._index = 0LL;
      v80->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v146->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1C22094(v146, v24);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v27 )
    {
      v35 = current->fields.itemDetailObj;
      if ( !v35 )
        sub_1C22094(v27, v28);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current->fields.itemDetailObj, 0LL);
      x = v146->fields._basePosition_5__2.fields.x;
      y = v146->fields._basePosition_5__2.fields.y;
      Height = ItemLinkInfoDetailObject__get_Height(v35, 0LL);
      if ( !_4__this )
        sub_1C22094(v39, v40);
      ItemLinkInfoListViewManager__InitTransform(
        v39,
        gameObject,
        x,
        y + (float)(Height * -0.5),
        v146->fields._basePosition_5__2.fields.z,
        v41);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v44 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
      v51 = (int64_t)v44;
      if ( !objectList )
        sub_1C22094(v44, v44);
      items = objectList->fields._items;
      v53 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C22094(v44, v44);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v44,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v55[4] = (Il2CppClass *)v51;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v55 + 4), v51, v45, v46, v47, v48, v49, v50);
      }
      v56 = v146;
      v57 = v146->fields._basePosition_5__2.fields.y;
      v56->fields._basePosition_5__2.fields.y = v57 - ItemLinkInfoDetailObject__get_AreaHeight(v35, 0LL);
    }
    viewItemList = current->fields.viewItemList;
    v59 = v146;
    v146->fields._viewItemList_5__4 = viewItemList;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v59->fields._viewItemList_5__4,
      (int64_t)viewItemList,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    viewItemList_5__4 = v146->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v62 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v62 )
      sub_1C22094(this, method);
    v63 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    monitor = (int *)v62[1].monitor;
    if ( !monitor )
      sub_1C22094(v63, v64);
    if ( !_4__this )
      sub_1C22094(v63, v64);
    ItemLinkInfoListViewManager__InitTransform(
      v63,
      (UnityEngine_GameObject_o *)v63,
      v146->fields._basePosition_5__2.fields.x,
      v146->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v146->fields._basePosition_5__2.fields.z,
      v65);
    v67 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v68 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v62, 0LL);
    v75 = (int64_t)v68;
    if ( !v67 )
      sub_1C22094(v68, v68);
    v76 = v67->fields._items;
    v77 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v67->fields._version;
    if ( !v76 )
      sub_1C22094(v68, v68);
    v78 = v67->fields._size;
    if ( (unsigned int)v78 >= v76->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v67,
        v68,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &v76->obj.klass + v78;
      v67->fields._size = v78 + 1;
      v79[4] = (Il2CppClass *)v75;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v79 + 4), v75, v69, v70, v71, v72, v73, v74);
    }
    v81 = (int *)v62[1].monitor;
    if ( !v81 )
      sub_1C22094(this, method);
    v8 = v146;
    v146->fields._basePosition_5__2.fields.y = v146->fields._basePosition_5__2.fields.y - (float)v81[43];
  }
  else
  {
    v8 = v146;
  }
  v82 = 0;
  for ( v8->fields._i_5__5 = 0; ; v8->fields._i_5__5 = v82 )
  {
    v90 = v8->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (PartyOrganizationUtility_o *)&v8->fields._viewItemList_5__4;
    v88 = (System_Collections_Generic_List_object__o *)v90;
    if ( !v90 )
      sub_1C22094(this, method);
    if ( v82 >= v88->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1C21DDC(p_viewItemList_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v88,
             v82,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1C22094(Item, v84);
    v85 = (int64_t)Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v87 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v87,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v8 = v146;
LABEL_59:
    v82 = v8->fields._i_5__5 + 1;
  }
  if ( !v87 )
    sub_1C22094(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v87,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v99 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1C22094(0LL, v92);
  Component_object[3].klass = (Il2CppClass *)v85;
  sub_1C21DDC((PartyOrganizationUtility_o *)&Component_object[3], v85, v93, v94, v95, v96, v97, v98);
  ItemLinkInfoListViewObject__SetupDisp(v99, v100);
  GameObjectExtensions__SetParent_34803496((UnityEngine_GameObject_o *)v87, _4__this->fields.listParent, 0LL);
  v105 = ItemLinkInfoListViewObject__GetHeight(v99, v101);
  if ( !v85 )
    sub_1C22094(v102, v103);
  v106 = v105;
  BOARD_OFFSET_X = -1.0;
  if ( *(_BYTE *)(v85 + 155) )
    v108 = 0.0;
  else
    v108 = -1.0;
  if ( *(_BYTE *)(v85 + 155) )
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
    (UnityEngine_GameObject_o *)v87,
    BOARD_OFFSET_X + v146->fields._basePosition_5__2.fields.x,
    v146->fields._basePosition_5__2.fields.y - (float)((float)(v106 * 0.5) + v108),
    v146->fields._basePosition_5__2.fields.z,
    v104);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1C22094(0LL, v109);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v87, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1C22094(0LL, v112);
  v120 = itemLinkInfoObjectList->fields._items;
  v121 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v120 )
    sub_1C22094(itemLinkInfoObjectList, v112);
  v122 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v122 >= v120->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v99,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    v123 = &v120->obj.klass + v122;
    itemLinkInfoObjectList->fields._size = v122 + 1;
    v123[4] = (Il2CppClass *)v99;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v123 + 4), (int64_t)v99, v113, v114, v115, v116, v117, v118);
  }
  v131 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v131 )
    sub_1C22094(0LL, v124);
  v132 = v131->fields._items;
  v133 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v131->fields._version;
  if ( !v132 )
    sub_1C22094(v131, v124);
  v134 = v131->fields._size;
  if ( (unsigned int)v134 >= v132->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v131,
      v87,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = &v132->obj.klass + v134;
    v131->fields._size = v134 + 1;
    v135[4] = (Il2CppClass *)v87;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v135 + 4), (int64_t)v87, v125, v126, v127, v128, v129, v130);
  }
  v142 = v146;
  v146->fields._basePosition_5__2.fields.y = v146->fields._basePosition_5__2.fields.y
                                           - (float)(v106 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v142 = v146;
  }
  v142->fields.__2__current = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v142->fields.__2__current, 0LL, v136, v137, v138, v139, v140, v141);
  result = 1;
  v146->fields.__1__state = 1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  if ( (byte_4BDEF42 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
    byte_4BDEF42 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}