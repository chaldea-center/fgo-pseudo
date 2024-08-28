void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A08FD2 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method);
    byte_4A08FD2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    249,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A08FD0 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_4A08FD0 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30E4818 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
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
  int v26; // w8
  int v27; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v28; // x21
  bool v29; // w22
  int32_t Count; // w0
  int32_t v31; // w22
  int32_t v32; // w23
  int32_t *v33; // x24
  __int64 methodPtr_low; // x10
  bool v35; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v37; // x19
  bool v38; // w19
  int v39; // w20
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A08FD3 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapGimmickEntity);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_bool___ctor___75695312, v16);
    sub_1B686D4(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1B686D4(&MapGimmickReleaseEntity_TypeInfo, v18);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v21);
    byte_4A08FD3 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  v26 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v26 >= 1 )
  {
    v27 = 0;
    do
    {
      if ( v26 == v27 )
        sub_1B68938(MapGmkOffIdList, v25);
      if ( *((_DWORD *)MapGmkOffIdList + v27 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v26 != ++v27 );
  }
  v28 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v28,
    (const MethodInfo_3124D44 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v29 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
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
          (const MethodInfo_3125704 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_39:
    sub_1B68930(MapGmkOffIdList, v25);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v32,
                          (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      v33 = (int32_t *)MapGmkOffIdList;
      methodPtr_low = LOBYTE(MapGimmickReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 304LL) < (unsigned int)methodPtr_low
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * methodPtr_low - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_39;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v28,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_3125918 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v28,
              v33[9],
              (const MethodInfo_3125674 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_39;
        v35 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v33[4], v33[6], v33[7], v33[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v28,
          v33[9],
          v35,
          (const MethodInfo_3125704 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v31 != ++v32 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v28,
             (const MethodInfo_3125524 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v37 = (System_Collections_Generic_List_bool__o *)sub_1B68920(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_54995720(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3472B08 *)Method_System_Collections_Generic_List_bool___ctor___75695312);
  if ( !v37 )
    goto LABEL_39;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v40,
    v37,
    (const MethodInfo_3473D40 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v41,
            (const MethodInfo_323247C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v38 )
      break;
    if ( LOBYTE(v41.fields._current) )
    {
      v39 = 13;
      goto LABEL_37;
    }
  }
  v39 = 14;
LABEL_37:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v41,
    (const MethodInfo_3232478 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v38 && v39 == 13;
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

  if ( (byte_4A08FD1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__, entity);
    byte_4A08FD1 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}