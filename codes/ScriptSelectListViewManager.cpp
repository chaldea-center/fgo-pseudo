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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x0
  unsigned __int64 v17; // x22
  signed __int64 v18; // x25
  System_String_o *v19; // x24
  ScriptSelectListViewItem_o *v20; // x23
  __int64 v21; // x0

  if ( (byte_418D01C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, selectMessageList);
    sub_B2C35C(&ScriptSelectListViewItem_TypeInfo, v12);
    byte_418D01C = 1;
  }
  this->fields.clickFunc = callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)callbackFunc,
    (System_String_array **)fontType,
    (System_String_array **)callbackFunc,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !selectMessageList )
    goto LABEL_11;
  v15 = *(_QWORD *)&selectMessageList->max_length;
  ListViewManager__CreateList((ListViewManager_o *)this, v15, 0LL);
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    v18 = (int)v15;
    while ( 1 )
    {
      if ( v17 >= selectMessageList->max_length )
      {
        v21 = sub_B2C460(v16);
        sub_B2C400(v21, 0LL);
      }
      v19 = selectMessageList->m_Items[v17];
      v20 = (ScriptSelectListViewItem_o *)sub_B2C42C(ScriptSelectListViewItem_TypeInfo);
      ScriptSelectListViewItem___ctor(v20, v17, v19, fontType, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v17 >= v18 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B2C434(itemList, v14);
  }
LABEL_9:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ScriptSelectListViewManager__DestroyList(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.clickFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.clickFunc, 0LL, v2, v3, v4, v5, v6, v7);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ScriptSelectListViewItem_o *__fastcall ScriptSelectListViewManager__GetItem(
        ScriptSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418D01D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ScriptSelectListViewItem_TypeInfo, v5);
    byte_418D01D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ScriptSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ScriptSelectListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ScriptSelectListViewItem_TypeInfo )
    return (ScriptSelectListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall ScriptSelectListViewManager__OnClickListView(
        ScriptSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptSelectListViewManager_ClickDelegate_o *clickFunc; // x19
  int32_t Index; // w1

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    if ( !obj )
      sub_B2C434(this, 0LL);
    Index = ListViewObject__get_Index(obj, 0LL);
    ScriptSelectListViewManager_ClickDelegate__Invoke(clickFunc, Index, 0LL);
  }
}


