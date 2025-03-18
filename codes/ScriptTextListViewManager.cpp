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
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned __int64 v9; // x21
  __int64 v10; // x24
  System_String_o *v11; // x23
  ScriptTextListViewItem_o *v12; // x22
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4C1F6E8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, textLineData);
    sub_1C3B764(&ScriptTextListViewItem_TypeInfo, v5);
    byte_4C1F6E8 = 1;
  }
  if ( textLineData )
  {
    v6 = *(_QWORD *)&textLineData->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v6, 0LL);
    if ( (int)v6 >= 1 )
    {
      v9 = 0LL;
      v10 = (unsigned int)v6;
      do
      {
        if ( v9 >= textLineData->max_length )
          sub_1C3B9C8(v7, v8);
        v11 = textLineData->m_Items[v9];
        v12 = (ScriptTextListViewItem_o *)sub_1C3B9B0(ScriptTextListViewItem_TypeInfo);
        ScriptTextListViewItem___ctor(v12, v9, v11, v13);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v23 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C3B9C0(itemList, v14);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1C3B708((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v12, v15, v16, v17, v18, v19, v20);
        }
        ++v9;
      }
      while ( v10 != v9 );
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
  ScriptTextListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4C1F6E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C3B764(&ScriptTextListViewItem_TypeInfo, v5);
    byte_4C1F6E9 = 1;
  }
  result = (ScriptTextListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptTextListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4C1F6EE & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1C3B764(&ScriptTextListViewItem_TypeInfo, obj);
    byte_4C1F6EE = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C3B9C0(this, obj);
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
  if ( (byte_4C1F6EF & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1C3B764(&ScriptTextListViewItem_TypeInfo, obj);
    byte_4C1F6EF = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C3B9C0(this, obj);
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
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x20

  if ( (byte_4C1F6ED & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1F6ED = 1;
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
          sub_1C3B9C0(0LL, v7);
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
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4C1F6EB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptTextListViewObject__get_Count__, v11);
    sub_1C3B764(&Method_ScriptTextListViewManager_OnMoveEnd__, v12);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v13);
    byte_4C1F6EB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptTextListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v19, v20);
      ScriptTextListViewObject__Init_36242900((ScriptTextListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextListViewManager__RequestListObject_36241872(
        ScriptTextListViewManager_o *this,
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

  if ( (byte_4C1F6EC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptTextListViewObject__get_Count__, v9);
    sub_1C3B764(&Method_ScriptTextListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C1F6EC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptTextListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      ScriptTextListViewObject__Init_36242984((ScriptTextListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
  }
}


void __fastcall ScriptTextListViewManager__SetMode(
        ScriptTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptTextListViewManager__SetMode_36241760(this, mode, 0LL, v3);
}


void __fastcall ScriptTextListViewManager__SetMode_36241760(
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
  sub_1C3B708(
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
    ScriptTextListViewManager__RequestListObject_36241872(this, 3, v10);
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
  if ( (byte_4C1F6EA & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1C3B764(&ScriptTextListViewObject_TypeInfo, obj);
    byte_4C1F6EA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptTextListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptTextListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptTextListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptTextListViewObject__Init_36241680((ScriptTextListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C1F6E5 & 1) == 0 )
  {
    sub_1C3B764(&ScriptTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1F6E5 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  ScriptTextListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptTextListViewObject__o *__fastcall ScriptTextListViewManager__get_ObjectList(
        ScriptTextListViewManager_o *this,
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

  if ( (byte_4C1F6E7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ScriptTextListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptTextListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptTextListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_ScriptTextListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1F6E7 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ScriptTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ScriptTextListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ScriptTextListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ScriptTextListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptTextListViewObject__o *)v11;
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

  if ( (byte_4C1F6E6 & 1) == 0 )
  {
    sub_1C3B764(&ScriptTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1F6E6 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A79F60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A79F08;
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
  if ( (byte_4C1F6F0 & 1) == 0 )
  {
    sub_1C3B764(&ScriptTextListViewManager_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4C1F6F0 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptTextListViewManager_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1C3B718(this, v11, callback, object);
}


void __fastcall ScriptTextListViewManager_CallbackFunc__EndInvoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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