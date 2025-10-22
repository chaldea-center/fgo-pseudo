void MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57253 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
    byte_4C57253 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    255,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57251 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
    byte_4C57251 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_33B7A10 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v8; // x1
  int v9; // w8
  int v10; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v11; // x21
  bool v12; // w22
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t *v16; // x24
  bool v17; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v19; // x19
  bool v20; // w19
  int v21; // w20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C57254 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_bool___ctor___78124232);
    sub_1C3E564(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C57254 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  v9 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v9 >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v9 == v10 )
        sub_1C3E7C8(MapGmkOffIdList, v8);
      if ( *((_DWORD *)MapGmkOffIdList + v10 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v9 != ++v10 );
  }
  v11 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v11,
    (const MethodInfo_33FD208 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v12 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0),
        !v11)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v11,
          0,
          v12 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_33FDBC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0) )
  {
LABEL_37:
    sub_1C3E7C0(MapGmkOffIdList, v8);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v15,
                          (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      v16 = (int32_t *)MapGmkOffIdList;
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v11,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_33FDDDC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v11,
              v16[9],
              (const MethodInfo_33FDB38 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_37;
        v17 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v16[4], v16[6], v16[7], v16[8], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v11,
          v16[9],
          v17,
          (const MethodInfo_33FDBC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v14 != ++v15 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v11,
             (const MethodInfo_33FD9E8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v19 = (System_Collections_Generic_List_bool__o *)sub_1C3E7B0(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_58124612(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_376E944 *)Method_System_Collections_Generic_List_bool___ctor___78124232);
  if ( !v19 )
    goto LABEL_37;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v22,
    v19,
    (const MethodInfo_376FB7C *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v23,
            (const MethodInfo_3538038 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v20 )
      break;
    if ( LOBYTE(v23.fields._current) )
    {
      v21 = 13;
      goto LABEL_35;
    }
  }
  v21 = 14;
LABEL_35:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v23,
    (const MethodInfo_3538034 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v20 && v21 == 13;
}


// local variable allocation has failed, the output may be wrong!
bool MapGimmickReleaseMaster__TryGetEntity(
        MapGimmickReleaseMaster_o *this,
        MapGimmickReleaseEntity_o **entity,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C57252 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
    byte_4C57252 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}