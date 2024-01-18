void __fastcall ClassBoardClassMaster___ctor(ClassBoardClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187D3A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__, method);
    byte_4187D3A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    423,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardClassMaster__GetClassBoardBaseId(
        ClassBoardClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  int32_t v24; // w20
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-40h]

  if ( (byte_4187D38 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardClassEntity_TypeInfo, *(_QWORD *)&classId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4187D38 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&classId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_34;
    v23 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
      || *(ClassBoardClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != ClassBoardClassEntity_TypeInfo )
    {
      v21 = (_DWORD *)sub_B2C728(v21);
LABEL_34:
      sub_B2C434(v21, v22);
    }
    if ( v21[5] == classId )
    {
      v24 = v21[4];
      v25 = 66;
      goto LABEL_24;
    }
  }
  v25 = 64;
  v24 = 0;
LABEL_24:
  v31 = v25;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_28:
    v29 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 64 )
    return 0;
  return v24;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardClassEntity_o *__fastcall ClassBoardClassMaster__GetEntity(
        ClassBoardClassMaster_o *this,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4187D3B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_4187D3B = 1;
  }
  PK = ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classId);
  return (ClassBoardClassEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardClassMaster__IsInvalidClass(
        ClassBoardClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_4187D39 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardClassEntity_TypeInfo, *(_QWORD *)&classId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4187D39 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&classId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_34;
    v23 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
      || *(ClassBoardClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != ClassBoardClassEntity_TypeInfo )
    {
      v21 = (_DWORD *)sub_B2C728(v21);
LABEL_34:
      sub_B2C434(v21, v22);
    }
    if ( v21[5] == classId )
    {
      v30 = 70;
      v24 = v21[6] == 92;
      goto LABEL_24;
    }
  }
  v24 = 0;
  v30 = 68;
LABEL_24:
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 68 )
    return 0;
  return v24;
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

  if ( (byte_4187D3C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__, entity);
    byte_4187D3C = 1;
  }
  PK = ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardClassMaster__TryGetEntityList(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entitys,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x10
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0

  if ( (byte_4187D36 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardClassEntity_TypeInfo, entitys);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo, v14);
    byte_4187D36 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)entitys, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v35 + 8));
    if ( !v36 )
      goto LABEL_33;
    v38 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (ClassBoardClassEntity_c *)v36->klass->_2.typeHierarchy[v38 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v36);
LABEL_33:
      sub_B2C434(v36, v37);
    }
    if ( v36->fields.missionTargetId == id )
    {
      if ( !*entitys )
        sub_B2C434(0LL, ClassBoardClassEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entitys,
        v36,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    }
  }
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_28:
    v42 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v31);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v42 + 8));
  if ( !*entitys )
LABEL_35:
    sub_B2C434(list, v22);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardClassMaster__TryGetEntityListFromClassId(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entityList,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x10
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0

  if ( (byte_4187D37 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardClassEntity_TypeInfo, entityList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo, v14);
    byte_4187D37 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entityList = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)entityList, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v35 + 8));
    if ( !v36 )
      goto LABEL_33;
    v38 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (ClassBoardClassEntity_c *)v36->klass->_2.typeHierarchy[v38 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v36);
LABEL_33:
      sub_B2C434(v36, v37);
    }
    if ( v36->fields.missionConditionDetailId == classId )
    {
      if ( !*entityList )
        sub_B2C434(0LL, ClassBoardClassEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
        v36,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    }
  }
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_28:
    v42 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v31);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v42 + 8));
  if ( !*entityList )
LABEL_35:
    sub_B2C434(list, v22);
  return (*entityList)->fields._size > 0;
}