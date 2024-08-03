void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCBD4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method);
    byte_49FCBD4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    473,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
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
  __int64 v14; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  int32_t v22; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x23
  __int64 methodPtr_low; // x10
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  ServantProfilePushMaster___c_c *v31; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v33; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  ServantProfilePushMaster___c_c *v40; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v43; // x21
  struct ServantProfilePushMaster___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_49FCBD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v6);
    sub_1B640C8(&System_Func_ServantProfilePushEntity__int__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v10);
    sub_1B640C8(&ServantProfilePushEntity_TypeInfo, v11);
    sub_1B640C8(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v12);
    sub_1B640C8(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v13);
    sub_1B640C8(&ServantProfilePushMaster___c_TypeInfo, v14);
    byte_49FCBD3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        methodPtr_low = LOBYTE(ServantProfilePushEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   v20);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v24,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v24, v21, v26);
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_17;
    }
LABEL_30:
    sub_1B64324(list);
  }
LABEL_17:
  v31 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v31 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v31->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = ServantProfilePushMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_ServantProfilePushEntity__int__TypeInfo, v20, v21);
    System_Func_object__int____ctor(
      _9__0_0,
      v33,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      0LL);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v35, v36);
  }
  v37 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v40 = ServantProfilePushMaster___c_TypeInfo;
  v41 = v37;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v40 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v40->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = ServantProfilePushMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_ServantProfilePushEntity__int__TypeInfo, v38, v39);
    System_Func_object__int____ctor(
      _9__0_1,
      v43,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      0LL);
    v44 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v44->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44->__9__0_1, (int32_t)_9__0_1, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v41,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v47,
                                             (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCBD5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCBD5 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_49FCBD6 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity);
    byte_49FCBD6 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCBD7 & 1) == 0 )
  {
    sub_1B640C8(&ServantProfilePushMaster___c_TypeInfo, v1);
    byte_49FCBD7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantProfilePushMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantProfilePushMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B64324(this);
  return a->fields.idx;
}