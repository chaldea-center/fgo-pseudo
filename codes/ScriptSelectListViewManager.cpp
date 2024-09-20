void __fastcall ScriptSelectListViewManager___ctor(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ScriptSelectListViewManager__CreateList(
        ScriptSelectListViewManager_o *this,
        System_String_array *selectMessageList,
        UnityEngine_Font_o *fontType,
        ScriptSelectListViewManager_ClickDelegate_o *callbackFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  unsigned __int64 v14; // x22
  __int64 v15; // x27
  System_String_o *v16; // x24
  ScriptSelectListViewItem_o *v17; // x23
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4A5CDD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&ScriptSelectListViewItem_TypeInfo);
    byte_4A5CDD1 = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc,
    (int32_t)callbackFunc,
    (int32_t)fontType,
    (int32_t)callbackFunc);
  if ( !selectMessageList )
    goto LABEL_14;
  v11 = *(_QWORD *)&selectMessageList->max_length;
  ListViewManager__CreateList((ListViewManager_o *)this, v11, 0LL);
  if ( (int)v11 >= 1 )
  {
    v14 = 0LL;
    v15 = (unsigned int)v11;
    while ( 1 )
    {
      if ( v14 >= selectMessageList->max_length )
        sub_1B88814(v12, v13);
      v16 = selectMessageList->m_Items[v14];
      v17 = (ScriptSelectListViewItem_o *)sub_1B887FC(ScriptSelectListViewItem_TypeInfo);
      ScriptSelectListViewItem___ctor(v17, v14, v16, fontType, v18);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
      }
      if ( v15 == ++v14 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(itemList, v10);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ScriptSelectListViewManager__CreateListHidden(
        ScriptSelectListViewManager_o *this,
        System_String_array *selectMessageList,
        System_Int32_array *itemIds,
        UnityEngine_Font_o *fontType,
        ScriptSelectListViewManager_ClickDelegate_o *callbackFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v12; // x1
  __int64 v13; // x23
  unsigned __int64 v14; // x26
  __int64 v15; // x29
  int32_t v16; // w24
  System_String_o *v17; // x25
  ScriptSelectListViewItem_o *v18; // x23
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A5CDD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&ScriptSelectListViewItem_TypeInfo);
    byte_4A5CDD2 = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc,
    (int32_t)callbackFunc,
    (int32_t)itemIds,
    (int32_t)fontType);
  if ( !selectMessageList )
    goto LABEL_17;
  v13 = *(_QWORD *)&selectMessageList->max_length;
  ListViewManager__CreateList((ListViewManager_o *)this, v13, 0LL);
  if ( (int)v13 >= 1 )
  {
    if ( itemIds )
    {
      v14 = 0LL;
      v15 = (unsigned int)v13;
      while ( 1 )
      {
        if ( v14 >= itemIds->max_length || v14 >= selectMessageList->max_length )
          sub_1B88814(itemList, v12);
        v16 = itemIds->m_Items[v14 + 1];
        v17 = selectMessageList->m_Items[v14];
        v18 = (ScriptSelectListViewItem_o *)sub_1B887FC(ScriptSelectListViewItem_TypeInfo);
        ScriptSelectListViewItem___ctor(v18, v16, v17, fontType, v19);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v18;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
        }
        if ( v15 == ++v14 )
          goto LABEL_15;
      }
    }
LABEL_17:
    sub_1B8880C(itemList, v12);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ScriptSelectListViewManager__DestroyList(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.clickFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, 0, v2, v3);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


ScriptSelectListViewItem_o *__fastcall ScriptSelectListViewManager__GetItem(
        ScriptSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5CDD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ScriptSelectListViewItem_TypeInfo);
    byte_4A5CDD3 = 1;
  }
  result = (ScriptSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ScriptSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ScriptSelectListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptSelectListViewItem_TypeInfo )
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


