void __fastcall GachaBonusSelectLineupMaster___ctor(GachaBonusSelectLineupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438F141 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
    byte_438F141 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    189,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
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

  if ( (byte_438F13F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
    byte_438F13F = 1;
  }
  PK = GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaBonusSelectLineupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_21FBCE4 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
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

  if ( (byte_438F140 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
    byte_438F140 = 1;
  }
  PK = GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x11
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  GachaBonusSelectLineupEntity_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_438F142 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&GachaBonusSelectLineupEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
    byte_438F142 = 1;
  }
  *gachaBonusSelectLineupEntities = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)gachaBonusSelectLineupEntities,
    0LL,
    *(System_String_array ***)&lineupId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v23 + 8));
    if ( !v24
      || (v26 = *(&GachaBonusSelectLineupEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26)
      || (GachaBonusSelectLineupEntity_c *)v24->klass->_2.typeHierarchy[v26 - 1] != GachaBonusSelectLineupEntity_TypeInfo )
    {
      sub_B7769C(v24, v25);
    }
    if ( v24->fields.missionTargetId == lineupId )
    {
      if ( !v11 )
        sub_B7769C(v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v24,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_28:
    v30 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v30 + 8));
  if ( !v11
    || (v31 = (GachaBonusSelectLineupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__),
        *gachaBonusSelectLineupEntities = v31,
        sub_B77560(
          (BattleServantConfConponent_o *)gachaBonusSelectLineupEntities,
          (System_Int32_array **)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        !*gachaBonusSelectLineupEntities) )
  {
LABEL_35:
    sub_B7769C(list, v12);
  }
  return (*gachaBonusSelectLineupEntities)->max_length != 0;
}