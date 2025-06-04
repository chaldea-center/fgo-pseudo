void __fastcall MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0240C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__, method);
    byte_4B0240C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    496,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B0240A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_MapUpdateScheduleEntity___, *(_QWORD *)&warId);
    sub_1BC3008(&System_Func_MapUpdateScheduleEntity__bool__TypeInfo, v5);
    sub_1BC3008(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__, v6);
    sub_1BC3008(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo, v7);
    byte_4B0240A = 1;
  }
  v8 = sub_1BC3254(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_DWORD *)(v8 + 16) = warId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_MapUpdateScheduleEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__50395312(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_300F8B0 *)Method_System_Linq_Enumerable_Any_MapUpdateScheduleEntity___);
}


// local variable allocation has failed, the output may be wrong!
MapUpdateScheduleEntity_o *__fastcall MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B0240D & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__,
      *(_QWORD *)&warId);
    byte_4B0240D = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_32B3B28 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *v11; // x20
  int32_t warId; // w23
  int64_t createdDateTime; // x24
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B0240B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MapUpdateScheduleEntity__GetEnumerator__, warInfo);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4B0240B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !warInfo || (v11 = Time, (Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
    sub_1BC3264(Time, v10);
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_MapUpdateScheduleEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v20 & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_1BC3264(0LL, v26);
    if ( *(_DWORD *)(v25 + 16) == warId )
    {
      v27 = *(_QWORD *)(v25 + 24);
      if ( createdDateTime <= v27 && v27 <= (__int64)v11 )
        goto LABEL_27;
    }
  }
  v20 = 0;
LABEL_27:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v20 & 1;
}


bool __fastcall MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B0240E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__, entity);
    byte_4B0240E = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
}


void __fastcall MapUpdateScheduleMaster___c__DisplayClass0_0___ctor(
        MapUpdateScheduleMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapUpdateScheduleMaster___c__DisplayClass0_0___Any_b__0(
        MapUpdateScheduleMaster___c__DisplayClass0_0_o *this,
        MapUpdateScheduleEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BC3264(this, 0LL);
  return n->fields.warId == this->fields.warId;
}