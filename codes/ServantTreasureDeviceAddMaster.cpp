void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EBF1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo, v8, v9, v10);
    byte_42EBF1F = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    362,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_42EBF20 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBF20 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B5D69C(0LL, v5);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)listCache,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
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

  if ( (byte_42EBF23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, svtId, limitCount, *(_QWORD *)&treasureDeviceId);
    byte_42EBF23 = 1;
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
          v17 = sub_B5D6C8(EntityListFromSvtId);
          sub_B5D668(v17, 0LL);
        }
        v14 = v12->m_Items[i];
        if ( !v14 )
          sub_B5D69C(EntityListFromSvtId, v10);
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
                                                                          (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_42EBF1D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42EBF1D = 1;
  }
  PK = ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBF22 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__,
      svtId,
      (_DWORD)method,
      v3);
    byte_42EBF22 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_42EBF1E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42EBF1E = 1;
  }
  PK = ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool __fastcall ServantTreasureDeviceAddMaster__preProcess(
        ServantTreasureDeviceAddMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v87; // x20
  __int64 v88; // x1
  __int64 v89; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v95; // x3
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  int32_t *v100; // x0
  __int64 v101; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v102; // x22
  __int64 v103; // x9
  __int64 v104; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // x23
  ServantTreasureDeviceAddMaster_o *v106; // x24
  System_Collections_Generic_IEnumerator_T__c *v107; // x8
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  __int64 v111; // x1
  ServantTreasureDeviceAddMaster___c_c *v112; // x0
  int32_t key; // w22
  Il2CppObject *v114; // x21
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v117; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v125; // x23
  WarBoardAIRoute_RouteData_o *v126; // x0
  __int64 v127; // x1
  int v128; // w21
  ServantTreasureDeviceAddMaster_o *v130; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v131; // [xsp+18h] [xbp-B8h] BYREF
  int v132[2]; // [xsp+40h] [xbp-90h]
  int v133; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v134; // [xsp+50h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42EBF21 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Comparison_ServantTreasureDeviceAddEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__,
      v53,
      v54,
      v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&ServantTreasureDeviceAddEntity_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__, v80, v81, v82);
    sub_B5D5C4(&ServantTreasureDeviceAddMaster___c_TypeInfo, v83, v84, v85);
    byte_42EBF21 = 1;
  }
  value = 0LL;
  memset(&v134, 0, sizeof(v134));
  v133 = 0;
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    listCache,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v87 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v87,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v130 = this;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v88);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        p_offset += 4;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v89);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v96 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_17:
      v99 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v95);
    }
    v100 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
                        Enumerator,
                        *(_QWORD *)(v99 + 8));
    v102 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    v103 = *(&ServantTreasureDeviceAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v103
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v103 - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_B5D990(v100);
LABEL_52:
      sub_B5D69C(v112, v111);
    }
    if ( !v87 )
      sub_B5D69C(v100, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v87,
            v100[4],
            &value,
            (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v105,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (WarBoardEvalValueSquare_CalcEval_o *)v105;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v87,
        v102->fields.missionTargetId,
        (WarBoardAIRoute_RouteData_o *)v105,
        (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    if ( !value )
      sub_B5D69C(0LL, v104);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v102,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
  }
  v106 = v130;
  v132[0] = 105;
  v133 = 1;
  v107 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v108 = 0LL;
    v109 = &v107->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v109 - 1) != System_IDisposable_TypeInfo )
    {
      ++v108;
      v109 += 4;
      if ( v108 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v110 = (__int64)&v107->vtable[*v109].method;
  }
  else
  {
LABEL_31:
    v110 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v95);
  }
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v110)(
                                                                                                  Enumerator,
                                                                                                  *(_QWORD *)(v110 + 8));
  v133 = 0;
  if ( !v87 )
LABEL_57:
    sub_B5D69C(listCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v131,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v87,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v134 = v131;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v134,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__) )
  {
    v112 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v134.fields.current.fields.key;
    v114 = v134.fields.current.fields.value;
    if ( (BYTE3(ServantTreasureDeviceAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v112 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    static_fields = v112->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v112);
        static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      }
      v117 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v117,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantTreasureDeviceAddEntity___ctor__);
      v118 = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      v118->__9__5_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v118->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
      v106 = v130;
    }
    if ( !v114 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v114,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v125 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v106->fields.listCache;
    v126 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v114,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v125 )
      sub_B5D69C(v126, v127);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v125,
      key,
      v126,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v114,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
  }
  v132[0] = 228;
  v128 = ++v133;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v134,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  if ( v128 && v132[v128 - 1] == 228 )
    v133 = v128 - 1;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v87,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DAC & 1) == 0 )
  {
    sub_B5D5C4(&ServantTreasureDeviceAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DAC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}