void __fastcall MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66F53 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__, method);
    byte_4B66F53 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    493,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapUpdateScheduleMaster__Any(MapUpdateScheduleMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B66F51 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_DataEntityBase____77200376, *(_QWORD *)&warId);
    sub_1BE4ACC(&System_Func_DataEntityBase__bool__TypeInfo, v5);
    sub_1BE4ACC(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__, v6);
    sub_1BE4ACC(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo, v7);
    byte_4B66F51 = 1;
  }
  v8 = sub_1BE4D18(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  *(_DWORD *)(v8 + 16) = warId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49703832(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_2F66B98 *)Method_System_Linq_Enumerable_Any_DataEntityBase____77200376);
}


// local variable allocation has failed, the output may be wrong!
MapUpdateScheduleEntity_o *__fastcall MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66F54 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__,
      *(_QWORD *)&warId);
    byte_4B66F54 = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31FDB1C *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
}


bool __fastcall MapUpdateScheduleMaster__IsNeedMapUpdate(
        MapUpdateScheduleMaster_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x20
  int32_t warId; // w23
  int64_t createdDateTime; // x24
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v21; // w21
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x9
  int64_t v29; // x8
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B66F52 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, warInfo);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&MapUpdateScheduleEntity_TypeInfo, v8);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    byte_4B66F52 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !warInfo || (v12 = Time, (Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
    sub_1BE4D28(Time, v11);
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v21 & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_19;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_19:
      v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(MapUpdateScheduleEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
      || *(MapUpdateScheduleEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != MapUpdateScheduleEntity_TypeInfo )
    {
      sub_1BE4FE8(v26);
LABEL_37:
      sub_1BE4D28(v26, v27);
    }
    if ( *(_DWORD *)(v26 + 16) == warId )
    {
      v29 = *(_QWORD *)(v26 + 24);
      if ( createdDateTime <= v29 && v29 <= (__int64)v12 )
        goto LABEL_29;
    }
  }
  v21 = 0;
LABEL_29:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_33;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_33:
    v33 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v21 & 1;
}


bool __fastcall MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66F55 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__, entity);
    byte_4B66F55 = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
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
  if ( (byte_4B66F56 & 1) == 0 )
  {
    this = (MapUpdateScheduleMaster___c__DisplayClass0_0_o *)sub_1BE4ACC(&MapUpdateScheduleEntity_TypeInfo, n);
    byte_4B66F56 = 1;
  }
  if ( !n )
LABEL_8:
    sub_1BE4D28(this, n);
  methodPtr_low = LOBYTE(MapUpdateScheduleEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(n->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MapUpdateScheduleEntity_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] != MapUpdateScheduleEntity_TypeInfo )
  {
    sub_1BE4FE8(n);
    goto LABEL_8;
  }
  return LODWORD(n[1].klass) == v4->fields.warId;
}