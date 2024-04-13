void __fastcall MapGimmickReleaseMaster___ctor(MapGimmickReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB1E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBB1E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    248,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickReleaseEntity_o *__fastcall MapGimmickReleaseMaster__GetEntity(
        MapGimmickReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBB1C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__,
      mapGimmickId,
      priority,
      method);
    byte_42EBB1C = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__GetEntity__);
}


bool __fastcall MapGimmickReleaseMaster__IsOpen(
        MapGimmickReleaseMaster_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  UnityEngine_Object_o *Instance; // x21
  void *MapGmkOffIdList; // x0
  __int64 v62; // x1
  int v63; // w8
  unsigned int v64; // w9
  System_Collections_Generic_Dictionary_int__bool__o *v65; // x21
  bool v66; // w22
  int32_t Count; // w0
  int32_t v68; // w22
  int32_t v69; // w23
  int32_t *v70; // x24
  __int64 v71; // x10
  bool v72; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v74; // x19
  char v75; // w19
  int v76; // w20
  __int64 v78; // x0
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EBB1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)mapGimmickEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool___ctor___68730336, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&MapGimmickReleaseEntity_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v57, v58, v59);
    byte_42EBB1F = 1;
  }
  memset(&v80, 0, sizeof(v80));
  if ( !mapGimmickEntity )
    return 0;
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  MapGmkOffIdList = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  MapGmkOffIdList = QuestAfterAction__getMapGmkOffIdList((QuestAfterAction_o *)MapGmkOffIdList, 0LL);
  if ( !MapGmkOffIdList )
    goto LABEL_44;
  v63 = *((_DWORD *)MapGmkOffIdList + 6);
  if ( v63 >= 1 )
  {
    v64 = 0;
    do
    {
      if ( v64 >= v63 )
      {
        v78 = sub_B5D6C8(MapGmkOffIdList);
        sub_B5D668(v78, 0LL);
      }
      if ( *((_DWORD *)MapGmkOffIdList + (int)v64 + 8) == mapGimmickEntity->fields.id )
        return 0;
    }
    while ( (int)++v64 < v63 );
  }
  v65 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v65,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !MapGmkOffIdList
    || (v66 = QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)MapGmkOffIdList,
                mapGimmickEntity->fields.id,
                mapGimmickEntity->fields.dispCondType,
                mapGimmickEntity->fields.dispTargetId,
                mapGimmickEntity->fields.dispTargetValue,
                0LL),
        (MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL)
    || (MapGmkOffIdList = (void *)QuestTree__CheckMapGimmickCond(
                                    (QuestTree_o *)MapGmkOffIdList,
                                    mapGimmickEntity->fields.id,
                                    mapGimmickEntity->fields.dispCondType2,
                                    mapGimmickEntity->fields.dispTargetId2,
                                    mapGimmickEntity->fields.dispTargetValue2,
                                    0LL),
        !v65)
    || (System_Collections_Generic_Dictionary_int__bool___set_Item(
          v65,
          0,
          v66 & (unsigned __int8)MapGmkOffIdList & 1,
          (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__),
        (MapGmkOffIdList = this->fields.list) == 0LL) )
  {
LABEL_44:
    sub_B5D69C(MapGmkOffIdList, v62);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v68 = Count;
    v69 = 0;
    do
    {
      MapGmkOffIdList = this->fields.list;
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      MapGmkOffIdList = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MapGmkOffIdList,
                          v69,
                          (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !MapGmkOffIdList )
        goto LABEL_44;
      v70 = (int32_t *)MapGmkOffIdList;
      v71 = *(&MapGimmickReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)MapGmkOffIdList + 300LL) < (unsigned int)v71
        || *(MapGimmickReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)MapGmkOffIdList + 200LL) + 8 * v71 - 8) != MapGimmickReleaseEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      if ( *((_DWORD *)MapGmkOffIdList + 4) == mapGimmickEntity->fields.id
        && (!System_Collections_Generic_Dictionary_int__bool___ContainsKey(
               v65,
               *((_DWORD *)MapGmkOffIdList + 9),
               (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
         || System_Collections_Generic_Dictionary_int__bool___get_Item(
              v65,
              v70[9],
              (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__)) )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MapGmkOffIdList = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapGmkOffIdList )
          goto LABEL_44;
        v72 = QuestTree__CheckMapGimmickCond((QuestTree_o *)MapGmkOffIdList, v70[4], v70[6], v70[7], v70[8], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v65,
          v70[9],
          v72,
          (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
    }
    while ( ++v69 < v68 );
  }
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v65,
             (const MethodInfo_2F032C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v74 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50415848(
    v74,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_30148E8 *)Method_System_Collections_Generic_List_bool___ctor___68730336);
  if ( !v74 )
    goto LABEL_44;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v79,
    v74,
    (const MethodInfo_30162C0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v80 = v79;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v80,
            (const MethodInfo_201A6AC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v80.fields.current) )
    {
      v75 = 1;
      v76 = 32;
      goto LABEL_43;
    }
  }
  v75 = 0;
  v76 = 30;
LABEL_43:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v80,
    (const MethodInfo_201A6A8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v76 == 32) & v75;
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

  if ( (byte_42EBB1D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      mapGimmickId,
      *(_QWORD *)&priority);
    byte_42EBB1D = 1;
  }
  PK = MapGimmickReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapGimmickReleaseMaster__MapGimmickReleaseEntity__string__TryGetEntity__);
}