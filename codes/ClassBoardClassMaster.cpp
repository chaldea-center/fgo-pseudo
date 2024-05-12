void __fastcall ClassBoardClassMaster___ctor(ClassBoardClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C405 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
    byte_438C405 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    424,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardClassMaster__GetClassBoardBaseId(
        ClassBoardClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  _DWORD *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  int32_t v19; // w20
  int v20; // w8
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_438C403 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardClassEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438C403 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, *(_QWORD *)&classId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
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
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_34;
    v18 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v18
      || *(ClassBoardClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v18 - 8) != ClassBoardClassEntity_TypeInfo )
    {
      v16 = (_DWORD *)sub_B77990(v16);
LABEL_34:
      sub_B7769C(v16, v17);
    }
    if ( v16[5] == classId )
    {
      v19 = v16[4];
      v20 = 66;
      goto LABEL_24;
    }
  }
  v20 = 64;
  v19 = 0;
LABEL_24:
  v26 = v20;
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
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 64 )
    return 0;
  return v19;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardClassEntity_o *__fastcall ClassBoardClassMaster__GetEntity(
        ClassBoardClassMaster_o *this,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C406 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
    byte_438C406 = 1;
  }
  PK = ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classId);
  return (ClassBoardClassEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
}


System_Int32_array *__fastcall ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
        ClassBoardClassMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
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
  ClassBoardClassEntity_o *v18; // x0
  __int64 v19; // x1
  ClassBoardClassEntity_o *v20; // x22
  __int64 v21; // x9
  _BOOL8 IsOpen; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_438C404 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardClassEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438C404 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
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
    v18 = (ClassBoardClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_34;
    v21 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (ClassBoardClassEntity_c *)v18->klass->_2.typeHierarchy[v21 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v18 = (ClassBoardClassEntity_o *)sub_B77990(v18);
LABEL_34:
      sub_B7769C(v18, v19);
    }
    if ( v18->fields.classBoardBaseId == baseId )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(v18, (const MethodInfo *)ClassBoardClassEntity_TypeInfo);
      if ( IsOpen )
      {
        if ( !v5 )
          sub_B7769C(IsOpen, v23);
        System_Collections_Generic_List_int___Add(
          v5,
          v20->fields.classId,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
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
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v27 + 8));
  if ( !v5 )
LABEL_36:
    sub_B7769C(list, v6);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardClassMaster__TryGetEntity(
        ClassBoardClassMaster_o *this,
        ClassBoardClassEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C407 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
    byte_438C407 = 1;
  }
  PK = ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardClassMaster__TryGetEntityList(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entitys,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_438C401 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardClassEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
    byte_438C401 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v7;
  sub_B77560((BattleServantConfConponent_o *)entitys, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
      v25 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_33;
    v28 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (ClassBoardClassEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v26);
LABEL_33:
      sub_B7769C(v26, v27);
    }
    if ( v26->fields.missionTargetId == id )
    {
      if ( !*entitys )
        sub_B7769C(0LL, ClassBoardClassEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entitys,
        v26,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
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
    v32 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v32 + 8));
  if ( !*entitys )
LABEL_35:
    sub_B7769C(list, v14);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardClassMaster__TryGetEntityListFromClassId(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entityList,
        int32_t classId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_438C402 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardClassEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
    byte_438C402 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entityList = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v7;
  sub_B77560((BattleServantConfConponent_o *)entityList, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
      v25 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_33;
    v28 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (ClassBoardClassEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v26);
LABEL_33:
      sub_B7769C(v26, v27);
    }
    if ( v26->fields.missionConditionDetailId == classId )
    {
      if ( !*entityList )
        sub_B7769C(0LL, ClassBoardClassEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
        v26,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
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
    v32 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v32 + 8));
  if ( !*entityList )
LABEL_35:
    sub_B7769C(list, v14);
  return (*entityList)->fields._size > 0;
}