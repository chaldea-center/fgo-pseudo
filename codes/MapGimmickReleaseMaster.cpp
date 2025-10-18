void MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C4349E & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
    byte_4C4349E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    255,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C4349C & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
    byte_4C4349C = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_33A5B58 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  int v8; // w8
  int v9; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v10; // x21
  bool v11; // w22
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t *v15; // x24
  bool v16; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v18; // x19
  bool v19; // w19
  int v20; // w20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C4349F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool___ctor___78044272);
    sub_1C37058(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C4349F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  v8 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v8 == v9 )
        sub_1C372BC(MapGmkOffIdList);
      if ( *((_DWORD *)MapGmkOffIdList + v9 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v8 != ++v9 );
  }
  v10 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v10,
    (const MethodInfo_33EB350 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v11 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0),
        !v10)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v10,
          0,
          v11 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_33EBD10 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0) )
  {
LABEL_37:
    sub_1C372B4(MapGmkOffIdList);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v14,
                          (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      v15 = (int32_t *)MapGmkOffIdList;
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v10,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_33EBF24 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v10,
              v15[9],
              (const MethodInfo_33EBC80 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_37;
        v16 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v15[4], v15[6], v15[7], v15[8], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v10,
          v15[9],
          v16,
          (const MethodInfo_33EBD10 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v13 != ++v14 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v10,
             (const MethodInfo_33EBB30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v18 = (System_Collections_Generic_List_bool__o *)sub_1C372A4(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_58049800(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_375C508 *)Method_System_Collections_Generic_List_bool___ctor___78044272);
  if ( !v18 )
    goto LABEL_37;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v21,
    v18,
    (const MethodInfo_375D740 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v22,
            (const MethodInfo_3525BFC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v19 )
      break;
    if ( LOBYTE(v22.fields._current) )
    {
      v20 = 13;
      goto LABEL_35;
    }
  }
  v20 = 14;
LABEL_35:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v22,
    (const MethodInfo_3525BF8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v19 && v20 == 13;
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

  if ( (byte_4C4349D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
    byte_4C4349D = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}