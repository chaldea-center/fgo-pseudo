void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70E21 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__, method);
    byte_4A70E21 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70E22 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4A70E22 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_312C900 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4A70E20 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v3);
    sub_1B90010(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo, v4);
    sub_1B90010(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v5);
    sub_1B90010(&WarBoardEventScriptMaster___c_TypeInfo, v6);
    byte_4A70E20 = 1;
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
    _9__1_0 = (System_Func_object__object__o *)sub_1B9025C(System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v10, Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v14,
                                                                           (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v18; // w22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  WarBoardEventScriptMaster___c_c *v26; // x0
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v28; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4A70E1F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v7);
    sub_1B90010(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v11);
    sub_1B90010(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v12);
    sub_1B90010(&WarBoardEventScriptMaster___c_TypeInfo, v13);
    sub_1B90010(&WarBoardEventScriptEntity_TypeInfo, v14);
    byte_4A70E1F = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B9026C(list, v16);
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v18,
                                                               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = list;
      methodPtr_low = LOBYTE(WarBoardEventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventScriptEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v15 )
          goto LABEL_17;
        items = v15->fields._items;
        v23 = Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)list,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v16;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v19, v20);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_17;
  }
  v26 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v26 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v26->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v28, Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2EB8740 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v32,
                                              (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_4A70E23 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      entity);
    byte_4A70E23 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70E24 & 1) == 0 )
  {
    sub_1B90010(&WarBoardEventScriptMaster___c_TypeInfo, v1);
    byte_4A70E24 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEventScriptMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall WarBoardEventScriptMaster___c___ctor(WarBoardEventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster___c___GetEntityList_b__1_0(
        WarBoardEventScriptMaster___c_o *this,
        DataEntityBase_o *n,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A70E25 & 1) == 0 )
  {
    sub_1B90010(&WarBoardEventScriptEntity_TypeInfo, n);
    byte_4A70E25 = 1;
  }
  if ( !n )
    return 0LL;
  methodPtr_low = LOBYTE(WarBoardEventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(n->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (WarBoardEventScriptEntity_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventScriptEntity_TypeInfo )
    return (WarBoardEventScriptEntity_o *)n;
  return 0LL;
}


int32_t __fastcall WarBoardEventScriptMaster___c___GetList_b__0_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B9026C(this, 0LL);
  return a->fields.idx;
}