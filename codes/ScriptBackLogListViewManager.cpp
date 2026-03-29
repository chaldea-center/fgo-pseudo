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
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Collections_Generic_List_ListViewItem__o *mPanel; // x0
  __int64 v14; // x1
  int size; // w21
  struct UIScrollView_o *scrollView; // x8
  float height; // s0
  struct UIScrollView_o *v18; // x8
  float v19; // s8
  int v20; // w9
  int32_t v21; // w22
  Il2CppObject *Item; // x24
  __int64 v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  __int64 v36; // x8
  float v37; // s0
  int v38; // s1
  struct ListViewItem_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x8

  if ( (byte_4D3290A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
    sub_1C93AD4(&ScriptBackLogListViewItem_TypeInfo);
    byte_4D3290A = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)callbackFunc,
    (int32_t)callbackFunc,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
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
  v18 = this->fields.scrollView;
  if ( !v18 )
    goto LABEL_20;
  v19 = height + offsetY;
  if ( v19 <= 0.0 )
    v20 = 6;
  else
    v20 = 0;
  v18->fields.contentPivot = v20;
  if ( size >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)logList,
               v21,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptMessageLabel__get_Item__);
      v23 = sub_1C93D20(ScriptBackLogListViewItem_TypeInfo);
      ListViewItem___ctor_44487500((ListViewItem_o *)v23, v21, 0);
      *(_QWORD *)(v23 + 120) = Item;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 120), (int32_t)Item, v24, v25, v26, v27, v28, v29);
      v36 = *(_QWORD *)(v23 + 120);
      if ( !v36 )
        break;
      v38 = *(_DWORD *)(v36 + 72);
      v37 = *(float *)(v36 + 76);
      *(_DWORD *)(v23 + 108) = 0;
      *(_DWORD *)(v23 + 100) = v38;
      *(float *)(v23 + 104) = v37 - v19;
      mPanel = this->fields.itemList;
      if ( !mPanel )
        break;
      items = mPanel->fields._items;
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++mPanel->fields._version;
      if ( !items )
        break;
      v41 = mPanel->fields._size;
      if ( (unsigned int)v41 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)mPanel,
          (Il2CppObject *)v23,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + v41;
        mPanel->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)v23;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 4), v23, v30, v31, v32, v33, v34, v35);
      }
      if ( size == ++v21 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1C93D2C(mPanel, v14);
  }
LABEL_19:
  ListViewManager__DispItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptBackLogListViewManager__DestroyList(ScriptBackLogListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.clickFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, 0, v2, v3, v4, v5, v6, v7);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptBackLogListViewItem_o *ScriptBackLogListViewManager__GetItem(
        ScriptBackLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptBackLogListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D3290B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&ScriptBackLogListViewItem_TypeInfo);
    byte_4D3290B = 1;
  }
  result = (ScriptBackLogListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptBackLogListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      sub_1C93D2C(this, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4D32910 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32910 = 1;
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
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4D3290E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__get_Count__);
    sub_1C93AD4(&Method_ScriptBackLogListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D3290E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBackLogListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptBackLogListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      ScriptBackLogListViewObject__Init_45479804((ScriptBackLogListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLogListViewManager__RequestListObject_45478776(
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

  if ( (byte_4D3290F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__get_Count__);
    sub_1C93AD4(&Method_ScriptBackLogListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D3290F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptBackLogListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBackLogListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      ScriptBackLogListViewObject__Init_45479888((ScriptBackLogListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
  }
}


void ScriptBackLogListViewManager__SetMode(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptBackLogListViewManager__SetMode_45478388(this, mode, 0, v3);
}


void ScriptBackLogListViewManager__SetMode_45478388(
        ScriptBackLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_ScriptBackLogListViewObject__o *ObjectList; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  bool v15; // zf
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D3290D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
    byte_4D3290D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C93A78(
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
  ObjectList = ScriptBackLogListViewManager__get_ObjectList(this, v11);
  v15 = mode == 1;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v15 )
    ScriptBackLogListViewManager__RequestListObject_45478776(this, 3, v14);
  if ( !v16 )
    sub_1C93D2C(ObjectList, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v16,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__MoveNext__) )
    ;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptBackLogListViewObject__Dispose__);
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
  if ( (byte_4D3290C & 1) == 0 )
  {
    this = (ScriptBackLogListViewManager_o *)sub_1C93AD4(&ScriptBackLogListViewObject_TypeInfo);
    byte_4D3290C = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptBackLogListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptBackLogListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptBackLogListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptBackLogListViewObject__Init_45478316((ScriptBackLogListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4D32907 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D32907 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D32909 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScriptBackLogListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptBackLogListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptBackLogListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32909 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptBackLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptBackLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScriptBackLogListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ScriptBackLogListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D32908 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D32908 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  ScriptBackLogListViewManager__get_ObjectList(v10, v11);
}


void ScriptBackLogListViewManager_ClickDelegate___ctor(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACA370;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACA328;
}


System_IAsyncResult_o *ScriptBackLogListViewManager_ClickDelegate__BeginInvoke(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        int32_t select,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = select;
  if ( (byte_4D32911 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D32911 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void ScriptBackLogListViewManager_ClickDelegate__EndInvoke(
        ScriptBackLogListViewManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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