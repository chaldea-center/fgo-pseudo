void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
    byte_4A5B4CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    249,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B4CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
    byte_4A5B4CD = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool __fastcall MapGimmickReleaseMaster__IsOpen(
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
  __int64 methodPtr_low; // x10
  bool v18; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v20; // x19
  bool v21; // w19
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B4D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool___ctor___76025448);
    sub_1B885B0(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1B885B0(&MapGimmickReleaseEntity_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A5B4D0 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !mapGimmickEntity )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_39;
  v9 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v9 >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v9 == v10 )
        sub_1B88814(MapGmkOffIdList, v8);
      if ( *((_DWORD *)MapGmkOffIdList + v10 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( v9 != ++v10 );
  }
  v11 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v11,
    (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v12 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v11)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v11,
          0,
          v12 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_39:
    sub_1B8880C(MapGmkOffIdList, v8);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                          v15,
                          (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_39;
      v16 = (int32_t *)MapGmkOffIdList;
      methodPtr_low = LOBYTE(MapGimmickReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 304LL) < (unsigned int)methodPtr_low
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * methodPtr_low - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_39;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v11,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v11,
              v16[9],
              (const MethodInfo_315F02C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_39;
        v18 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v16[4], v16[6], v16[7], v16[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v11,
          v16[9],
          v18,
          (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( v14 != ++v15 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v11,
             (const MethodInfo_315EEDC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v20 = (System_Collections_Generic_List_bool__o *)sub_1B887FC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_55263428(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_34B40C4 *)Method_System_Collections_Generic_List_bool___ctor___76025448);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v23,
    v20,
    (const MethodInfo_34B52FC *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v24,
            (const MethodInfo_326FF60 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v21 )
      break;
    if ( LOBYTE(v24.fields._current) )
    {
      v22 = 13;
      goto LABEL_37;
    }
  }
  v22 = 14;
LABEL_37:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v24,
    (const MethodInfo_326FF5C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v21 && v22 == 13;
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

  if ( (byte_4A5B4CE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
    byte_4A5B4CE = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}