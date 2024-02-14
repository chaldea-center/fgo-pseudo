void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42129F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method);
    byte_42129F8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    247,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42129F6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_42129F6 = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266A024 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
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
  __int64 v22; // x1
  UnityEngine_Object_o *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int v27; // w8
  unsigned int v28; // w9
  System_Collections_Generic_Dictionary_int__bool__o *v29; // x21
  bool v30; // w22
  int32_t Count; // w0
  int32_t v32; // w22
  int32_t v33; // w23
  int32_t *v34; // x24
  __int64 v35; // x10
  bool v36; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_bool__o *v40; // x19
  char v41; // w19
  int v42; // w20
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42129F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapGimmickEntity);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool___ctor___67875096, v16);
    sub_B0D8A4(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_B0D8A4(&MapGimmickReleaseEntity_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v21);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v22);
    byte_42129F9 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( !mapGimmickEntity )
    return 0;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  v27 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v27 >= 1 )
  {
    v28 = 0;
    do
    {
      if ( v28 >= v27 )
      {
        v44 = sub_B0D9A8(MapGmkOffIdList);
        sub_B0D948(v44, 0LL);
      }
      if ( *((_DWORD *)MapGmkOffIdList + (int)v28 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( (int)++v28 < v27 );
  }
  v29 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v25,
                                                                v26);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v29,
    (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v30 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
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
          (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_44:
    sub_B0D97C(MapGmkOffIdList);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
                          v33,
                          (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      v34 = (int32_t *)MapGmkOffIdList;
      v35 = *(&MapGimmickReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 300LL) < (unsigned int)v35
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * v35 - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v29,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v29,
              v34[9],
              (const MethodInfo_2E61E5C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_44;
        v36 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v34[4], v34[6], v34[7], v34[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v29,
          v34[9],
          v36,
          (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( ++v33 < v32 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v29,
             (const MethodInfo_2E61CC4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v40 = (System_Collections_Generic_List_bool__o *)sub_B0D974(System_Collections_Generic_List_bool__TypeInfo, v38, v39);
  System_Collections_Generic_List_bool____ctor_49514580(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F38854 *)Method_System_Collections_Generic_List_bool___ctor___67875096);
  if ( !v40 )
    goto LABEL_44;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v45,
    v40,
    (const MethodInfo_2F3A22C *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v46,
            (const MethodInfo_210DC2C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v46.fields.current) )
    {
      v41 = 1;
      v42 = 32;
      goto LABEL_43;
    }
  }
  v41 = 0;
  v42 = 30;
LABEL_43:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v46,
    (const MethodInfo_210DC28 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v42 == 32) & v41;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapGimmickReleaseMaster__TryGetEntity(
        MapGimmickReleaseMaster_o *this,
        MapGimmickReleaseEntity_o **entity,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42129F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__, entity);
    byte_42129F7 = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}