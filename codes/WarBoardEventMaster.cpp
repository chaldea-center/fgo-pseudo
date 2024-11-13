void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1719D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method, v2);
    byte_4B1719D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x22
  int64_t v32; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v34; // w23
  __int64 v35; // x2
  __int64 v36; // x3
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  WarBoardEventMaster___c_c *v48; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v50; // x20
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  WarBoardEventMaster___c_c *v62; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v65; // x21
  struct WarBoardEventMaster___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0

  if ( (byte_4B1719B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&stageId,
      *(_QWORD *)&eventTiming);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v13, v14);
    sub_1BCA7E0(&System_Func_WarBoardEventEntity__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v23, v24);
    sub_1BCA7E0(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v25, v26);
    sub_1BCA7E0(&WarBoardEventMaster___c_TypeInfo, v27, v28);
    sub_1BCA7E0(&WarBoardEventEntity_TypeInfo, v29, v30);
    byte_4B1719B = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardEventEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       *(_QWORD *)&eventTiming,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1BCAA3C(list, v32);
  v34 = 0;
  while ( v34 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v34,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v32 = (int64_t)list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list[1].klass) == eventTiming )
      {
        if ( !v31 )
          goto LABEL_18;
        items = v31->fields._items;
        v45 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v32;
          sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v32, v37, v38, v39, v40, v41, v42);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v34;
    if ( !list )
      goto LABEL_18;
  }
  v48 = WarBoardEventMaster___c_TypeInfo;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo, v32);
    v48 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v48->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48, v32);
      v48 = WarBoardEventMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardEventEntity__int__TypeInfo, v32, v35, v36);
    System_Func_object__int____ctor(_9__0_0, v50, Method_WarBoardEventMaster___c__GetList_b__0_0__, 0LL);
    static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v52, v53, v54, v55, v56, v57);
  }
  v58 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v62 = WarBoardEventMaster___c_TypeInfo;
  v63 = v58;
  if ( !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo, v59);
    v62 = WarBoardEventMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v62->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, v59);
      v62 = WarBoardEventMaster___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v62->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardEventEntity__int__TypeInfo, v59, v60, v61);
    System_Func_object__int____ctor(_9__0_1, v65, Method_WarBoardEventMaster___c__GetList_b__0_1__, 0LL);
    v66 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v66->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v66->__9__0_1, (int64_t)_9__0_1, v67, v68, v69, v70, v71, v72);
  }
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v63,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v73,
                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B1719C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&stageId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&WarBoardEventEntity_TypeInfo, v16, v17);
    byte_4B1719C = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardEventEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(WarBoardEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(WarBoardEventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardEventEntity_TypeInfo
        && *(_DWORD *)(list + 20) == stageId )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_WarBoardEventEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1719E & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardEventMaster___c_TypeInfo, v1, v2);
    byte_4B1719E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardEventMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardEventMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardEventMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardEventMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return a->fields.id;
}