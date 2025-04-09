void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBF05 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__, method);
    byte_49BBF05 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    473,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBF06 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49BBF06 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31A2454 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49BBF04 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardEventScriptEntity__WarBoardEventScriptEntity___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v3);
    sub_1B4CF90(&System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v5);
    sub_1B4CF90(&WarBoardEventScriptMaster___c_TypeInfo, v6);
    byte_49BBF04 = 1;
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
    _9__1_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v10, Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardEventScriptEntity__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_WarBoardEventScriptEntity__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v14,
                                                                           (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
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
  System_Collections_ObjectModel_Collection_T__o *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v17; // w22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  WarBoardEventScriptMaster___c_c *v24; // x0
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v26; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_49BBF03 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Count__,
      *(_QWORD *)&id);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v7);
    sub_1B4CF90(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v11);
    sub_1B4CF90(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v12);
    sub_1B4CF90(&WarBoardEventScriptMaster___c_TypeInfo, v13);
    byte_49BBF03 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B4D1EC(list, v15);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v17,
                                                               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventScriptEntity__get_Item__);
    if ( list )
    {
      v15 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v14 )
          goto LABEL_15;
        items = v14->fields._items;
        v21 = Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v15;
          sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v18, v19);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_15;
  }
  v24 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v24 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v24->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardEventScriptMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v26, Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v30,
                                              (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_49BBF07 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      entity);
    byte_49BBF07 = 1;
  }
  PK = (Il2CppObject *)WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BBF08 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardEventScriptMaster___c_TypeInfo, v1);
    byte_49BBF08 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEventScriptMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return a->fields.idx;
}