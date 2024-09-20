void __fastcall MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
    byte_4A5B4D9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    489,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
}


bool __fastcall MapUpdateScheduleMaster__Any(MapUpdateScheduleMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5B4D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_DataEntityBase____76126800);
    sub_1B885B0(&System_Func_DataEntityBase__bool__TypeInfo);
    sub_1B885B0(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__);
    sub_1B885B0(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
    byte_4A5B4D7 = 1;
  }
  v5 = sub_1B887FC(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48820656(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_DataEntityBase____76126800);
}


MapUpdateScheduleEntity_o *__fastcall MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B4DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
    byte_4A5B4DA = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
}


bool __fastcall MapUpdateScheduleMaster__IsNeedMapUpdate(
        MapUpdateScheduleMaster_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x20
  int32_t warId; // w23
  int64_t createdDateTime; // x24
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v16; // w21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  int64_t v24; // x8
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A5B4D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&MapUpdateScheduleEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B4D8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !warInfo || (v7 = Time, (Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
    sub_1B8880C(Time, v6);
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(MapUpdateScheduleEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(MapUpdateScheduleEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != MapUpdateScheduleEntity_TypeInfo )
    {
      sub_1B88ACC(v21);
LABEL_37:
      sub_1B8880C(v21, v22);
    }
    if ( *(_DWORD *)(v21 + 16) == warId )
    {
      v24 = *(_QWORD *)(v21 + 24);
      if ( createdDateTime <= v24 && v24 <= (__int64)v7 )
        goto LABEL_29;
    }
  }
  v16 = 0;
LABEL_29:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_33;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_33:
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v16 & 1;
}


bool __fastcall MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B4DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
    byte_4A5B4DB = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
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
  if ( (byte_4A5B4DC & 1) == 0 )
  {
    this = (MapUpdateScheduleMaster___c__DisplayClass0_0_o *)sub_1B885B0(&MapUpdateScheduleEntity_TypeInfo);
    byte_4A5B4DC = 1;
  }
  if ( !n )
LABEL_8:
    sub_1B8880C(this, n);
  methodPtr_low = LOBYTE(MapUpdateScheduleEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(n->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MapUpdateScheduleEntity_c *)n->klass->_2.typeHierarchy[methodPtr_low - 1] != MapUpdateScheduleEntity_TypeInfo )
  {
    sub_1B88ACC(n);
    goto LABEL_8;
  }
  return LODWORD(n[1].klass) == v4->fields.warId;
}