void __fastcall GachaBonusSelectLineupMaster___ctor(GachaBonusSelectLineupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFD0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__,
      method);
    byte_418AFD0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    188,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
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

  if ( (byte_418AFCE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_418AFCE = 1;
  }
  PK = GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaBonusSelectLineupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
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

  if ( (byte_418AFCF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__,
      entity);
    byte_418AFCF = 1;
  }
  PK = GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x11
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  GachaBonusSelectLineupEntity_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_418AFD1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      gachaBonusSelectLineupEntities);
    sub_B2C35C(&GachaBonusSelectLineupEntity_TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo, v18);
    byte_418AFD1 = 1;
  }
  *gachaBonusSelectLineupEntities = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)gachaBonusSelectLineupEntities,
    0LL,
    *(System_String_array ***)&lineupId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v33 + 8));
    if ( !v34
      || (v36 = *(&GachaBonusSelectLineupEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36)
      || (GachaBonusSelectLineupEntity_c *)v34->klass->_2.typeHierarchy[v36 - 1] != GachaBonusSelectLineupEntity_TypeInfo )
    {
      sub_B2C434(v34, v35);
    }
    if ( v34->fields.missionTargetId == lineupId )
    {
      if ( !v19 )
        sub_B2C434(v34, v35);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        v34,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_28:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v40 + 8));
  if ( !v19
    || (v41 = (GachaBonusSelectLineupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__),
        *gachaBonusSelectLineupEntities = v41,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)gachaBonusSelectLineupEntities,
          (System_Int32_array **)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        !*gachaBonusSelectLineupEntities) )
  {
LABEL_35:
    sub_B2C434(list, v20);
  }
  return (*gachaBonusSelectLineupEntities)->max_length != 0;
}