void __fastcall SvtMaterialTdMaster___ctor(SvtMaterialTdMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43882D4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SvtMaterialTdMaster__SvtMaterialTdEntity__string___ctor__);
    byte_43882D4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    389,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SvtMaterialTdMaster__SvtMaterialTdEntity__string___ctor__);
}


SvtMaterialTdEntity_array *__fastcall SvtMaterialTdMaster__GetEntityList(
        SvtMaterialTdMaster_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  SvtMaterialTdEntity_c *v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_43882D5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtMaterialTdEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtMaterialTdEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtMaterialTdEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SvtMaterialTdEntity__TypeInfo);
    sub_B775C4(&SvtMaterialTdEntity_TypeInfo);
    byte_43882D5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtMaterialTdEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtMaterialTdEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      v19 = SvtMaterialTdEntity_TypeInfo;
      v20 = *(&SvtMaterialTdEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (SvtMaterialTdEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != SvtMaterialTdEntity_TypeInfo )
      {
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v18);
LABEL_33:
        sub_B7769C(v18, v19);
      }
      if ( v18->fields.missionTargetId == baseSvtId )
      {
        if ( !v5 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SvtMaterialTdEntity__Add__);
      }
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v24 + 8));
  if ( !v5 )
LABEL_34:
    sub_B7769C(list, v6);
  return (SvtMaterialTdEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_SvtMaterialTdEntity__ToArray__);
}