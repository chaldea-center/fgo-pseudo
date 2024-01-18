void __fastcall UpdateProfileDialogInfoMaster___ctor(UpdateProfileDialogInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188A7E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__,
      method);
    byte_4188A7E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    387,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UpdateProfileDialogInfoEntity_o *__fastcall UpdateProfileDialogInfoMaster__GetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188A7C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4188A7C = 1;
  }
  PK = UpdateProfileDialogInfoEntity__CreatePK(svtId, *(const MethodInfo **)&svtId);
  return (UpdateProfileDialogInfoEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_24E4520 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
}


UpdateProfileDialogInfoEntity_array *__fastcall UpdateProfileDialogInfoMaster__GetUpdateProfileList(
        UpdateProfileDialogInfoMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
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
  UpdateProfileDialogInfoEntity_c *v27; // x1
  __int64 v28; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_4188A7F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo, v9);
    sub_B2C35C(&UpdateProfileDialogInfoEntity_TypeInfo, v10);
    byte_4188A7F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
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
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
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
      v25 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( v26 )
    {
      v27 = UpdateProfileDialogInfoEntity_TypeInfo;
      v28 = *(&UpdateProfileDialogInfoEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (UpdateProfileDialogInfoEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != UpdateProfileDialogInfoEntity_TypeInfo )
      {
        v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v26);
LABEL_32:
        sub_B2C434(v26, v27);
      }
      if ( !v11 )
        goto LABEL_32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v26,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__);
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
        goto LABEL_27;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_27:
    v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v32 + 8));
  if ( !v11 )
LABEL_33:
    sub_B2C434(list, v12);
  return (UpdateProfileDialogInfoEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
}


bool __fastcall UpdateProfileDialogInfoMaster__TryGetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        UpdateProfileDialogInfoEntity_o **entity,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188A7D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__,
      entity);
    byte_4188A7D = 1;
  }
  PK = UpdateProfileDialogInfoEntity__CreatePK(svtId, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
}