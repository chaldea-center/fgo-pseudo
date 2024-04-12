void __fastcall GachaBonusSelectLineupMaster___ctor(GachaBonusSelectLineupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B04 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
    byte_42B3B04 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    189,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectLineupEntity_o *__fastcall GachaBonusSelectLineupMaster__GetEntity(
        GachaBonusSelectLineupMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3B02 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
    byte_42B3B02 = 1;
  }
  PK = GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaBonusSelectLineupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectLineupMaster__TryGetEntity(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B3B03 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
    byte_42B3B03 = 1;
  }
  PK = GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectLineupMaster__TryGetEntityList(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_array **gachaBonusSelectLineupEntities,
        int32_t lineupId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x11
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  GachaBonusSelectLineupEntity_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42B3B05 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&GachaBonusSelectLineupEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
    byte_42B3B05 = 1;
  }
  *gachaBonusSelectLineupEntities = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)gachaBonusSelectLineupEntities,
    0LL,
    *(System_String_array ***)&lineupId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26
      || (v28 = *(&GachaBonusSelectLineupEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (GachaBonusSelectLineupEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != GachaBonusSelectLineupEntity_TypeInfo )
    {
      sub_B52A5C(v26, v27);
    }
    if ( v26->fields.missionTargetId == lineupId )
    {
      if ( !v11 )
        sub_B52A5C(v26, v27);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v26,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_28:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v32 + 8));
  if ( !v11
    || (v33 = (GachaBonusSelectLineupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__),
        *gachaBonusSelectLineupEntities = v33,
        sub_B52920(
          (BattleServantConfConponent_o *)gachaBonusSelectLineupEntities,
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        !*gachaBonusSelectLineupEntities) )
  {
LABEL_35:
    sub_B52A5C(list, v12);
  }
  return (*gachaBonusSelectLineupEntities)->max_length != 0;
}