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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x0
  Il2CppObject *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x21
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  const MethodInfo *v26; // x2

  if ( (byte_5936210 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_5936210 = 1;
  }
  this->fields.onTapMember = onTapMember;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onTapMember,
    (int32_t)onTapMember,
    (System_String_o *)onTapMember,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( memberItemList )
  {
    max_length = memberItemList->max_length;
    if ( (int)max_length >= 1 )
    {
      v20 = 0;
      do
      {
        if ( v20 >= (unsigned int)max_length )
          sub_21FFED4(v11);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v12 = (Il2CppObject *)memberItemList->m_Items[v20],
              v23 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_21FFECC(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v12,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
        LODWORD(max_length) = memberItemList->max_length;
        ++v20;
      }
      while ( (__int64)v20 < (int)max_length );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  WarBoardPartyOrganizationListViewManager__SetEnableScroll(this, 0, v26);
}


void WarBoardPartyOrganizationListViewManager__DestroyList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  this->fields.onTapMember = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onTapMember, 0, v3, v4, v5, v6, v7, v8);
}


System_Collections_Generic_List_WarBoardPartyListViewObject__o *WarBoardPartyOrganizationListViewManager__GetObjectList(
        WarBoardPartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Component_object; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5936214 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936214 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPartyListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyListViewObject___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v14 )
      {
        if ( !v3
          || (items = v3->fields._items,
              v23 = Method_System_Collections_Generic_List_WarBoardPartyListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(v14, v15);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v25[4] = (Il2CppClass *)Component_object;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v25 + 4),
            (int32_t)Component_object,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5936212 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
    byte_5936212 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)WarBoardPartyOrganizationListViewManager__GetObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    ObjectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardPartyListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_21FFECC(0, v8);
    WarBoardPartyListViewObject__Init(
      (WarBoardPartyListViewObject_o *)v10.fields._current,
      mode,
      this->fields.onTapMember,
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPartyListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationListViewManager__SetEnableScroll(
        WarBoardPartyOrganizationListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_5936211 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936211 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_21FFECC(0, v6);
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
    sub_21FFECC(0, v4);
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
  if ( (byte_5936213 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewManager_o *)sub_21FFC50(&WarBoardPartyListViewObject_TypeInfo);
    byte_5936213 = 1;
  }
  if ( !obj
    || (naturalAligment = WarBoardPartyListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (WarBoardPartyListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardPartyListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  WarBoardPartyListViewObject__Init((WarBoardPartyListViewObject_o *)obj, 0, v5->fields.onTapMember, method);
}