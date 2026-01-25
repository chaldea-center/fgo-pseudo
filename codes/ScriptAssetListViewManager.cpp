void ScriptAssetListViewManager___ctor(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptAssetListViewManager__CreateList(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *AssetStorageList; // x0
  __int64 v4; // x1
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  unsigned __int64 v8; // x21
  __int64 v9; // x26
  __int64 v10; // x23
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  __int64 v27; // x8

  if ( (byte_4CEBB99 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&ScriptAssetListViewItem_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12689/*"ScriptActionEncrypt"*/);
    byte_4CEBB99 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorageList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorageList(
                                                                    (System_String_o *)StringLiteral_12689/*"ScriptActionEncrypt"*/,
                                                                    0);
  if ( !AssetStorageList )
    goto LABEL_16;
  v5 = *(_QWORD *)&AssetStorageList->fields._size;
  v6 = AssetStorageList;
  ListViewManager__CreateList((ListViewManager_o *)this, v5, 0);
  if ( (int)v5 >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)v5;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6->fields._size )
        sub_1C7BD48(v7);
      v10 = *((_QWORD *)&v6->fields._syncRoot + v8);
      v11 = sub_1C7BD34(ScriptAssetListViewItem_TypeInfo);
      ListViewItem___ctor_44325320((ListViewItem_o *)v11, v8, 0);
      *(_QWORD *)(v11 + 120) = v10;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v11 + 120), v10, v12, v13, v14, v15, v16, v17);
      AssetStorageList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !AssetStorageList )
        break;
      items = AssetStorageList->fields._items;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++AssetStorageList->fields._version;
      if ( !items )
        break;
      size = AssetStorageList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          AssetStorageList,
          (Il2CppObject *)v11,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = (__int64)items + 8 * size;
        AssetStorageList->fields._size = size + 1;
        *(_QWORD *)(v27 + 32) = v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 32), v11, v18, v19, v20, v21, v22, v23);
      }
      if ( v9 == ++v8 )
        goto LABEL_15;
    }
LABEL_16:
    sub_1C7BD40(AssetStorageList, v4);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptAssetListViewManager__DestroyList(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t ScriptAssetListViewManager__GetClickResult(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


ScriptAssetListViewItem_o *ScriptAssetListViewManager__GetItem(
        ScriptAssetListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptAssetListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CEBB9A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&ScriptAssetListViewItem_TypeInfo);
    byte_4CEBB9A = 1;
  }
  result = (ScriptAssetListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptAssetListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptAssetListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptAssetListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptAssetListViewItem_TypeInfo )
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


System_String_o *ScriptAssetListViewManager__GetNextName(
        ScriptAssetListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w21
  const MethodInfo_383EB2C *v7; // x2
  __int64 naturalAligment; // x10
  int32_t v9; // w1
  __int64 v10; // x10

  if ( (byte_4CEBB9F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&ScriptAssetListViewItem_TypeInfo);
    byte_4CEBB9F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  v6 = 1;
  while ( 1 )
  {
    v7 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v6 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v6 - 1,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    naturalAligment = ScriptAssetListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
      || *(ScriptAssetListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ScriptAssetListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( System_String__op_Equality(*((System_String_o **)itemList + 15), name, 0) )
    {
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v7 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v9 = v6;
        goto LABEL_15;
      }
      goto LABEL_19;
    }
    itemList = this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_19;
  }
  v9 = 0;
LABEL_15:
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v9,
               v7);
  if ( !itemList
    || (v10 = ScriptAssetListViewItem_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)v10)
    || *(ScriptAssetListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * v10 - 8) != ScriptAssetListViewItem_TypeInfo )
  {
LABEL_19:
    sub_1C7BD40(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 15);
}


void ScriptAssetListViewManager__OnClickListView(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_1C7BD40(this, 0);
  Index = ListViewObject__get_Index(obj, 0);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void ScriptAssetListViewManager__OnMoveEnd(ScriptAssetListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CEBB9E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBB9E = 1;
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
      if ( !this->fields.isInput )
      {
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
}


// local variable allocation has failed, the output may be wrong!
void ScriptAssetListViewManager__RequestListObject(
        ScriptAssetListViewManager_o *this,
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEBB9C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ScriptAssetListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEBB9C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptAssetListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v12, v13);
      ScriptAssetListViewObject__Init_37960996((ScriptAssetListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptAssetListViewManager__RequestListObject_37887148(
        ScriptAssetListViewManager_o *this,
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEBB9D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ScriptAssetListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEBB9D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptAssetListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      ScriptAssetListViewObject__Init_37961080((ScriptAssetListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


void ScriptAssetListViewManager__SetMode(ScriptAssetListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptAssetListViewManager__SetMode_37887028(this, mode, 0, v3);
}


void ScriptAssetListViewManager__SetMode_37887028(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

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
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptAssetListViewManager__RequestListObject_37887148(this, 3, v10);
  }
}


void ScriptAssetListViewManager__SetObjectItem(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptAssetListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CEBB9B & 1) == 0 )
  {
    this = (ScriptAssetListViewManager_o *)sub_1C7BAE8(&ScriptAssetListViewObject_TypeInfo);
    byte_4CEBB9B = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptAssetListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptAssetListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptAssetListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptAssetListViewObject__Init_37959840((ScriptAssetListViewObject_o *)obj, v7, 0);
}


void ScriptAssetListViewManager__add_callbackFunc(
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

  if ( (byte_4CEBB96 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBB96 = 1;
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
  ScriptAssetListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptAssetListViewObject__o *ScriptAssetListViewManager__get_ObjectList(
        ScriptAssetListViewManager_o *this,
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

  if ( (byte_4CEBB98 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBB98 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__);
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
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__;
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
  return (System_Collections_Generic_List_ScriptAssetListViewObject__o *)v3;
}


void ScriptAssetListViewManager__remove_callbackFunc(
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

  if ( (byte_4CEBB97 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBB97 = 1;
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
  ScriptAssetListViewManager__get_ObjectList(v10, v11);
}