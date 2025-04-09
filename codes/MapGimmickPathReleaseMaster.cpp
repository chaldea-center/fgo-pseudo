void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB223 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__,
      method);
    byte_49BB223 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    481,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB224 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_49BB224 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31A2454 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v20; // w22
  int32_t v21; // w23
  Il2CppObject *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  MapGimmickPathReleaseMaster___c_c *v29; // x0
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v31; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_49BB222 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Count__,
      *(_QWORD *)&mapGimmickId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo, v14);
    sub_1B4CF90(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__, v15);
    sub_1B4CF90(&MapGimmickPathReleaseMaster___c_TypeInfo, v16);
    byte_49BB222 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v20 = (int)list;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Item__);
      if ( !list )
        break;
      v22 = (Il2CppObject *)list;
      if ( LODWORD(list->fields.items) == mapGimmickId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                   (CommonReleaseMaster_o *)list,
                                                                   (int32_t)v22[1].monitor,
                                                                   0LL,
                                                                   0,
                                                                   0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v26 = Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v22,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v22;
            sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_19;
    }
LABEL_29:
    sub_1B4D1EC(list, v18);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_29;
  if ( v17->fields._size < 1 )
    return 0LL;
  v29 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo);
    v29 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v29->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = MapGimmickPathReleaseMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__1_0,
      v31,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      0LL);
    static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v33, v34);
  }
  System_Collections_Generic_List_object___Sort_56106144(
    v17,
    _9__1_0,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  return (MapGimmickPathReleaseEntity_o *)System_Collections_Generic_List_object___get_Item(
                                            v17,
                                            0,
                                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__);
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

  if ( (byte_49BB225 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49BB225 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB226 & 1) == 0 )
  {
    sub_1B4CF90(&MapGimmickPathReleaseMaster___c_TypeInfo, v1);
    byte_49BB226 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(MapGimmickPathReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapGimmickPathReleaseMaster___c_TypeInfo->static_fields->__9 = (struct MapGimmickPathReleaseMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)MapGimmickPathReleaseMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}