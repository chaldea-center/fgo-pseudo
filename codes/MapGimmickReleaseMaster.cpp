void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4354DA0 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
    byte_4354DA0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    248,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4354D9E & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
    byte_4354D9E = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21C0890 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool __fastcall MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v7; // x1
  int v8; // w8
  unsigned int v9; // w9
  System_Collections_Generic_Dictionary_int__bool__o *v10; // x21
  bool v11; // w22
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t *v15; // x24
  __int64 v16; // x10
  bool v17; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v19; // x19
  char v20; // w19
  int v21; // w20
  __int64 v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4354DA1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_bool___ctor___69155096);
    sub_B70694(&System_Collections_Generic_List_bool__TypeInfo);
    sub_B70694(&MapGimmickReleaseEntity_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_4354DA1 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !mapGimmickEntity )
    return 0;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  v8 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= v8 )
      {
        v23 = sub_B70798(MapGmkOffIdList);
        sub_B70738(v23, 0LL);
      }
      if ( *((_DWORD *)MapGmkOffIdList + (int)v9 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( (int)++v9 < v8 );
  }
  v10 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B70764(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v10,
    (const MethodInfo_2F47534 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v11 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v10)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v10,
          0,
          v11 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_2F480B8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_44:
    sub_B7076C(MapGmkOffIdList, v7);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
                          v14,
                          (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      v15 = (int32_t *)MapGmkOffIdList;
      v16 = *(&MapGimmickReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 300LL) < (unsigned int)v16
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * v16 - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v10,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_2F48358 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v10,
              v15[9],
              (const MethodInfo_2F48020 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_44;
        v17 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v15[4], v15[6], v15[7], v15[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v10,
          v15[9],
          v17,
          (const MethodInfo_2F480B8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( ++v14 < v13 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v10,
             (const MethodInfo_2F47E88 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v19 = (System_Collections_Generic_List_bool__o *)sub_B70764(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50678856(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3054C48 *)Method_System_Collections_Generic_List_bool___ctor___69155096);
  if ( !v19 )
    goto LABEL_44;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v24,
    v19,
    (const MethodInfo_3056620 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v25,
            (const MethodInfo_19F215C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v25.fields.current) )
    {
      v20 = 1;
      v21 = 32;
      goto LABEL_43;
    }
  }
  v20 = 0;
  v21 = 30;
LABEL_43:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v25,
    (const MethodInfo_19F2158 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v21 == 32) & v20;
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

  if ( (byte_4354D9F & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
    byte_4354D9F = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}