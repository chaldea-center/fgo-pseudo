void SampleCardListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DE32 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&SampleCardListViewManager_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90);
    byte_596DE32 = 1;
  }
  v1 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v1,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90,
    0);
  SampleCardListViewManager_TypeInfo->static_fields->deckData = (struct System_Int32_array *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SampleCardListViewManager_TypeInfo->static_fields,
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
  int *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int *itemList; // x0
  unsigned int v15; // w28
  struct System_Int32_array *deckData; // x8
  char *v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  unsigned __int64 v22; // x20
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_596DE27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SampleCardListViewDropObject_TypeInfo);
    sub_2213A60(&SampleCardListViewItem_TypeInfo);
    sub_2213A60(&SampleCardListViewManager_TypeInfo);
    byte_596DE27 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, sum, 0);
  if ( sum >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = sub_2213CCC(SampleCardListViewItem_TypeInfo);
      ListViewItem___ctor_50819428((ListViewItem_o *)v6, v5, 0);
      itemList = (int *)SampleCardListViewManager_TypeInfo;
      v15 = 0;
      *(_DWORD *)(v6 + 120) = v5 % 3 + 1;
      do
      {
        if ( !itemList[57] )
        {
          j_il2cpp_runtime_class_init_0(itemList, v7, v8);
          itemList = (int *)SampleCardListViewManager_TypeInfo;
        }
        deckData = (struct System_Int32_array *)**((_QWORD **)itemList + 23);
        if ( !deckData )
          goto LABEL_44;
        if ( (signed int)v15 >= SLODWORD(deckData->max_length) )
          goto LABEL_15;
        if ( !itemList[57] )
        {
          j_il2cpp_runtime_class_init_0(itemList, v7, v8);
          itemList = (int *)SampleCardListViewManager_TypeInfo;
          deckData = SampleCardListViewManager_TypeInfo->static_fields->deckData;
          if ( !deckData )
            goto LABEL_44;
        }
        if ( v15 >= LODWORD(deckData->max_length) )
LABEL_46:
          sub_2213CE4(itemList);
        v17 = (char *)deckData + 4 * (int)v15++;
      }
      while ( v5 != *((_DWORD *)v17 + 8) );
      *(_BYTE *)(v6 + 124) = 1;
LABEL_15:
      itemList = (int *)this->fields.itemList;
      if ( !itemList
        || (v18 = *((_QWORD *)itemList + 2),
            v19 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList[7],
            !v18) )
      {
LABEL_44:
        sub_2213CDC(itemList, v7);
      }
      v20 = itemList[6];
      if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v6,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = v18 + 8 * v20;
        itemList[6] = v20 + 1;
        *(_QWORD *)(v21 + 32) = v6;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), v6, v8, v9, v10, v11, v12, v13);
      }
      ++v5;
    }
    while ( v5 != sum );
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  itemList = (int *)this->fields.dropObjectList;
  if ( itemList )
  {
    v22 = 0;
    while ( (__int64)v22 < itemList[6] )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v22,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
      if ( Item
        && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SampleCardListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
          v27 = (UnityEngine_Object_o *)Item;
        else
          v27 = 0;
      }
      else
      {
        v27 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
      if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
      {
        itemList = (int *)SampleCardListViewManager_TypeInfo;
        if ( !*(&SampleCardListViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SampleCardListViewManager_TypeInfo, v7, v28);
          itemList = (int *)SampleCardListViewManager_TypeInfo;
        }
        v29 = **((_QWORD **)itemList + 23);
        if ( !v29 )
          goto LABEL_44;
        if ( v22 >= *(unsigned int *)(v29 + 24) )
          goto LABEL_46;
        v7 = (int *)*(unsigned int *)(v29 + 4 * v22 + 32);
        if ( ((unsigned int)v7 & 0x80000000) != 0 )
        {
          v7 = 0;
          if ( !v27 )
            goto LABEL_44;
        }
        else
        {
          itemList = (int *)this->fields.itemList;
          if ( !itemList )
            goto LABEL_44;
          itemList = (int *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)itemList,
                              (int32_t)v7,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v7 = itemList;
          if ( !v27 )
            goto LABEL_44;
        }
        ((void (__fastcall *)(UnityEngine_Object_o *, int *, const char *))v27->klass[1]._1.name)(
          v27,
          v7,
          v27->klass[1]._1.namespaze);
        v27[1].fields.m_CachedPtr = (intptr_t)this;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27[1].fields, (int32_t)this, v30, v31, v32, v33, v34, v35);
        dropDragPrefab = this->fields.dropDragPrefab;
        v27[2].klass = (UnityEngine_Object_c *)dropDragPrefab;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27[2], (int32_t)dropDragPrefab, v37, v38, v39, v40, v41, v42);
      }
      itemList = (int *)this->fields.dropObjectList;
      ++v22;
      if ( !itemList )
        goto LABEL_44;
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

  if ( (byte_596DE28 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&SampleCardListViewItem_TypeInfo);
    byte_596DE28 = 1;
  }
  result = (SampleCardListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SampleCardListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596DE31 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE31 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info, method);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (SampleCardListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (SampleCardListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  this = (SampleCardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_2213CDC(this, info);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  SampleCardListViewItem_o *Item; // x0

  if ( (byte_596DE30 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE30 = 1;
  }
  if ( !info )
    goto LABEL_20;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info, method);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (SampleCardListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_20;
  this = (SampleCardListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  this = (SampleCardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_20:
    sub_2213CDC(this, info);
  Item = SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)v6, 0);
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

  if ( (byte_596DE2F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE2F = 1;
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


void SampleCardListViewManager__RequestDropObject(
        SampleCardListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  SampleCardListViewDropObject_c *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596DE2D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SampleCardListViewDropObject_TypeInfo);
    sub_2213A60(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_596DE2D = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  memset(&v18, 0, sizeof(v18));
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      dropObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v18 = v17;
    v17.fields._list = 0;
    *(_QWORD *)&v17.fields._index = &v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v18.fields._current;
      if ( v18.fields._current )
      {
        v8 = SampleCardListViewDropObject_TypeInfo;
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v18.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_221405C(v18.fields._current, SampleCardListViewDropObject_TypeInfo, v9, v10);
LABEL_17:
          sub_2213CDC(v14, v15);
        }
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_44464476((SampleCardListViewDropObject_o *)current, mode, v13, delay, v16);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void SampleCardListViewManager__RequestDropObject_44471128(
        SampleCardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  SampleCardListViewDropObject_c *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596DE2E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SampleCardListViewDropObject_TypeInfo);
    sub_2213A60(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_596DE2E = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  memset(&v16, 0, sizeof(v16));
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      dropObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( v16.fields._current )
      {
        v6 = SampleCardListViewDropObject_TypeInfo;
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_221405C(v16.fields._current, SampleCardListViewDropObject_TypeInfo, v7, v8);
LABEL_17:
          sub_2213CDC(v12, v13);
        }
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_44464600((SampleCardListViewDropObject_o *)current, mode, v11, v14);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DE2B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_2213A60(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DE2B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      SampleCardListViewObject__Init_44476528((SampleCardListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewManager__RequestListObject_44470632(
        SampleCardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DE2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_2213A60(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DE2C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      SampleCardListViewObject__Init_44476628((SampleCardListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


void SampleCardListViewManager__SetMode(SampleCardListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SampleCardListViewManager__SetMode_44469776(this, mode, 0, v3);
}


void SampleCardListViewManager__SetMode_44469776(
        SampleCardListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t size; // w21
  int32_t DropObjectSum; // w0
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  int v21; // w23
  int32_t v22; // w20
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 naturalAligment; // x10
  SampleCardListViewDropObject_o *v27; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v31; // x2
  SampleCardListViewManager_o *v32; // x0
  int32_t v33; // w1
  System_String_o *v34; // x1

  if ( (byte_596DE2A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SampleCardListViewDropObject_TypeInfo);
    sub_2213A60(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DE2A = 1;
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
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 3:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_44470632(this, 6, v12);
      v32 = this;
      v33 = 6;
      goto LABEL_32;
    case 2:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_44470632(this, 5, v12);
      v32 = this;
      v33 = 5;
LABEL_32:
      SampleCardListViewManager__RequestDropObject_44471128(v32, v33, v31);
      return;
    case 1:
      ClippingObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v11);
      if ( !ClippingObjectList )
        goto LABEL_28;
      v15 = ClippingObjectList;
      size = ClippingObjectList->fields._size;
      DropObjectSum = ListViewManager__get_DropObjectSum((ListViewManager_o *)this, 0);
      this->fields.callbackCount = DropObjectSum + size;
      if ( DropObjectSum + size < 1 )
      {
        v34 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v34, 0.0, 0);
      }
      else
      {
        if ( v15->fields._size >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v15,
                     v18,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
            v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v20, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            SampleCardListViewObject__Init_44476528(
              (SampleCardListViewObject_o *)Item,
              4,
              v20,
              vcvts_n_f32_s32(++v18, 2u),
              0);
            if ( v18 >= v15->fields._size )
              goto LABEL_12;
          }
LABEL_28:
          sub_2213CDC(ClippingObjectList, v14);
        }
LABEL_12:
        ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        if ( ClippingObjectList )
        {
          v21 = 0;
          v22 = 0;
          while ( v22 < ClippingObjectList->fields._size )
          {
            v23 = System_Collections_Generic_List_object___get_Item(
                    ClippingObjectList,
                    v22,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
            if ( v23
              && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
                  v23->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (SampleCardListViewDropObject_c *)v23->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
                v27 = (SampleCardListViewDropObject_o *)v23;
              else
                v27 = 0;
            }
            else
            {
              v27 = 0;
            }
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
            {
              v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v28, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
              dropObjectList = this->fields.dropObjectList;
              if ( !dropObjectList || !v27 )
                goto LABEL_28;
              SampleCardListViewDropObject__Init_44464476(
                v27,
                4,
                v28,
                vcvts_n_f32_s32(v21 + dropObjectList->fields._size, 2u),
                v29);
            }
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
            ++v22;
            --v21;
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
  ListViewObject_o *v4; // x20
  SampleCardListViewManager_o *v5; // x19
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v4 = obj;
  v5 = this;
  if ( (byte_596DE29 & 1) == 0 )
  {
    this = (SampleCardListViewManager_o *)sub_2213A60(&SampleCardListViewObject_TypeInfo);
    byte_596DE29 = 1;
  }
  if ( v4 )
  {
    naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SampleCardListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( v5->fields.initMode != 3 )
  {
    if ( v4 )
    {
      v7 = 2;
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(this, obj);
  }
  if ( !v4 )
    goto LABEL_14;
  SampleCardListViewObject__set_IsFront((SampleCardListViewObject_o *)v4, 1, 0);
  v7 = 6;
LABEL_13:
  SampleCardListViewObject__Init_44474520((SampleCardListViewObject_o *)v4, v7, 0);
}


void SampleCardListViewManager__add_callbackFunc(
        SampleCardListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SampleCardListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596DE23 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DE23 = 1;
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
  SampleCardListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ClippingObjectList(
        SampleCardListViewManager_o *this,
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
  __int64 v12; // x1
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

  if ( (byte_596DE26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE26 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__,
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
              v24 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__,
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
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ObjectList(
        SampleCardListViewManager_o *this,
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

  if ( (byte_596DE25 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE25 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__,
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
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


void SampleCardListViewManager__remove_callbackFunc(
        SampleCardListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SampleCardListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596DE24 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DE24 = 1;
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
  SampleCardListViewManager__get_ObjectList(v11, v12);
}