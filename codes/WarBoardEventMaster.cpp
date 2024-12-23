void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67B9D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method);
    byte_4B67B9D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
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
  int64_t v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  WarBoardEventMaster___c_c *v34; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v36; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x0
  WarBoardEventMaster___c_c *v45; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v48; // x21
  struct WarBoardEventMaster___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0

  if ( (byte_4B67B9B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v10);
    sub_1BE4ACC(&System_Func_WarBoardEventEntity__int__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v15);
    sub_1BE4ACC(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v16);
    sub_1BE4ACC(&WarBoardEventMaster___c_TypeInfo, v17);
    sub_1BE4ACC(&WarBoardEventEntity_TypeInfo, v18);
    byte_4B67B9B = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1BE4D28(list, v20);
  v22 = 0;
  while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v22,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v20 = (int64_t)list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v19 )
          goto LABEL_18;
        items = v19->fields._items;
        v31 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 4), v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v22;
    if ( !list )
      goto LABEL_18;
  }
  v34 = WarBoardEventMaster___c_TypeInfo;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v34 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v34->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = WarBoardEventMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v36, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v38, v39, v40, v41, v42, v43);
  }
  v44 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v45 = WarBoardEventMaster___c_TypeInfo;
  v46 = v44;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v45 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v45->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = WarBoardEventMaster___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v48, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0LL);
    v49 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v49->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v49->__9__0_1, (int64_t)_9__0_1, v50, v51, v52, v53, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v46,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2F91F68 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v56,
                                        (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
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
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B67B9C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v9);
    sub_1BE4ACC(&WarBoardEventEntity_TypeInfo, v10);
    byte_4B67B9C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(WarBoardEventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardEventEntity_TypeInfo
        && *(_DWORD *)(list + 20) == stageId )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BE4D28(list, v12);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
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

  if ( (byte_4B67B9E & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardEventMaster___c_TypeInfo, v1);
    byte_4B67B9E = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BE4D28(this, 0LL);
  return a->fields.id;
}