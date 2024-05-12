void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C417 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
    byte_438C417 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    429,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardCommandSpellEntity_o *__fastcall ClassBoardCommandSpellMaster__GetEntity(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C418 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
    byte_438C418 = 1;
  }
  PK = ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_438C415 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_438C415 = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_B7769C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__TryGetEntity(
        ClassBoardCommandSpellMaster_o *this,
        ClassBoardCommandSpellEntity_o **entity,
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C419 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
    byte_438C419 = 1;
  }
  PK = ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&commandSpellId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_438C416 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardCommandSpellEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    byte_438C416 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v9;
  sub_B77560((BattleServantConfConponent_o *)entitys, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
      v27 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_34;
    v30 = *(&ClassBoardCommandSpellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (ClassBoardCommandSpellEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != ClassBoardCommandSpellEntity_TypeInfo )
    {
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v28);
LABEL_34:
      sub_B7769C(v28, v29);
    }
    if ( v28->fields.missionTargetId == id && v28->fields.targetId == lv )
    {
      if ( !*entitys )
        sub_B7769C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entitys,
        v28,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
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
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_29:
    v34 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v34 + 8));
  if ( !*entitys )
LABEL_36:
    sub_B7769C(list, v16);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardCommandSpellMaster__preProcess(
        ClassBoardCommandSpellMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  int32_t *v23; // x0
  __int64 v24; // x1
  int32_t *v25; // x21
  __int64 v26; // x9
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_438C414 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardCommandSpellEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438C414 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  this->fields.addFunctionCommandSpellId = v3;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_B77560(
    (BattleServantConfConponent_o *)p_addFunctionCommandSpellId,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_addFunctionCommandSpellId - 5);
  if ( !v12 )
    sub_B7769C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v12,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                       Enumerator,
                       *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_33;
    v26 = *(&ClassBoardCommandSpellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) < (unsigned int)v26
      || *(ClassBoardCommandSpellEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v26 - 8) != ClassBoardCommandSpellEntity_TypeInfo )
    {
      v23 = (int32_t *)sub_B77990(v23);
LABEL_33:
      sub_B7769C(v23, v24);
    }
    if ( !*p_addFunctionCommandSpellId )
      sub_B7769C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            v23[5],
            (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_B7769C(0LL, v27);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        v25[5],
        (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return 1;
}