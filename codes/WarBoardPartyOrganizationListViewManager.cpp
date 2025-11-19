void WarBoardPartyOrganizationListViewManager___ctor(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void WarBoardPartyOrganizationListViewManager__CreateList(
        WarBoardPartyOrganizationListViewManager_o *this,
        WarBoardPartyListViewItem_array *memberItemList,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  __int64 v7; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x21
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  const MethodInfo *v18; // x2

  if ( (byte_4CB3EF7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4CB3EF7 = 1;
  }
  this->fields.onTapMember = onTapMember;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onTapMember, (int32_t)onTapMember, (int32_t)onTapMember, method);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( memberItemList )
  {
    max_length = memberItemList->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_1C6BC68(v7);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (v8 = (Il2CppObject *)memberItemList->m_Items[v12],
              items = itemList->fields._items,
              v15 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C6BC60(itemList, v8);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v8,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v8;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v8, v9, v10);
        }
        LODWORD(max_length) = memberItemList->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)max_length );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  WarBoardPartyOrganizationListViewManager__SetEnableScroll(this, 0, v18);
}


void WarBoardPartyOrganizationListViewManager__DestroyList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.onTapMember = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onTapMember, 0, v3, v4);
}


System_Collections_Generic_List_WarBoardPartyListViewObject__o *WarBoardPartyOrganizationListViewManager__GetObjectList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB3EFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB3EFB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v10 )
      {
        if ( !v3 )
          sub_1C6BC60(v10, v11);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(v10, v11);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v17[4] = (Il2CppClass *)Component_object;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)Component_object, v12, v13);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_WarBoardPartyListViewObject__o *)v3;
}


void WarBoardPartyOrganizationListViewManager__OnClickListView(
        WarBoardPartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationListViewManager__RequestListObject(
        WarBoardPartyOrganizationListViewManager_o *this,
        int32_t mode,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB3EF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
    byte_4CB3EF9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)WarBoardPartyOrganizationListViewManager__GetObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    ObjectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1C6BC60(0, v8);
    WarBoardPartyListViewObject__Init(
      (WarBoardPartyListViewObject_o *)v10.fields._current,
      mode,
      this->fields.onTapMember,
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
}


void WarBoardPartyOrganizationListViewManager__SetEnableScroll(
        WarBoardPartyOrganizationListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4CB3EF8 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB3EF8 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, isEnable, 0);
  }
}


void WarBoardPartyOrganizationListViewManager__SetMode(
        WarBoardPartyOrganizationListViewManager_o *this,
        int32_t mode,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  v4 = (unsigned int)(mode - 1);
  if ( (unsigned int)v4 <= 2 )
    WarBoardPartyOrganizationListViewManager__RequestListObject(this, v4, onTapMember, method);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C6BC60(0, v4);
  UIScrollView__UpdatePosition(scrollView, 0);
}


void WarBoardPartyOrganizationListViewManager__SetObjectItem(
        WarBoardPartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10

  v5 = this;
  if ( (byte_4CB3EFA & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewManager_o *)sub_1C6BA08(&WarBoardPartyListViewObject_TypeInfo);
    byte_4CB3EFA = 1;
  }
  if ( !obj
    || (naturalAligment = WarBoardPartyListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (WarBoardPartyListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardPartyListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  WarBoardPartyListViewObject__Init((WarBoardPartyListViewObject_o *)obj, 0, v5->fields.onTapMember, method);
}