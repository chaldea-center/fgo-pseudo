void __fastcall ScriptAssetListViewManager___ctor(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ScriptAssetListViewManager__CreateList(ScriptAssetListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *AssetStorageList; // x0
  __int64 v7; // x1
  __int64 v8; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x0
  unsigned __int64 v11; // x21
  signed __int64 v12; // x24
  System_Int32_array **v13; // x23
  __int64 v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0

  if ( (byte_418BE07 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v3);
    sub_B2C35C(&ScriptAssetListViewItem_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_12623/*"ScriptActionEncrypt"*/, v5);
    byte_418BE07 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorageList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)AssetManager__getAssetStorageList((System_String_o *)StringLiteral_12623/*"ScriptActionEncrypt"*/, 0LL);
  if ( !AssetStorageList )
    goto LABEL_14;
  v8 = *(_QWORD *)&AssetStorageList->fields._size;
  v9 = AssetStorageList;
  ListViewManager__CreateList((ListViewManager_o *)this, v8, 0LL);
  if ( (int)v8 >= 1 )
  {
    v11 = 0LL;
    v12 = (int)v8;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9->fields._size )
      {
        v21 = sub_B2C460(v10);
        sub_B2C400(v21, 0LL);
      }
      v13 = (System_Int32_array **)*((_QWORD *)&v9->fields._syncRoot + v11);
      v14 = sub_B2C42C(ScriptAssetListViewItem_TypeInfo);
      ListViewItem___ctor_24128628((ListViewItem_o *)v14, v11, 0LL);
      *(_QWORD *)(v14 + 112) = v13;
      sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 112), v13, v15, v16, v17, v18, v19, v20);
      AssetStorageList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !AssetStorageList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        AssetStorageList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v11 >= v12 )
        goto LABEL_12;
    }
LABEL_14:
    sub_B2C434(AssetStorageList, v7);
  }
LABEL_12:
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418BE08 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ScriptAssetListViewItem_TypeInfo, v5);
    byte_418BE08 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ScriptAssetListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ScriptAssetListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ScriptAssetListViewItem_TypeInfo )
    return (ScriptAssetListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall ScriptAssetListViewManager__GetNextName(
        ScriptAssetListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  ScriptAssetListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  __int64 v8; // x22
  unsigned __int64 size; // x8
  System_String_o **v10; // x8
  __int64 v11; // x11
  __int64 items; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x19
  System_String_o **v14; // x8
  __int64 v15; // x11

  v4 = this;
  if ( (byte_418BE0D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, name);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ScriptAssetListViewManager_o *)sub_B2C35C(&ScriptAssetListViewItem_TypeInfo, v6);
    byte_418BE0D = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v8 = 4LL;
  while ( 1 )
  {
    size = (unsigned int)itemList->fields._size;
    if ( v8 - 4 >= (int)size - 1 )
      break;
    if ( v8 - 4 >= size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v10 = (System_String_o **)*((_QWORD *)&itemList->fields._items->obj.klass + v8);
    if ( !v10 )
      goto LABEL_27;
    v11 = *(&ScriptAssetListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v10)[12].monitor) < (unsigned int)v11
      || *((ScriptAssetListViewItem_c **)(*v10)[8].monitor + v11 - 1) != ScriptAssetListViewItem_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((ScriptAssetListViewItem_c **)(*v10)[8].monitor + *(&ScriptAssetListViewItem_TypeInfo->_2.bitflags2 + 1) - 1) != ScriptAssetListViewItem_TypeInfo )
      v10 = 0LL;
    this = (ScriptAssetListViewManager_o *)System_String__op_Equality(v10[14], name, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v13 = v4->fields.itemList;
      if ( v13 )
      {
        if ( v13->fields._size <= (unsigned int)(v8 - 3) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        items = (__int64)v13->fields._items + 8 * (int)v8 - 24;
        goto LABEL_23;
      }
      goto LABEL_27;
    }
    itemList = v4->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_27;
  }
  if ( !(_DWORD)size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  items = (__int64)itemList->fields._items;
LABEL_23:
  v14 = *(System_String_o ***)(items + 32);
  if ( !v14
    || (v15 = *(&ScriptAssetListViewItem_TypeInfo->_2.bitflags2 + 1), BYTE4((*v14)[12].monitor) < (unsigned int)v15)
    || *((ScriptAssetListViewItem_c **)(*v14)[8].monitor + v15 - 1) != ScriptAssetListViewItem_TypeInfo )
  {
LABEL_27:
    sub_B2C434(this, name);
  }
  return v14[14];
}


void __fastcall ScriptAssetListViewManager__OnClickListView(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_B2C434(this, 0LL);
  Index = ListViewObject__get_Index(obj, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall ScriptAssetListViewManager__OnMoveEnd(ScriptAssetListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_418BE0C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BE0C = 1;
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
      if ( !this->fields.isInput )
      {
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

  if ( (byte_418BE0A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ScriptAssetListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418BE0A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptAssetListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptAssetListViewObject__Init(
        (ScriptAssetListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewManager__RequestListObject_33225480(
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

  if ( (byte_418BE0B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ScriptAssetListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418BE0B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ScriptAssetListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScriptAssetListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ScriptAssetListViewObject__Init(
        (ScriptAssetListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptAssetListViewObject__Dispose__);
  }
}


void __fastcall ScriptAssetListViewManager__SetMode(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptAssetListViewManager__SetMode_33225356(this, mode, 0LL, v3);
}


void __fastcall ScriptAssetListViewManager__SetMode_33225356(
        ScriptAssetListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    ScriptAssetListViewManager__RequestListObject_33225480(this, 3, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewManager__SetObjectItem(
        ScriptAssetListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptAssetListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418BE09 & 1) == 0 )
  {
    this = (ScriptAssetListViewManager_o *)sub_B2C35C(&ScriptAssetListViewObject_TypeInfo, obj);
    byte_418BE09 = 1;
  }
  if ( !obj
    || (v6 = *(&ScriptAssetListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ScriptAssetListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ScriptAssetListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  ScriptAssetListViewObject__Init((ScriptAssetListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
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

  if ( (byte_418BE04 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418BE04 = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418BE06 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418BE06 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptAssetListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptAssetListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScriptAssetListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptAssetListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_418BE05 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418BE05 = 1;
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
  ScriptAssetListViewManager__get_ObjectList(v10, v11);
}