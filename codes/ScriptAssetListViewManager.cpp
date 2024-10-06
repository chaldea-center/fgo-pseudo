void __fastcall ScriptAssetListViewManager___ctor(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ScriptAssetListViewManager__CreateList(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *AssetStorageList; // x0
  __int64 v7; // x1
  __int64 v8; // x22
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned __int64 v12; // x21
  __int64 v13; // x26
  __int64 v14; // x23
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x8

  if ( (byte_4A6D6D3 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Add__, v3);
    sub_1B90010(&ScriptAssetListViewItem_TypeInfo, v4);
    sub_1B90010(&StringLiteral_12560/*"ScriptActionEncrypt"*/, v5);
    byte_4A6D6D3 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorageList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorageList(
                                                                    (System_String_o *)StringLiteral_12560/*"ScriptActionEncrypt"*/,
                                                                    0LL);
  if ( !AssetStorageList )
    goto LABEL_16;
  v8 = *(_QWORD *)&AssetStorageList->fields._size;
  v9 = AssetStorageList;
  ListViewManager__CreateList((ListViewManager_o *)this, v8, 0LL);
  if ( (int)v8 >= 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v8;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9->fields._size )
        sub_1B90274(v10, v11);
      v14 = *((_QWORD *)&v9->fields._syncRoot + v12);
      v15 = sub_1B9025C(ScriptAssetListViewItem_TypeInfo);
      ListViewItem___ctor_40760684((ListViewItem_o *)v15, v12, 0LL);
      *(_QWORD *)(v15 + 112) = v14;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 112), v14, v16, v17);
      AssetStorageList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !AssetStorageList )
        break;
      items = AssetStorageList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++AssetStorageList->fields._version;
      if ( !items )
        break;
      size = AssetStorageList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          AssetStorageList,
          (Il2CppObject *)v15,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = (__int64)items + 8 * size;
        AssetStorageList->fields._size = size + 1;
        *(_QWORD *)(v23 + 32) = v15;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 32), v15, v18, v19);
      }
      if ( v13 == ++v12 )
        goto LABEL_15;
    }
LABEL_16:
    sub_1B9026C(AssetStorageList, v7);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ScriptAssetListViewManager__DestroyList(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall ScriptAssetListViewManager__GetClickResult(
        ScriptAssetListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


// local variable allocation has failed, the output may be wrong!
ScriptAssetListViewItem_o *__fastcall ScriptAssetListViewManager__GetItem(
        ScriptAssetListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ScriptAssetListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A6D6D4 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B90010(&ScriptAssetListViewItem_TypeInfo, v5);
    byte_4A6D6D4 = 1;
  }
  result = (ScriptAssetListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptAssetListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ScriptAssetListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ScriptAssetListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptAssetListViewItem_TypeInfo )
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


System_String_o *__fastcall ScriptAssetListViewManager__GetNextName(
        ScriptAssetListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *itemList; // x0
  int v8; // w21
  const MethodInfo_35106F0 *v9; // x2
  __int64 methodPtr_low; // x10
  int32_t v11; // w1
  __int64 v12; // x10

  if ( (byte_4A6D6D9 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, name);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B90010(&ScriptAssetListViewItem_TypeInfo, v6);
    byte_4A6D6D9 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  v8 = 1;
  while ( 1 )
  {
    v9 = (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v8 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v8 - 1,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    methodPtr_low = LOBYTE(ScriptAssetListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(ScriptAssetListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ScriptAssetListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( System_String__op_Equality(*((System_String_o **)itemList + 14), name, 0LL) )
    {
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v9 = (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v11 = v8;
        goto LABEL_15;
      }
      goto LABEL_19;
    }
    itemList = this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_19;
  }
  v11 = 0;
LABEL_15:
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v11,
               v9);
  if ( !itemList
    || (v12 = LOBYTE(ScriptAssetListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)v12)
    || *(ScriptAssetListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * v12 - 8) != ScriptAssetListViewItem_TypeInfo )
  {
LABEL_19:
    sub_1B9026C(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 14);
}


void __fastcall ScriptAssetListViewManager__OnClickListView(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_1B9026C(this, 0LL);
  Index = ListViewObject__get_Index(obj, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ScriptAssetListViewManager__OnMoveEnd(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4A6D6D8 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6D6D8 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B9026C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v8, v9);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewManager__RequestListObject(
        ScriptAssetListViewManager_o *this,
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

  if ( (byte_4A6D6D6 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__, v11);
    sub_1B90010(&Method_ScriptAssetListViewManager_OnMoveEnd__, v12);
    sub_1B90010(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4A6D6D6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptAssetListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B9026C(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B9026C(v19, v20);
      ScriptAssetListViewObject__Init_34955668((ScriptAssetListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewManager__RequestListObject_34954640(
        ScriptAssetListViewManager_o *this,
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

  if ( (byte_4A6D6D7 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__, v9);
    sub_1B90010(&Method_ScriptAssetListViewManager_OnMoveEnd__, v10);
    sub_1B90010(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4A6D6D7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptAssetListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B9026C(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B9026C(v17, v18);
      ScriptAssetListViewObject__Init_34955752((ScriptAssetListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


void __fastcall ScriptAssetListViewManager__SetMode(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptAssetListViewManager__SetMode_34954520(this, mode, 0LL, v3);
}


void __fastcall ScriptAssetListViewManager__SetMode_34954520(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptAssetListViewManager__RequestListObject_34954640(this, 3, v6);
  }
}


void __fastcall ScriptAssetListViewManager__SetObjectItem(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptAssetListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A6D6D5 & 1) == 0 )
  {
    this = (ScriptAssetListViewManager_o *)sub_1B90010(&ScriptAssetListViewObject_TypeInfo, obj);
    byte_4A6D6D5 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptAssetListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptAssetListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptAssetListViewObject_TypeInfo )
  {
    sub_1B9026C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptAssetListViewObject__Init_34954440((ScriptAssetListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ScriptAssetListViewManager__add_callbackFunc(
        ScriptAssetListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptAssetListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A6D6D0 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6D6D0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
  ScriptAssetListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptAssetListViewObject__o *__fastcall ScriptAssetListViewManager__get_ObjectList(
        ScriptAssetListViewManager_o *this,
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A6D6D2 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    byte_4A6D6D2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B9026C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B9026C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B9026C(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B9026C(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptAssetListViewObject__o *)v11;
}


void __fastcall ScriptAssetListViewManager__remove_callbackFunc(
        ScriptAssetListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptAssetListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A6D6D1 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, value);
    byte_4A6D6D1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
  ScriptAssetListViewManager__get_ObjectList(v10, v11);
}