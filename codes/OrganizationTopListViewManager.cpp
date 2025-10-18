void OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  struct OrganizationTopItemInfo_array *v1; // x19
  OrganizationTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  OrganizationTopItemInfo_o *v7; // x20
  const MethodInfo *v8; // x5
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  OrganizationTopItemInfo_o *v11; // x20
  const MethodInfo *v12; // x5
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Array_o *v17; // x0
  System_RuntimeFieldHandle_o v18; // x1
  System_Array_o *v19; // x19
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x0

  if ( (byte_4C3E759 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&OrganizationTopItemInfo___TypeInfo);
    sub_1C37058(&OrganizationTopItemInfo_TypeInfo);
    sub_1C37058(&OrganizationTopListViewManager_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_1C37058(&StringLiteral_8651/*"MENU_PARTY_ORGANIZATION"*/);
    sub_1C37058(&StringLiteral_10099/*"PARTY_ORGANIZATION"*/);
    sub_1C37058(&StringLiteral_8569/*"MASTER_ORGANIZATION"*/);
    sub_1C37058(&StringLiteral_8644/*"MENU_MASTER_ORGANIZATION"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_11655/*"SERVANT_LIST"*/);
    sub_1C37058(&StringLiteral_8663/*"MENU_SERVANT_LIST"*/);
    byte_4C3E759 = 1;
  }
  v1 = (struct OrganizationTopItemInfo_array *)sub_1C37100(OrganizationTopItemInfo___TypeInfo, 3);
  v2 = (OrganizationTopItemInfo_o *)sub_1C372A4(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8569/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8644/*"MENU_MASTER_ORGANIZATION"*/,
    v3);
  if ( !v1 )
    sub_1C372B4(v4);
  if ( v2 )
  {
    v4 = sub_1C37194(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_14;
  v1->m_Items[0] = v2;
  sub_1C36FFC((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v5, v6);
  v7 = (OrganizationTopItemInfo_o *)sub_1C372A4(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v7,
    2,
    (System_String_o *)StringLiteral_10099/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8651/*"MENU_PARTY_ORGANIZATION"*/,
    v8);
  if ( v7 )
  {
    v4 = sub_1C37194(v7, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( LODWORD(v1->max_length) <= 1 )
    goto LABEL_14;
  v1->m_Items[1] = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v7, v9, v10);
  v11 = (OrganizationTopItemInfo_o *)sub_1C372A4(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v11,
    3,
    (System_String_o *)StringLiteral_11655/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8663/*"MENU_SERVANT_LIST"*/,
    v12);
  if ( v11 )
  {
    v4 = sub_1C37194(v11, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_15:
      v23 = sub_1C372D8();
      sub_1C37180(v23, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 2 )
LABEL_14:
    sub_1C372BC(v4);
  v1->m_Items[2] = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v11, v13, v14);
  OrganizationTopListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)OrganizationTopListViewManager_TypeInfo->static_fields, (int32_t)v1, v15, v16);
  v17 = (System_Array_o *)sub_1C37100(int___TypeInfo, 3);
  v18.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v19 = v17;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v17, v18, 0);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->normalKindList, (int32_t)v19, v21, v22);
}


void OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void OrganizationTopListViewManager__CreateList(
        OrganizationTopListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_c *v5; // x0
  struct System_Int32_array *normalKindList; // x24
  il2cpp_array_size_t max_length; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  unsigned __int64 v9; // x25
  __int64 v10; // x26
  int32_t v11; // w20
  __int64 v12; // x8
  int v13; // w9
  int v14; // w10
  __int64 v15; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  __int64 v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8

  if ( (byte_4C3E751 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&OrganizationTopListViewItem_TypeInfo);
    sub_1C37058(&OrganizationTopListViewManager_TypeInfo);
    byte_4C3E751 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v5 = OrganizationTopListViewManager_TypeInfo;
  if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
    v5 = OrganizationTopListViewManager_TypeInfo;
  }
  normalKindList = v5->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  }
  else
  {
    max_length = normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v9 >= LODWORD(normalKindList->max_length) )
LABEL_30:
          sub_1C372BC(v8);
        v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        v11 = normalKindList->m_Items[v9];
        if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
          v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v12 = **(_QWORD **)&v8[4].fields._size;
        if ( !v12 )
          break;
        v13 = *(_DWORD *)(v12 + 24);
        if ( v13 >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            if ( v13 == v14 )
              goto LABEL_30;
            v15 = *(_QWORD *)(v12 + 8LL * v14 + 32);
            if ( !v15 )
              goto LABEL_31;
            if ( *(_DWORD *)(v15 + 16) == v11 )
              break;
            if ( v13 == ++v14 )
              goto LABEL_28;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v18 = sub_1C372A4(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_43804668((ListViewItem_o *)v18, size, 0);
          *(_QWORD *)(v18 + 120) = v15;
          sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 120), v15, v19, v20);
          v8 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !v8 )
            break;
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          v25 = v8->fields._size;
          if ( (unsigned int)v25 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v18,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = (__int64)items + 8 * v25;
            v8->fields._size = v25 + 1;
            *(_QWORD *)(v26 + 32) = v18;
            sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 32), v18, v21, v22);
          }
        }
LABEL_28:
        if ( ++v9 == v10 )
          goto LABEL_5;
      }
LABEL_31:
      sub_1C372B4(v8);
    }
  }