void __fastcall ScriptSelectListViewManager__OnClickListView(
        ScriptSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ScriptSelectListViewManager_ClickDelegate_o *clickFunc; // x19
  unsigned int Index; // w0

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    if ( !obj )
      sub_1B8880C(this, 0LL);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      Index,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall ScriptSelectListViewManager__OnMoveEnd(ScriptSelectListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5CDD8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CDD8 = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v8, v9);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager__RequestListObject(
        ScriptSelectListViewManager_o *this,
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

  if ( (byte_4A5CDD6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_ScriptSelectListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5CDD6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      ScriptSelectListViewObject__Init_41715948((ScriptSelectListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager__RequestListObject_41716032(
        ScriptSelectListViewManager_o *this,
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

  if ( (byte_4A5CDD7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_ScriptSelectListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5CDD7 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      ScriptSelectListViewObject__Init_41717184((ScriptSelectListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
  }
}


void __fastcall ScriptSelectListViewManager__SetMode(
        ScriptSelectListViewManager_o *this,
        int32_t mode,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3
  int32_t v18; // w22
  ScriptSelectListViewObject_o *v19; // x23
  int items_high; // w29
  System_Action_o *v21; // x24
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF

  if ( (byte_4A5CDD5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__);
    sub_1B885B0(&Method_ScriptSelectListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5CDD5 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    index,
    (int32_t)callback);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewManager__get_ObjectList(this, v9);
  v13 = ObjectList;
  if ( mode != 3 )
  {
    if ( mode == 2 )
    {
      ScriptSelectListViewManager__RequestListObject_41716032(this, 4, v12);
    }
    else if ( mode == 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)ListViewManager__get_ObjectSum(
                                                                  (ListViewManager_o *)this,
                                                                  0LL);
      this->fields.callbackCount = (int)ObjectList;
      if ( (int)ObjectList >= 1 )
      {
        if ( !v13 )
          goto LABEL_31;
        if ( v13->fields._size >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v13,
                     v14,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__);
            v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
            if ( !Item )
              goto LABEL_31;
            ScriptSelectListViewObject__Init_41715948(
              (ScriptSelectListViewObject_o *)Item,
              3,
              v16,
              (float)++v14 * 0.1,
              v17);
            if ( v14 >= v13->fields._size )
              goto LABEL_28;
          }
        }
        goto LABEL_28;
      }
LABEL_27:
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
        0.0,
        0LL);
      if ( !v13 )
        goto LABEL_31;
      goto LABEL_28;
    }
    if ( !v13 )
      goto LABEL_31;
    goto LABEL_28;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ListViewManager__get_ObjectSum(
                                                              (ListViewManager_o *)this,
                                                              0LL);
  this->fields.callbackCount = (int)ObjectList;
  if ( (int)ObjectList < 1 )
    goto LABEL_27;
  if ( !v13 )
    goto LABEL_31;
  if ( v13->fields._size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v13,
                                                                  v18,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      v19 = (ScriptSelectListViewObject_o *)ObjectList;
      ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewObject__GetItem(
                                                                  (ScriptSelectListViewObject_o *)ObjectList,
                                                                  v11);
      if ( !ObjectList )
        break;
      items_high = HIDWORD(ObjectList->fields._items);
      v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
      if ( items_high == index )
        v23 = 6;
      else
        v23 = 5;
      ScriptSelectListViewObject__Init_41715948(v19, v23, v21, 0.0, v22);
      if ( ++v18 >= v13->fields._size )
        goto LABEL_28;
    }
LABEL_31:
    sub_1B8880C(ObjectList, v11);
  }
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v13,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    ;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
}


void __fastcall ScriptSelectListViewManager__SetObjectItem(
        ScriptSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptSelectListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5CDD4 & 1) == 0 )
  {
    this = (ScriptSelectListViewManager_o *)sub_1B885B0(&ScriptSelectListViewObject_TypeInfo);
    byte_4A5CDD4 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ScriptSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ScriptSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptSelectListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 4;
  else
    v7 = 2;
  ScriptSelectListViewObject__Init_41715876((ScriptSelectListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ScriptSelectListViewManager__add_callbackFunc(
        ScriptSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5CDCE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5CDCE = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  ScriptSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptSelectListViewObject__o *__fastcall ScriptSelectListViewManager__get_ObjectList(
        ScriptSelectListViewManager_o *this,
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5CDD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSelectListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ScriptSelectListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CDD0 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ScriptSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ScriptSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ScriptSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptSelectListViewObject__o *)v3;
}


void __fastcall ScriptSelectListViewManager__remove_callbackFunc(
        ScriptSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptSelectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A5CDCF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5CDCF = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  ScriptSelectListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager_ClickDelegate___ctor(
        ScriptSelectListViewManager_ClickDelegate_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D0250;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D0208;
}


System_IAsyncResult_o *__fastcall ScriptSelectListViewManager_ClickDelegate__BeginInvoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        int32_t select,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = select;
  if ( (byte_4A5CDD9 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5CDD9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ScriptSelectListViewManager_ClickDelegate__EndInvoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall ScriptSelectListViewManager_ClickDelegate__Invoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        int32_t select,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    select,
    *(_QWORD *)&this->fields.extra_arg);
}