void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B943 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
    byte_4A5B943 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    473,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *__fastcall ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x23
  __int64 methodPtr_low; // x10
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  ServantProfilePushMaster___c_c *v16; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v18; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  ServantProfilePushMaster___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v26; // x21
  struct ServantProfilePushMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4A5B942 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
    sub_1B885B0(&System_Func_ServantProfilePushEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
    sub_1B885B0(&ServantProfilePushEntity_TypeInfo);
    sub_1B885B0(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__);
    sub_1B885B0(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__);
    sub_1B885B0(&ServantProfilePushMaster___c_TypeInfo);
    byte_4A5B942 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v6,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v8 = Item;
        methodPtr_low = LOBYTE(ServantProfilePushEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   method);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v13 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v15 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v15[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v8, v10, v11);
            }
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_17;
    }
LABEL_30:
    sub_1B8880C(list, method);
  }
LABEL_17:
  v16 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v16 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v16->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ServantProfilePushMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v18,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      0LL);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v23 = ServantProfilePushMaster___c_TypeInfo;
  v24 = v22;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v23 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v23->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ServantProfilePushMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v26,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      0LL);
    v27 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v27->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->__9__0_1, (int32_t)_9__0_1, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v30,
                                             (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B944 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
    byte_4A5B944 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_4A5B945 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
    byte_4A5B945 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B946 & 1) == 0 )
  {
    sub_1B885B0(&ServantProfilePushMaster___c_TypeInfo);
    byte_4A5B946 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantProfilePushMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B8880C(this, 0LL);
  return a->fields.idx;
}