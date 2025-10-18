void ScriptBackLogListViewManager___ctor(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptBackLogListViewManager__CreateList(
        ScriptBackLogListViewManager_o *this,
        System_Collections_Generic_List_ScriptMessageLabel__o *logList,
        float offsetY,
        ScriptBackLogListViewManager_ClickDelegate_o *callbackFunc,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *mPanel; // x0
  int size; // w21
  struct UIScrollView_o *scrollView; // x8
  float height; // s0
  struct UIScrollView_o *v13; // x8
  float v14; // s8
  int v15; // w9
  int32_t v16; // w22
  Il2CppObject *Item; // x24
  __int64 v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  float v24; // s0
  int v25; // s1
  struct ListViewItem_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4C44EE9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C37058(&ScriptBackLogListViewItem_TypeInfo);
    byte_4C44EE9 = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)callbackFunc, (int32_t)callbackFunc, method);
  if ( !logList )
    goto LABEL_20;
  size = logList->fields._size;
  ListViewManager__CreateList((ListViewManager_o *)this, size, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_20;
  mPanel = (struct System_Collections_Generic_List_ListViewItem__o *)scrollView->fields.mPanel;
  if ( !mPanel )
    goto LABEL_20;
  height = UIPanel__get_height((UIPanel_o *)mPanel, 0);
  v13 = this->fields.scrollView;
  if ( !v13 )
    goto LABEL_20;
  v14 = height + offsetY;
  if ( v14 <= 0.0 )
    v15 = 6;
  else
    v15 = 0;
  v13->fields.contentPivot = v15;
  if ( size >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)logList,
               v16,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
      v18 = sub_1C372A4(ScriptBackLogListViewItem_TypeInfo);
      ListViewItem___ctor_43804668((ListViewItem_o *)v18, v16, 0);
      *(_QWORD *)(v18 + 120) = Item;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 120), (int32_t)Item, v19, v20);
      v23 = *(_QWORD *)(v18 + 120);
      if ( !v23 )
        break;
      v25 = *(_DWORD *)(v23 + 72);
      v24 = *(float *)(v23 + 76);
      *(_DWORD *)(v18 + 108) = 0;
      *(_DWORD *)(v18 + 100) = v25;
      *(float *)(v18 + 104) = v24 - v14;
      mPanel = this->fields.itemList;
      if ( !mPanel )
        break;
      items = mPanel->fields._items;
      v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++mPanel->fields._version;
      if ( !items )
        break;
      v28 = mPanel->fields._size;
      if ( (unsigned int)v28 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)mPanel,
          (Il2CppObject *)v18,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + v28;
        mPanel->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)v18;
        sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 4), v18, v21, v22);
      }
      if ( size == ++v16 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1C372B4(mPanel);
  }
LABEL_19:
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptBackLogListViewManager__DestroyList(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.clickFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickFunc, 0, v2, v3);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptBackLogListViewItem_o *ScriptBackLogListViewManager__GetItem(
        ScriptBackLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptBackLogListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C44EEA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&ScriptBackLogListViewItem_TypeInfo);
    byte_4C44EEA = 1;
  }
  result = (ScriptBackLogListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBackLogListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptBackLogListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptBackLogListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBackLogListViewItem_TypeInfo )
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


void ScriptBackLogListViewManager__OnClickBack(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  struct ScriptBackLogListViewManager_ClickDelegate_o *clickFunc; // x8

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0xFFFFFFFFLL,
      clickFunc->fields.method);
}


void ScriptBackLogListViewManager__OnClickListView(
        ScriptBackLogListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ScriptBackLogListViewManager_ClickDelegate_o *clickFunc; // x19
  unsigned int Index; // w0

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    if ( !obj )
      sub_1C372B4(this);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      Index,
      clickFunc->fields.method);
  }
}


void ScriptBackLogListViewManager__OnEnable(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  ListViewManager__OnEnable((ListViewManager_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void ScriptBackLogListViewManager__OnMoveEnd(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C44EEF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44EEF = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLogListViewManager__RequestListObject(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C44EED & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__get_Count__);
    sub_1C37058(&Method_ScriptBackLogListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C44EED = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBackLogListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptBackLogListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      ScriptBackLogListViewObject__Init_44778376((ScriptBackLogListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLogListViewManager__RequestListObject_44777348(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C44EEE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__get_Count__);
    sub_1C37058(&Method_ScriptBackLogListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C44EEE = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBackLogListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptBackLogListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      ScriptBackLogListViewObject__Init_44778460((ScriptBackLogListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
  }
}


void ScriptBackLogListViewManager__SetMode(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptBackLogListViewManager__SetMode_44776960(this, mode, 0, v3);
}


void ScriptBackLogListViewManager__SetMode_44776960(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_ScriptBackLogListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x2
  bool v10; // zf
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C44EEC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    byte_4C44EEC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  ObjectList = ScriptBackLogListViewManager__get_ObjectList(this, v7);
  v10 = mode == 1;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v10 )
    ScriptBackLogListViewManager__RequestListObject_44777348(this, 3, v9);
  if ( !v11 )
    sub_1C372B4(ObjectList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    v11,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    ;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
}


void ScriptBackLogListViewManager__SetObjectItem(
        ScriptBackLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptBackLogListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C44EEB & 1) == 0 )
  {
    this = (ScriptBackLogListViewManager_o *)sub_1C37058(&ScriptBackLogListViewObject_TypeInfo);
    byte_4C44EEB = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBackLogListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBackLogListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBackLogListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBackLogListViewObject__Init_44776888((ScriptBackLogListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ScriptBackLogListViewManager__add_callbackFunc(
        ScriptBackLogListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptBackLogListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C44EE6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C44EE6 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ScriptBackLogListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBackLogListViewObject__o *ScriptBackLogListViewManager__get_ObjectList(
        ScriptBackLogListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C44EE8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScriptBackLogListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ScriptBackLogListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44EE8 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ScriptBackLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScriptBackLogListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ScriptBackLogListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptBackLogListViewObject__o *)v3;
}


void ScriptBackLogListViewManager__remove_callbackFunc(
        ScriptBackLogListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptBackLogListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C44EE7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C44EE7 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ScriptBackLogListViewManager__get_ObjectList(v10, v11);
}


void ScriptBackLogListViewManager_ClickDelegate___ctor(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7D0F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D0A8;
}


System_IAsyncResult_o *ScriptBackLogListViewManager_ClickDelegate__BeginInvoke(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        int32_t select,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = select;
  if ( (byte_4C44EF0 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C44EF0 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void ScriptBackLogListViewManager_ClickDelegate__EndInvoke(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptBackLogListViewManager_ClickDelegate__Invoke(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        int32_t select,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    select,
    this->fields.method);
}