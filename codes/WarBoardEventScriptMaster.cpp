void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171CB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__,
      method,
      v2);
    byte_4B171CB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B171CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&idx);
    byte_4B171CC = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardEventScriptMaster___c_c *v13; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B171CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v9, v10);
    sub_1BCA7E0(&WarBoardEventScriptMaster___c_TypeInfo, v11, v12);
    byte_4B171CA = 1;
  }
  v13 = WarBoardEventScriptMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo, method);
    v13 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v13->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(_9__1_0, v16, Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v24,
                                                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v29; // w22
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  WarBoardEventScriptMaster___c_c *v43; // x0
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v45; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0

  if ( (byte_4B171C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v20, v21);
    sub_1BCA7E0(&WarBoardEventScriptMaster___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&WarBoardEventScriptEntity_TypeInfo, v24, v25);
    byte_4B171C9 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo,
                                                       *(_QWORD *)&id,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1BCAA3C(list, v27);
  v29 = 0;
  while ( v29 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v29,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v27 = (int64_t)list;
      methodPtr_low = LOBYTE(WarBoardEventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventScriptEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v26 )
          goto LABEL_17;
        items = v26->fields._items;
        v40 = Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v32, v33, v34, v35, v36, v37);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v29;
    if ( !list )
      goto LABEL_17;
  }
  v43 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo, v27);
    v43 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v43->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v27);
      v43 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_WarBoardEventScriptEntity__int__TypeInfo,
                                              v27,
                                              v30,
                                              v31);
    System_Func_object__int____ctor(_9__0_0, v45, Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v53,
                                              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_4B171CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B171CD = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B171CE & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardEventScriptMaster___c_TypeInfo, v1, v2);
    byte_4B171CE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardEventScriptMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardEventScriptMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B171CF & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardEventScriptEntity_TypeInfo, n, method);
    byte_4B171CF = 1;
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
    sub_1BCAA3C(this, 0LL);
  return a->fields.idx;
}