void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8AD4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__, method);
    byte_4BC8AD4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8AD5 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4BC8AD5 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_324D130 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardEventScriptMaster___c_c *v7; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BC8AD3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_WarBoardEventScriptEntity__WarBoardEventScriptEntity___, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v3);
    sub_1C1ABD4(&System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__TypeInfo, v4);
    sub_1C1ABD4(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v5);
    sub_1C1ABD4(&WarBoardEventScriptMaster___c_TypeInfo, v6);
    byte_4BC8AD3 = 1;
  }
  v7 = WarBoardEventScriptMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v7 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v7->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v10, Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2FD0C44 *)Method_System_Linq_Enumerable_Select_WarBoardEventScriptEntity__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v18,
                                                                           (const MethodInfo_2FDCC54 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v17; // w22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  WarBoardEventScriptMaster___c_c *v28; // x0
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v30; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_4BC8AD2 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Count__,
      *(_QWORD *)&id);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v7);
    sub_1C1ABD4(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v11);
    sub_1C1ABD4(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v12);
    sub_1C1ABD4(&WarBoardEventScriptMaster___c_TypeInfo, v13);
    byte_4BC8AD2 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1C1AE30(list, v15);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v17,
                                                               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Item__);
    if ( list )
    {
      v15 = (int64_t)list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v14 )
          goto LABEL_15;
        items = v14->fields._items;
        v25 = Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v15;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 4), v15, v18, v19, v20, v21, v22, v23);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_15;
  }
  v28 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v28 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v28->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v30, Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2FC8568 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v38,
                                              (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardEventScriptMaster__TryGetEntity(
        WarBoardEventScriptMaster_o *this,
        WarBoardEventScriptEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8AD6 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      entity);
    byte_4BC8AD6 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC8AD7 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardEventScriptMaster___c_TypeInfo, v1);
    byte_4BC8AD7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEventScriptMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardEventScriptMaster___c___ctor(WarBoardEventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster___c___GetEntityList_b__1_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *n,
        const MethodInfo *method)
{
  return n;
}


int32_t __fastcall WarBoardEventScriptMaster___c___GetList_b__0_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C1AE30(this, 0LL);
  return a->fields.idx;
}