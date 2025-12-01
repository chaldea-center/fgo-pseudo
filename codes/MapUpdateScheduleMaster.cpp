void MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC78E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
    byte_4CC78E9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    496,
    (const MethodInfo_340B614 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
}


bool MapUpdateScheduleMaster__Any(MapUpdateScheduleMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC78E7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_MapUpdateScheduleEntity___);
    sub_1C713B0(&System_Func_MapUpdateScheduleEntity__bool__TypeInfo);
    sub_1C713B0(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__);
    sub_1C713B0(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CC78E7 = 1;
  }
  v5 = sub_1C715FC(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MapUpdateScheduleEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51743576(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_MapUpdateScheduleEntity___);
}


MapUpdateScheduleEntity_o *MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC78EA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
    byte_4CC78EA = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_340D938 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
}


bool MapUpdateScheduleMaster__IsNeedMapUpdate(
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
  __int64 v15; // x0
  char v16; // w21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4CC78E8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MapUpdateScheduleEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC78E8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !warInfo || (v7 = Time, (Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
    sub_1C71608(Time, v6);
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_MapUpdateScheduleEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C71608(0, v22);
    if ( *(_DWORD *)(v21 + 16) == warId )
    {
      v23 = *(_QWORD *)(v21 + 24);
      if ( createdDateTime <= v23 && v23 <= (__int64)v7 )
        goto LABEL_27;
    }
  }
  v16 = 0;
LABEL_27:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_31;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_31:
    v27 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v16 & 1;
}


bool MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC78EB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
    byte_4CC78EB = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
}


void MapUpdateScheduleMaster___c__DisplayClass0_0___ctor(
        MapUpdateScheduleMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MapUpdateScheduleMaster___c__DisplayClass0_0___Any_b__0(
        MapUpdateScheduleMaster___c__DisplayClass0_0_o *this,
        MapUpdateScheduleEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C71608(this, 0);
  return n->fields.warId == this->fields.warId;
}