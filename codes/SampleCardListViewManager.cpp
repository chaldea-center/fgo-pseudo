void SampleCardListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C40766 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&SampleCardListViewManager_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90);
    byte_4C40766 = 1;
  }
  v1 = (System_Array_o *)sub_1C37100(int___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v1, v2, 0);
  SampleCardListViewManager_TypeInfo->static_fields->deckData = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)SampleCardListViewManager_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void SampleCardListViewManager___ctor(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SampleCardListViewManager__CreateList(SampleCardListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  unsigned int v5; // w21
  __int64 v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  unsigned int v10; // w28
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w8
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x8
  unsigned __int64 v18; // x20
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x8
  int32_t v23; // w1
  System_Collections_Generic_List_object__o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C4075B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    sub_1C37058(&SampleCardListViewItem_TypeInfo);
    sub_1C37058(&SampleCardListViewManager_TypeInfo);
    byte_4C4075B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, sum, 0);
  if ( sum >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = sub_1C372A4(SampleCardListViewItem_TypeInfo);
      ListViewItem___ctor_43804668((ListViewItem_o *)v6, v5, 0);
      *(_DWORD *)(v6 + 120) = v5 % 3 + 1;
      itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
      v10 = 0;
      do
      {
        if ( !itemList[5].fields._size )
        {
          j_il2cpp_runtime_class_init_0(itemList);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v11 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v11 )
          goto LABEL_45;
        if ( (signed int)v10 >= *(_DWORD *)(v11 + 24) )
          goto LABEL_16;
        if ( !itemList[5].fields._size )
        {
          j_il2cpp_runtime_class_init_0(itemList);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v12 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v12 )
          goto LABEL_45;
        if ( v10 >= *(_DWORD *)(v12 + 24) )
LABEL_47:
          sub_1C372BC(itemList);
        v13 = *(_DWORD *)(v12 + 4LL * (int)v10++ + 32);
      }
      while ( v5 != v13 );
      *(_BYTE *)(v6 + 124) = 1;
LABEL_16:
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList
        || (items = itemList->fields._items,
            v15 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
LABEL_45:
        sub_1C372B4(itemList);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v6,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = (__int64)items + 8 * size;
        itemList->fields._size = size + 1;
        *(_QWORD *)(v17 + 32) = v6;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), v6, v7, v8);
      }
      ++v5;
    }
    while ( v5 != sum );
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( itemList )
  {
    v18 = 0;
    while ( (__int64)v18 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v18,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
      if ( Item
        && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SampleCardListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
          v21 = (UnityEngine_Object_o *)Item;
        else
          v21 = 0;
      }
      else
      {
        v21 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
      {
        itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        if ( !SampleCardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SampleCardListViewManager_TypeInfo);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v22 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v22 )
          goto LABEL_45;
        if ( v18 >= *(unsigned int *)(v22 + 24) )
          goto LABEL_47;
        v23 = *(_DWORD *)(v22 + 4 * v18 + 32);
        if ( v23 < 0 )
        {
          v24 = 0;
          if ( !v21 )
            goto LABEL_45;
        }
        else
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !itemList )
            goto LABEL_45;
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemList,
                                                                    v23,
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v24 = itemList;
          if ( !v21 )
            goto LABEL_45;
        }
        ((void (__fastcall *)(UnityEngine_Object_o *, System_Collections_Generic_List_object__o *, const char *))v21->klass[1]._1.name)(
          v21,
          v24,
          v21->klass[1]._1.namespaze);
        v21[1].fields.m_CachedPtr = (intptr_t)this;
        sub_1C36FFC((CGThumbnailListItem_o *)&v21[1].fields, (int32_t)this, v25, v26);
        dropDragPrefab = this->fields.dropDragPrefab;
        v21[2].klass = (UnityEngine_Object_c *)dropDragPrefab;
        sub_1C36FFC((CGThumbnailListItem_o *)&v21[2], (int32_t)dropDragPrefab, v28, v29);
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
      ++v18;
      if ( !itemList )
        goto LABEL_45;
    }
  }
}


void SampleCardListViewManager__DestroyList(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


SampleCardListViewItem_o *SampleCardListViewManager__GetItem(
        SampleCardListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SampleCardListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C4075C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&SampleCardListViewItem_TypeInfo);
    byte_4C4075C = 1;
  }
  result = (SampleCardListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SampleCardListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SampleCardListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewItem_TypeInfo )
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


bool SampleCardListViewManager__IsDropDropSurface(
        SampleCardListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C40765 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40765 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (SampleCardListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (SampleCardListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_1C372B4(this);
  return SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)v6, v8) != 0;
}


