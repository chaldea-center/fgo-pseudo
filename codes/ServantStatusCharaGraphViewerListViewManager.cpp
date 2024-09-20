void __fastcall ServantStatusCharaGraphViewerListViewManager___ctor(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__CreateList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t currentIndex,
        ServantStatusCharaGraphListViewItem_array *items,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v6; // x20
  signed int max_length; // w8
  __int64 v8; // x25
  ServantStatusCharaGraphListViewItem_o *v9; // x8
  int32_t index; // w23
  struct ServantStatusListViewItem_o *mainInfo; // x24
  int32_t imageLimitCount; // w29
  __int64 v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8

  v6 = this;
  if ( (byte_4A56D17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_1B885B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4A56D17 = 1;
  }
  if ( !items )
    goto LABEL_15;
  ListViewManager__CreateList((ListViewManager_o *)v6, items->max_length, 0LL);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1B88814(this, *(_QWORD *)&currentIndex);
      v9 = items->m_Items[v8];
      if ( !v9 )
        break;
      index = v9->fields.index;
      mainInfo = v9->fields.mainInfo;
      imageLimitCount = v9->fields.imageLimitCount;
      v13 = sub_1B887FC(ServantStatusCharaGraphListViewItem_TypeInfo);
      ListViewItem___ctor_40706472((ListViewItem_o *)v13, index, 0LL);
      *(_QWORD *)(v13 + 112) = mainInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 112), (int32_t)mainInfo, v14, v15);
      *(_DWORD *)(v13 + 120) = imageLimitCount;
      this = (ServantStatusCharaGraphViewerListViewManager_o *)v6->fields.itemList;
      if ( !this )
        break;
      v18 = *(_QWORD *)&this->fields.m_CachedPtr;
      v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v18 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v13,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = v18 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v21 + 32) = v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), v13, v16, v17);
      }
      max_length = items->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&currentIndex);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)v6, currentIndex, 0, -1, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__DestroyList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.currentPhase = 0;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


bool __fastcall ServantStatusCharaGraphViewerListViewManager__IsActiveScroll(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B8880C(0LL, method);
  return UnityEngine_Behaviour__get_enabled(scrollView, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__OnMoveEnd(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  struct UIScrollView_o *v5; // x0

  if ( (byte_4A56D1B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D1B = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._8_UpdateScrollbars.method)(
      v5,
      1LL,
      v5->klass->vtable._9_SetDragAmount.methodPtr);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A56D1C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    byte_4A56D1C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.currentPhase = 1;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v7);
    ServantStatusCharaGraphListViewObject__Init_31658384(
      (ServantStatusCharaGraphListViewObject_o *)v9.fields._current,
      9,
      0LL,
      delay,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__RequestListObject(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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

  if ( (byte_4A56D1A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56D1A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  if ( ObjectList->fields._size < 1 )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantStatusCharaGraphViewerListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B8880C(v11, v12);
      ServantStatusCharaGraphListViewObject__Init_31658384(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v10,
        delay,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  int32_t CenterIndex; // w0
  __int64 v6; // x1
  UnityEngine_Behaviour_o *dragScrollView; // x0

  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, CenterIndex, 0, 0, 0.0, 0LL);
  dragScrollView = (UnityEngine_Behaviour_o *)this->fields.dragScrollView;
  if ( !dragScrollView )
    sub_1B8880C(0LL, v6);
  UnityEngine_Behaviour__set_enabled(dragScrollView, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A56D1D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    byte_4A56D1D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.itemDataType = dispType;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, *(const MethodInfo **)&dispType);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v7);
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)v9.fields._current,
      dispType,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetMode(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    ServantStatusCharaGraphViewerListViewManager__RequestListObject(this, v6, 0.0, v5);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetModifyScrollViewCenter(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyScrollViewCenter,
        const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x9
  __int64 methodPtr_low; // x12
  struct ListViewIndicator_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A56D18 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphViewerListViewIndicator_TypeInfo);
    byte_4A56D18 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator
    && (methodPtr_low = LOBYTE(ServantStatusCharaGraphViewerListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantStatusCharaGraphViewerListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphViewerListViewIndicator_TypeInfo )
      v7 = this->fields.indicator;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v7, 0LL);
  if ( v8 )
  {
    if ( !v7 )
      sub_1B8880C(v8, v9);
    v7[1].klass = (ListViewIndicator_c *)onModifyScrollViewCenter;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[1], (int32_t)onModifyScrollViewCenter, v10, v11);
  }
}


void __fastcall ServantStatusCharaGraphViewerListViewManager__SetObjectItem(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  v5 = this;
  if ( (byte_4A56D19 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4A56D19 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewObject_TypeInfo
    || (this = (ServantStatusCharaGraphViewerListViewManager_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                                                   (ServantStatusCharaGraphListViewObject_o *)obj,
                                                                   (const MethodInfo *)obj)) == 0LL )
  {
    sub_1B8880C(this, obj);
  }
  HIDWORD(this->fields.dragParentObject) = v5->fields.itemDataType;
  if ( v5->fields.currentPhase == 1 )
    v8 = 8;
  else
    v8 = 7;
  ServantStatusCharaGraphListViewObject__Init_31657072((ServantStatusCharaGraphListViewObject_o *)obj, v8, v7);
}


UnityEngine_Vector2_o __fastcall ServantStatusCharaGraphViewerListViewManager__get_CenterPosition(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_1B8880C(scrollView, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
  v4 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v5 = this->fields.clipOffset.fields.y - localPosition.fields.y;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphViewerListViewManager__get_ClippingObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56D16 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D16 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                 (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *__fastcall ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56D15 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D15 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}