void __fastcall ScriptSelectListViewManager__OnMoveEnd(ScriptSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc; // x20

  if ( (byte_418D022 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D022 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
        System_Action__Invoke(callbackFunc, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418D020 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ScriptSelectListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418D020 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptSelectListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptSelectListViewObject__Init(
        (ScriptSelectListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager__RequestListObject_33999884(
        ScriptSelectListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418D021 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ScriptSelectListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418D021 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptSelectListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptSelectListViewObject__Init(
        (ScriptSelectListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager__SetMode(
        ScriptSelectListViewManager_o *this,
        int32_t mode,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v24; // x20
  int size; // w8
  int v26; // w23
  ScriptSelectListViewObject_o *v27; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3
  int v30; // w8
  unsigned int v31; // w24
  __int64 v32; // x8
  ScriptSelectListViewObject_o *v33; // x22
  int items_high; // w27
  System_Action_o *v35; // x23
  const MethodInfo *v36; // x3
  float v37; // s0
  int v38; // s1
  int32_t v41; // w1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418D01F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__get_Item__, v17);
    sub_B2C35C(&Method_ScriptSelectListViewManager_OnMoveEnd__, v18);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v19);
    byte_418D01F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&index,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptSelectListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                v20);
  v24 = ObjectList;
  if ( mode != 3 )
  {
    if ( mode == 2 )
    {
      ScriptSelectListViewManager__RequestListObject_33999884(this, 4, v23);
    }
    else if ( mode == 1 )
    {
      ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListViewManager__get_ObjectSum(
                                                                                                    (ListViewManager_o *)this,
                                                                                                    0LL);
      this->fields.callbackCount = (int)ObjectList;
      if ( (int)ObjectList >= 1 )
      {
        if ( !v24 )
          goto LABEL_35;
        size = v24->fields._size;
        if ( size >= 1 )
        {
          v26 = 0;
          while ( 1 )
          {
            if ( size <= (unsigned int)v26 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v27 = (ScriptSelectListViewObject_o *)v24->fields._items->m_Items[v26];
            v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v28, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
            if ( !v27 )
              goto LABEL_35;
            ++v26;
            zero = UnityEngine_Vector3__get_zero(0LL);
            ScriptSelectListViewObject__Init(v27, 3, v28, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v29);
            size = v24->fields._size;
            if ( v26 >= size )
              goto LABEL_32;
          }
        }
        goto LABEL_32;
      }
LABEL_31:
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
        0.0,
        0LL);
      if ( !v24 )
        goto LABEL_35;
      goto LABEL_32;
    }
    if ( !v24 )
      goto LABEL_35;
    goto LABEL_32;
  }
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListViewManager__get_ObjectSum(
                                                                                                (ListViewManager_o *)this,
                                                                                                0LL);
  this->fields.callbackCount = (int)ObjectList;
  if ( (int)ObjectList < 1 )
    goto LABEL_31;
  if ( !v24 )
    goto LABEL_35;
  v30 = v24->fields._size;
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v30 <= v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v32 = (__int64)v24->fields._items + 8 * (int)v31;
      v33 = *(ScriptSelectListViewObject_o **)(v32 + 32);
      if ( !v33 )
        break;
      ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptSelectListViewObject__GetItem(
                                                                                                    *(ScriptSelectListViewObject_o **)(v32 + 32),
                                                                                                    v22);
      if ( !ObjectList )
        break;
      items_high = HIDWORD(ObjectList->fields._items);
      v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v35, (Il2CppObject *)this, Method_ScriptSelectListViewManager_OnMoveEnd__, 0LL);
      *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
      if ( items_high == index )
        v41 = 6;
      else
        v41 = 5;
      ScriptSelectListViewObject__Init(v33, v41, v35, v37, *(UnityEngine_Vector3_o *)&v38, v36);
      v30 = v24->fields._size;
      if ( (int)++v31 >= v30 )
        goto LABEL_32;
    }
LABEL_35:
    sub_B2C434(ObjectList, v22);
  }
LABEL_32:
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    v24,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__MoveNext__) )
    ;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptSelectListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager__SetObjectItem(
        ScriptSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptSelectListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418D01E & 1) == 0 )
  {
    this = (ScriptSelectListViewManager_o *)sub_B2C35C(&ScriptSelectListViewObject_TypeInfo, obj);
    byte_418D01E = 1;
  }
  if ( !obj
    || (v6 = *(&ScriptSelectListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ScriptSelectListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ScriptSelectListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 4;
  else
    v13 = 2;
  ScriptSelectListViewObject__Init(
    (ScriptSelectListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
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

  if ( (byte_418D019 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D019 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  ScriptSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptSelectListViewObject__o *__fastcall ScriptSelectListViewManager__get_ObjectList(
        ScriptSelectListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418D01B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSelectListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ScriptSelectListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418D01B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptSelectListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptSelectListViewObject__o *)v11;
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

  if ( (byte_418D01A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D01A = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptSelectListViewManager_ClickDelegate__BeginInvoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        int32_t select,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = select;
  if ( (byte_4185548 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&select);
    byte_4185548 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ScriptSelectListViewManager_ClickDelegate__EndInvoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewManager_ClickDelegate__Invoke(
        ScriptSelectListViewManager_ClickDelegate_o *this,
        int32_t select,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScriptSelectListViewManager_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ScriptSelectListViewManager_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ScriptSelectListViewManager_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScriptSelectListViewManager_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&select, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)select, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)select, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)select, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)select,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)select, v22);
    goto LABEL_37;
  }
}