bool SampleCardListViewManager__IsItemDropSurface(
        SampleCardListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x1
  SampleCardListViewItem_o *Item; // x0

  if ( (byte_4C40764 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40764 = 1;
  }
  if ( !info )
    goto LABEL_20;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (SampleCardListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_20;
  this = (SampleCardListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_20:
    sub_1C372B4(this);
  Item = SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)v6, v8);
  return Item && !Item->fields.isDeck;
}


void SampleCardListViewManager__OnClickListView(
        SampleCardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SampleCardListViewManager__OnMoveEnd(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C40763 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40763 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


void SampleCardListViewManager__RequestDropObject(
        SampleCardListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C40761 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    sub_1C37058(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_4C40761 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      dropObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v14 = v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( v14.fields._current )
      {
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_1C37574(v14.fields._current);
LABEL_17:
          sub_1C372B4(v11);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_37637696((SampleCardListViewDropObject_o *)current, mode, v10, delay, v12);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void SampleCardListViewManager__RequestDropObject_37644948(
        SampleCardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C40762 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    sub_1C37058(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_4C40762 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      dropObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( v12.fields._current )
      {
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v12.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_1C37574(v12.fields._current);
LABEL_17:
          sub_1C372B4(v9);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_37637820((SampleCardListViewDropObject_o *)current, mode, v8, v10);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewManager__RequestListObject(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4C4075F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C37058(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C4075F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
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
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      SampleCardListViewObject__Init_37644344((SampleCardListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewManager__RequestListObject_37644444(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4C40760 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C37058(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C40760 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
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
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      SampleCardListViewObject__Init_37646056((SampleCardListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


void SampleCardListViewManager__SetMode(SampleCardListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SampleCardListViewManager__SetMode_37643464(this, mode, 0, v3);
}


void SampleCardListViewManager__SetMode_37643464(
        SampleCardListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t DropObjectSum; // w0
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  int v17; // w23
  int32_t v18; // w20
  Il2CppObject *v19; // x0
  __int64 naturalAligment; // x10
  SampleCardListViewDropObject_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v25; // x2
  int32_t v26; // w1

  if ( (byte_4C4075E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SampleCardListViewDropObject_TypeInfo);
    sub_1C37058(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C4075E = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 3:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_37644444(this, 6, v8);
      v26 = 6;
LABEL_32:
      SampleCardListViewManager__RequestDropObject_37644948(this, v26, v25);
      return;
    case 2:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_37644444(this, 5, v8);
      v26 = 5;
      goto LABEL_32;
    case 1:
      ClippingObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v7);
      if ( !ClippingObjectList )
        goto LABEL_28;
      size = ClippingObjectList->fields._size;
      v11 = ClippingObjectList;
      DropObjectSum = ListViewManager__get_DropObjectSum((ListViewManager_o *)this, 0);
      this->fields.callbackCount = DropObjectSum + size;
      if ( DropObjectSum + size < 1 )
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
        if ( v11->fields._size >= 1 )
        {
          v13 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v11,
                     v13,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
            v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(v15, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            SampleCardListViewObject__Init_37644344(
              (SampleCardListViewObject_o *)Item,
              4,
              v15,
              (float)++v13 * 0.25,
              v16);
            if ( v13 >= v11->fields._size )
              goto LABEL_12;
          }
LABEL_28:
          sub_1C372B4(ClippingObjectList);
        }
LABEL_12:
        ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        if ( ClippingObjectList )
        {
          v17 = 0;
          v18 = 0;
          while ( v18 < ClippingObjectList->fields._size )
          {
            v19 = System_Collections_Generic_List_object___get_Item(
                    ClippingObjectList,
                    v18,
                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
            if ( v19
              && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
                  v19->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (SampleCardListViewDropObject_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
                v21 = (SampleCardListViewDropObject_o *)v19;
              else
                v21 = 0;
            }
            else
            {
              v21 = 0;
            }
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
            {
              v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(v22, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
              dropObjectList = this->fields.dropObjectList;
              if ( !dropObjectList || !v21 )
                goto LABEL_28;
              SampleCardListViewDropObject__Init_37637696(
                v21,
                4,
                v22,
                (float)(v17 + dropObjectList->fields._size) * 0.25,
                v23);
            }
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
            ++v18;
            --v17;
            if ( !ClippingObjectList )
              goto LABEL_28;
          }
        }
      }
      break;
  }
}


void SampleCardListViewManager__SetObjectItem(
        SampleCardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SampleCardListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C4075D & 1) == 0 )
  {
    this = (SampleCardListViewManager_o *)sub_1C37058(&SampleCardListViewObject_TypeInfo);
    byte_4C4075D = 1;
  }
  if ( !obj
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 3 )
  {
    SampleCardListViewObject__set_IsFront((SampleCardListViewObject_o *)obj, 1, (const MethodInfo *)item);
    v7 = 6;
  }
  else
  {
    v7 = 2;
  }
  SampleCardListViewObject__Init_37643380((SampleCardListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SampleCardListViewManager__add_callbackFunc(
        SampleCardListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SampleCardListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C40757 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40757 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  SampleCardListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ClippingObjectList(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4C4075A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4075A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
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
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)Component_object, v8);
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
          v15 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
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
        v15 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
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
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ObjectList(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4C40759 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40759 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
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
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
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
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


void SampleCardListViewManager__remove_callbackFunc(
        SampleCardListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SampleCardListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C40758 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40758 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  SampleCardListViewManager__get_ObjectList(v10, v11);
}