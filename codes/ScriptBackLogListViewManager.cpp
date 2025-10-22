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
  __int64 v10; // x1
  int size; // w21
  struct UIScrollView_o *scrollView; // x8
  float height; // s0
  struct UIScrollView_o *v14; // x8
  float v15; // s8
  int v16; // w9
  int32_t v17; // w22
  Il2CppObject *Item; // x24
  __int64 v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  float v25; // s0
  int v26; // s1
  struct ListViewItem_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8

  if ( (byte_4C58CB5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C3E564(&ScriptBackLogListViewItem_TypeInfo);
    byte_4C58CB5 = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)callbackFunc, (int32_t)callbackFunc, method);
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
  v14 = this->fields.scrollView;
  if ( !v14 )
    goto LABEL_20;
  v15 = height + offsetY;
  if ( v15 <= 0.0 )
    v16 = 6;
  else
    v16 = 0;
  v14->fields.contentPivot = v16;
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)logList,
               v17,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
      v19 = sub_1C3E7B0(ScriptBackLogListViewItem_TypeInfo);
      ListViewItem___ctor_43860152((ListViewItem_o *)v19, v17, 0);
      *(_QWORD *)(v19 + 120) = Item;
      sub_1C3E508((CGThumbnailListItem_o *)(v19 + 120), (int32_t)Item, v20, v21);
      v24 = *(_QWORD *)(v19 + 120);
      if ( !v24 )
        break;
      v26 = *(_DWORD *)(v24 + 72);
      v25 = *(float *)(v24 + 76);
      *(_DWORD *)(v19 + 108) = 0;
      *(_DWORD *)(v19 + 100) = v26;
      *(float *)(v19 + 104) = v25 - v15;
      mPanel = this->fields.itemList;
      if ( !mPanel )
        break;
      items = mPanel->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++mPanel->fields._version;
      if ( !items )
        break;
      v29 = mPanel->fields._size;
      if ( (unsigned int)v29 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)mPanel,
          (Il2CppObject *)v19,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + v29;
        mPanel->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v30 + 4), v19, v22, v23);
      }
      if ( size == ++v17 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1C3E7C0(mPanel, v10);
  }
LABEL_19:
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptBackLogListViewManager__DestroyList(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.clickFunc = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.clickFunc, 0, v2, v3);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptBackLogListViewItem_o *ScriptBackLogListViewManager__GetItem(
        ScriptBackLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptBackLogListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C58CB6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&ScriptBackLogListViewItem_TypeInfo);
    byte_4C58CB6 = 1;
  }
  result = (ScriptBackLogListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBackLogListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1C3E7C0(this, 0);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C58CBB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58CBB = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v8, v9);
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
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C58CB9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__get_Count__);
    sub_1C3E564(&Method_ScriptBackLogListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C58CB9 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBackLogListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptBackLogListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      ScriptBackLogListViewObject__Init_44834192((ScriptBackLogListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLogListViewManager__RequestListObject_44833164(
        ScriptBackLogListViewManager_o *this,
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

  if ( (byte_4C58CBA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__get_Count__);
    sub_1C3E564(&Method_ScriptBackLogListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C58CBA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBackLogListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBackLogListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      ScriptBackLogListViewObject__Init_44834276((ScriptBackLogListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
  }
}


void ScriptBackLogListViewManager__SetMode(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptBackLogListViewManager__SetMode_44832776(this, mode, 0, v3);
}


void ScriptBackLogListViewManager__SetMode_44832776(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_ScriptBackLogListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  bool v11; // zf
  System_Collections_Generic_List_object__o *v12; // x20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C58CB8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    byte_4C58CB8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  ObjectList = ScriptBackLogListViewManager__get_ObjectList(this, v7);
  v11 = mode == 1;
  v12 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v11 )
    ScriptBackLogListViewManager__RequestListObject_44833164(this, 3, v10);
  if ( !v12 )
    sub_1C3E7C0(ObjectList, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    v12,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    ;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
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
  if ( (byte_4C58CB7 & 1) == 0 )
  {
    this = (ScriptBackLogListViewManager_o *)sub_1C3E564(&ScriptBackLogListViewObject_TypeInfo);
    byte_4C58CB7 = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBackLogListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBackLogListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBackLogListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBackLogListViewObject__Init_44832704((ScriptBackLogListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C58CB2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C58CB2 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  ScriptBackLogListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptBackLogListViewObject__o *ScriptBackLogListViewManager__get_ObjectList(
        ScriptBackLogListViewManager_o *this,
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C58CB4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ScriptBackLogListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ScriptBackLogListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58CB4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ScriptBackLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ScriptBackLogListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ScriptBackLogListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C58CB3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C58CB3 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A84498;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A84450;
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
  if ( (byte_4C58CBC & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C58CBC = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ScriptBackLogListViewManager_ClickDelegate__EndInvoke(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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