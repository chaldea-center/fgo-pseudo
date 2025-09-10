void MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C277AC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
    byte_4C277AC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    255,
    (const MethodInfo_338A52C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C277AA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
    byte_4C277AA = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_338C850 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int v10; // w8
  int v11; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v12; // x21
  bool v13; // w22
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t *v17; // x24
  bool v18; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v20; // x19
  bool v21; // w19
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C277AD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool___ctor___77933232);
    sub_1C2D490(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C277AD = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  v10 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v10 == v11 )
        sub_1C2D6F4(MapGmkOffIdList, v8, v9);
      if ( *((_DWORD *)MapGmkOffIdList + v11 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v10 != ++v11 );
  }
  v12 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v12,
    (const MethodInfo_33D2048 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v13 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0),
        !v12)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v12,
          0,
          v13 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_33D2A08 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0) )
  {
LABEL_37:
    sub_1C2D6EC(MapGmkOffIdList, v8);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v16,
                          (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      v17 = (int32_t *)MapGmkOffIdList;
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v12,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_33D2C1C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v12,
              v17[9],
              (const MethodInfo_33D2978 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_37;
        v18 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v17[4], v17[6], v17[7], v17[8], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v12,
          v17[9],
          v18,
          (const MethodInfo_33D2A08 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v15 != ++v16 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v12,
             (const MethodInfo_33D2828 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v20 = (System_Collections_Generic_List_bool__o *)sub_1C2D6DC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_57946216(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3743068 *)Method_System_Collections_Generic_List_bool___ctor___77933232);
  if ( !v20 )
    goto LABEL_37;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v23,
    v20,
    (const MethodInfo_37442A0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v24,
            (const MethodInfo_350C8F4 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v21 )
      break;
    if ( LOBYTE(v24.fields._current) )
    {
      v22 = 13;
      goto LABEL_35;
    }
  }
  v22 = 14;
LABEL_35:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v24,
    (const MethodInfo_350C8F0 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v21 && v22 == 13;
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

  if ( (byte_4C277AB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
    byte_4C277AB = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}