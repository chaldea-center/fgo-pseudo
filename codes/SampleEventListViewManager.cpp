void SampleEventListViewManager___ctor(SampleEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SampleEventListViewManager__CreateList(SampleEventListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  int32_t v5; // w21
  SampleEventListViewItem_o *v6; // x22
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4CEBDA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&SampleEventListViewItem_TypeInfo);
    byte_4CEBDA6 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, sum, 0);
  if ( sum >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = (SampleEventListViewItem_o *)sub_1C7BD34(SampleEventListViewItem_TypeInfo);
      SampleEventListViewItem___ctor(v6, v5, v7);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList
        || (items = itemList->fields._items,
            v17 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
        sub_1C7BD40(itemList, v8);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v6,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v6;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
      }
      ++v5;
    }
    while ( sum != v5 );
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void SampleEventListViewManager__DestroyList(SampleEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


SampleEventListViewItem_o *SampleEventListViewManager__GetItem(
        SampleEventListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SampleEventListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CEBDA7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SampleEventListViewItem_TypeInfo);
    byte_4CEBDA7 = 1;
  }
  result = (SampleEventListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SampleEventListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SampleEventListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SampleEventListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SampleEventListViewItem_TypeInfo )
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


void SampleEventListViewManager__OnClickListView(
        SampleEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SampleEventListViewManager__OnClickListViewDetail(
        SampleEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SampleEventListViewManager__OnMoveEnd(SampleEventListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4CEBDAC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBDAC = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleEventListViewManager__RequestListObject(
        SampleEventListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEBDAA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_SampleEventListViewManager_OnMoveEnd__);
    byte_4CEBDAA = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleEventListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    ObjectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__) )
  {
    current = v14.fields._current;
    v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleEventListViewManager_OnMoveEnd__, 0);
    if ( !current )
      sub_1C7BD40(v11, v12);
    SampleEventListViewObject__Init_38126680((SampleEventListViewObject_o *)current, mode, v10, delay, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void SampleEventListViewManager__RequestListObject_38126780(
        SampleEventListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEBDAB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_SampleEventListViewManager_OnMoveEnd__);
    byte_4CEBDAB = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleEventListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__) )
  {
    current = v12.fields._current;
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SampleEventListViewManager_OnMoveEnd__, 0);
    if ( !current )
      sub_1C7BD40(v9, v10);
    SampleEventListViewObject__Init_38127648((SampleEventListViewObject_o *)current, mode, v8, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
}


void SampleEventListViewManager__SetMode(SampleEventListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SampleEventListViewManager__SetMode_38126164(this, mode, 0, v3);
}


void SampleEventListViewManager__SetMode_38126164(
        SampleEventListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_SampleEventListViewObject__o *ClippingObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t DropObjectSum; // w0
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3

  if ( (byte_4CEBDA9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject__get_Item__);
    sub_1C7BAE8(&Method_SampleEventListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEBDA9 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( mode == 1 )
  {
    ClippingObjectList = SampleEventListViewManager__get_ClippingObjectList(this, v11);
    if ( !ClippingObjectList )
      goto LABEL_15;
    size = ClippingObjectList->fields._size;
    v16 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
    DropObjectSum = ListViewManager__get_DropObjectSum((ListViewManager_o *)this, 0);
    this->fields.callbackCount = DropObjectSum + size;
    if ( DropObjectSum + size < 1 )
    {
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
        0.0,
        0);
    }
    else if ( v16->fields._size >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v16,
                 v18,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SampleEventListViewObject__get_Item__);
        v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_SampleEventListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        SampleEventListViewObject__Init_38126680((SampleEventListViewObject_o *)Item, 4, v20, (float)++v18 * 0.1, v21);
        if ( v18 >= v16->fields._size )
          return;
      }
LABEL_15:
      sub_1C7BD40(ClippingObjectList, v14);
    }
  }
  else if ( mode == 2 )
  {
    this->fields.callbackCount = 0;
    SampleEventListViewManager__RequestListObject_38126780(this, 5, v12);
  }
}


void SampleEventListViewManager__SetObjectItem(
        SampleEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SampleEventListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CEBDA8 & 1) == 0 )
  {
    this = (SampleEventListViewManager_o *)sub_1C7BAE8(&SampleEventListViewObject_TypeInfo);
    byte_4CEBDA8 = 1;
  }
  if ( !obj
    || (naturalAligment = SampleEventListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleEventListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SampleEventListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 5;
  else
    v7 = 2;
  SampleEventListViewObject__Init_38126080((SampleEventListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SampleEventListViewManager__add_callbackFunc(
        SampleEventListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SampleEventListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CEBDA2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBDA2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SampleEventListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_SampleEventListViewObject__o *SampleEventListViewManager__get_ClippingObjectList(
        SampleEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CEBDA5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBDA5 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v10);
      Item = (ListViewItem_o *)SampleEventListViewObject__GetItem((SampleEventListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C7BD40(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44341312((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C7BD40(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_SampleEventListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C7BD40(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C7BD40(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_SampleEventListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleEventListViewObject__o *)v3;
}


System_Collections_Generic_List_SampleEventListViewObject__o *SampleEventListViewManager__get_ObjectList(
        SampleEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEBDA4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBDA4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SampleEventListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleEventListViewObject__o *)v3;
}


void SampleEventListViewManager__remove_callbackFunc(
        SampleEventListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SampleEventListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CEBDA3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBDA3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SampleEventListViewManager__get_ObjectList(v10, v11);
}