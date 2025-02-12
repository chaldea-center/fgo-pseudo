void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB56C7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method);
    byte_4BB56C7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_3236300 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
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
  int64_t v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  WarBoardEventMaster___c_c *v32; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v34; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  WarBoardEventMaster___c_c *v43; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v46; // x21
  struct WarBoardEventMaster___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0

  if ( (byte_4BB56C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__, *(_QWORD *)&stageId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v10);
    sub_1C13D24(&System_Func_WarBoardEventEntity__int__TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v14);
    sub_1C13D24(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v15);
    sub_1C13D24(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v16);
    sub_1C13D24(&WarBoardEventMaster___c_TypeInfo, v17);
    byte_4BB56C5 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1C13F80(list, v19);
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v21,
                                                               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v19 = (int64_t)list;
      if ( HIDWORD(list->fields.items) == stageId && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v18 )
          goto LABEL_16;
        items = v18->fields._items;
        v29 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v19;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v31 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_16;
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
    _9__0_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v34, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v43 = WarBoardEventMaster___c_TypeInfo;
  v44 = v42;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v43 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v43->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = WarBoardEventMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v46, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0LL);
    v47 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v47->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v47->__9__0_1, (int64_t)_9__0_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2FC81C8 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v54,
                                        (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
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
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BB56C6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__, *(_QWORD *)&stageId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v9);
    byte_4BB56C6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarBoardEventEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( *(_DWORD *)(list + 20) == stageId )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C13F80(list, v11);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB56C8 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardEventMaster___c_TypeInfo, v1);
    byte_4BB56C8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardEventMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C13F80(this, 0LL);
  return a->fields.id;
}