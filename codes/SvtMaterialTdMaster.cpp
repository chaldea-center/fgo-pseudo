void __fastcall SvtMaterialTdMaster___ctor(SvtMaterialTdMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B1FC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SvtMaterialTdMaster__SvtMaterialTdEntity__string___ctor__, method);
    byte_418B1FC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    388,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SvtMaterialTdMaster__SvtMaterialTdEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtMaterialTdEntity_array *__fastcall SvtMaterialTdMaster__GetEntityList(
        SvtMaterialTdMaster_o *this,
        int32_t baseSvtId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  SvtMaterialTdEntity_c *v29; // x1
  __int64 v30; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_418B1FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&baseSvtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMaterialTdEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMaterialTdEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMaterialTdEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_SvtMaterialTdEntity__TypeInfo, v11);
    sub_B2C35C(&SvtMaterialTdEntity_TypeInfo, v12);
    byte_418B1FD = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtMaterialTdEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtMaterialTdEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    if ( v28 )
    {
      v29 = SvtMaterialTdEntity_TypeInfo;
      v30 = *(&SvtMaterialTdEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (SvtMaterialTdEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != SvtMaterialTdEntity_TypeInfo )
      {
        sub_B2C728(v28);
LABEL_33:
        sub_B2C434(v28, v29);
      }
      if ( v28->fields.missionTargetId == baseSvtId )
      {
        if ( !v13 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtMaterialTdEntity__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v34 + 8));
  if ( !v13 )
LABEL_34:
    sub_B2C434(list, v14);
  return (SvtMaterialTdEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SvtMaterialTdEntity__ToArray__);
}