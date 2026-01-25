void WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF7B5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
    byte_4CEF7B5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    472,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


WarBoardEventEntity_array *WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  WarBoardEventMaster___c_c *v21; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v23; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x0
  WarBoardEventMaster___c_c *v32; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v35; // x21
  struct WarBoardEventMaster___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4CEF7B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
    sub_1C7BAE8(&System_Func_WarBoardEventEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    sub_1C7BAE8(&Method_WarBoardEventMaster___c__GetList_b__0_0__);
    sub_1C7BAE8(&Method_WarBoardEventMaster___c__GetList_b__0_1__);
    sub_1C7BAE8(&WarBoardEventMaster___c_TypeInfo);
    byte_4CEF7B3 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1C7BD40(list, v8);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v8 = list;
      if ( HIDWORD(list->fields.items) == stageId && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v7 )
          goto LABEL_16;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_16;
  }
  v21 = WarBoardEventMaster___c_TypeInfo;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v21 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v21->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardEventMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v23, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v32 = WarBoardEventMaster___c_TypeInfo;
  v33 = v31;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v32 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v32->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = WarBoardEventMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v35, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0);
    v36 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v36->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v36->__9__0_1, (int32_t)_9__0_1, v37, v38, v39, v40, v41, v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_31AE27C *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v43,
                                        (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


WarBoardEventEntity_array *WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CEF7B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    byte_4CEF7B4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == stageId )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C7BD40(list, v6);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF7B6 & 1) == 0 )
  {
    sub_1C7BAE8(&WarBoardEventMaster___c_TypeInfo);
    byte_4CEF7B6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)WarBoardEventMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardEventMaster___c___ctor(WarBoardEventMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardEventMaster___c___GetList_b__0_0(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C7BD40(this, 0);
  return a->fields.priority;
}


int32_t WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C7BD40(this, 0);
  return a->fields.id;
}