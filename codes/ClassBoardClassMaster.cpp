void __fastcall ClassBoardClassMaster___ctor(ClassBoardClassMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9BE6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9BE6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    424,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardClassMaster__GetClassBoardBaseId(
        ClassBoardClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  int32_t v33; // w20
  int v34; // w8
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-40h]

  if ( (byte_42E9BE4 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardClassEntity_TypeInfo, classId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    byte_42E9BE4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&classId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_34;
    v32 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v32
      || *(ClassBoardClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v32 - 8) != ClassBoardClassEntity_TypeInfo )
    {
      v30 = (_DWORD *)sub_B5D990(v30);
LABEL_34:
      sub_B5D69C(v30, v31);
    }
    if ( v30[5] == classId )
    {
      v33 = v30[4];
      v34 = 66;
      goto LABEL_24;
    }
  }
  v34 = 64;
  v33 = 0;
LABEL_24:
  v40 = v34;
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_28:
    v38 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v40 == 64 )
    return 0;
  return v33;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardClassEntity_o *__fastcall ClassBoardClassMaster__GetEntity(
        ClassBoardClassMaster_o *this,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E9BE7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__,
      classBoardBaseId,
      classId,
      method);
    byte_42E9BE7 = 1;
  }
  PK = ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classId);
  return (ClassBoardClassEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
}


System_Int32_array *__fastcall ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
        ClassBoardClassMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  ClassBoardClassEntity_o *v45; // x0
  __int64 v46; // x1
  ClassBoardClassEntity_o *v47; // x22
  __int64 v48; // x9
  _BOOL8 IsOpen; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0

  if ( (byte_42E9BE5 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardClassEntity_TypeInfo, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    byte_42E9BE5 = 1;
  }
  v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (ClassBoardClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                       Enumerator,
                                       *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      goto LABEL_34;
    v48 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v48
      || (ClassBoardClassEntity_c *)v45->klass->_2.typeHierarchy[v48 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v45 = (ClassBoardClassEntity_o *)sub_B5D990(v45);
LABEL_34:
      sub_B5D69C(v45, v46);
    }
    if ( v45->fields.classBoardBaseId == baseId )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(v45, (const MethodInfo *)ClassBoardClassEntity_TypeInfo);
      if ( IsOpen )
      {
        if ( !v30 )
          sub_B5D69C(IsOpen, v50);
        System_Collections_Generic_List_int___Add(
          v30,
          v47->fields.classId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_29:
    v54 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v54 + 8));
  if ( !v30 )
LABEL_36:
    sub_B5D69C(list, v31);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42E9BE8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__,
      (_DWORD)entity,
      classBoardBaseId,
      *(_QWORD *)&classId);
    byte_42E9BE8 = 1;
  }
  PK = ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardClassMaster__TryGetEntityList(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entitys,
        int32_t id,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v47; // x3
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x10
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0

  if ( (byte_42E9BE2 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardClassEntity_TypeInfo, (_DWORD)entitys, id, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo, v28, v29, v30);
    byte_42E9BE2 = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v31;
  sub_B5D560((BattleServantConfConponent_o *)entitys, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v40);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        p_offset += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v41);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_16:
      v51 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v47);
    }
    v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v51 + 8));
    if ( !v52 )
      goto LABEL_33;
    v54 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v52->klass->_2.bitflags2 + 1) < (unsigned int)v54
      || (ClassBoardClassEntity_c *)v52->klass->_2.typeHierarchy[v54 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v52);
LABEL_33:
      sub_B5D69C(v52, v53);
    }
    if ( v52->fields.missionTargetId == id )
    {
      if ( !*entitys )
        sub_B5D69C(0LL, ClassBoardClassEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entitys,
        v52,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    }
  }
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_28:
    v58 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v47);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v58 + 8));
  if ( !*entitys )
LABEL_35:
    sub_B5D69C(list, v38);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardClassMaster__TryGetEntityListFromClassId(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entityList,
        int32_t classId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v47; // x3
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x10
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0

  if ( (byte_42E9BE3 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardClassEntity_TypeInfo, (_DWORD)entityList, classId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo, v28, v29, v30);
    byte_42E9BE3 = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entityList = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v31;
  sub_B5D560((BattleServantConfConponent_o *)entityList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v40);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        p_offset += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v41);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_16:
      v51 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v47);
    }
    v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v51 + 8));
    if ( !v52 )
      goto LABEL_33;
    v54 = *(&ClassBoardClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v52->klass->_2.bitflags2 + 1) < (unsigned int)v54
      || (ClassBoardClassEntity_c *)v52->klass->_2.typeHierarchy[v54 - 1] != ClassBoardClassEntity_TypeInfo )
    {
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v52);
LABEL_33:
      sub_B5D69C(v52, v53);
    }
    if ( v52->fields.missionConditionDetailId == classId )
    {
      if ( !*entityList )
        sub_B5D69C(0LL, ClassBoardClassEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
        v52,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    }
  }
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_28:
    v58 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v47);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v58 + 8));
  if ( !*entityList )
LABEL_35:
    sub_B5D69C(list, v38);
  return (*entityList)->fields._size > 0;
}