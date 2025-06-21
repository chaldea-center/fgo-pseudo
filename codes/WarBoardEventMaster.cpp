void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D61F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method);
    byte_4B1D61F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    472,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x22
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  WarBoardEventMaster___c_c *v28; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v30; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  WarBoardEventMaster___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v38; // x21
  struct WarBoardEventMaster___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0

  if ( (byte_4B1D61D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__, *(_QWORD *)&stageId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v10);
    sub_1BCAFF8(&System_Func_WarBoardEventEntity__int__TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v14);
    sub_1BCAFF8(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v15);
    sub_1BCAFF8(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v16);
    sub_1BCAFF8(&WarBoardEventMaster___c_TypeInfo, v17);
    byte_4B1D61D = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCB254(list, v19);
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v21,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v19 = list;
      if ( HIDWORD(list->fields.items) == stageId && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v18 )
          goto LABEL_16;
        items = v18->fields._items;
        v25 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v19;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v19, v22, v23);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_16;
  }
  v28 = WarBoardEventMaster___c_TypeInfo;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v28 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v28->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardEventMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v30, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v32, v33);
  }
  v34 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v35 = WarBoardEventMaster___c_TypeInfo;
  v36 = v34;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v35 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v35->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarBoardEventMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v38, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0LL);
    v39 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v39->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v39->__9__0_1, (int32_t)_9__0_1, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v36,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v42,
                                        (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B1D61E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__, *(_QWORD *)&stageId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v9);
    byte_4B1D61E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( HIDWORD(list->fields.items) == stageId )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1BCB254(list, v11);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D620 & 1) == 0 )
  {
    sub_1BCAFF8(&WarBoardEventMaster___c_TypeInfo, v1);
    byte_4B1D620 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)WarBoardEventMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardEventMaster___c___ctor(WarBoardEventMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_0(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCB254(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCB254(this, 0LL);
  return a->fields.id;
}