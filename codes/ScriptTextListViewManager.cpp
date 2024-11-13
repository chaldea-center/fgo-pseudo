void __fastcall ScriptTextListViewManager___ctor(ScriptTextListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ScriptTextListViewManager__CreateList(
        ScriptTextListViewManager_o *this,
        System_String_array *textLineData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  unsigned __int64 v12; // x21
  __int64 v13; // x24
  System_String_o *v14; // x23
  ScriptTextListViewItem_o *v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4B139F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, textLineData, method);
    sub_1BCA7E0(&ScriptTextListViewItem_TypeInfo, v5, v6);
    byte_4B139F8 = 1;
  }
  if ( textLineData )
  {
    v7 = *(_QWORD *)&textLineData->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v7, 0LL);
    if ( (int)v7 >= 1 )
    {
      v12 = 0LL;
      v13 = (unsigned int)v7;
      do
      {
        if ( v12 >= textLineData->max_length )
          sub_1BCAA44(v8, v9);
        v14 = textLineData->m_Items[v12];
        v15 = (ScriptTextListViewItem_o *)sub_1BCAA2C(ScriptTextListViewItem_TypeInfo, v9, v10, v11);
        ScriptTextListViewItem___ctor(v15, v12, v14, v16);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v26 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BCAA3C(itemList, v17);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v15;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
        }
        ++v12;
      }
      while ( v13 != v12 );
    }
  }
  else
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ScriptTextListViewManager__DestroyList(ScriptTextListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ScriptTextListViewItem_o *__fastcall ScriptTextListViewManager__GetItem(
        ScriptTextListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ScriptTextListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B139F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ScriptTextListViewItem_TypeInfo, v5, v6);
    byte_4B139F9 = 1;
  }
  result = (ScriptTextListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptTextListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ScriptTextListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ScriptTextListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptTextListViewItem_TypeInfo )
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


void __fastcall ScriptTextListViewManager__OnClickListView(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScriptTextListViewManager__OnClickSingleListView(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptTextListViewManager_o *v4; // x20
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4B139FE & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1BCA7E0(&ScriptTextListViewItem_TypeInfo, obj, method);
    byte_4B139FE = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(this, obj);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ScriptTextListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ScriptTextListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ScriptTextListViewItem_TypeInfo )
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
      3LL,
      v8,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ScriptTextListViewManager__OnLongPushListView(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptTextListViewManager_o *v4; // x20
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4B139FF & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1BCA7E0(&ScriptTextListViewItem_TypeInfo, obj, method);
    byte_4B139FF = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(this, obj);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ScriptTextListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ScriptTextListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ScriptTextListViewItem_TypeInfo )
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
      3LL,
      v8,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ScriptTextListViewManager__OnMoveEnd(ScriptTextListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x20

  if ( (byte_4B139FD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B139FD = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
void __fastcall ScriptTextListViewManager__RequestListObject(
        ScriptTextListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B139FB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptTextListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_ScriptTextListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B139FB = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptTextListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_ScriptTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      ScriptTextListViewObject__Init_35582828((ScriptTextListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextListViewManager__RequestListObject_35581800(
        ScriptTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B139FC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptTextListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ScriptTextListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B139FC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptTextListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_ScriptTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      ScriptTextListViewObject__Init_35582912((ScriptTextListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
  }
}


void __fastcall ScriptTextListViewManager__SetMode(
        ScriptTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptTextListViewManager__SetMode_35581688(this, mode, 0LL, v3);
}


void __fastcall ScriptTextListViewManager__SetMode_35581688(
        ScriptTextListViewManager_o *this,
        int32_t mode,
        ScriptTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
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
    ScriptTextListViewManager__RequestListObject_35581800(this, 3, v10);
}


void __fastcall ScriptTextListViewManager__SetObjectItem(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptTextListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B139FA & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1BCA7E0(&ScriptTextListViewObject_TypeInfo, obj, item);
    byte_4B139FA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptTextListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptTextListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptTextListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptTextListViewObject__Init_35581608((ScriptTextListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ScriptTextListViewManager__add_callbackFunc(
        ScriptTextListViewManager_o *this,
        ScriptTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptTextListViewManager_o *v10; // x0
  ScriptTextListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B139F5 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B139F5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ScriptTextListViewManager_CallbackFunc_c *)v7->klass != ScriptTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  ScriptTextListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptTextListViewObject__o *__fastcall ScriptTextListViewManager__get_ObjectList(
        ScriptTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B139F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScriptTextListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptTextListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptTextListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptTextListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B139F7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ScriptTextListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptTextListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScriptTextListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_ScriptTextListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptTextListViewObject__o *)v21;
}


void __fastcall ScriptTextListViewManager__remove_callbackFunc(
        ScriptTextListViewManager_o *this,
        ScriptTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptTextListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B139F6 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B139F6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ScriptTextListViewManager_CallbackFunc_c *)v7->klass != ScriptTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  ScriptTextListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextListViewManager_CallbackFunc___ctor(
        ScriptTextListViewManager_CallbackFunc_o *this,
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0A614;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0A5BC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptTextListViewManager_CallbackFunc__BeginInvoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptTextListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4B13A00 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextListViewManager_ResultKind_TypeInfo, *(_QWORD *)&result, item);
    byte_4B13A00 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptTextListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall ScriptTextListViewManager_CallbackFunc__EndInvoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScriptTextListViewManager_CallbackFunc__Invoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptTextListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, ScriptTextListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}