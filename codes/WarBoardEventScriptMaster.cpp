void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C112 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
    byte_4A5C112 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C113 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
    byte_4A5C113 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  WarBoardEventScriptMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5C111 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
    sub_1B885B0(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    sub_1B885B0(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__);
    sub_1B885B0(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_4A5C111 = 1;
  }
  v3 = WarBoardEventScriptMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v3 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v6, Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v10,
                                                                           (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  WarBoardEventScriptMaster___c_c *v16; // x0
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4A5C110 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
    sub_1B885B0(&System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
    sub_1B885B0(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__);
    sub_1B885B0(&WarBoardEventScriptMaster___c_TypeInfo);
    sub_1B885B0(&WarBoardEventScriptEntity_TypeInfo);
    byte_4A5C110 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B8880C(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(WarBoardEventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventScriptEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_17;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  v16 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v16 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v16->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v18, Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v22,
                                              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_4A5C114 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
    byte_4A5C114 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C115 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_4A5C115 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardEventScriptMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5C116 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardEventScriptEntity_TypeInfo);
    byte_4A5C116 = 1;
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
    sub_1B8880C(this, 0LL);
  return a->fields.idx;
}