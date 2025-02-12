void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC83C6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method);
    byte_4BC83C6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    477,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *__fastcall ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  ServantProfilePushMaster___c_c *v30; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v32; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  ServantProfilePushMaster___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v44; // x21
  struct ServantProfilePushMaster___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0

  if ( (byte_4BC83C5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v6);
    sub_1C1ABD4(&System_Func_ServantProfilePushEntity__int__TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v10);
    sub_1C1ABD4(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v11);
    sub_1C1ABD4(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v12);
    sub_1C1ABD4(&ServantProfilePushMaster___c_TypeInfo, v13);
    byte_4BC83C5 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v17,
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
      if ( Item )
      {
        v19 = Item;
        list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)ServantProfilePushEntity__TimeCheck(
                                                                                          (ServantProfilePushEntity_o *)Item,
                                                                                          method);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v19,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v19;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1C1AE30(list, method);
  }
LABEL_15:
  v30 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v30 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v30->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = ServantProfilePushMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v32,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      0LL);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v34, v35, v36, v37, v38, v39);
  }
  v40 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2FC8A98 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v41 = ServantProfilePushMaster___c_TypeInfo;
  v42 = v40;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v41 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v41->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = ServantProfilePushMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v44,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      0LL);
    v45 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v45->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v45->__9__0_1, (int64_t)_9__0_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2FD8304 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v52,
                                             (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC83C7 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BC83C7 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_324D130 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantProfilePushMaster__TryGetEntity(
        ServantProfilePushMaster_o *this,
        ServantProfilePushEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC83C8 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity);
    byte_4BC83C8 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC83C9 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantProfilePushMaster___c_TypeInfo, v1);
    byte_4BC83C9 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ServantProfilePushMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantProfilePushMaster___c___ctor(ServantProfilePushMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_0(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C1AE30(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C1AE30(this, 0LL);
  return a->fields.idx;
}