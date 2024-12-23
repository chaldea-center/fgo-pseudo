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
  int64_t v14; // x23
  int64_t v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  __int64 v31; // x8

  if ( (byte_4B642BE & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v3);
    sub_1BE4ACC(&ScriptAssetListViewItem_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_12729/*"ScriptActionEncrypt"*/, v5);
    byte_4B642BE = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorageList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorageList(
                                                                    (System_String_o *)StringLiteral_12729/*"ScriptActionEncrypt"*/,
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
        sub_1BE4D30(v10, v11);
      v14 = *((_QWORD *)&v9->fields._syncRoot + v12);
      v15 = sub_1BE4D18(ScriptAssetListViewItem_TypeInfo);
      ListViewItem___ctor_41686696((ListViewItem_o *)v15, v12, 0LL);
      *(_QWORD *)(v15 + 112) = v14;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v15 + 112), v14, v16, v17, v18, v19, v20, v21);
      AssetStorageList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !AssetStorageList )
        break;
      items = AssetStorageList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++AssetStorageList->fields._version;
      if ( !items )
        break;
      size = AssetStorageList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          AssetStorageList,
          (Il2CppObject *)v15,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = (__int64)items + 8 * size;
        AssetStorageList->fields._size = size + 1;
        *(_QWORD *)(v31 + 32) = v15;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 32), v15, v22, v23, v24, v25, v26, v27);
      }
      if ( v13 == ++v12 )
        goto LABEL_15;
    }
LABEL_16:
    sub_1BE4D28(AssetStorageList, v7);
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

  if ( (byte_4B642BF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&ScriptAssetListViewItem_TypeInfo, v5);
    byte_4B642BF = 1;
  }
  result = (ScriptAssetListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptAssetListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo_35EBF54 *v9; // x2
  __int64 methodPtr_low; // x10
  int32_t v11; // w1
  __int64 v12; // x10

  if ( (byte_4B642C4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, name);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ScriptAssetListViewItem_TypeInfo, v6);
    byte_4B642C4 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  v8 = 1;
  while ( 1 )
  {
    v9 = (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v8 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v8 - 1,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v9 = (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
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
    sub_1BE4D28(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 14);
}


void __fastcall ScriptAssetListViewManager__OnClickListView(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_1BE4D28(this, 0LL);
  Index = ListViewObject__get_Index(obj, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4B642C3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B642C3 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1BE4D28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B642C1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__, v11);
    sub_1BE4ACC(&Method_ScriptAssetListViewManager_OnMoveEnd__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B642C1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptAssetListViewManager__get_ObjectList(
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      ScriptAssetListViewObject__Init_35695632((ScriptAssetListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewManager__RequestListObject_35687964(
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B642C2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__, v9);
    sub_1BE4ACC(&Method_ScriptAssetListViewManager_OnMoveEnd__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B642C2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptAssetListViewManager__get_ObjectList(
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      ScriptAssetListViewObject__Init_35695716((ScriptAssetListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


void __fastcall ScriptAssetListViewManager__SetMode(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptAssetListViewManager__SetMode_35687844(this, mode, 0LL, v3);
}


void __fastcall ScriptAssetListViewManager__SetMode_35687844(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptAssetListViewManager__RequestListObject_35687964(this, 3, v10);
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
  if ( (byte_4B642C0 & 1) == 0 )
  {
    this = (ScriptAssetListViewManager_o *)sub_1BE4ACC(&ScriptAssetListViewObject_TypeInfo, obj);
    byte_4B642C0 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptAssetListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptAssetListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptAssetListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptAssetListViewObject__Init_35694476((ScriptAssetListViewObject_o *)obj, v7, 0LL);
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

  if ( (byte_4B642BB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B642BB = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B642BD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B642BD = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B642BC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B642BC = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  ScriptAssetListViewManager__get_ObjectList(v10, v11);
}