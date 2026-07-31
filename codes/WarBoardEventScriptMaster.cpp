void WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593989C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
    byte_593989C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    475,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593989D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
    byte_593989D = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  WarBoardEventScriptMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_593989B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardEventScriptEntity__WarBoardEventScriptEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
    sub_21FFC50(&System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__TypeInfo);
    sub_21FFC50(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__);
    sub_21FFC50(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_593989B = 1;
  }
  v3 = WarBoardEventScriptMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo, method);
    v3 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Func_object__object__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v7, Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, 0);
    v8 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__1_0, (int32_t)_9__1_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_WarBoardEventScriptEntity__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v15,
                                                                           (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


WarBoardEventScriptEntity_array *WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  WarBoardEventScriptMaster___c_c *v19; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_593989A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
    sub_21FFC50(&System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
    sub_21FFC50(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__);
    sub_21FFC50(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_593989A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_21FFECC(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  v19 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( !*(&WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo, v6);
    v19 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__0_0 = (System_Func_object__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v6);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v22, Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, 0);
    v23 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v23->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__0_0, (int32_t)_9__0_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v30,
                                              (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardEventScriptMaster__TryGetEntity(
        WarBoardEventScriptMaster_o *this,
        WarBoardEventScriptEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593989E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
    byte_593989E = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593989F & 1) == 0 )
  {
    sub_21FFC50(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_593989F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardEventScriptMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardEventScriptMaster___c___ctor(WarBoardEventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardEventScriptEntity_o *WarBoardEventScriptMaster___c___GetEntityList_b__1_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *n,
        const MethodInfo *method)
{
  return n;
}


int32_t WarBoardEventScriptMaster___c___GetList_b__0_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return a->fields.idx;
}