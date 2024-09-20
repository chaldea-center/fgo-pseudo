void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
    byte_4A5B4C7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    475,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B4C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
    byte_4A5B4C8 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
}


MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  Il2CppObject *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  MapGimmickPathReleaseMaster___c_c *v18; // x0
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v20; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B4C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
    sub_1B885B0(&MapGimmickPathReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__);
    sub_1B885B0(&MapGimmickPathReleaseMaster___c_TypeInfo);
    byte_4A5B4C6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(MapGimmickPathReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MapGimmickPathReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != MapGimmickPathReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == mapGimmickId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                   (CommonReleaseMaster_o *)list,
                                                                   (int32_t)v10[1].monitor,
                                                                   0LL,
                                                                   0,
                                                                   0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v10,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v10;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1B8880C(list, v6);
  }
LABEL_21:
  if ( !v5 )
    goto LABEL_31;
  if ( v5->fields._size < 1 )
    return 0LL;
  v18 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo);
    v18 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v18->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = MapGimmickPathReleaseMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__1_0,
      v20,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      0LL);
    static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v22, v23);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    _9__1_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  return (MapGimmickPathReleaseEntity_o *)System_Collections_Generic_List_object___get_Item(
                                            v5,
                                            0,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__);
}


float __fastcall MapGimmickPathReleaseMaster__LimitMapGimmickPathRate(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        float currentRate,
        const MethodInfo *method)
{
  MapGimmickPathReleaseEntity_o *MapGimmickPathLimitEntity; // x0

  MapGimmickPathLimitEntity = MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(this, mapGimmickId, method);
  if ( MapGimmickPathLimitEntity && (float)((float)MapGimmickPathLimitEntity->fields.limitRate / 1000.0) <= currentRate )
    return (float)MapGimmickPathLimitEntity->fields.limitRate / 1000.0;
  return currentRate;
}


bool __fastcall MapGimmickPathReleaseMaster__TryGetEntity(
        MapGimmickPathReleaseMaster_o *this,
        MapGimmickPathReleaseEntity_o **entity,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B4C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
    byte_4A5B4C9 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B4CA & 1) == 0 )
  {
    sub_1B885B0(&MapGimmickPathReleaseMaster___c_TypeInfo);
    byte_4A5B4CA = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MapGimmickPathReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MapGimmickPathReleaseMaster___c_TypeInfo->static_fields->__9 = (struct MapGimmickPathReleaseMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MapGimmickPathReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall MapGimmickPathReleaseMaster___c___ctor(
        MapGimmickPathReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MapGimmickPathReleaseMaster___c___GetMapGimmickPathLimitEntity_b__1_0(
        MapGimmickPathReleaseMaster___c_o *this,
        MapGimmickPathReleaseEntity_o *a,
        MapGimmickPathReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}