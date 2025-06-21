void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CEE5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method);
    byte_4B1CEE5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    479,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  ServantProfilePushMaster___c_c *v26; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v28; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  ServantProfilePushMaster___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v36; // x21
  struct ServantProfilePushMaster___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_4B1CEE4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v6);
    sub_1BCAFF8(&System_Func_ServantProfilePushEntity__int__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v10);
    sub_1BCAFF8(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v11);
    sub_1BCAFF8(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v12);
    sub_1BCAFF8(&ServantProfilePushMaster___c_TypeInfo, v13);
    byte_4B1CEE4 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
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
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
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
          v23 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v19,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v19;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1BCB254(list, method);
  }
LABEL_15:
  v26 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v26 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v26->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = ServantProfilePushMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v28,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      0LL);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v33 = ServantProfilePushMaster___c_TypeInfo;
  v34 = v32;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v33 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v33->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = ServantProfilePushMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v36,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      0LL);
    v37 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v37->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v37->__9__0_1, (int32_t)_9__0_1, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v34,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v40,
                                             (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CEE6 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B1CEE6 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_4B1CEE7 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity);
    byte_4B1CEE7 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CEE8 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantProfilePushMaster___c_TypeInfo, v1);
    byte_4B1CEE8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantProfilePushMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCB254(this, 0LL);
  return a->fields.idx;
}