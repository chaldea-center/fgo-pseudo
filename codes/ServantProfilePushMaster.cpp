void ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C439CB & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
    byte_4C439CB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    479,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
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
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  ServantProfilePushMaster___c_c *v16; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v18; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  ServantProfilePushMaster___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v26; // x21
  struct ServantProfilePushMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4C439CA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
    sub_1C37058(&System_Func_ServantProfilePushEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
    sub_1C37058(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__);
    sub_1C37058(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__);
    sub_1C37058(&ServantProfilePushMaster___c_TypeInfo);
    byte_4C439CA = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
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
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
      if ( Item )
      {
        v9 = Item;
        list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)ServantProfilePushEntity__TimeCheck(
                                                                                          (ServantProfilePushEntity_o *)Item,
                                                                                          v8);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v9,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v9;
            sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1C372B4(list);
  }
LABEL_15:
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
    _9__0_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v18, Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, 0);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
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
    _9__0_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v26, Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, 0);
    v27 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v27->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v27->__9__0_1, (int32_t)_9__0_1, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v30,
                                             (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C439CC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
    byte_4C439CC = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_4C439CD & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
    byte_4C439CD = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C439CE & 1) == 0 )
  {
    sub_1C37058(&ServantProfilePushMaster___c_TypeInfo);
    byte_4C439CE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantProfilePushMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return a->fields.priority;
}


int32_t ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C372B4(this);
  return a->fields.idx;
}