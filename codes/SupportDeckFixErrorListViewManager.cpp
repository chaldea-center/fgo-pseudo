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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  System_Int32_array **v12; // x23
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v22; // x0

  if ( (byte_42EC95C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)messageList, (_DWORD)method, v3);
    sub_B5D5C4(&SupportDeckFixErrorListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC95C = 1;
  }
  if ( messageList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, messageList->max_length, 0LL);
    v10 = *(_QWORD *)&messageList->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v10 )
        {
          v22 = sub_B5D6C8(v9);
          sub_B5D668(v22, 0LL);
        }
        v12 = (System_Int32_array **)messageList->m_Items[v11];
        v13 = sub_B5D694(SupportDeckFixErrorListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v13, v11, 0LL);
        *(_QWORD *)(v13 + 112) = v12;
        sub_B5D560((BattleServantConfConponent_o *)(v13 + 112), v12, v14, v15, v16, v17, v18, v19);
        itemList = this->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v20);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v10) = messageList->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v10 );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *__fastcall SupportDeckFixErrorListViewManager__GetObjectList(
        SupportDeckFixErrorListViewManager_o *this,
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

  if ( (byte_42EC95E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC95E = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *)v29;
}


void __fastcall SupportDeckFixErrorListViewManager__SetMode(
        SupportDeckFixErrorListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *ObjectList; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EC95D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__,
      mode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42EC95D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = SupportDeckFixErrorListViewManager__GetObjectList(this, v18);
  if ( !ObjectList )
    sub_B5D69C(0LL, v20);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__) )
  {
    current = v24.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v22 )
    {
      if ( !current )
        sub_B5D69C(v22, v23);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
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
  if ( (byte_42EC95F & 1) == 0 )
  {
    this = (SupportDeckFixErrorListViewManager_o *)sub_B5D5C4(
                                                     &SupportDeckFixErrorListViewObject_TypeInfo,
                                                     (_DWORD)obj,
                                                     (_DWORD)item,
                                                     method);
    byte_42EC95F = 1;
  }
  if ( !obj )
LABEL_8:
    sub_B5D69C(this, obj);
  v6 = *(&SupportDeckFixErrorListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SupportDeckFixErrorListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportDeckFixErrorListViewObject_TypeInfo )
  {
    sub_B5D990(obj);
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