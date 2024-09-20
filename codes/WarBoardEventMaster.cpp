void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
    byte_4A5C0E4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  WarBoardEventMaster___c_c *v18; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v20; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  WarBoardEventMaster___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v28; // x21
  struct WarBoardEventMaster___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4A5C0E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
    sub_1B885B0(&System_Func_WarBoardEventEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    sub_1B885B0(&Method_WarBoardEventMaster___c__GetList_b__0_0__);
    sub_1B885B0(&Method_WarBoardEventMaster___c__GetList_b__0_1__);
    sub_1B885B0(&WarBoardEventMaster___c_TypeInfo);
    sub_1B885B0(&WarBoardEventEntity_TypeInfo);
    byte_4A5C0E2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B8880C(list, v8);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v8 = list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v7 )
          goto LABEL_18;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v8, v11, v12);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_18;
  }
  v18 = WarBoardEventMaster___c_TypeInfo;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v18 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v18->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = WarBoardEventMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v20, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v25 = WarBoardEventMaster___c_TypeInfo;
  v26 = v24;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v25 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v25->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = WarBoardEventMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v28, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0LL);
    v29 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v29->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__0_1, (int32_t)_9__0_1, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v26,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v32,
                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5C0E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    sub_1B885B0(&WarBoardEventEntity_TypeInfo);
    byte_4A5C0E3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
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
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C0E5 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardEventMaster___c_TypeInfo);
    byte_4A5C0E5 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardEventMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B8880C(this, 0LL);
  return a->fields.id;
}