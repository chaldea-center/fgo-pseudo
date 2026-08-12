void MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970D7B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
    byte_5970D7B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    257,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970D79 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
    byte_5970D79 = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3F157EC *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v8; // x1
  int v9; // w8
  int v10; // w11
  System_Collections_Generic_Dictionary_int__bool__o *v11; // x21
  bool v12; // w22
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t *v16; // x24
  bool v17; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v19; // x19
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5970D7C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool___ctor___91640976);
    sub_2213A60(&System_Collections_Generic_List_bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5970D7C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( mapGimmickEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
LABEL_7:
      LOBYTE(mapGimmickEntity) = 0;
      return (unsigned __int8)mapGimmickEntity & 1;
    }
    MapGmkOffIdList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !MapGmkOffIdList )
      goto LABEL_34;
    MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0);
    if ( !MapGmkOffIdList )
      goto LABEL_34;
    v9 = *((_DWORD *)MapGmkOffIdList + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v9 == v10 )
          sub_2213CE4(MapGmkOffIdList);
        if ( *((_DWORD *)MapGmkOffIdList + v10 + 8) == mapGimmickEntity->fields.id )
          goto LABEL_7;
      }
      while ( (v9 & ~(v9 >> 31)) != ++v10 );
    }
    v11 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v11,
      (const MethodInfo_3F88990 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !MapGmkOffIdList
      || (v12 = QuestTree__CheckMapGimmickCond(
                  (QuestTree_o *)MapGmkOffIdList,
                  mapGimmickEntity->fields.id,
                  mapGimmickEntity->fields.dispCondType,
                  mapGimmickEntity->fields.dispTargetId,
                  mapGimmickEntity->fields.dispTargetValue,
                  0),
          (MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0)
      || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                      (QuestTree_o *)MapGmkOffIdList,
                                      mapGimmickEntity->fields.id,
                                      mapGimmickEntity->fields.dispCondType2,
                                      mapGimmickEntity->fields.dispTargetId2,
                                      mapGimmickEntity->fields.dispTargetValue2,
                                      0),
          !v11)
      || (System_Collections_Generic_Dictionary_int__bool___set_Item(
            v11,
            0,
            v12 & (unsigned __int8)MapGmkOffIdList & 1,
            (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
          (MapGmkOffIdList = this->fields.list) == 0) )
    {
LABEL_34:
      sub_2213CDC(MapGmkOffIdList, v8);
    }
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Count__);
    if ( Count >= 1 )
    {
      v14 = Count;
      v15 = 0;
      do
      {
        MapGmkOffIdList = this->fields.list;
        if ( !MapGmkOffIdList )
          goto LABEL_34;
        MapGmkOffIdList = System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)MapGmkOffIdList,
                            v15,
                            (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MapGimmickReleaseEntity__get_Item__);
        if ( !MapGmkOffIdList )
          goto LABEL_34;
        v16 = (int32_t *)MapGmkOffIdList;
        if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
          && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                 v11,
                 *((_DWORD *)MapGmkOffIdList + 9),
                 (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
           || System_Collections_Generic_Dictionary_int__bool___get_Item(
                v11,
                v16[9],
                (const MethodInfo_3F892A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
        {
          MapGmkOffIdList = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !MapGmkOffIdList )
            goto LABEL_34;
          v17 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v16[4], v16[6], v16[7], v16[8], 0);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v11,
            v16[9],
            v17,
            (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      while ( v14 != ++v15 );
    }
    Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
               v11,
               (const MethodInfo_3F89144 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    v19 = (System_Collections_Generic_List_bool__o *)sub_2213CCC(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor_71372868(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_4411044 *)Method_System_Collections_Generic_List_bool___ctor___91640976);
    if ( !v19 )
      goto LABEL_34;
    System_Collections_Generic_List_bool___GetEnumerator(
      &v21,
      v19,
      (const MethodInfo_4412278 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
    do
      LOBYTE(mapGimmickEntity) = System_Collections_Generic_List_Enumerator_bool___MoveNext(
                                   &v21,
                                   (const MethodInfo_40EDFBC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    while ( ((unsigned __int8)mapGimmickEntity & (LOBYTE(v21.fields._current) == 0)) != 0 );
    System_Collections_Generic_List_Enumerator_bool___Dispose(
      &v21,
      (const MethodInfo_40EDFB8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  }
  return (unsigned __int8)mapGimmickEntity & 1;
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

  if ( (byte_5970D7A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
    byte_5970D7A = 1;
  }
  PK = (Il2CppObject *)MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}