void __fastcall SupportDeckFixErrorListViewManager___ctor(
        SupportDeckFixErrorListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorListViewManager__CreateList(
        SupportDeckFixErrorListViewManager_o *this,
        System_String_array *messageList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  System_Int32_array **v9; // x23
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v19; // x0

  if ( (byte_418AE56 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, messageList);
    sub_B2C35C(&SupportDeckFixErrorListViewItem_TypeInfo, v5);
    byte_418AE56 = 1;
  }
  if ( messageList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, messageList->max_length, 0LL);
    v7 = *(_QWORD *)&messageList->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      do
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v19 = sub_B2C460(v6);
          sub_B2C400(v19, 0LL);
        }
        v9 = (System_Int32_array **)messageList->m_Items[v8];
        v10 = sub_B2C42C(SupportDeckFixErrorListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v10, v8, 0LL);
        *(_QWORD *)(v10 + 112) = v9;
        sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 112), v9, v11, v12, v13, v14, v15, v16);
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B2C434(0LL, v17);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v7) = messageList->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *__fastcall SupportDeckFixErrorListViewManager__GetObjectList(
        SupportDeckFixErrorListViewManager_o *this,
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

  if ( (byte_418AE58 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418AE58 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportDeckFixErrorListViewManager__SetMode(
        SupportDeckFixErrorListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *ObjectList; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418AE57 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418AE57 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = SupportDeckFixErrorListViewManager__GetObjectList(this, v9);
  if ( !ObjectList )
    sub_B2C434(0LL, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__) )
  {
    current = v15.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_B2C434(v13, v14);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void __fastcall SupportDeckFixErrorListViewManager__SetObjectItem(
        SupportDeckFixErrorListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportDeckFixErrorListViewManager_o *v5; // x20
  __int64 v6; // x9

  v5 = this;
  if ( (byte_418AE59 & 1) == 0 )
  {
    this = (SupportDeckFixErrorListViewManager_o *)sub_B2C35C(&SupportDeckFixErrorListViewObject_TypeInfo, obj);
    byte_418AE59 = 1;
  }
  if ( !obj )
LABEL_8:
    sub_B2C434(this, obj);
  v6 = *(&SupportDeckFixErrorListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SupportDeckFixErrorListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportDeckFixErrorListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    goto LABEL_8;
  }
  SupportDeckFixErrorListViewObject__Init(
    (SupportDeckFixErrorListViewObject_o *)obj,
    (const MethodInfo *)SupportDeckFixErrorListViewObject_TypeInfo);
  ((void (__fastcall *)(ListViewObject_o *, bool, Il2CppMethodPointer))obj->klass->vtable._9_SetInput.method)(
    obj,
    v5->fields.currentMode == 2,
    obj->klass->vtable._10_Invalidation.methodPtr);
}