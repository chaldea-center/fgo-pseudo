void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16572 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method, v2);
    byte_4B16572 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    249,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16570 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId,
      *(_QWORD *)&priority);
    byte_4B16570 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool __fastcall MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  int v46; // w8
  int v47; // w10
  System_Collections_Generic_Dictionary_int__bool__o *v48; // x21
  bool v49; // w22
  int32_t Count; // w0
  int32_t v51; // w22
  int32_t v52; // w23
  int32_t *v53; // x24
  __int64 methodPtr_low; // x10
  bool v55; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_bool__o *v60; // x19
  bool v61; // w19
  int v62; // w20
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16573 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapGimmickEntity, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor___76776240, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v29, v30);
    sub_1BCA7E0(&MapGimmickReleaseEntity_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v37, v38);
    byte_4B16573 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  v46 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v46 >= 1 )
  {
    v47 = 0;
    do
    {
      if ( v46 == v47 )
        sub_1BCAA44(MapGmkOffIdList, v43);
      if ( *((_DWORD *)MapGmkOffIdList + v47 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v46 != ++v47 );
  }
  v48 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v43,
                                                                v44,
                                                                v45);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v48,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v49 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v48)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v48,
          0,
          v49 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_39:
    sub_1BCAA3C(MapGmkOffIdList, v43);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v51 = Count;
    v52 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v52,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      v53 = (int32_t *)MapGmkOffIdList;
      methodPtr_low = LOBYTE(MapGimmickReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 304LL) < (unsigned int)methodPtr_low
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * methodPtr_low - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_39;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v48,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v48,
              v53[9],
              (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_39;
        v55 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v53[4], v53[6], v53[7], v53[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v48,
          v53[9],
          v55,
          (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v51 != ++v52 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v48,
             (const MethodInfo_31F72C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v60 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v57,
                                                     v58,
                                                     v59);
  System_Collections_Generic_List_bool____ctor_55936236(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_35584EC *)Method_System_Collections_Generic_List_bool___ctor___76776240);
  if ( !v60 )
    goto LABEL_39;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v63,
    v60,
    (const MethodInfo_3559724 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v61 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v64,
            (const MethodInfo_330E978 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v61 )
      break;
    if ( LOBYTE(v64.fields._current) )
    {
      v62 = 13;
      goto LABEL_37;
    }
  }
  v62 = 14;
LABEL_37:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v64,
    (const MethodInfo_330E974 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v61 && v62 == 13;
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

  if ( (byte_4B16571 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&mapGimmickId);
    byte_4B16571 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}