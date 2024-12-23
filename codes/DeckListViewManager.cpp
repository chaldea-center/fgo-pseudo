void __fastcall DeckListViewManager___ctor(DeckListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall DeckListViewManager__CreateList(
        DeckListViewManager_o *this,
        PartyListViewItem_array *baseDeckItemList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  PartyListViewItem_o *v17; // x23
  ListViewItem_o *v18; // x22
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4B626DA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, baseDeckItemList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestRacePointMaster___, v5);
    sub_1BE4ACC(&DeckListViewItem_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&StringLiteral_12238/*"SHOP_LIST_EMPTY"*/, v10);
    byte_4B626DA = 1;
  }
  this->fields.kind = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestRacePointMaster___);
  if ( !baseDeckItemList )
    goto LABEL_19;
  ListViewManager__CreateList((ListViewManager_o *)this, baseDeckItemList->max_length, 0LL);
  v15 = *(_QWORD *)&baseDeckItemList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BE4D30(v13, v14);
      v17 = baseDeckItemList->m_Items[v16];
      v18 = (ListViewItem_o *)sub_1BE4D18(DeckListViewItem_TypeInfo);
      ListViewItem___ctor_41686696(v18, v16, 0LL);
      v18[1].klass = (ListViewItem_c *)v17;
      sub_1BE4A70(&v18[1]);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v19 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v19 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v18,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = v18;
        v13 = sub_1BE4A70(v22 + 32);
      }
      LODWORD(v15) = baseDeckItemList->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_15;
    }
LABEL_19:
    sub_1BE4D28(Instance, v12);
  }
LABEL_15:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"SHOP_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_19;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
DeckListViewItem_o *__fastcall DeckListViewManager__GetItem(
        DeckListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B626DB & 1) == 0 )
  {
    sub_1BE4ACC(&DeckListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B626DB = 1;
  }
  result = (DeckListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (DeckListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)result,
                                     index,
                                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(DeckListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (DeckListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != DeckListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall DeckListViewManager__OnClickListView(
        DeckListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct DeckListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BE4A70(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BE4D28(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall DeckListViewManager__OnMoveEnd(DeckListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B626DF & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B626DF = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1BE4D28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BE4A70(&this->fields.callbackFunc2);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewManager__RequestListObject(
        DeckListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B626DD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_DeckListViewManager_OnMoveEnd__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject__GetEnumerator__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject__get_Count__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B626DD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)DeckListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_DeckListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_DeckListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      DeckListViewObject__Init_32519416((DeckListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewManager__RequestListObject_32518388(
        DeckListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B626DE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_DeckListViewManager_OnMoveEnd__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject__GetEnumerator__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject__get_Count__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B626DE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)DeckListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_DeckListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_DeckListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      DeckListViewObject__Init_32519500((DeckListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_DeckListViewObject__Dispose__);
  }
}


void __fastcall DeckListViewManager__SetMode(
        DeckListViewManager_o *this,
        int32_t mode,
        DeckListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BE4A70(&this->fields.callbackFunc);
  DeckListViewManager__SetMode_32518232(this, mode, v6);
}


void __fastcall DeckListViewManager__SetMode_32518232(
        DeckListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    DeckListViewManager__RequestListObject_32518388(this, v6, v5);
  }
}


void __fastcall DeckListViewManager__SetMode_32518336(
        DeckListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BE4A70(&this->fields.callbackFunc2);
  DeckListViewManager__SetMode_32518232(this, mode, v6);
}


void __fastcall DeckListViewManager__SetObjectItem(
        DeckListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  DeckListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B626DC & 1) == 0 )
  {
    this = (DeckListViewManager_o *)sub_1BE4ACC(&DeckListViewObject_TypeInfo, obj);
    byte_4B626DC = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1BE4D28(this, obj);
  methodPtr_low = LOBYTE(DeckListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (DeckListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != DeckListViewObject_TypeInfo )
  {
    this = (DeckListViewManager_o *)sub_1BE4FE8(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  DeckListViewObject__Init_32518108((DeckListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall DeckListViewManager__add_callbackFunc(
        DeckListViewManager_o *this,
        DeckListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct DeckListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  DeckListViewManager_o *v10; // x0
  DeckListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B626D4 & 1) == 0 )
  {
    sub_1BE4ACC(&DeckListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B626D4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (DeckListViewManager_CallbackFunc_c *)v7->klass != DeckListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (DeckListViewManager_o *)sub_1BE4FE8(v7);
  DeckListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall DeckListViewManager__add_callbackFunc2(
        DeckListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  DeckListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B626D6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B626D6 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (DeckListViewManager_o *)sub_1BE4FE8(v7);
  DeckListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_DeckListViewObject__o *__fastcall DeckListViewManager__get_ClippingObjectList(
        DeckListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B626D9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_DeckListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_DeckListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B626D9 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_DeckListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BE4D28(0LL, v18);
      Item = (ListViewItem_o *)DeckListViewObject__GetItem((DeckListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BE4D28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41702652((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BE4D28(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_DeckListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BE4D28(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BE4D28(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_DeckListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BE4D28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BE4A70(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_DeckListViewObject__o *)v11;
}


System_Collections_Generic_List_DeckListViewObject__o *__fastcall DeckListViewManager__get_ObjectList(
        DeckListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B626D8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_DeckListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_DeckListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B626D8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_DeckListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_DeckListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BE4A70(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_DeckListViewObject__o *)v11;
}


void __fastcall DeckListViewManager__remove_callbackFunc(
        DeckListViewManager_o *this,
        DeckListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct DeckListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  DeckListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B626D5 & 1) == 0 )
  {
    sub_1BE4ACC(&DeckListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B626D5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (DeckListViewManager_CallbackFunc_c *)v7->klass != DeckListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (DeckListViewManager_o *)sub_1BE4FE8(v7);
  DeckListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall DeckListViewManager__remove_callbackFunc2(
        DeckListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  DeckListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B626D7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B626D7 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (DeckListViewManager_o *)sub_1BE4FE8(v7);
  DeckListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewManager_CallbackFunc___ctor(
        DeckListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A20A20;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A209C8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall DeckListViewManager_CallbackFunc__BeginInvoke(
        DeckListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = result;
  if ( (byte_4B626E0 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&DeckListViewManager_ResultKind_TypeInfo, v9);
    byte_4B626E0 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(DeckListViewManager_ResultKind_TypeInfo, &v16, *(_QWORD *)&index, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall DeckListViewManager_CallbackFunc__EndInvoke(
        DeckListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall DeckListViewManager_CallbackFunc__Invoke(
        DeckListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}