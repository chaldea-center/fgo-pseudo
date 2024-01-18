void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187D4C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__,
      method);
    byte_4187D4C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    428,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_4187D4D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4187D4D = 1;
  }
  PK = ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4187D4A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&id);
    byte_4187D4A = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_B2C434(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_4187D4E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__,
      entity);
    byte_4187D4E = 1;
  }
  PK = ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&commandSpellId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x10
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0

  if ( (byte_4187D4B & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardCommandSpellEntity_TypeInfo, entitys);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__, v15);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v16);
    byte_4187D4B = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)entitys, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_16:
      v37 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v37 + 8));
    if ( !v38 )
      goto LABEL_34;
    v40 = *(&ClassBoardCommandSpellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v40
      || (ClassBoardCommandSpellEntity_c *)v38->klass->_2.typeHierarchy[v40 - 1] != ClassBoardCommandSpellEntity_TypeInfo )
    {
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v38);
LABEL_34:
      sub_B2C434(v38, v39);
    }
    if ( v38->fields.missionTargetId == id && v38->fields.targetId == lv )
    {
      if ( !*entitys )
        sub_B2C434(0LL, ClassBoardCommandSpellEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entitys,
        v38,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
    }
  }
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_29:
    v44 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v44 + 8));
  if ( !*entitys )
LABEL_36:
    sub_B2C434(list, v24);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardCommandSpellMaster__preProcess(
        ClassBoardCommandSpellMaster_o *this,
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
  System_Collections_Generic_HashSet_int__o *v11; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int32_t *v33; // x0
  __int64 v34; // x1
  int32_t *v35; // x21
  __int64 v36; // x9
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_4187D49 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardCommandSpellEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v6);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4187D49 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  this->fields.addFunctionCommandSpellId = v11;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_addFunctionCommandSpellId,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_addFunctionCommandSpellId - 5);
  if ( !v20 )
    sub_B2C434(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v20,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v33 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                       Enumerator,
                       *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      goto LABEL_33;
    v36 = *(&ClassBoardCommandSpellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) < (unsigned int)v36
      || *(ClassBoardCommandSpellEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v36 - 8) != ClassBoardCommandSpellEntity_TypeInfo )
    {
      v33 = (int32_t *)sub_B2C728(v33);
LABEL_33:
      sub_B2C434(v33, v34);
    }
    if ( !*p_addFunctionCommandSpellId )
      sub_B2C434(0LL, ClassBoardCommandSpellEntity_TypeInfo);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            v33[5],
            (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_B2C434(0LL, v37);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        v35[5],
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_29:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return 1;
}