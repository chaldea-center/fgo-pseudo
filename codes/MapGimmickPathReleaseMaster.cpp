void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E43 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__,
      method);
    byte_4BC7E43 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    479,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7E44 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_4BC7E44 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_324D130 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
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
  int64_t list; // x0
  int v20; // w22
  int32_t v21; // w23
  int64_t v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  MapGimmickPathReleaseMaster___c_c *v33; // x0
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v35; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BC7E42 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Count__,
      *(_QWORD *)&mapGimmickId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Item__, v5);
    sub_1C1ABD4(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo, v14);
    sub_1C1ABD4(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__, v15);
    sub_1C1ABD4(&MapGimmickPathReleaseMaster___c_TypeInfo, v16);
    byte_4BC7E42 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v20 = list;
    v21 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v21,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MapGimmickPathReleaseEntity__get_Item__);
      if ( !list )
        break;
      v22 = list;
      if ( *(_DWORD *)(list + 16) == mapGimmickId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        list = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, *(_DWORD *)(v22 + 24), 0LL, 0, 0LL);
        if ( (list & 1) != 0 )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v30 = Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v22,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v22;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 4), v22, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_19;
    }
LABEL_29:
    sub_1C1AE30(list, v18);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_29;
  if ( v17->fields._size < 1 )
    return 0LL;
  v33 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo);
    v33 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v33->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = MapGimmickPathReleaseMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__1_0,
      v35,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      0LL);
    static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v37, v38, v39, v40, v41, v42);
  }
  System_Collections_Generic_List_object___Sort_56877908(
    v17,
    _9__1_0,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  return (MapGimmickPathReleaseEntity_o *)System_Collections_Generic_List_object___get_Item(
                                            v17,
                                            0,
                                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__);
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

  if ( (byte_4BC7E45 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4BC7E45 = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7E46 & 1) == 0 )
  {
    sub_1C1ABD4(&MapGimmickPathReleaseMaster___c_TypeInfo, v1);
    byte_4BC7E46 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(MapGimmickPathReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapGimmickPathReleaseMaster___c_TypeInfo->static_fields->__9 = (struct MapGimmickPathReleaseMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)MapGimmickPathReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}