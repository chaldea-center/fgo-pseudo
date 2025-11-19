void ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6CEC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
    byte_4CB6CEC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    479,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  ServantProfilePushMaster___c_c *v15; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v17; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  ServantProfilePushMaster___c_c *v22; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v25; // x21
  struct ServantProfilePushMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4CB6CEB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
    sub_1C6BA08(&System_Func_ServantProfilePushEntity__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
    sub_1C6BA08(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__);
    sub_1C6BA08(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__);
    sub_1C6BA08(&ServantProfilePushMaster___c_TypeInfo);
    byte_4CB6CEB = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
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
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
      if ( Item )
      {
        v8 = Item;
        list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)ServantProfilePushEntity__TimeCheck(
                                                                                          (ServantProfilePushEntity_o *)Item,
                                                                                          method);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v12 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v8,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1C6BC60(list, method);
  }
LABEL_15:
  v15 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v15 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v15->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ServantProfilePushMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v17, Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, 0);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v22 = ServantProfilePushMaster___c_TypeInfo;
  v23 = v21;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v22 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v22->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ServantProfilePushMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v25, Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, 0);
    v26 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v26->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v26->__9__0_1, (int32_t)_9__0_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_317A3AC *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v29,
                                             (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6CED & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
    byte_4CB6CED = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantProfilePushMaster__TryGetEntity(
        ServantProfilePushMaster_o *this,
        ServantProfilePushEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6CEE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
    byte_4CB6CEE = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6CEF & 1) == 0 )
  {
    sub_1C6BA08(&ServantProfilePushMaster___c_TypeInfo);
    byte_4CB6CEF = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantProfilePushMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantProfilePushMaster___c___ctor(ServantProfilePushMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantProfilePushMaster___c___GetAvaiableEntities_b__0_0(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C6BC60(this, 0);
  return a->fields.priority;
}


int32_t ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C6BC60(this, 0);
  return a->fields.idx;
}