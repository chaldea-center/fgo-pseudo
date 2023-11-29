void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB5ED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__, method);
    byte_40FB5ED = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    247,
    (const MethodInfo_266F73C *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB5EB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_40FB5EB = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266F7D8 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
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
  WebViewManager_o *v24; // x0
  System_Int32_array *MapGmkOffIdList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int max_length; // w8
  unsigned int v31; // w9
  System_Collections_Generic_Dictionary_int__bool__o *v32; // x21
  QuestTree_o *v33; // x0
  bool v34; // w22
  QuestTree_o *v35; // x0
  bool v36; // w0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v39; // w22
  int32_t v40; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v41; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  int32_t *v43; // x24
  __int64 v44; // x10
  QuestTree_o *v45; // x0
  bool v46; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_bool__o *v52; // x19
  char v53; // w19
  int v54; // w20
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FB5EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapGimmickEntity);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor___66727368, v16);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_B16FFC(&MapGimmickReleaseEntity_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v21);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v22);
    byte_40FB5EE = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( !mapGimmickEntity )
    return 0;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !v24 )
    goto LABEL_44;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)v24, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  max_length = MapGmkOffIdList->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    do
    {
      if ( v31 >= max_length )
      {
        sub_B17100(MapGmkOffIdList, v26, v27);
        sub_B170A0();
      }
      if ( MapGmkOffIdList->m_Items[v31 + 1] == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( (int)++v31 < max_length );
  }
  v32 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v26,
                                                                v27,
                                                                v28,
                                                                v29);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v32,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v33 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v33
    || (v34 = QuestTree__CheckMapGimmickCond(
                v33,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (v35 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (v36 = QuestTree__CheckMapGimmickCond(
                v35,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType2,
                mapGimmickEntity->fields.dispTargetId2,
                mapGimmickEntity->fields.dispTargetValue2,
                0LL),
        !v32)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v32,
          0,
          v34 && v36,
          (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_44:
    sub_B170D4();
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v39 = Count;
    v40 = 0;
    do
    {
      v41 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v41 )
        goto LABEL_44;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v41,
               v40,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_44;
      v43 = (int32_t *)Item;
      v44 = *(&MapGimmickReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (MapGimmickReleaseEntity_c *)Item->klass->_2.typeHierarchy[v44 - 1] != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      if ( LODWORD(Item[1].klass) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v32,
               HIDWORD(Item[2].klass),
               (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v32,
              v43[9],
              (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v45 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v45 )
          goto LABEL_44;
        v46 = QuestTree__CheckMapGimmickCond(v45, v43[4], v43[6], v43[7], v43[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v32,
          v43[9],
          v46,
          (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( ++v40 < v39 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v32,
             (const MethodInfo_2DD5424 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v52 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v48,
                                                     v49,
                                                     v50,
                                                     v51);
  System_Collections_Generic_List_bool____ctor_48951152(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2EAEF70 *)Method_System_Collections_Generic_List_bool___ctor___66727368);
  if ( !v52 )
    goto LABEL_44;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v56,
    v52,
    (const MethodInfo_2EB0948 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v57,
            (const MethodInfo_206F730 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v57.fields.current) )
    {
      v53 = 1;
      v54 = 32;
      goto LABEL_43;
    }
  }
  v53 = 0;
  v54 = 30;
LABEL_43:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v57,
    (const MethodInfo_206F72C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v54 == 32) & v53;
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

  if ( (byte_40FB5EC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__, entity);
    byte_40FB5EC = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}