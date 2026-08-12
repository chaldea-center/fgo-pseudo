void WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971A2F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
    byte_5971A2F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    474,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


WarBoardEventEntity_array *WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  WarBoardEventMaster___c_c *v21; // x0
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v24; // x20
  struct WarBoardEventMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  WarBoardEventMaster___c_c *v34; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x19
  struct WarBoardEventMaster___c_StaticFields *v36; // x9
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v38; // x21
  struct WarBoardEventMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0

  if ( (byte_5971A2D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
    sub_2213A60(&System_Func_WarBoardEventEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    sub_2213A60(&Method_WarBoardEventMaster___c__GetList_b__0_0__);
    sub_2213A60(&Method_WarBoardEventMaster___c__GetList_b__0_1__);
    sub_2213A60(&WarBoardEventMaster___c_TypeInfo);
    byte_5971A2D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_2213CDC(list, v8);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_16;
  }
  v21 = WarBoardEventMaster___c_TypeInfo;
  if ( !*(&WarBoardEventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo, v8);
    v21 = WarBoardEventMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__0_0 = (System_Func_object__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v8);
      static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v24, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0);
    v25 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v25->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__0_0, (int32_t)_9__0_0, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v34 = WarBoardEventMaster___c_TypeInfo;
  v35 = v32;
  if ( !*(&WarBoardEventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo, v33);
    v34 = WarBoardEventMaster___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__0_1 = (System_Func_object__int__o *)v36->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v33);
      v36 = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v38, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0);
    v39 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v39->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__0_1, (int32_t)_9__0_1, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v35,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v46,
                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
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

  if ( (byte_5971A2E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    byte_5971A2E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == stageId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971A30 & 1) == 0 )
  {
    sub_2213A60(&WarBoardEventMaster___c_TypeInfo);
    byte_5971A30 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardEventMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return a->fields.priority;
}


int32_t WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return a->fields.id;
}