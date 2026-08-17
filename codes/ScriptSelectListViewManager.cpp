void ScriptSelectListViewManager___ctor(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptSelectListViewManager__CreateList(
        ScriptSelectListViewManager_o *this,
        System_String_array *selectMessageList,
        UnityEngine_Font_o *fontType,
        ScriptSelectListViewManager_ClickDelegate_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x23
  __int64 v15; // x0
  unsigned __int64 v16; // x22
  __int64 v17; // x27
  System_String_o *v18; // x24
  ScriptSelectListViewItem_o *v19; // x23
  const MethodInfo *v20; // x4
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8

  if ( (byte_5972906 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&ScriptSelectListViewItem_TypeInfo);
    byte_5972906 = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)callbackFunc,
    (System_String_o *)fontType,
    (System_String_o *)callbackFunc,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !selectMessageList )
    goto LABEL_14;
  max_length = selectMessageList->max_length;
  ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = (unsigned int)max_length;
    while ( 1 )
    {
      if ( v16 >= LODWORD(selectMessageList->max_length) )
        sub_2213CE4(v15);
      v18 = selectMessageList->m_Items[v16];
      v19 = (ScriptSelectListViewItem_o *)sub_2213CCC(ScriptSelectListViewItem_TypeInfo);
      ScriptSelectListViewItem___ctor(v19, v16, v18, fontType, v20);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v19, v21, v22, v23, v24, v25, v26);
      }
      if ( v17 == ++v16 )
        goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(itemList, v13);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptSelectListViewManager__CreateListHidden(
        ScriptSelectListViewManager_o *this,
        System_String_array *selectMessageList,
        System_Int32_array *itemIds,
        UnityEngine_Font_o *fontType,
        ScriptSelectListViewManager_ClickDelegate_o *callbackFunc,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  il2cpp_array_size_t max_length; // x23
  unsigned __int64 v16; // x26
  __int64 v17; // x29
  int32_t v18; // w24
  System_String_o *v19; // x25
  ScriptSelectListViewItem_o *v20; // x23
  const MethodInfo *v21; // x4
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8

  if ( (byte_5972907 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&ScriptSelectListViewItem_TypeInfo);
    byte_5972907 = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)callbackFunc,
    (System_String_o *)itemIds,
    (System_String_o *)fontType,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7);
  if ( !selectMessageList )
    goto LABEL_16;
  max_length = selectMessageList->max_length;
  ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
  if ( (int)max_length >= 1 )
  {
    if ( itemIds )
    {
      v16 = 0;
      v17 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v16 >= LODWORD(itemIds->max_length) || v16 >= LODWORD(selectMessageList->max_length) )
          sub_2213CE4(itemList);
        v18 = itemIds->m_Items[v16];
        v19 = selectMessageList->m_Items[v16];
        v20 = (ScriptSelectListViewItem_o *)sub_2213CCC(ScriptSelectListViewItem_TypeInfo);
        ScriptSelectListViewItem___ctor(v20, v18, v19, fontType, v21);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v20,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v20, v22, v23, v24, v25, v26, v27);
        }
        if ( v17 == ++v16 )
          goto LABEL_15;
      }
    }
LABEL_16:
    sub_2213CDC(itemList, v14);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptSelectListViewManager__DestroyList(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.clickFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, 0, v2, v3, v4, v5, v6, v7);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptSelectListViewItem_o *ScriptSelectListViewManager__GetItem(
        ScriptSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptSelectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5972908 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&ScriptSelectListViewItem_TypeInfo);
    byte_5972908 = 1;
  }
  result = (ScriptSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptSelectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptSelectListViewItem_TypeInfo )
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


void ScriptSelectListViewManager__OnClickListView(
        ScriptSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ScriptSelectListViewManager_ClickDelegate_o *clickFunc; // x19
  __int64 Index; // x1

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    if ( !obj )
      sub_2213CDC(this, 0);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      Index,
      clickFunc->fields.method);
  }
}