LABEL_5:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void OrganizationTopListViewManager__DestroyList(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


OrganizationTopListViewItem_o *OrganizationTopListViewManager__GetItem(
        OrganizationTopListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OrganizationTopListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C3E752 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&OrganizationTopListViewItem_TypeInfo);
    byte_4C3E752 = 1;
  }
  result = (OrganizationTopListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (OrganizationTopListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = OrganizationTopListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (OrganizationTopListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void OrganizationTopListViewManager__OnClickListView(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x21
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_4C3E758 & 1) == 0 )
  {
    sub_1C37058(&OrganizationTopListViewObject_TypeInfo);
    byte_4C3E758 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = OrganizationTopListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v8)) == 0
      || (info = Item->fields.info) == 0 )
    {
      sub_1C372B4(Item);
    }
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      info->fields.eventData,
      callbackFunc->fields.method);
  }
}


void OrganizationTopListViewManager__OnMoveEnd(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x0
  UnityEngine_Object_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C3E757 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E757 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      if ( this->fields.initMode == 5 )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        {
          v7 = this->fields.scrollView;
          if ( !v7 )
            goto LABEL_19;
          UIScrollView__Press(v7, 0, 0);
        }
      }
      v8 = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v8, 0, 0) )
        goto LABEL_17;
      v7 = this->fields.scrollView;
      if ( v7 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v7,
          1,
          v7->klass->vtable._8_UpdateScrollbars.method);
LABEL_17:
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v9, v10);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
        return;
      }
LABEL_19:
      sub_1C372B4(v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewManager__RequestListObject(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E755 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1C37058(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E755 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      OrganizationTopListViewObject__Init_33938932((OrganizationTopListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewManager__RequestListObject_33938428(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E756 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1C37058(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E756 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      OrganizationTopListViewObject__Init_33939556((OrganizationTopListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


void OrganizationTopListViewManager__SetMode(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        OrganizationTopListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  OrganizationTopListViewManager__SetMode_33937628(this, mode, v6);
}


void OrganizationTopListViewManager__SetMode_33932620(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  OrganizationTopListViewManager__SetMode_33937628(this, mode, v6);
}


void OrganizationTopListViewManager__SetMode_33937628(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int v5; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w21
  Il2CppObject *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  int32_t v21; // w8
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w21
  Il2CppObject *v24; // x22
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x3

  if ( (byte_4C3E754 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
    sub_1C37058(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E754 = 1;
  }
  this->fields.initMode = mode;
  v5 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 0, 0);
  switch ( v5 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_33938428(this, 4, v7);
      return;
    case 1:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_24;
      size = ClippingObjectList->fields._size;
      v10 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size < 1 )
        goto LABEL_23;
      v11 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v10,
                 v11,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        OrganizationTopListViewObject__Init_33938932((OrganizationTopListViewObject_o *)Item, 5, v13, 0.1, v14);
        if ( ++v11 >= v10->fields._size )
          return;
      }
      goto LABEL_24;
    case 2:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v15 = ClippingObjectList->fields._size;
      v16 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v15;
      if ( v15 < 1 )
        goto LABEL_23;
      v17 = 0;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_object___get_Item(
                v16,
                v17,
                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
        if ( !v18 )
          break;
        OrganizationTopListViewObject__Init_33938932((OrganizationTopListViewObject_o *)v18, 6, v19, 0.1, v20);
        if ( ++v17 >= v16->fields._size )
          return;
      }
      goto LABEL_24;
    case 4:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v21 = ClippingObjectList->fields._size;
      v22 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v21;
      if ( v21 < 1 )
      {
LABEL_23:
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
          0.0,
          0);
      }
      else
      {
        v23 = 0;
        do
        {
          v24 = System_Collections_Generic_List_object___get_Item(
                  v22,
                  v23,
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v25, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
          if ( !v24 )
LABEL_24:
            sub_1C372B4(ClippingObjectList);
          OrganizationTopListViewObject__Init_33938932((OrganizationTopListViewObject_o *)v24, 8, v25, 0.1, v26);
          ++v23;
        }
        while ( v23 < v22->fields._size );
      }
      return;
    default:
      return;
  }
}


void OrganizationTopListViewManager__SetObjectItem(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C3E753 & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_1C37058(&OrganizationTopListViewObject_TypeInfo);
    byte_4C3E753 = 1;
  }
  if ( !obj
    || (naturalAligment = OrganizationTopListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  OrganizationTopListViewObject__Init_33937552((OrganizationTopListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void OrganizationTopListViewManager__add_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct OrganizationTopListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  OrganizationTopListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C3E74B & 1) == 0 )
  {
    sub_1C37058(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_4C3E74B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C37574(v7);
  OrganizationTopListViewManager__remove_callbackFunc(v10, v11, v12);
}


void OrganizationTopListViewManager__add_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C3E74D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E74D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C37574(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3E750 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E750 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(
                                 (OrganizationTopListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C372B4(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3E74F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E74F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


void OrganizationTopListViewManager__remove_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct OrganizationTopListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C3E74C & 1) == 0 )
  {
    sub_1C37058(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_4C3E74C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C37574(v7);
  OrganizationTopListViewManager__add_callbackFunc2(v10, v11, v12);
}


void OrganizationTopListViewManager__remove_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C3E74E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E74E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C37574(v7);
  OrganizationTopListViewManager__get_ObjectList(v10, v11);
}


void OrganizationTopListViewManager_CallbackFunc___ctor(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A75448;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A75428;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A753E0;
}


System_IAsyncResult_o *OrganizationTopListViewManager_CallbackFunc__BeginInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void OrganizationTopListViewManager_CallbackFunc__Invoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}