void __fastcall SupportSelectDeckListViewManager___ctor(
        SupportSelectDeckListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportSelectDeckListViewManager__CreateList(
        SupportSelectDeckListViewManager_o *this,
        SupportServantData_array *deckDataList,
        System_Int32_array *sameKindIdxList,
        System_Int32_array *notCopyIdxList,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned __int64 v10; // x23
  int32_t v11; // w24
  __int64 v12; // x0
  System_Int32_array **v13; // x27
  int v14; // w26
  __int64 v15; // x25
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v24; // x0

  if ( (byte_418AE94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, deckDataList);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B2C35C(&SupportSelectDeckListViewItem_TypeInfo, v9);
    byte_418AE94 = 1;
  }
  if ( deckDataList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, deckDataList->max_length, 0LL);
    if ( (int)deckDataList->max_length >= 1 )
    {
      v10 = 0LL;
      do
      {
        v11 = System_Array__IndexOf_int_(
                sameKindIdxList,
                v10,
                (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
        v12 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v10,
                (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
        if ( v10 >= deckDataList->max_length )
        {
          v24 = sub_B2C460(v12);
          sub_B2C400(v24, 0LL);
        }
        v13 = (System_Int32_array **)deckDataList->m_Items[v10];
        v14 = v12;
        v15 = sub_B2C42C(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v15, v10, 0LL);
        *(_QWORD *)(v15 + 112) = v13;
        sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 112), v13, v16, v17, v18, v19, v20, v21);
        *(_BYTE *)(v15 + 120) = v11 >= 0;
        *(_BYTE *)(v15 + 121) = v14 < 0;
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B2C434(0LL, v22);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v10;
      }
      while ( (__int64)v10 < (int)deckDataList->max_length );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportSelectDeckListViewObject__o *__fastcall SupportSelectDeckListViewManager__GetObjectList(
        SupportSelectDeckListViewManager_o *this,
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

  if ( (byte_418AE96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418AE96 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectDeckListViewObject__o *)v11;
}


void __fastcall SupportSelectDeckListViewManager__OnClickListView(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectDeckListViewManager__SetMode(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SupportSelectDeckListViewManager__SetMode_31154820(this, mode, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewManager__SetMode_31154820(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelectDeck; // x21
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_SupportSelectDeckListViewObject__o *ObjectList; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418AE95 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    byte_418AE95 = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v29, 0, sizeof(v29));
  this->fields.onSelectDeck = onSelectDeck;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectDeck,
    (System_Int32_array **)onSelectDeck,
    (System_String_array **)onSelectDeck,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = SupportSelectDeckListViewManager__GetObjectList(this, v16);
  if ( !ObjectList )
    sub_B2C434(0LL, v18);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v29.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v20 )
    {
      if ( !current )
        sub_B2C434(v20, v21);
      v28 = (System_Int32_array **)*p_onSelectDeck;
      current[7].monitor = *p_onSelectDeck;
      sub_B2C2F8((BattleServantConfConponent_o *)&current[7].monitor, v28, v22, v23, v24, v25, v26, v27);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void __fastcall SupportSelectDeckListViewManager__SetObjectItem(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectDeckListViewManager_o *v5; // x20
  __int64 v6; // x9
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck; // x1
  int32_t currentMode; // w20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v5 = this;
  if ( (byte_418AE97 & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_B2C35C(&SupportSelectDeckListViewObject_TypeInfo, obj);
    byte_418AE97 = 1;
  }
  if ( !obj )
LABEL_8:
    sub_B2C434(this, obj);
  v6 = *(&SupportSelectDeckListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&obj[1].monitor,
    (System_Int32_array **)onSelectDeck,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ((void (__fastcall *)(ListViewObject_o *, bool, Il2CppMethodPointer))obj->klass->vtable._9_SetInput.method)(
    obj,
    currentMode == 2,
    obj->klass->vtable._10_Invalidation.methodPtr);
}