void ScriptSelectListViewManager__OnMoveEnd(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_597290D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597290D = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_2213CDC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewManager__RequestListObject(
        ScriptSelectListViewManager_o *this,
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_597290B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__);
    sub_2213A60(&Method_ScriptSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_597290B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewManager__get_ObjectList(
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
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      ScriptSelectListViewObject__Init_51909768((ScriptSelectListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewManager__RequestListObject_51909852(
        ScriptSelectListViewManager_o *this,
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
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_597290C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__);
    sub_2213A60(&Method_ScriptSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_597290C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewManager__get_ObjectList(
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
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      ScriptSelectListViewObject__Init_51910980((ScriptSelectListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewManager__SetMode(
        ScriptSelectListViewManager_o *this,
        int32_t mode,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  int32_t v21; // w22
  ScriptSelectListViewObject_o *v22; // x23
  int items_high; // w29
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+18h] [xbp-88h] BYREF

  if ( (byte_597290A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__);
    sub_2213A60(&Method_ScriptSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_597290A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    *(System_String_o **)&index,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewManager__get_ObjectList(this, v12);
  v16 = ObjectList;
  if ( mode != 3 )
  {
    if ( mode == 2 )
    {
      ScriptSelectListViewManager__RequestListObject_51909852(this, 4, v15);
    }
    else if ( mode == 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)ListViewManager__get_ObjectSum(
                                                                  (ListViewManager_o *)this,
                                                                  0);
      this->fields.callbackCount = (int)ObjectList;
      if ( (int)ObjectList >= 1 )
      {
        if ( !v16 )
          goto LABEL_31;
        if ( v16->fields._size >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v16,
                     v17,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__);
            v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v19, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              goto LABEL_31;
            ScriptSelectListViewObject__Init_51909768(
              (ScriptSelectListViewObject_o *)Item,
              3,
              v19,
              (float)++v17 * 0.1,
              v20);
            if ( v17 >= v16->fields._size )
              goto LABEL_28;
          }
        }
        goto LABEL_28;
      }
LABEL_27:
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
        0.0,
        0);
      if ( !v16 )
        goto LABEL_31;
      goto LABEL_28;
    }
    if ( !v16 )
      goto LABEL_31;
    goto LABEL_28;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  this->fields.callbackCount = (int)ObjectList;
  if ( (int)ObjectList < 1 )
    goto LABEL_27;
  if ( !v16 )
    goto LABEL_31;
  if ( v16->fields._size >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v16,
                                                                  v21,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      v22 = (ScriptSelectListViewObject_o *)ObjectList;
      ObjectList = (System_Collections_Generic_List_object__o *)ScriptSelectListViewObject__GetItem(
                                                                  (ScriptSelectListViewObject_o *)ObjectList,
                                                                  v14);
      if ( !ObjectList )
        break;
      items_high = HIDWORD(ObjectList->fields._items);
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0);
      if ( items_high == index )
        v26 = 6;
      else
        v26 = 5;
      ScriptSelectListViewObject__Init_51909768(v22, v26, v24, 0.0, v25);
      if ( ++v21 >= v16->fields._size )
        goto LABEL_28;
    }
LABEL_31:
    sub_2213CDC(ObjectList, v14);
  }
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v16,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    ;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
}


void ScriptSelectListViewManager__SetObjectItem(
        ScriptSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5972909 & 1) == 0 )
  {
    sub_2213A60(&ScriptSelectListViewObject_TypeInfo);
    byte_5972909 = 1;
  }
  if ( obj
    && (naturalAligment = ScriptSelectListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ScriptSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptSelectListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 4;
LABEL_14:
  ScriptSelectListViewObject__Init_51909696((ScriptSelectListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void ScriptSelectListViewManager__add_callbackFunc(
        ScriptSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  ScriptSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_5972903 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5972903 = 1;
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
    v8 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v9 = v8 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
  ScriptSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptSelectListViewObject__o *ScriptSelectListViewManager__get_ObjectList(
        ScriptSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5972905 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptSelectListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ScriptSelectListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972905 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ScriptSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ScriptSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
      v17 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v19 = Method_System_Collections_Generic_List_ScriptSelectListViewObject__Add__,
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptSelectListViewObject__o *)v3;
}


void ScriptSelectListViewManager__remove_callbackFunc(
        ScriptSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  ScriptSelectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5972904 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5972904 = 1;
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
    v8 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v9 = v8 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
  ScriptSelectListViewManager__get_ObjectList(v10, v11);
}


void ScriptSelectListViewManager_ClickDelegate___ctor(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2010108;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20100C0;
}


System_IAsyncResult_o *ScriptSelectListViewManager_ClickDelegate__BeginInvoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        int32_t select,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = select;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ScriptSelectListViewManager_ClickDelegate__EndInvoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptSelectListViewManager_ClickDelegate__Invoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        int32_t select,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    select,
    this->fields.method);
}