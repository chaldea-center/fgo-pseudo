void __fastcall MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1657C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__, method, v2);
    byte_4B1657C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    489,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapUpdateScheduleMaster__Any(MapUpdateScheduleMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B1657A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_DataEntityBase____76878384, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&System_Func_DataEntityBase__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__, v8, v9);
    sub_1BCA7E0(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo, v10, v11);
    byte_4B1657A = 1;
  }
  v12 = sub_1BCAA2C(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&warId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = warId;
  list = this->fields.list;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_DataEntityBase__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49415960(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_DataEntityBase____76878384);
}


// local variable allocation has failed, the output may be wrong!
MapUpdateScheduleEntity_o *__fastcall MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1657D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__,
      *(_QWORD *)&warId,
      mapUpdatedAt);
    byte_4B1657D = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
}


bool __fastcall MapUpdateScheduleMaster__IsNeedMapUpdate(
        MapUpdateScheduleMaster_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *v17; // x20
  int32_t warId; // w23
  int64_t createdDateTime; // x24
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 methodPtr_low; // x9
  int64_t v34; // x8
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B1657B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, warInfo, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&MapUpdateScheduleEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    byte_4B1657B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, warInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !warInfo || (v17 = Time, (Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
    sub_1BCAA3C(Time, v16);
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v26 & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_19;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_19:
      v30 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    if ( !v31 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(MapUpdateScheduleEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
      || *(MapUpdateScheduleEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * methodPtr_low - 8) != MapUpdateScheduleEntity_TypeInfo )
    {
      sub_1BCACFC(v31);
LABEL_37:
      sub_1BCAA3C(v31, v32);
    }
    if ( *(_DWORD *)(v31 + 16) == warId )
    {
      v34 = *(_QWORD *)(v31 + 24);
      if ( createdDateTime <= v34 && v34 <= (__int64)v17 )
        goto LABEL_29;
    }
  }
  v26 = 0;
LABEL_29:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_33;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_33:
    v38 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v26 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1657E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&warId);
    byte_4B1657E = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
}


void __fastcall MapUpdateScheduleMaster___c__DisplayClass0_0___ctor(
        MapUpdateScheduleMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapUpdateScheduleMaster___c__DisplayClass0_0___Any_b__0(
        MapUpdateScheduleMaster___c__DisplayClass0_0_o *this,
        DataEntityBase_o *n,
        const MethodInfo *method)
{
  MapUpdateScheduleMaster___c__DisplayClass0_0_o *v4; // x20
  __int64 methodPtr_low; // x9

  v4 = this;
  if ( (byte_4B1657F & 1) == 0 )
  {
    this = (MapUpdateScheduleMaster___c__DisplayClass0_0_o *)sub_1BCA7E0(&MapUpdateScheduleEntity_TypeInfo, n, method);
    byte_4B1657F = 1;
  }
  if ( !n )
LABEL_8:
    sub_1BCAA3C(this, n);
  methodPtr_low = LOBYTE(MapUpdateScheduleEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(n->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MapUpdateScheduleEntity_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] != MapUpdateScheduleEntity_TypeInfo )
  {
    sub_1BCACFC(n);
    goto LABEL_8;
  }
  return LODWORD(n[1].klass) == v4->fields.warId;
}