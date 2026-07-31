void ServantStatusCharaGraphViewerListViewManager___ctor(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphViewerListViewManager__CreateList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t currentIndex,
        ServantStatusCharaGraphListViewItem_array *items,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v6; // x21
  int max_length; // w8
  __int64 v8; // x25
  ServantStatusCharaGraphListViewItem_o *v9; // x8
  int32_t index; // w23
  struct ServantStatusListViewItem_o *mainInfo; // x24
  int32_t limitCountStage; // w29
  __int64 v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8

  v6 = this;
  if ( (byte_593414F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_21FFC50(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_593414F = 1;
  }
  if ( !items )
    goto LABEL_15;
  ListViewManager__CreateList((ListViewManager_o *)v6, items->max_length, 0);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_21FFED4(this);
      v9 = items->m_Items[v8];
      if ( !v9 )
        break;
      index = v9->fields.index;
      mainInfo = v9->fields.mainInfo;
      limitCountStage = v9->fields.limitCountStage;
      v13 = sub_21FFEBC(ServantStatusCharaGraphListViewItem_TypeInfo);
      ListViewItem___ctor_50749276((ListViewItem_o *)v13, index, 0);
      *(_QWORD *)(v13 + 120) = mainInfo;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 120), (int32_t)mainInfo, v14, v15, v16, v17, v18, v19);
      this = (ServantStatusCharaGraphViewerListViewManager_o *)v6->fields.itemList;
      *(_DWORD *)(v13 + 128) = limitCountStage;
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v13,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v29 + 32) = v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 32), v13, v20, v21, v22, v23, v24, v25);
      }
      max_length = items->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&currentIndex);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)v6, currentIndex, 0, -1, 0);
}


void ServantStatusCharaGraphViewerListViewManager__DestroyList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.currentPhase = 0;
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


void ServantStatusCharaGraphViewerListViewManager__OnMoveEnd(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  struct UIScrollView_o *v6; // x0

  if ( (byte_5934152 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934152 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      sub_21FFECC(0, v5);
    ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v6->klass->vtable._8_UpdateScrollbars.methodPtr)(
      v6,
      1,
      v6->klass->vtable._8_UpdateScrollbars.method);
  }
}


void ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934153 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    byte_5934153 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.currentPhase = 1;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_21FFECC(0, v7);
    ServantStatusCharaGraphListViewObject__Init_41308236(
      (ServantStatusCharaGraphListViewObject_o *)v9.fields._current,
      9,
      0,
      delay,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


void ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  int32_t CenterIndex; // w0
  __int64 v6; // x1
  UnityEngine_Behaviour_o *dragScrollView; // x0

  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, CenterIndex, 0, 0, 0.0, 0, 0);
  dragScrollView = (UnityEngine_Behaviour_o *)this->fields.dragScrollView;
  if ( !dragScrollView )
    sub_21FFECC(0, v6);
  UnityEngine_Behaviour__set_enabled(dragScrollView, flag, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934154 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    byte_5934154 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.itemDataType = dispType;
  ObjectList = ServantStatusCharaGraphViewerListViewManager__get_ObjectList(this, *(const MethodInfo **)&dispType);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)ObjectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_21FFECC(0, v7);
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)v9.fields._current,
      dispType,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
}


void ServantStatusCharaGraphViewerListViewManager__SetModifyScrollViewCenter(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyScrollViewCenter,
        const MethodInfo *method)
{
  struct ListViewIndicator_o *indicator; // x9
  __int64 naturalAligment; // x12
  struct ListViewIndicator_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5934150 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphViewerListViewIndicator_TypeInfo);
    byte_5934150 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator
    && (naturalAligment = ServantStatusCharaGraphViewerListViewIndicator_TypeInfo->_2.naturalAligment,
        indicator->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusCharaGraphViewerListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphViewerListViewIndicator_TypeInfo )
      v7 = this->fields.indicator;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onModifyScrollViewCenter, method);
  v8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v7, 0);
  if ( v8 )
  {
    if ( !v7 )
      sub_21FFECC(v8, v9);
    v7[1].klass = (ListViewIndicator_c *)onModifyScrollViewCenter;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v7[1],
      (int32_t)onModifyScrollViewCenter,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}


void ServantStatusCharaGraphViewerListViewManager__SetObjectItem(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  const MethodInfo *v7; // x2
  int32_t currentPhase; // w9
  int32_t v9; // w1

  v5 = this;
  if ( (byte_5934151 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphViewerListViewManager_o *)sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_5934151 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewObject_TypeInfo
    || (this = (ServantStatusCharaGraphViewerListViewManager_o *)ServantStatusCharaGraphListViewObject__GetItem(
                                                                   (ServantStatusCharaGraphListViewObject_o *)obj,
                                                                   (const MethodInfo *)obj)) == 0 )
  {
    sub_21FFECC(this, obj);
  }
  currentPhase = v5->fields.currentPhase;
  HIDWORD(this->fields.dropList) = v5->fields.itemDataType;
  if ( currentPhase == 1 )
    v9 = 8;
  else
    v9 = 7;
  ServantStatusCharaGraphListViewObject__Init_41305568((ServantStatusCharaGraphListViewObject_o *)obj, v9, v7);
}


UnityEngine_Vector2_o ServantStatusCharaGraphViewerListViewManager__get_CenterPosition(
        ServantStatusCharaGraphViewerListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0 )
    sub_21FFECC(scrollView, method);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
  v4 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v5 = this->fields.clipOffset.fields.y - localPosition.fields.y;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ServantStatusCharaGraphViewerListViewManager__get_ObjectList(
        ServantStatusCharaGraphViewerListViewManager_o *this,
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

  if ( (byte_593414E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593414E = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}