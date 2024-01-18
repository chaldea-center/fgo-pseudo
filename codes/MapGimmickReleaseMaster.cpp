void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858BC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method);
    byte_41858BC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    247,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41858BA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_41858BA = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
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
  int v26; // w8
  unsigned int v27; // w9
  System_Collections_Generic_Dictionary_int__bool__o *v28; // x21
  bool v29; // w22
  int32_t Count; // w0
  int32_t v31; // w22
  int32_t v32; // w23
  int32_t *v33; // x24
  __int64 v34; // x10
  bool v35; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v37; // x19
  char v38; // w19
  int v39; // w20
  __int64 v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_41858BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapGimmickEntity);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_B2C35C(&MapGimmickReleaseEntity_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v21);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v22);
    byte_41858BD = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !mapGimmickEntity )
    return 0;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  v26 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v26 >= 1 )
  {
    v27 = 0;
    do
    {
      if ( v27 >= v26 )
      {
        v41 = sub_B2C460(MapGmkOffIdList);
        sub_B2C400(v41, 0LL);
      }
      if ( *((_DWORD *)MapGmkOffIdList + (int)v27 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( (int)++v27 < v26 );
  }
  v28 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v28,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v29 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v28)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v28,
          0,
          v29 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_44:
    sub_B2C434(MapGmkOffIdList, v25);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
                          v32,
                          (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      v33 = (int32_t *)MapGmkOffIdList;
      v34 = *(&MapGimmickReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 300LL) < (unsigned int)v34
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * v34 - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v28,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v28,
              v33[9],
              (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_44;
        v35 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v33[4], v33[6], v33[7], v33[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v28,
          v33[9],
          v35,
          (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( ++v32 < v31 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v28,
             (const MethodInfo_2E1C9B0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v37 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_49471176(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F2DEC8 *)Method_System_Collections_Generic_List_bool___ctor__);
  if ( !v37 )
    goto LABEL_44;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v42,
    v37,
    (const MethodInfo_2F2F8A0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v43,
            (const MethodInfo_20E5B08 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v43.fields.current) )
    {
      v38 = 1;
      v39 = 32;
      goto LABEL_43;
    }
  }
  v38 = 0;
  v39 = 30;
LABEL_43:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v43,
    (const MethodInfo_20E5B04 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v39 == 32) & v38;
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

  if ( (byte_41858BB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__, entity);
    byte_41858BB = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}