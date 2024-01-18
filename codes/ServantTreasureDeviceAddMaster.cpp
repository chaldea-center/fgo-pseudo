void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418B0C7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo, v4);
    byte_418B0C7 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    361,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_418B0C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, method);
    byte_418B0C8 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B2C434(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)listCache,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *__fastcall ServantTreasureDeviceAddMaster__GetEnableEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  const MethodInfo *v10; // x1
  int max_length; // w8
  ServantTreasureDeviceAddEntity_array *v12; // x21
  __int64 i; // x23
  ServantTreasureDeviceAddEntity_o *v14; // x22
  int32_t condLimitCount; // w8
  __int64 v17; // x0

  if ( (byte_418B0CB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_418B0CB = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v12 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0LL; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
        {
          v17 = sub_B2C460(EntityListFromSvtId);
          sub_B2C400(v17, 0LL);
        }
        v14 = v12->m_Items[i];
        if ( !v14 )
          sub_B2C434(EntityListFromSvtId, v10);
        condLimitCount = v14->fields.condLimitCount;
        if ( treasureDeviceId < 1 )
        {
          if ( condLimitCount <= limitCount )
          {
            EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)ServantTreasureDeviceAddEntity__IsEnable(
                                                                            v12->m_Items[i],
                                                                            v10);
            if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
              return v14;
          }
        }
        else if ( condLimitCount <= limitCount )
        {
          EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.treasureDeviceIds,
                                                                          treasureDeviceId,
                                                                          (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
            return v14;
        }
        max_length = v12->max_length;
      }
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *__fastcall ServantTreasureDeviceAddMaster__GetEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418B0C5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418B0C5 = 1;
  }
  PK = ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B0CA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_418B0CA = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
  return (ServantTreasureDeviceAddEntity_array *)value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceAddMaster__TryGetEntity(
        ServantTreasureDeviceAddMaster_o *this,
        ServantTreasureDeviceAddEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418B0C6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__,
      entity);
    byte_418B0C6 = 1;
  }
  PK = ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool __fastcall ServantTreasureDeviceAddMaster__preProcess(
        ServantTreasureDeviceAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  int32_t *v44; // x0
  __int64 v45; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x22
  __int64 v47; // x9
  __int64 v48; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  ServantTreasureDeviceAddMaster_o *v50; // x24
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x1
  ServantTreasureDeviceAddMaster___c_c *v56; // x0
  int32_t key; // w22
  Il2CppObject *v58; // x21
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v61; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v69; // x23
  WarBoardAIRoute_RouteData_o *v70; // x0
  __int64 v71; // x1
  int v72; // w21
  ServantTreasureDeviceAddMaster_o *v74; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v75; // [xsp+18h] [xbp-B8h] BYREF
  int v76[2]; // [xsp+40h] [xbp-90h]
  int v77; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+50h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_418B0C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Comparison_ServantTreasureDeviceAddEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__,
      v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__,
      v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__,
      v19);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__,
      v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo, v26);
    sub_B2C35C(&ServantTreasureDeviceAddEntity_TypeInfo, v27);
    sub_B2C35C(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__, v28);
    sub_B2C35C(&ServantTreasureDeviceAddMaster___c_TypeInfo, v29);
    byte_418B0C9 = 1;
  }
  value = 0LL;
  memset(&v78, 0, sizeof(v78));
  v77 = 0;
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    listCache,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v74 = this;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_17:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                       Enumerator,
                       *(_QWORD *)(v43 + 8));
    v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)v44;
    if ( !v44 )
      sub_B2C434(0LL, v45);
    v47 = *(&ServantTreasureDeviceAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v47
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v47 - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_B2C728(v44);
LABEL_52:
      sub_B2C434(v56, v55);
    }
    if ( !v31 )
      sub_B2C434(v44, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v31,
            v44[4],
            &value,
            (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v49,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (WarBoardEvalValueSquare_CalcEval_o *)v49;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v31,
        v46->fields.missionTargetId,
        (WarBoardAIRoute_RouteData_o *)v49,
        (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    if ( !value )
      sub_B2C434(0LL, v48);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v46,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
  }
  v50 = v74;
  v76[0] = 105;
  v77 = 1;
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_31:
    v54 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                                                                  Enumerator,
                                                                                                  *(_QWORD *)(v54 + 8));
  v77 = 0;
  if ( !v31 )
LABEL_57:
    sub_B2C434(listCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v75,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v31,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v78 = v75;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v78,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__) )
  {
    v56 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v78.fields.current.fields.key;
    v58 = v78.fields.current.fields.value;
    if ( (BYTE3(ServantTreasureDeviceAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v56 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      }
      v61 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v61,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantTreasureDeviceAddEntity___ctor__);
      v62 = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      v62->__9__5_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v62->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      v50 = v74;
    }
    if ( !v58 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v58,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v69 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v50->fields.listCache;
    v70 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v58,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v69 )
      sub_B2C434(v70, v71);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v69,
      key,
      v70,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v58,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
  }
  v76[0] = 228;
  v72 = ++v77;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v78,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  if ( v72 && v76[v72 - 1] == 228 )
    v77 = v72 - 1;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v31,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185431 & 1) == 0 )
  {
    sub_B2C35C(&ServantTreasureDeviceAddMaster___c_TypeInfo, v1);
    byte_4185431 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantTreasureDeviceAddMaster___c___ctor(
        ServantTreasureDeviceAddMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantTreasureDeviceAddMaster___c___preProcess_b__5_0(
        ServantTreasureDeviceAddMaster___c_o *this,
        ServantTreasureDeviceAddEntity_o *a,
        ServantTreasureDeviceAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}