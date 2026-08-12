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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_596DE65 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&SampleEventListViewItem_TypeInfo);
    byte_596DE65 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, sum, 0);
  if ( sum >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = (SampleEventListViewItem_o *)sub_2213CCC(SampleEventListViewItem_TypeInfo);
      SampleEventListViewItem___ctor(v6, v5, v7);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList
        || (items = itemList->fields._items,
            v17 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
        sub_2213CDC(itemList, v8);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v6,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v6;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_596DE66 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&SampleEventListViewItem_TypeInfo);
    byte_596DE66 = 1;
  }
  result = (SampleEventListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SampleEventListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_596DE6B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE6B = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DE69 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
    sub_2213A60(&Method_SampleEventListViewManager_OnMoveEnd__);
    byte_596DE69 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleEventListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__) )
  {
    current = v14.fields._current;
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleEventListViewManager_OnMoveEnd__, 0);
    if ( !current )
      sub_2213CDC(v11, v12);
    SampleEventListViewObject__Init_44487064((SampleEventListViewObject_o *)current, mode, v10, delay, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void SampleEventListViewManager__RequestListObject_44487164(
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
  __int64 v12; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DE6A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
    sub_2213A60(&Method_SampleEventListViewManager_OnMoveEnd__);
    byte_596DE6A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleEventListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SampleEventListViewObject__GetEnumerator__);
  v12 = 0;
  v13 = &v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__MoveNext__) )
  {
    current = v14.fields._current;
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SampleEventListViewManager_OnMoveEnd__, 0);
    if ( !current )
      sub_2213CDC(v9, v10);
    SampleEventListViewObject__Init_44488008((SampleEventListViewObject_o *)current, mode, v8, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SampleEventListViewObject__Dispose__);
}


void SampleEventListViewManager__SetMode(SampleEventListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SampleEventListViewManager__SetMode_44486548(this, mode, 0, v3);
}


void SampleEventListViewManager__SetMode_44486548(
        SampleEventListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_SampleEventListViewObject__o *ClippingObjectList; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t size; // w21
  int32_t DropObjectSum; // w0
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  System_String_o *v22; // x1

  if ( (byte_596DE68 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject__get_Item__);
    sub_2213A60(&Method_SampleEventListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DE68 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
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
    v15 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
    size = ClippingObjectList->fields._size;
    DropObjectSum = ListViewManager__get_DropObjectSum((ListViewManager_o *)this, 0);
    this->fields.callbackCount = DropObjectSum + size;
    if ( DropObjectSum + size < 1 )
    {
      v22 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v22, 0.0, 0);
    }
    else if ( v15->fields._size >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v18,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SampleEventListViewObject__get_Item__);
        v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_SampleEventListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        SampleEventListViewObject__Init_44487064((SampleEventListViewObject_o *)Item, 4, v20, (float)++v18 * 0.1, v21);
        if ( v18 >= v15->fields._size )
          return;
      }
LABEL_15:
      sub_2213CDC(ClippingObjectList, v14);
    }
  }
  else if ( mode == 2 )
  {
    this->fields.callbackCount = 0;
    SampleEventListViewManager__RequestListObject_44487164(this, 5, v12);
  }
}


void SampleEventListViewManager__SetObjectItem(
        SampleEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596DE67 & 1) == 0 )
  {
    sub_2213A60(&SampleEventListViewObject_TypeInfo);
    byte_596DE67 = 1;
  }
  if ( obj
    && (naturalAligment = SampleEventListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SampleEventListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == SampleEventListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 5;
LABEL_14:
  SampleEventListViewObject__Init_44486464((SampleEventListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void SampleEventListViewManager__add_callbackFunc(
        SampleEventListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SampleEventListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596DE61 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DE61 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SampleEventListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_SampleEventListViewObject__o *SampleEventListViewManager__get_ClippingObjectList(
        SampleEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596DE64 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE64 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)SampleEventListViewObject__GetItem((SampleEventListViewObject_o *)Component_object, v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SampleEventListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SampleEventListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleEventListViewObject__o *)v3;
}


System_Collections_Generic_List_SampleEventListViewObject__o *SampleEventListViewManager__get_ObjectList(
        SampleEventListViewManager_o *this,
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
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596DE63 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE63 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SampleEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SampleEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleEventListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SampleEventListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleEventListViewObject__o *)v3;
}


void SampleEventListViewManager__remove_callbackFunc(
        SampleEventListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SampleEventListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596DE62 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DE62 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SampleEventListViewManager__get_ObjectList(v11, v12);
}