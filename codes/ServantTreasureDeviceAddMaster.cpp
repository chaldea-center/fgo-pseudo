void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B32FD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
    byte_42B32FD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    362,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_42B32FE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    byte_42B32FE = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)listCache,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
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

  if ( (byte_42B3301 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42B3301 = 1;
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
          v17 = sub_B52A88(EntityListFromSvtId);
          sub_B52A28(v17, 0LL);
        }
        v14 = v12->m_Items[i];
        if ( !v14 )
          sub_B52A5C(EntityListFromSvtId, v10);
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
                                                                          (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_42B32FB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
    byte_42B32FB = 1;
  }
  PK = ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B3300 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
    byte_42B3300 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_42B32FC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
    byte_42B32FC = 1;
  }
  PK = ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool __fastcall ServantTreasureDeviceAddMaster__preProcess(
        ServantTreasureDeviceAddMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  int32_t *v17; // x0
  __int64 v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x22
  __int64 v20; // x9
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  ServantTreasureDeviceAddMaster_o *v23; // x24
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  ServantTreasureDeviceAddMaster___c_c *v29; // x0
  int32_t key; // w22
  Il2CppObject *v31; // x21
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v34; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v42; // x23
  WarBoardAIRoute_RouteData_o *v43; // x0
  __int64 v44; // x1
  int v45; // w21
  ServantTreasureDeviceAddMaster_o *v47; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+18h] [xbp-B8h] BYREF
  int v49[2]; // [xsp+40h] [xbp-90h]
  int v50; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+50h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42B32FF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_ServantTreasureDeviceAddEntity___ctor__);
    sub_B52984(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_B52984(&ServantTreasureDeviceAddEntity_TypeInfo);
    sub_B52984(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__);
    sub_B52984(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_42B32FF = 1;
  }
  value = 0LL;
  memset(&v51, 0, sizeof(v51));
  v50 = 0;
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    listCache,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v47 = this;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v6);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_17:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v12);
    }
    v17 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                       Enumerator,
                       *(_QWORD *)(v16 + 8));
    v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
    if ( !v17 )
      sub_B52A5C(0LL, v18);
    v20 = *(&ServantTreasureDeviceAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v20
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v20 - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_52:
      sub_B52A5C(v29, v28);
    }
    if ( !v4 )
      sub_B52A5C(v17, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4,
            v17[4],
            &value,
            (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v22,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (WarBoardEvalValueSquare_CalcEval_o *)v22;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4,
        v19->fields.missionTargetId,
        (WarBoardAIRoute_RouteData_o *)v22,
        (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    if ( !value )
      sub_B52A5C(0LL, v21);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v19,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
  }
  v23 = v47;
  v49[0] = 105;
  v50 = 1;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_31:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v12);
  }
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                                                  Enumerator,
                                                                                                  *(_QWORD *)(v27 + 8));
  v50 = 0;
  if ( !v4 )
LABEL_57:
    sub_B52A5C(listCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v48,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v51 = v48;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v51,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__) )
  {
    v29 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v51.fields.current.fields.key;
    v31 = v51.fields.current.fields.value;
    if ( (BYTE3(ServantTreasureDeviceAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v29 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v34,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_ServantTreasureDeviceAddEntity___ctor__);
      v35 = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      v35->__9__5_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__5_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v35->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v23 = v47;
    }
    if ( !v31 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v31,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v42 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v23->fields.listCache;
    v43 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v42 )
      sub_B52A5C(v43, v44);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v42,
      key,
      v43,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
  }
  v49[0] = 228;
  v45 = ++v50;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v51,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  if ( v45 && v49[v45 - 1] == 228 )
    v50 = v45 - 1;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v4,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD394 & 1) == 0 )
  {
    sub_B52984(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_42AD394 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}