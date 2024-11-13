void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1656A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B1656A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    475,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1656B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId,
      *(_QWORD *)&priority);
    byte_4B1656B = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x19
  __int64 v33; // x1
  int64_t list; // x0
  int64_t v35; // x2
  __int64 v36; // x3
  int v37; // w22
  int32_t v38; // w23
  int64_t v39; // x24
  __int64 methodPtr_low; // x10
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  MapGimmickPathReleaseMaster___c_c *v49; // x0
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v51; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B16569 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&mapGimmickId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&MapGimmickPathReleaseEntity_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__, v28, v29);
    sub_1BCA7E0(&MapGimmickPathReleaseMaster___c_TypeInfo, v30, v31);
    byte_4B16569 = 1;
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&mapGimmickId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_31;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v37 = list;
    v38 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v38,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v39 = list;
      methodPtr_low = LOBYTE(MapGimmickPathReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(MapGimmickPathReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != MapGimmickPathReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == mapGimmickId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
        list = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, *(_DWORD *)(v39 + 24), 0LL, 0, 0LL);
        if ( (list & 1) != 0 )
        {
          if ( !v32 )
            break;
          items = v32->fields._items;
          v46 = Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__;
          ++v32->fields._version;
          if ( !items )
            break;
          size = v32->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v39,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v39;
            sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v39, v35, v36, v41, v42, v43, v44);
          }
        }
      }
      if ( v37 == ++v38 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1BCAA3C(list, v33);
  }
LABEL_21:
  if ( !v32 )
    goto LABEL_31;
  if ( v32->fields._size < 1 )
    return 0LL;
  v49 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo, v33);
    v49 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v49->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49, v33);
      v49 = MapGimmickPathReleaseMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                          System_Comparison_MapGimmickPathReleaseEntity__TypeInfo,
                                          v33,
                                          v35,
                                          v36);
    System_Comparison_object____ctor(
      _9__1_0,
      v51,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      0LL);
    static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v53, v54, v55, v56, v57, v58);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v32,
    _9__1_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  return (MapGimmickPathReleaseEntity_o *)System_Collections_Generic_List_object___get_Item(
                                            v32,
                                            0,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapGimmickPathReleaseMaster__TryGetEntity(
        MapGimmickPathReleaseMaster_o *this,
        MapGimmickPathReleaseEntity_o **entity,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1656C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&mapGimmickId);
    byte_4B1656C = 1;
  }
  PK = (Il2CppObject *)MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1656D & 1) == 0 )
  {
    sub_1BCA7E0(&MapGimmickPathReleaseMaster___c_TypeInfo, v1, v2);
    byte_4B1656D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MapGimmickPathReleaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MapGimmickPathReleaseMaster___c_TypeInfo->static_fields->__9 = (struct MapGimmickPathReleaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapGimmickPathReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}