void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC777 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method);
    byte_49FC777 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    249,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC775 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_49FC775 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D41FC *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool __fastcall MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int v27; // w8
  int v28; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v29; // x21
  bool v30; // w22
  int32_t Count; // w0
  int32_t v32; // w22
  int32_t v33; // w23
  int32_t *v34; // x24
  __int64 methodPtr_low; // x10
  bool v36; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_bool__o *v40; // x19
  bool v41; // w19
  int v42; // w20
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC778 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapGimmickEntity);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool___ctor___75646136, v16);
    sub_1B640C8(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1B640C8(&MapGimmickReleaseEntity_TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v21);
    byte_49FC778 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  v27 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v27 >= 1 )
  {
    v28 = 0;
    do
    {
      if ( v27 == v28 )
        sub_1B6432C(MapGmkOffIdList, v25);
      if ( *((_DWORD *)MapGmkOffIdList + v28 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v27 != ++v28 );
  }
  v29 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v25,
                                                                v26);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v29,
    (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v30 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v29)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v29,
          0,
          v30 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_39:
    sub_1B64324(MapGmkOffIdList);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v33,
                          (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      v34 = (int32_t *)MapGmkOffIdList;
      methodPtr_low = LOBYTE(MapGimmickReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 304LL) < (unsigned int)methodPtr_low
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * methodPtr_low - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_39;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v29,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v29,
              v34[9],
              (const MethodInfo_3115058 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_39;
        v36 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v34[4], v34[6], v34[7], v34[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v29,
          v34[9],
          v36,
          (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v32 != ++v33 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v29,
             (const MethodInfo_3114F08 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v40 = (System_Collections_Generic_List_bool__o *)sub_1B64314(System_Collections_Generic_List_bool__TypeInfo, v38, v39);
  System_Collections_Generic_List_bool____ctor_54930452(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3462C14 *)Method_System_Collections_Generic_List_bool___ctor___75646136);
  if ( !v40 )
    goto LABEL_39;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v43,
    v40,
    (const MethodInfo_3463EF4 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v44,
            (const MethodInfo_3221D0C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v41 )
      break;
    if ( LOBYTE(v44.fields._current) )
    {
      v42 = 13;
      goto LABEL_37;
    }
  }
  v42 = 14;
LABEL_37:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v44,
    (const MethodInfo_3221D08 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v41 && v42 == 13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapGimmickReleaseMaster__TryGetEntity(
        MapGimmickReleaseMaster_o *this,
        MapGimmickReleaseEntity_o **entity,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC776 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__, entity);
    byte_49FC776 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}