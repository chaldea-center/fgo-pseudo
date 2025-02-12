void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7E4B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method);
    byte_4BC7E4B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7E49 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_4BC7E49 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_324D130 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
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
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v24; // x1
  int v25; // w8
  int v26; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v27; // x21
  bool v28; // w22
  int32_t Count; // w0
  int32_t v30; // w22
  int32_t v31; // w23
  int32_t *v32; // x24
  bool v33; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v35; // x19
  bool v36; // w19
  int v37; // w20
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC7E4C & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__,
      mapGimmickEntity);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_bool___ctor___77482648, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v20);
    byte_4BC7E4C = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_37;
  v25 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v25 >= 1 )
  {
    v26 = 0;
    do
    {
      if ( v25 == v26 )
        sub_1C1AE38(MapGmkOffIdList, v24);
      if ( *((_DWORD *)MapGmkOffIdList + v26 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v25 != ++v26 );
  }
  v27 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v27,
    (const MethodInfo_3292D60 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v28 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v27)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v27,
          0,
          v28 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_3293720 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_37:
    sub_1C1AE30(MapGmkOffIdList, v24);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v31,
                          (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_37;
      v32 = (int32_t *)MapGmkOffIdList;
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v27,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_3293934 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v27,
              v32[9],
              (const MethodInfo_3293690 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_37;
        v33 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v32[4], v32[6], v32[7], v32[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v27,
          v32[9],
          v33,
          (const MethodInfo_3293720 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v30 != ++v31 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v27,
             (const MethodInfo_3293540 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v35 = (System_Collections_Generic_List_bool__o *)sub_1C1AE20(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_56570144(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_35F3120 *)Method_System_Collections_Generic_List_bool___ctor___77482648);
  if ( !v35 )
    goto LABEL_37;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v38,
    v35,
    (const MethodInfo_35F4358 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v39,
            (const MethodInfo_33AC4B0 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v36 )
      break;
    if ( LOBYTE(v39.fields._current) )
    {
      v37 = 13;
      goto LABEL_35;
    }
  }
  v37 = 14;
LABEL_35:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v39,
    (const MethodInfo_33AC4AC *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v36 && v37 == 13;
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

  if ( (byte_4BC7E4A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__, entity);
    byte_4BC7E4A = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}