void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B68C34 & 1) == 0 )
  {
    sub_1BE4ACC(&ItemLinkInfoListViewManager_TypeInfo, v1);
    byte_4B68C34 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void __fastcall ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B68C33 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4B68C33 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v13;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.itemLinkInfoObjectList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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

  if ( (byte_4B68C2E & 1) == 0 )
  {
    sub_1BE4ACC(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList);
    byte_4B68C2E = 1;
  }
  v6 = sub_1BE4D18(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)itemLinkInfoGroupList, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4B68C2C & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_7570/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, v10);
    byte_4B68C2C = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7570/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v17 )
        goto LABEL_18;
      UILabel__set_text(v17, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v14);
        UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v14);
      }
      return;
    }
LABEL_18:
    sub_1BE4D28(HasViewItem, v13);
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  int *v51; // x8
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v53; // x23
  _BOOL8 v54; // x0
  __int64 v55; // x1
  ItemLinkInfoSubHeaderObject_o *v56; // x23
  UnityEngine_GameObject_o *v57; // x24
  float v58; // s1
  ItemLinkInfoListViewManager_o *v59; // x0
  const MethodInfo *v60; // x2
  System_Collections_Generic_List_object__o *v61; // x24
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  UnityEngine_Object_o *v74; // x23
  _BOOL8 v75; // x0
  __int64 v76; // x1
  UnityEngine_Component_o *v77; // x22
  UnityEngine_GameObject_o *v78; // x23
  float v79; // s1
  ItemLinkInfoListViewManager_o *v80; // x0
  const MethodInfo *v81; // x2
  System_Collections_Generic_List_object__o *v82; // x23
  Il2CppObject *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x1
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int32_t v95; // w22
  ItemLinkInfoListViewItem_o *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v98; // x23
  _BOOL8 v99; // x0
  __int64 v100; // x1
  Il2CppObject *Component_object; // x0
  __int64 v102; // x1
  ItemLinkInfoListViewObject_o *v103; // x24
  ItemLinkInfoListViewManager_c *v104; // x0
  __int64 v105; // x1
  const MethodInfo *v106; // x2
  float Height; // s0
  float v108; // s10
  float BOARD_OFFSET_X; // s0
  float v110; // s13
  __int64 v111; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v114; // x1
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x8
  __int64 v126; // x1
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  System_Collections_Generic_List_object__o *v133; // x0
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4B68C2D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v7);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v8);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v9);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v10);
    sub_1BE4ACC(&ItemLinkInfoListViewManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v13);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v16);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    this = (ItemLinkInfoListViewManager_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    byte_4B68C2D = 1;
  }
  memset(&v141, 0, sizeof(v141));
  if ( !byte_4B612E1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, itemLinkInfoGroupList);
    byte_4B612E1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1BE4D28(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v141 = v140;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v141,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v23 )
      break;
    current = v141.fields._current;
    if ( !v141.fields._current )
      sub_1BE4D28(v23, v24);
    monitor = (UnityEngine_Object_o *)v141.fields._current[1].monitor;
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
        sub_1BE4D28(v30, v31);
      v33 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v33, z, v35);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v37 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v29, 0LL);
      v44 = (int64_t)v37;
      if ( !objectList )
        sub_1BE4D28(v37, v37);
      items = objectList->fields._items;
      v46 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1BE4D28(v37, v37);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v37,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
      }
      v51 = (int *)v29[2].monitor;
      if ( !v51 )
        sub_1BE4D28(v49, v50);
      y = y - (float)(*(float *)&v29[3].fields.m_CachedPtr + (float)v51[43]);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v53 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v54 = UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
      if ( v54 )
      {
        v56 = (ItemLinkInfoSubHeaderObject_o *)current[2].klass;
        if ( !v56 )
          sub_1BE4D28(v54, v55);
        v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current[2].klass, 0LL);
        v58 = (float)(y + (float)(ItemLinkInfoSubHeaderObject__get_Height(v56, 0LL) * -0.5)) + 1.0;
        ItemLinkInfoListViewManager__InitTransform(v59, v57, x, v58, z, v60);
        v61 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v62 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v56, 0LL);
        v69 = (int64_t)v62;
        if ( !v61 )
          sub_1BE4D28(v62, v62);
        v70 = v61->fields._items;
        v71 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v61->fields._version;
        if ( !v70 )
          sub_1BE4D28(v62, v62);
        v72 = v61->fields._size;
        if ( (unsigned int)v72 >= v70->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            v62,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &v70->obj.klass + v72;
          v61->fields._size = v72 + 1;
          v73[4] = (Il2CppClass *)v69;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v73 + 4), v69, v63, v64, v65, v66, v67, v68);
        }
        y = y - ItemLinkInfoSubHeaderObject__get_Height(v56, 0LL);
      }
      v74 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v75 = UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
      if ( v75 )
      {
        v77 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v77 )
          sub_1BE4D28(v75, v76);
        v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
        v79 = y + (float)(ItemLinkInfoTextObject__get_Height((ItemLinkInfoTextObject_o *)v77, 0LL) * -0.5);
        ItemLinkInfoListViewManager__InitTransform(v80, v78, x, v79, z, v81);
        v82 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v83 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v77, 0LL);
        v90 = (int64_t)v83;
        if ( !v82 )
          sub_1BE4D28(v83, v83);
        v91 = v82->fields._items;
        v92 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v82->fields._version;
        if ( !v91 )
          sub_1BE4D28(v83, v83);
        v93 = v82->fields._size;
        if ( (unsigned int)v93 >= v91->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v82,
            v83,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = &v91->obj.klass + v93;
          v82->fields._size = v93 + 1;
          v94[4] = (Il2CppClass *)v90;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v94 + 4), v90, v84, v85, v86, v87, v88, v89);
        }
        y = y - ItemLinkInfoTextObject__get_Height((ItemLinkInfoTextObject_o *)v77, 0LL);
      }
      if ( klass->fields._size >= 1 )
      {
        v95 = 0;
        do
        {
          Item = (ItemLinkInfoListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 klass,
                                                 v95,
                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v98 = UnityEngine_Object__Instantiate_object_(
                  baseViewItemPrefab,
                  (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v99 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v98, 0LL, 0LL);
          if ( !v99 )
          {
            if ( !v98 )
              sub_1BE4D28(v99, v100);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v98,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v103 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1BE4D28(0LL, v102);
            ItemLinkInfoListViewObject__SetItem((ItemLinkInfoListViewObject_o *)Component_object, Item, 0LL);
            GameObjectExtensions__SetParent_34492620((UnityEngine_GameObject_o *)v98, v6->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v103, 0LL);
            if ( !Item )
              sub_1BE4D28(v104, v105);
            v108 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( Item->fields._IsItemGetInfoList_k__BackingField )
              v110 = 0.0;
            else
              v110 = -1.0;
            if ( Item->fields._IsItemGetInfoList_k__BackingField )
            {
              v104 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v104 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v104->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v104,
              (UnityEngine_GameObject_o *)v98,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v108 * 0.5) + v110),
              z,
              v106);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1BE4D28(0LL, v111);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v98, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1BE4D28(0LL, v114);
            v122 = itemLinkInfoObjectList->fields._items;
            v123 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v122 )
              sub_1BE4D28(itemLinkInfoObjectList, v114);
            v124 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v124 >= v122->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v103,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
            }
            else
            {
              v125 = &v122->obj.klass + v124;
              itemLinkInfoObjectList->fields._size = v124 + 1;
              v125[4] = (Il2CppClass *)v103;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v125 + 4), (int64_t)v103, v115, v116, v117, v118, v119, v120);
            }
            v133 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v133 )
              sub_1BE4D28(0LL, v126);
            v134 = v133->fields._items;
            v135 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v133->fields._version;
            if ( !v134 )
              sub_1BE4D28(v133, v126);
            v136 = v133->fields._size;
            if ( (unsigned int)v136 >= v134->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v133,
                v98,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
            }
            else
            {
              v137 = &v134->obj.klass + v136;
              v133->fields._size = v136 + 1;
              v137[4] = (Il2CppClass *)v98;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v137 + 4), (int64_t)v98, v127, v128, v129, v130, v131, v132);
            }
            y = y - (float)(v108 + v6->fields.boardSpace);
          }
          ++v95;
        }
        while ( v95 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v141,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B68C32 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__, v5);
    byte_4B68C32 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1BE4D28(0LL, v7);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v8.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
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

  if ( (byte_4B68C30 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B68C30 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1BE4D28(v9, v10);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1BE4D28(objectList, method);
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

  if ( (byte_4B68C2F & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1BE4ACC(
                                              &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___,
                                              itemLinkInfoGroup);
    byte_4B68C2F = 1;
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
                                                (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
        sub_1BE4D28(this, itemLinkInfoGroup);
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

  if ( (byte_4B68C31 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    this = (ItemLinkInfoListViewManager_o *)sub_1BE4ACC(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v7);
    byte_4B68C31 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !itemLinkInfoGroupList )
    sub_1BE4D28(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v14.fields._current )
      sub_1BE4D28(v8, v9);
    klass = v14.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  GameObjectExtensions__SetLocalPosition_34486896(obj, x, y, z, 0LL);
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
  __int64 v19; // x1
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v25; // x9
  __int128 v26; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool result; // w0
  const MethodInfo *v35; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct ItemLinkInfoDetailObject_o *v46; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  struct UIWidget_o *widget; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v66; // x0
  struct UILabel_o *itemDetailLabel; // x8
  int64_t viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  ItemLinkInfoTextObject_o *v71; // x19
  UnityEngine_GameObject_o *v72; // x20
  float x; // s8
  float y; // s9
  ItemLinkInfoListViewManager_o *v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x2
  float Height; // s0
  System_Collections_Generic_List_object__o *v79; // x20
  Il2CppObject *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x1
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v92; // x8
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v93; // x20
  float v94; // s8
  int32_t v95; // w8
  Il2CppObject *Item; // x0
  __int64 v97; // x1
  ItemLinkInfoListViewItem_o *v98; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v100; // x19
  System_Collections_Generic_List_object__o *v101; // x9
  PartyOrganizationUtility_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v103; // t1
  Il2CppObject *Component_object; // x0
  __int64 v105; // x1
  ItemLinkInfoListViewObject_o *v106; // x20
  ItemLinkInfoListViewManager_c *v107; // x0
  __int64 v108; // x1
  const MethodInfo *v109; // x2
  float v110; // s0
  float v111; // s8
  float BOARD_OFFSET_X; // s0
  float v113; // s9
  __int64 v114; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x8
  __int64 v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  System_Collections_Generic_List_object__o *v136; // x0
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x8
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v147; // x0
  System_Collections_Generic_List_Enumerator_T__o v148[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v149; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v150; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v151; // [xsp+68h] [xbp-48h] BYREF

  v151 = this;
  v8 = this;
  if ( (byte_4B68C35 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v9);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v10);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v11);
    sub_1BE4ACC(&ItemLinkInfoListViewManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v14);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v17);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v19);
    byte_4B68C35 = 1;
  }
  v149 = 0LL;
  v150 = &v151;
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
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, method);
    v8 = v151;
    byte_4B612E1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v8->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v8->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v8->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1BE4D28(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v148,
    itemLinkInfoGroupList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v25 = v151;
  v26 = *(_OWORD *)&v148[0].fields._list;
  p__7__wrap2 = &v151->fields.__7__wrap2;
  v148[1] = v148[0];
  v151->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v148[0].fields._current;
  *(_OWORD *)&v25->fields.__7__wrap2.fields._list = v26;
  sub_1BE4A70((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v28, v29, v30, v31, v32, v33);
  v151->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v151->fields.__7__wrap2,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v151, v35);
      v92 = v151;
      result = 0;
      v151->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v92->fields.__7__wrap2.fields._index = 0LL;
      v92->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v151->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1BE4D28(v151, v35);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v38 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v38 )
    {
      v46 = current->fields.itemDetailObj;
      if ( !v46 )
        sub_1BE4D28(v38, v39);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0LL);
      widget = v46->fields.widget;
      if ( !widget )
        sub_1BE4D28(gameObject, v48);
      if ( !_4__this )
        sub_1BE4D28(gameObject, v48);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v151->fields._basePosition_5__2.fields.x,
        v151->fields._basePosition_5__2.fields.y + (float)((float)widget->fields.mHeight * -0.5),
        v151->fields._basePosition_5__2.fields.z,
        v49);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v52 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0LL);
      v59 = (int64_t)v52;
      if ( !objectList )
        sub_1BE4D28(v52, v52);
      items = objectList->fields._items;
      v61 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1BE4D28(v52, v52);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v52,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v59;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v63 + 4), v59, v53, v54, v55, v56, v57, v58);
      }
      itemDetailLabel = v46->fields.itemDetailLabel;
      if ( !itemDetailLabel )
        sub_1BE4D28(v64, v65);
      v66 = v151;
      v151->fields._basePosition_5__2.fields.y = v151->fields._basePosition_5__2.fields.y
                                               - (float)(v46->fields.itemDetailLabelMargin
                                                       + (float)itemDetailLabel->fields.mHeight);
    }
    else
    {
      v66 = v151;
    }
    viewItemList = (int64_t)current->fields.viewItemList;
    v66->fields._viewItemList_5__4 = (struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)viewItemList;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v66->fields._viewItemList_5__4,
      viewItemList,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    viewItemList_5__4 = v151->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v71 = current->fields.listDescriptionObj;
    if ( !v71 )
      sub_1BE4D28(this, method);
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current->fields.listDescriptionObj, 0LL);
    x = v151->fields._basePosition_5__2.fields.x;
    y = v151->fields._basePosition_5__2.fields.y;
    Height = ItemLinkInfoTextObject__get_Height(v71, 0LL);
    if ( !_4__this )
      sub_1BE4D28(v75, v76);
    ItemLinkInfoListViewManager__InitTransform(
      v75,
      v72,
      x,
      y + (float)(Height * -0.5),
      v151->fields._basePosition_5__2.fields.z,
      v77);
    v79 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v80 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v71, 0LL);
    v87 = (int64_t)v80;
    if ( !v79 )
      sub_1BE4D28(v80, v80);
    v88 = v79->fields._items;
    v89 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v79->fields._version;
    if ( !v88 )
      sub_1BE4D28(v80, v80);
    v90 = v79->fields._size;
    if ( (unsigned int)v90 >= v88->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v79,
        v80,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->obj.klass + v90;
      v79->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v87;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v91 + 4), v87, v81, v82, v83, v84, v85, v86);
    }
    v93 = v151;
    v94 = v151->fields._basePosition_5__2.fields.y;
    v93->fields._basePosition_5__2.fields.y = v94 - ItemLinkInfoTextObject__get_Height(v71, 0LL);
  }
  v8 = v151;
  v95 = 0;
  v151->fields._i_5__5 = 0;
  while ( 1 )
  {
    v103 = v8->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (PartyOrganizationUtility_o *)&v8->fields._viewItemList_5__4;
    v101 = (System_Collections_Generic_List_object__o *)v103;
    if ( !v103 )
      sub_1BE4D28(this, method);
    if ( v95 >= v101->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1BE4A70(p_viewItemList_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v101,
             v95,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1BE4D28(Item, v97);
    v98 = (ItemLinkInfoListViewItem_o *)Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v100 = UnityEngine_Object__Instantiate_object_(
             baseViewItemPrefab,
             (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v100,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v8 = v151;
LABEL_59:
    v95 = v8->fields._i_5__5 + 1;
    v8->fields._i_5__5 = v95;
  }
  if ( !v100 )
    sub_1BE4D28(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v100,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v106 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1BE4D28(0LL, v105);
  ItemLinkInfoListViewObject__SetItem((ItemLinkInfoListViewObject_o *)Component_object, v98, 0LL);
  GameObjectExtensions__SetParent_34492620((UnityEngine_GameObject_o *)v100, _4__this->fields.listParent, 0LL);
  v110 = ItemLinkInfoListViewObject__GetHeight(v106, 0LL);
  if ( !v98 )
    sub_1BE4D28(v107, v108);
  v111 = v110;
  BOARD_OFFSET_X = -1.0;
  if ( v98->fields._IsItemGetInfoList_k__BackingField )
    v113 = 0.0;
  else
    v113 = -1.0;
  if ( v98->fields._IsItemGetInfoList_k__BackingField )
  {
    v107 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v107 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v107->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v107,
    (UnityEngine_GameObject_o *)v100,
    BOARD_OFFSET_X + v151->fields._basePosition_5__2.fields.x,
    v151->fields._basePosition_5__2.fields.y - (float)((float)(v111 * 0.5) + v113),
    v151->fields._basePosition_5__2.fields.z,
    v109);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1BE4D28(0LL, v114);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v100, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1BE4D28(0LL, v117);
  v125 = itemLinkInfoObjectList->fields._items;
  v126 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v125 )
    sub_1BE4D28(itemLinkInfoObjectList, v117);
  v127 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v127 >= v125->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v106,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v128 = &v125->obj.klass + v127;
    itemLinkInfoObjectList->fields._size = v127 + 1;
    v128[4] = (Il2CppClass *)v106;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v128 + 4), (int64_t)v106, v118, v119, v120, v121, v122, v123);
  }
  v136 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v136 )
    sub_1BE4D28(0LL, v129);
  v137 = v136->fields._items;
  v138 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v136->fields._version;
  if ( !v137 )
    sub_1BE4D28(v136, v129);
  v139 = v136->fields._size;
  if ( (unsigned int)v139 >= v137->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v136,
      v100,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v140 = &v137->obj.klass + v139;
    v136->fields._size = v139 + 1;
    v140[4] = (Il2CppClass *)v100;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v140 + 4), (int64_t)v100, v130, v131, v132, v133, v134, v135);
  }
  v147 = v151;
  v151->fields._basePosition_5__2.fields.y = v151->fields._basePosition_5__2.fields.y
                                           - (float)(v111 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v147 = v151;
  }
  v147->fields.__2__current = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v147->fields.__2__current, 0LL, v141, v142, v143, v144, v145, v146);
  result = 1;
  v151->fields.__1__state = 1;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  if ( (byte_4B68C36 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method);
    byte_4B68C36 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}