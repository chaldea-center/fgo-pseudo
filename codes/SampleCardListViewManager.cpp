void SampleCardListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E0C1 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&SampleCardListViewManager_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90);
    byte_4D2E0C1 = 1;
  }
  v1 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v1,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90,
    0);
  SampleCardListViewManager_TypeInfo->static_fields->deckData = (struct System_Int32_array *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SampleCardListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SampleCardListViewManager___ctor(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SampleCardListViewManager__CreateList(SampleCardListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  unsigned int v5; // w21
  __int64 v6; // x22
  System_Collections_Generic_List_object__o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  unsigned int v15; // w28
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  __int64 v22; // x8
  unsigned __int64 v23; // x20
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v26; // x21
  __int64 v27; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4D2E0B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SampleCardListViewDropObject_TypeInfo);
    sub_1C93AD4(&SampleCardListViewItem_TypeInfo);
    sub_1C93AD4(&SampleCardListViewManager_TypeInfo);
    byte_4D2E0B6 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, sum, 0);
  if ( sum >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = sub_1C93D20(SampleCardListViewItem_TypeInfo);
      ListViewItem___ctor_44487500((ListViewItem_o *)v6, v5, 0);
      *(_DWORD *)(v6 + 120) = v5 % 3 + 1;
      itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
      v15 = 0;
      do
      {
        if ( !itemList[5].fields._size )
        {
          j_il2cpp_runtime_class_init_0(itemList);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v16 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v16 )
          goto LABEL_45;
        if ( (signed int)v15 >= *(_DWORD *)(v16 + 24) )
          goto LABEL_16;
        if ( !itemList[5].fields._size )
        {
          j_il2cpp_runtime_class_init_0(itemList);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v17 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v17 )
          goto LABEL_45;
        if ( v15 >= *(_DWORD *)(v17 + 24) )
LABEL_47:
          sub_1C93D34(itemList);
        v18 = *(_DWORD *)(v17 + 4LL * (int)v15++ + 32);
      }
      while ( v5 != v18 );
      *(_BYTE *)(v6 + 124) = 1;
LABEL_16:
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList
        || (items = itemList->fields._items,
            v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
LABEL_45:
        sub_1C93D2C(itemList, v7);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v6,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = (__int64)items + 8 * size;
        itemList->fields._size = size + 1;
        *(_QWORD *)(v22 + 32) = v6;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 32), v6, v8, v9, v10, v11, v12, v13);
      }
      ++v5;
    }
    while ( v5 != sum );
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( itemList )
  {
    v23 = 0;
    while ( (__int64)v23 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v23,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
      if ( Item
        && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SampleCardListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
          v26 = (UnityEngine_Object_o *)Item;
        else
          v26 = 0;
      }
      else
      {
        v26 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
      {
        itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        if ( !SampleCardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SampleCardListViewManager_TypeInfo);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v27 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v27 )
          goto LABEL_45;
        if ( v23 >= *(unsigned int *)(v27 + 24) )
          goto LABEL_47;
        v7 = (System_Collections_Generic_List_object__o *)*(unsigned int *)(v27 + 4 * v23 + 32);
        if ( ((unsigned int)v7 & 0x80000000) != 0 )
        {
          v7 = 0;
          if ( !v26 )
            goto LABEL_45;
        }
        else
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !itemList )
            goto LABEL_45;
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemList,
                                                                    (int32_t)v7,
                                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v7 = itemList;
          if ( !v26 )
            goto LABEL_45;
        }
        ((void (__fastcall *)(UnityEngine_Object_o *, System_Collections_Generic_List_object__o *, const char *))v26->klass[1]._1.name)(
          v26,
          v7,
          v26->klass[1]._1.namespaze);
        v26[1].fields.m_CachedPtr = (intptr_t)this;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26[1].fields, (int32_t)this, v28, v29, v30, v31, v32, v33);
        dropDragPrefab = this->fields.dropDragPrefab;
        v26[2].klass = (UnityEngine_Object_c *)dropDragPrefab;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26[2], (int32_t)dropDragPrefab, v35, v36, v37, v38, v39, v40);
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
      ++v23;
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

  if ( (byte_4D2E0B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&SampleCardListViewItem_TypeInfo);
    byte_4D2E0B7 = 1;
  }
  result = (SampleCardListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SampleCardListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4D2E0C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E0C0 = 1;
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
                                          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
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
    sub_1C93D2C(this, info);
  return SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)v6, (const MethodInfo *)info) != 0;
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
  SampleCardListViewItem_o *Item; // x0

  if ( (byte_4D2E0BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E0BF = 1;
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
                                          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
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
    sub_1C93D2C(this, info);
  Item = SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)v6, (const MethodInfo *)info);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4D2E0BE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E0BE = 1;
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
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2E0BC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SampleCardListViewDropObject_TypeInfo);
    sub_1C93AD4(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_4D2E0BC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      dropObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v15 = v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( v15.fields._current )
      {
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_1C940C8(v15.fields._current);
LABEL_17:
          sub_1C93D2C(v11, v12);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_38246868((SampleCardListViewDropObject_o *)current, mode, v10, delay, v13);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void SampleCardListViewManager__RequestDropObject_38254028(
        SampleCardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2E0BD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SampleCardListViewDropObject_TypeInfo);
    sub_1C93AD4(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_4D2E0BD = 1;
  }
  memset(&v13, 0, sizeof(v13));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      dropObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v13 = v12;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v13.fields._current;
      if ( v13.fields._current )
      {
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_1C940C8(v13.fields._current);
LABEL_17:
          sub_1C93D2C(v9, v10);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_38246992((SampleCardListViewDropObject_o *)current, mode, v8, v11);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2E0BA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C93AD4(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2E0BA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      SampleCardListViewObject__Init_38253424((SampleCardListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewManager__RequestListObject_38253524(
        SampleCardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2E0BB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C93AD4(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2E0BB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      SampleCardListViewObject__Init_38255136((SampleCardListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


void SampleCardListViewManager__SetMode(SampleCardListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SampleCardListViewManager__SetMode_38252544(this, mode, 0, v3);
}


void SampleCardListViewManager__SetMode_38252544(
        SampleCardListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t DropObjectSum; // w0
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  int v22; // w23
  int32_t v23; // w20
  Il2CppObject *v24; // x0
  __int64 naturalAligment; // x10
  SampleCardListViewDropObject_o *v26; // x21
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v30; // x2
  int32_t v31; // w1

  if ( (byte_4D2E0B9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SampleCardListViewDropObject_TypeInfo);
    sub_1C93AD4(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2E0B9 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 3:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_38253524(this, 6, v12);
      v31 = 6;
LABEL_32:
      SampleCardListViewManager__RequestDropObject_38254028(this, v31, v30);
      return;
    case 2:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_38253524(this, 5, v12);
      v31 = 5;
      goto LABEL_32;
    case 1:
      ClippingObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v11);
      if ( !ClippingObjectList )
        goto LABEL_28;
      size = ClippingObjectList->fields._size;
      v16 = ClippingObjectList;
      DropObjectSum = ListViewManager__get_DropObjectSum((ListViewManager_o *)this, 0);
      this->fields.callbackCount = DropObjectSum + size;
      if ( DropObjectSum + size < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
          0.0,
          0);
      }
      else
      {
        if ( v16->fields._size >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v16,
                     v18,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
            v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v20, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            SampleCardListViewObject__Init_38253424(
              (SampleCardListViewObject_o *)Item,
              4,
              v20,
              (float)++v18 * 0.25,
              v21);
            if ( v18 >= v16->fields._size )
              goto LABEL_12;
          }
LABEL_28:
          sub_1C93D2C(ClippingObjectList, v14);
        }
LABEL_12:
        ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        if ( ClippingObjectList )
        {
          v22 = 0;
          v23 = 0;
          while ( v23 < ClippingObjectList->fields._size )
          {
            v24 = System_Collections_Generic_List_object___get_Item(
                    ClippingObjectList,
                    v23,
                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
            if ( v24
              && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
                  v24->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (SampleCardListViewDropObject_c *)v24->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
                v26 = (SampleCardListViewDropObject_o *)v24;
              else
                v26 = 0;
            }
            else
            {
              v26 = 0;
            }
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
            {
              v27 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
              System_Action___ctor(v27, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
              dropObjectList = this->fields.dropObjectList;
              if ( !dropObjectList || !v26 )
                goto LABEL_28;
              SampleCardListViewDropObject__Init_38246868(
                v26,
                4,
                v27,
                (float)(v22 + dropObjectList->fields._size) * 0.25,
                v28);
            }
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
            ++v23;
            --v22;
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
  if ( (byte_4D2E0B8 & 1) == 0 )
  {
    this = (SampleCardListViewManager_o *)sub_1C93AD4(&SampleCardListViewObject_TypeInfo);
    byte_4D2E0B8 = 1;
  }
  if ( !obj
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
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
  SampleCardListViewObject__Init_38252460((SampleCardListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4D2E0B2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2E0B2 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  SampleCardListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ClippingObjectList(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4D2E0B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E0B5 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      Item = (ListViewItem_o *)SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C93D2C(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C93D2C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C93D2C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C93D2C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ObjectList(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4D2E0B4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E0B4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2E0B3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2E0B3 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  SampleCardListViewManager__get_ObjectList(v10, v11);
}