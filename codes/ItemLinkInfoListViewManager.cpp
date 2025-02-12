void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB70AE & 1) == 0 )
  {
    sub_1C13D24(&ItemLinkInfoListViewManager_TypeInfo, v1);
    byte_4BB70AE = 1;
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

  if ( (byte_4BB70AD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4BB70AD = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v13;
  sub_1C13CC8(
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

  if ( (byte_4BB70A8 & 1) == 0 )
  {
    sub_1C13D24(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList);
    byte_4BB70A8 = 1;
  }
  v6 = sub_1C13F70(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)itemLinkInfoGroupList, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BB70A6 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__, v7);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_7590/*"ISerializable type '{0}' does not have a valid constructor. To correctly implement ISerializable a constructor that takes SerializationInfo and StreamingContext parameters should be present."*/, v10);
    byte_4BB70A6 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
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
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7590/*"ISerializable type '{0}' does not have a valid constructor. To correctly implement ISerializable a constructor that takes SerializationInfo and StreamingContext parameters should be present."*/, 0LL);
      if ( !v17 )
        goto LABEL_18;
      UILabel__set_text(v17, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v14);
        UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v14);
      }
      return;
    }
LABEL_18:
    sub_1C13F80(HasViewItem, v13);
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
  System_Collections_Generic_List_object__o *klass; // x21
  UnityEngine_Object_o *v50; // x23
  _BOOL8 v51; // x0
  __int64 v52; // x1
  UnityEngine_Component_o *v53; // x23
  ItemLinkInfoListViewManager_o *v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  int *v57; // x8
  System_Collections_Generic_List_object__o *v58; // x24
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  int *v73; // x8
  UnityEngine_Object_o *v74; // x23
  _BOOL8 v75; // x0
  __int64 v76; // x1
  UnityEngine_Component_o *v77; // x22
  ItemLinkInfoListViewManager_o *v78; // x0
  __int64 v79; // x1
  const MethodInfo *v80; // x2
  int *v81; // x8
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
  __int64 v95; // x0
  __int64 v96; // x1
  int *v97; // x8
  int32_t v98; // w22
  Il2CppObject *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v101; // x23
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppObject *Component_object; // x0
  __int64 v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  ItemLinkInfoListViewObject_o *v112; // x24
  const MethodInfo *v113; // x1
  const MethodInfo *v114; // x1
  ItemLinkInfoListViewManager_c *v115; // x0
  __int64 v116; // x1
  const MethodInfo *v117; // x2
  float Height; // s0
  float v119; // s10
  float BOARD_OFFSET_X; // s0
  float v121; // s13
  __int64 v122; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v125; // x1
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x8
  __int64 v137; // x1
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  System_Collections_Generic_List_object__o *v144; // x0
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  Il2CppClass **v148; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4BB70A7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v7);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v8);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v9);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v10);
    sub_1C13D24(&ItemLinkInfoListViewManager_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v16);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    this = (ItemLinkInfoListViewManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v18);
    byte_4BB70A7 = 1;
  }
  memset(&v152, 0, sizeof(v152));
  if ( !byte_4BAEDA1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, itemLinkInfoGroupList);
    byte_4BAEDA1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1C13F80(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v151,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v152 = v151;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v152,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v23 )
      break;
    current = v152.fields._current;
    if ( !v152.fields._current )
      sub_1C13F80(v23, v24);
    monitor = (UnityEngine_Object_o *)v152.fields._current[1].monitor;
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
        sub_1C13F80(v30, v31);
      v33 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v33, z, v35);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v37 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v29, 0LL);
      v44 = (int64_t)v37;
      if ( !objectList )
        sub_1C13F80(v37, v37);
      items = objectList->fields._items;
      v46 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C13F80(v37, v37);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v37,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
      }
      y = y - ItemLinkInfoDetailObject__get_AreaHeight((ItemLinkInfoDetailObject_o *)v29, 0LL);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v50 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v51 = UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
      if ( v51 )
      {
        v53 = (UnityEngine_Component_o *)current[2].klass;
        if ( !v53 )
          sub_1C13F80(v51, v52);
        v54 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)current[2].klass,
                                                 0LL);
        v57 = (int *)v53[1].monitor;
        if ( !v57 )
          sub_1C13F80(v54, v55);
        ItemLinkInfoListViewManager__InitTransform(
          v54,
          (UnityEngine_GameObject_o *)v54,
          x,
          (float)(y + (float)((float)v57[43] * -0.5)) + 1.0,
          z,
          v56);
        v58 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v59 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v53, 0LL);
        v66 = (int64_t)v59;
        if ( !v58 )
          sub_1C13F80(v59, v59);
        v67 = v58->fields._items;
        v68 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v58->fields._version;
        if ( !v67 )
          sub_1C13F80(v59, v59);
        v69 = v58->fields._size;
        if ( (unsigned int)v69 >= v67->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            v59,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v67->obj.klass + v69;
          v58->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)v66;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v70 + 4), v66, v60, v61, v62, v63, v64, v65);
        }
        v73 = (int *)v53[1].monitor;
        if ( !v73 )
          sub_1C13F80(v71, v72);
        y = y - (float)v73[43];
      }
      v74 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v75 = UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
      if ( v75 )
      {
        v77 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v77 )
          sub_1C13F80(v75, v76);
        v78 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v77, 0LL);
        v81 = (int *)v77[1].monitor;
        if ( !v81 )
          sub_1C13F80(v78, v79);
        ItemLinkInfoListViewManager__InitTransform(
          v78,
          (UnityEngine_GameObject_o *)v78,
          x,
          y + (float)((float)v81[43] * -0.5),
          z,
          v80);
        v82 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v83 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v77, 0LL);
        v90 = (int64_t)v83;
        if ( !v82 )
          sub_1C13F80(v83, v83);
        v91 = v82->fields._items;
        v92 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v82->fields._version;
        if ( !v91 )
          sub_1C13F80(v83, v83);
        v93 = v82->fields._size;
        if ( (unsigned int)v93 >= v91->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v82,
            v83,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = &v91->obj.klass + v93;
          v82->fields._size = v93 + 1;
          v94[4] = (Il2CppClass *)v90;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v94 + 4), v90, v84, v85, v86, v87, v88, v89);
        }
        v97 = (int *)v77[1].monitor;
        if ( !v97 )
          sub_1C13F80(v95, v96);
        y = y - (float)v97[43];
      }
      if ( klass->fields._size >= 1 )
      {
        v98 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   klass,
                   v98,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v101 = UnityEngine_Object__Instantiate_object_(
                   baseViewItemPrefab,
                   (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v102 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v101, 0LL, 0LL);
          if ( !v102 )
          {
            if ( !v101 )
              sub_1C13F80(v102, v103);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v101,
                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v112 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1C13F80(0LL, v105);
            Component_object[3].klass = (Il2CppClass *)Item;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&Component_object[3],
              (int64_t)Item,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111);
            ItemLinkInfoListViewObject__SetupDisp(v112, v113);
            GameObjectExtensions__SetParent_34717612((UnityEngine_GameObject_o *)v101, v6->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v112, v114);
            if ( !Item )
              sub_1C13F80(v115, v116);
            v119 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( BYTE3(Item[9].monitor) )
              v121 = 0.0;
            else
              v121 = -1.0;
            if ( BYTE3(Item[9].monitor) )
            {
              v115 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
                v115 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v115->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v115,
              (UnityEngine_GameObject_o *)v101,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v119 * 0.5) + v121),
              z,
              v117);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1C13F80(0LL, v122);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v101, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1C13F80(0LL, v125);
            v133 = itemLinkInfoObjectList->fields._items;
            v134 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v133 )
              sub_1C13F80(itemLinkInfoObjectList, v125);
            v135 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v135 >= v133->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v112,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
            }
            else
            {
              v136 = &v133->obj.klass + v135;
              itemLinkInfoObjectList->fields._size = v135 + 1;
              v136[4] = (Il2CppClass *)v112;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v136 + 4), (int64_t)v112, v126, v127, v128, v129, v130, v131);
            }
            v144 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v144 )
              sub_1C13F80(0LL, v137);
            v145 = v144->fields._items;
            v146 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v144->fields._version;
            if ( !v145 )
              sub_1C13F80(v144, v137);
            v147 = v144->fields._size;
            if ( (unsigned int)v147 >= v145->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v144,
                v101,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
            }
            else
            {
              v148 = &v145->obj.klass + v147;
              v144->fields._size = v147 + 1;
              v148[4] = (Il2CppClass *)v101;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v148 + 4), (int64_t)v101, v138, v139, v140, v141, v142, v143);
            }
            y = y - (float)(v119 + v6->fields.boardSpace);
          }
          ++v98;
        }
        while ( v98 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v152,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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

  if ( (byte_4BB70AC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__, v5);
    byte_4BB70AC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1C13F80(0LL, v7);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
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

  if ( (byte_4BB70AA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB70AA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    objectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C13F80(v9, v10);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1C13F80(objectList, method);
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

  if ( (byte_4BB70A9 & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1C13D24(
                                              &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___,
                                              itemLinkInfoGroup);
    byte_4BB70A9 = 1;
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
                                                (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( itemDetailObj )
        {
          Height = ItemLinkInfoDetailObject__get_Height(itemDetailObj, 0LL);
          v9 = -0.5;
          return Height * v9;
        }
LABEL_14:
        sub_1C13F80(this, itemLinkInfoGroup);
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

  if ( (byte_4BB70AB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v6);
    this = (ItemLinkInfoListViewManager_o *)sub_1C13D24(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v7);
    byte_4BB70AB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !itemLinkInfoGroupList )
    sub_1C13F80(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v14.fields._current )
      sub_1C13F80(v8, v9);
    klass = v14.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
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
  GameObjectExtensions__SetLocalPosition_34711888(obj, x, y, z, 0LL);
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
  ItemLinkInfoDetailObject_o *v46; // x19
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s8
  float y; // s10
  ItemLinkInfoListViewManager_o *v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  float Height; // s0
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v67; // x20
  float v68; // s8
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v70; // x0
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  UnityEngine_Object_o *listDescriptionObj; // x19
  UnityEngine_Component_o *v73; // x19
  ItemLinkInfoListViewManager_o *v74; // x0
  __int64 v75; // x1
  const MethodInfo *v76; // x2
  int *monitor; // x8
  System_Collections_Generic_List_object__o *v78; // x20
  Il2CppObject *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x1
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v91; // x8
  int *v92; // x8
  int32_t v93; // w8
  Il2CppObject *Item; // x0
  __int64 v95; // x1
  int64_t v96; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v98; // x19
  System_Collections_Generic_List_object__o *v99; // x9
  PartyOrganizationUtility_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v101; // t1
  Il2CppObject *Component_object; // x0
  __int64 v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  ItemLinkInfoListViewObject_o *v110; // x20
  const MethodInfo *v111; // x1
  const MethodInfo *v112; // x1
  ItemLinkInfoListViewManager_c *v113; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x2
  float v116; // s0
  float v117; // s8
  float BOARD_OFFSET_X; // s0
  float v119; // s9
  __int64 v120; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v123; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x8
  __int64 v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_Collections_Generic_List_object__o *v142; // x0
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  Il2CppClass **v146; // x8
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v153; // x0
  System_Collections_Generic_List_Enumerator_T__o v154[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v155; // [xsp+38h] [xbp-78h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v156; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v157; // [xsp+48h] [xbp-68h] BYREF

  v8 = this;
  v157 = this;
  if ( (byte_4BB70AF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v9);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v10);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v11);
    sub_1C13D24(&ItemLinkInfoListViewManager_TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v14);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v17);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v19);
    byte_4BB70AF = 1;
  }
  v155 = 0LL;
  v156 = &v157;
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
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, method);
    v8 = v157;
    byte_4BAEDA1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v8->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v8->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v8->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v154,
    itemLinkInfoGroupList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v25 = v157;
  v26 = *(_OWORD *)&v154[0].fields._list;
  p__7__wrap2 = &v157->fields.__7__wrap2;
  v154[1] = v154[0];
  v157->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v154[0].fields._current;
  *(_OWORD *)&v25->fields.__7__wrap2.fields._list = v26;
  sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v28, v29, v30, v31, v32, v33);
  v157->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v157->fields.__7__wrap2,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v157, v35);
      v91 = v157;
      result = 0;
      v157->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v91->fields.__7__wrap2.fields._index = 0LL;
      v91->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v157->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1C13F80(v157, v35);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v38 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v38 )
    {
      v46 = current->fields.itemDetailObj;
      if ( !v46 )
        sub_1C13F80(v38, v39);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current->fields.itemDetailObj, 0LL);
      x = v157->fields._basePosition_5__2.fields.x;
      y = v157->fields._basePosition_5__2.fields.y;
      Height = ItemLinkInfoDetailObject__get_Height(v46, 0LL);
      if ( !_4__this )
        sub_1C13F80(v50, v51);
      ItemLinkInfoListViewManager__InitTransform(
        v50,
        gameObject,
        x,
        y + (float)(Height * -0.5),
        v157->fields._basePosition_5__2.fields.z,
        v52);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v55 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0LL);
      v62 = (int64_t)v55;
      if ( !objectList )
        sub_1C13F80(v55, v55);
      items = objectList->fields._items;
      v64 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1C13F80(v55, v55);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v55,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v66[4] = (Il2CppClass *)v62;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v66 + 4), v62, v56, v57, v58, v59, v60, v61);
      }
      v67 = v157;
      v68 = v157->fields._basePosition_5__2.fields.y;
      v67->fields._basePosition_5__2.fields.y = v68 - ItemLinkInfoDetailObject__get_AreaHeight(v46, 0LL);
    }
    viewItemList = current->fields.viewItemList;
    v70 = v157;
    v157->fields._viewItemList_5__4 = viewItemList;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v70->fields._viewItemList_5__4,
      (int64_t)viewItemList,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    viewItemList_5__4 = v157->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v73 = (UnityEngine_Component_o *)current->fields.listDescriptionObj;
    if ( !v73 )
      sub_1C13F80(this, method);
    v74 = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current->fields.listDescriptionObj,
                                             0LL);
    monitor = (int *)v73[1].monitor;
    if ( !monitor )
      sub_1C13F80(v74, v75);
    if ( !_4__this )
      sub_1C13F80(v74, v75);
    ItemLinkInfoListViewManager__InitTransform(
      v74,
      (UnityEngine_GameObject_o *)v74,
      v157->fields._basePosition_5__2.fields.x,
      v157->fields._basePosition_5__2.fields.y + (float)((float)monitor[43] * -0.5),
      v157->fields._basePosition_5__2.fields.z,
      v76);
    v78 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v79 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v73, 0LL);
    v86 = (int64_t)v79;
    if ( !v78 )
      sub_1C13F80(v79, v79);
    v87 = v78->fields._items;
    v88 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v78->fields._version;
    if ( !v87 )
      sub_1C13F80(v79, v79);
    v89 = v78->fields._size;
    if ( (unsigned int)v89 >= v87->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v78,
        v79,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v87->obj.klass + v89;
      v78->fields._size = v89 + 1;
      v90[4] = (Il2CppClass *)v86;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v90 + 4), v86, v80, v81, v82, v83, v84, v85);
    }
    v92 = (int *)v73[1].monitor;
    if ( !v92 )
      sub_1C13F80(this, method);
    v8 = v157;
    v157->fields._basePosition_5__2.fields.y = v157->fields._basePosition_5__2.fields.y - (float)v92[43];
  }
  else
  {
    v8 = v157;
  }
  v93 = 0;
  for ( v8->fields._i_5__5 = 0; ; v8->fields._i_5__5 = v93 )
  {
    v101 = v8->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (PartyOrganizationUtility_o *)&v8->fields._viewItemList_5__4;
    v99 = (System_Collections_Generic_List_object__o *)v101;
    if ( !v101 )
      sub_1C13F80(this, method);
    if ( v93 >= v99->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1C13CC8(p_viewItemList_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v99,
             v93,
             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1C13F80(Item, v95);
    v96 = (int64_t)Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v98 = UnityEngine_Object__Instantiate_object_(
            baseViewItemPrefab,
            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v98,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v8 = v157;
LABEL_59:
    v93 = v8->fields._i_5__5 + 1;
  }
  if ( !v98 )
    sub_1C13F80(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v98,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v110 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1C13F80(0LL, v103);
  Component_object[3].klass = (Il2CppClass *)v96;
  sub_1C13CC8((PartyOrganizationUtility_o *)&Component_object[3], v96, v104, v105, v106, v107, v108, v109);
  ItemLinkInfoListViewObject__SetupDisp(v110, v111);
  GameObjectExtensions__SetParent_34717612((UnityEngine_GameObject_o *)v98, _4__this->fields.listParent, 0LL);
  v116 = ItemLinkInfoListViewObject__GetHeight(v110, v112);
  if ( !v96 )
    sub_1C13F80(v113, v114);
  v117 = v116;
  BOARD_OFFSET_X = -1.0;
  if ( *(_BYTE *)(v96 + 155) )
    v119 = 0.0;
  else
    v119 = -1.0;
  if ( *(_BYTE *)(v96 + 155) )
  {
    v113 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo);
      v113 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v113->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v113,
    (UnityEngine_GameObject_o *)v98,
    BOARD_OFFSET_X + v157->fields._basePosition_5__2.fields.x,
    v157->fields._basePosition_5__2.fields.y - (float)((float)(v117 * 0.5) + v119),
    v157->fields._basePosition_5__2.fields.z,
    v115);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1C13F80(0LL, v120);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v98, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1C13F80(0LL, v123);
  v131 = itemLinkInfoObjectList->fields._items;
  v132 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v131 )
    sub_1C13F80(itemLinkInfoObjectList, v123);
  v133 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v133 >= v131->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v110,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v134 = &v131->obj.klass + v133;
    itemLinkInfoObjectList->fields._size = v133 + 1;
    v134[4] = (Il2CppClass *)v110;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v134 + 4), (int64_t)v110, v124, v125, v126, v127, v128, v129);
  }
  v142 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v142 )
    sub_1C13F80(0LL, v135);
  v143 = v142->fields._items;
  v144 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v142->fields._version;
  if ( !v143 )
    sub_1C13F80(v142, v135);
  v145 = v142->fields._size;
  if ( (unsigned int)v145 >= v143->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v142,
      v98,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v146 = &v143->obj.klass + v145;
    v142->fields._size = v145 + 1;
    v146[4] = (Il2CppClass *)v98;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v146 + 4), (int64_t)v98, v136, v137, v138, v139, v140, v141);
  }
  v153 = v157;
  v157->fields._basePosition_5__2.fields.y = v157->fields._basePosition_5__2.fields.y
                                           - (float)(v117 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v153 = v157;
  }
  v153->fields.__2__current = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v153->fields.__2__current, 0LL, v147, v148, v149, v150, v151, v152);
  result = 1;
  v157->fields.__1__state = 1;
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  if ( (byte_4BB70B0 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method);
    byte_4BB70B0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}