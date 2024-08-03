void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD36B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method);
    byte_49FD36B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w23
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_ObjectModel_Collection_T__o *v26; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  WarBoardEventMaster___c_c *v32; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v34; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  WarBoardEventMaster___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v44; // x21
  struct WarBoardEventMaster___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0

  if ( (byte_49FD369 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v10);
    sub_1B640C8(&System_Func_WarBoardEventEntity__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v14);
    sub_1B640C8(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v15);
    sub_1B640C8(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v16);
    sub_1B640C8(&WarBoardEventMaster___c_TypeInfo, v17);
    sub_1B640C8(&WarBoardEventEntity_TypeInfo, v18);
    byte_49FD369 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardEventEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       *(_QWORD *)&eventTiming);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B64324(list);
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v21,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v26 = list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v19 )
          goto LABEL_18;
        items = v19->fields._items;
        v29 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v26;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v26, v24, v25);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_18;
  }
  v32 = WarBoardEventMaster___c_TypeInfo;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v32 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v32->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = WarBoardEventMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardEventEntity__int__TypeInfo, v22, v23);
    System_Func_object__int____ctor(_9__0_0, v34, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v36, v37);
  }
  v38 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v41 = WarBoardEventMaster___c_TypeInfo;
  v42 = v38;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v41 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v41->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = WarBoardEventMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardEventEntity__int__TypeInfo, v39, v40);
    System_Func_object__int____ctor(_9__0_1, v44, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0LL);
    v45 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v45->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->__9__0_1, (int32_t)_9__0_1, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v48,
                                        (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FD36A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v9);
    sub_1B640C8(&WarBoardEventEntity_TypeInfo, v10);
    byte_49FD36A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardEventEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v16;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v16, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64324(list);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD36C & 1) == 0 )
  {
    sub_1B640C8(&WarBoardEventMaster___c_TypeInfo, v1);
    byte_49FD36C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardEventMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardEventMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B64324(this);
  return a->fields.id;
}