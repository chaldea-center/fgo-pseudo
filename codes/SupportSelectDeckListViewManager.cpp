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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  unsigned __int64 v14; // x23
  int32_t v15; // w24
  __int64 v16; // x0
  System_Int32_array **v17; // x27
  int v18; // w26
  __int64 v19; // x25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v28; // x0

  if ( (byte_42EB3A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)deckDataList, (_DWORD)sameKindIdxList, notCopyIdxList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8, v9, v10);
    sub_B5D5C4(&SupportSelectDeckListViewItem_TypeInfo, v11, v12, v13);
    byte_42EB3A1 = 1;
  }
  if ( deckDataList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, deckDataList->max_length, 0LL);
    if ( (int)deckDataList->max_length >= 1 )
    {
      v14 = 0LL;
      do
      {
        v15 = System_Array__IndexOf_int_(
                sameKindIdxList,
                v14,
                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
        v16 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v14,
                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
        if ( v14 >= deckDataList->max_length )
        {
          v28 = sub_B5D6C8(v16);
          sub_B5D668(v28, 0LL);
        }
        v17 = (System_Int32_array **)deckDataList->m_Items[v14];
        v18 = v16;
        v19 = sub_B5D694(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v19, v14, 0LL);
        *(_QWORD *)(v19 + 112) = v17;
        sub_B5D560((BattleServantConfConponent_o *)(v19 + 112), v17, v20, v21, v22, v23, v24, v25);
        *(_BYTE *)(v19 + 120) = v15 >= 0;
        *(_BYTE *)(v19 + 121) = v18 < 0;
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v26);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v14;
      }
      while ( (__int64)v14 < (int)deckDataList->max_length );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportSelectDeckListViewObject__o *__fastcall SupportSelectDeckListViewManager__GetObjectList(
        SupportSelectDeckListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB3A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB3A3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectDeckListViewObject__o *)v29;
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

  SupportSelectDeckListViewManager__SetMode_30179336(this, mode, 0LL, v3);
}


void __fastcall SupportSelectDeckListViewManager__SetMode_30179336(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelectDeck; // x21
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_SupportSelectDeckListViewObject__o *ObjectList; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EB3A2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__,
      mode,
      (_DWORD)onSelectDeck,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EB3A2 = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v37, 0, sizeof(v37));
  this->fields.onSelectDeck = onSelectDeck;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelectDeck,
    (System_Int32_array **)onSelectDeck,
    (System_String_array **)onSelectDeck,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = SupportSelectDeckListViewManager__GetObjectList(this, v24);
  if ( !ObjectList )
    sub_B5D69C(0LL, v26);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v37.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v28 )
    {
      if ( !current )
        sub_B5D69C(v28, v29);
      v36 = (System_Int32_array **)*p_onSelectDeck;
      current[7].monitor = *p_onSelectDeck;
      sub_B5D560((BattleServantConfConponent_o *)&current[7].monitor, v36, v30, v31, v32, v33, v34, v35);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
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
  if ( (byte_42EB3A4 & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_B5D5C4(
                                                   &SupportSelectDeckListViewObject_TypeInfo,
                                                   (_DWORD)obj,
                                                   (_DWORD)item,
                                                   method);
    byte_42EB3A4 = 1;
  }
  if ( !obj )
LABEL_8:
    sub_B5D69C(this, obj);
  v6 = *(&SupportSelectDeckListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_B5D560(
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