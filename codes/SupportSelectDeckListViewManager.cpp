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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Int32_array **v17; // x27
  int v18; // w26
  __int64 v19; // x25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0

  if ( (byte_40FD510 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, deckDataList);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B16FFC(&SupportSelectDeckListViewItem_TypeInfo, v9);
    byte_40FD510 = 1;
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
                (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
        v12 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v10,
                (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
        if ( v10 >= deckDataList->max_length )
        {
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
        v17 = (System_Int32_array **)deckDataList->m_Items[v10];
        v18 = v12;
        v19 = sub_B170CC(SupportSelectDeckListViewItem_TypeInfo, v13, v14, v15, v16);
        ListViewItem___ctor_30173668((ListViewItem_o *)v19, v10, 0LL);
        *(_QWORD *)(v19 + 112) = v17;
        sub_B16F98((BattleServantConfConponent_o *)(v19 + 112), v17, v20, v21, v22, v23, v24, v25);
        *(_BYTE *)(v19 + 120) = v11 >= 0;
        *(_BYTE *)(v19 + 121) = v18 < 0;
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD512 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD512 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectDeckListViewObject__o *)v14;
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

  SupportSelectDeckListViewManager__SetMode_31172108(this, mode, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewManager__SetMode_31172108(
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
  Il2CppObject *current; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD511 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FD511 = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v26, 0, sizeof(v26));
  this->fields.onSelectDeck = onSelectDeck;
  sub_B16F98(
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
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      v25 = (System_Int32_array **)*p_onSelectDeck;
      current[7].monitor = *p_onSelectDeck;
      sub_B16F98((BattleServantConfConponent_o *)&current[7].monitor, v25, v19, v20, v21, v22, v23, v24);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void __fastcall SupportSelectDeckListViewManager__SetObjectItem(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x9
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck; // x1
  int32_t currentMode; // w20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FD513 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectDeckListViewObject_TypeInfo, obj);
    byte_40FD513 = 1;
  }
  if ( !obj )
LABEL_8:
    sub_B170D4();
  v6 = *(&SupportSelectDeckListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_B173C8(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = this->fields.onSelectDeck;
  currentMode = this->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_B16F98(
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