void __fastcall ScriptObjectListViewManager___ctor(ScriptObjectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ScriptObjectListViewManager__CreateList(
        ScriptObjectListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectNameList; // x0
  __int64 v7; // x1
  __int64 v8; // x22
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned __int64 v12; // x21
  __int64 v13; // x24
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

  if ( (byte_4BC5226 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, data);
    sub_1C1ABD4(&ScriptObjectListViewItem_TypeInfo, v5);
    byte_4BC5226 = 1;
  }
  if ( data )
  {
    ObjectNameList = (System_Collections_Generic_List_object__o *)AssetData__GetObjectNameList(data, 0LL);
    if ( !ObjectNameList )
      goto LABEL_17;
    v8 = *(_QWORD *)&ObjectNameList->fields._size;
    v9 = ObjectNameList;
    ListViewManager__CreateList((ListViewManager_o *)this, v8, 0LL);
    if ( (int)v8 >= 1 )
    {
      v12 = 0LL;
      v13 = (unsigned int)v8;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)v9->fields._size )
          sub_1C1AE38(v10, v11);
        v14 = *((_QWORD *)&v9->fields._syncRoot + v12);
        v15 = sub_1C1AE20(ScriptObjectListViewItem_TypeInfo);
        ListViewItem___ctor_41943804((ListViewItem_o *)v15, v12, 0LL);
        *(_QWORD *)(v15 + 112) = v14;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v15 + 112), v14, v16, v17, v18, v19, v20, v21);
        ObjectNameList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !ObjectNameList )
          break;
        items = ObjectNameList->fields._items;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++ObjectNameList->fields._version;
        if ( !items )
          break;
        size = ObjectNameList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            ObjectNameList,
            (Il2CppObject *)v15,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = (__int64)items + 8 * size;
          ObjectNameList->fields._size = size + 1;
          *(_QWORD *)(v31 + 32) = v15;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 32), v15, v22, v23, v24, v25, v26, v27);
        }
        if ( v13 == ++v12 )
          goto LABEL_16;
      }
LABEL_17:
      sub_1C1AE30(ObjectNameList, v7);
    }
  }
  else
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ScriptObjectListViewManager__DestroyList(ScriptObjectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ScriptObjectListViewItem_o *__fastcall ScriptObjectListViewManager__GetItem(
        ScriptObjectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ScriptObjectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BC5227 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&ScriptObjectListViewItem_TypeInfo, v5);
    byte_4BC5227 = 1;
  }
  result = (ScriptObjectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptObjectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ScriptObjectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ScriptObjectListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptObjectListViewItem_TypeInfo )
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


void __fastcall ScriptObjectListViewManager__OnClickListView(
        ScriptObjectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptObjectListViewManager_o *v4; // x20
  struct ScriptObjectListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4BC522C & 1) == 0 )
  {
    this = (ScriptObjectListViewManager_o *)sub_1C1ABD4(&ScriptObjectListViewItem_TypeInfo, obj);
    byte_4BC522C = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C1AE30(this, obj);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ScriptObjectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ScriptObjectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ScriptObjectListViewItem_TypeInfo )
        v8 = obj->fields.linkItem;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, struct ListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      v8,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ScriptObjectListViewManager__OnMoveEnd(ScriptObjectListViewManager_o *this, const MethodInfo *method)
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
  struct ScriptObjectListViewManager_CallbackFunc_o *callbackFunc; // x20

  if ( (byte_4BC522B & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC522B = 1;
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
          sub_1C1AE30(0LL, v7);
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
          sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            0LL,
            0LL,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptObjectListViewManager__RequestListObject(
        ScriptObjectListViewManager_o *this,
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

  if ( (byte_4BC5229 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__get_Count__, v11);
    sub_1C1ABD4(&Method_ScriptObjectListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v13);
    byte_4BC5229 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptObjectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptObjectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v19, v20);
      ScriptObjectListViewObject__Init_36017632((ScriptObjectListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptObjectListViewManager__RequestListObject_36016604(
        ScriptObjectListViewManager_o *this,
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

  if ( (byte_4BC522A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_ScriptObjectListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BC522A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptObjectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptObjectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      ScriptObjectListViewObject__Init_36017716((ScriptObjectListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__);
  }
}


void __fastcall ScriptObjectListViewManager__SetMode(
        ScriptObjectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptObjectListViewManager__SetMode_36016492(this, mode, 0LL, v3);
}


void __fastcall ScriptObjectListViewManager__SetMode_36016492(
        ScriptObjectListViewManager_o *this,
        int32_t mode,
        ScriptObjectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C1AB78(
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
    ScriptObjectListViewManager__RequestListObject_36016604(this, 3, v10);
}


void __fastcall ScriptObjectListViewManager__SetObjectItem(
        ScriptObjectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptObjectListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4BC5228 & 1) == 0 )
  {
    this = (ScriptObjectListViewManager_o *)sub_1C1ABD4(&ScriptObjectListViewObject_TypeInfo, obj);
    byte_4BC5228 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptObjectListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptObjectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptObjectListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptObjectListViewObject__Init_36016412((ScriptObjectListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ScriptObjectListViewManager__add_callbackFunc(
        ScriptObjectListViewManager_o *this,
        ScriptObjectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptObjectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptObjectListViewManager_o *v10; // x0
  ScriptObjectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4BC5223 & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptObjectListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC5223 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ScriptObjectListViewManager_CallbackFunc_c *)v7->klass != ScriptObjectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  ScriptObjectListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptObjectListViewObject__o *__fastcall ScriptObjectListViewManager__get_ObjectList(
        ScriptObjectListViewManager_o *this,
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

  if ( (byte_4BC5225 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ScriptObjectListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ScriptObjectListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_ScriptObjectListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC5225 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ScriptObjectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ScriptObjectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ScriptObjectListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ScriptObjectListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptObjectListViewObject__o *)v11;
}


void __fastcall ScriptObjectListViewManager__remove_callbackFunc(
        ScriptObjectListViewManager_o *this,
        ScriptObjectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptObjectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptObjectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4BC5224 & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptObjectListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC5224 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ScriptObjectListViewManager_CallbackFunc_c *)v7->klass != ScriptObjectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  ScriptObjectListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptObjectListViewManager_CallbackFunc___ctor(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A59840;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A597E8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptObjectListViewManager_CallbackFunc__BeginInvoke(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4BC522D & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptObjectListViewManager_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4BC522D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptObjectListViewManager_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v11, callback, object);
}


void __fastcall ScriptObjectListViewManager_CallbackFunc__EndInvoke(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall ScriptObjectListViewManager_CallbackFunc__Invoke(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, ScriptObjectListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}