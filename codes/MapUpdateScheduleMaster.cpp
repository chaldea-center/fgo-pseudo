void MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938BD2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
    byte_5938BD2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    498,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
}


bool MapUpdateScheduleMaster__Any(MapUpdateScheduleMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5938BD0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_MapUpdateScheduleEntity___);
    sub_21FFC50(&System_Func_MapUpdateScheduleEntity__bool__TypeInfo);
    sub_21FFC50(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__);
    sub_21FFC50(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
    byte_5938BD0 = 1;
  }
  v5 = sub_21FFEBC(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = warId;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MapUpdateScheduleEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__58935448(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_MapUpdateScheduleEntity___);
}


MapUpdateScheduleEntity_o *MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938BD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
    byte_5938BD3 = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
}


bool MapUpdateScheduleMaster__IsNeedMapUpdate(
        MapUpdateScheduleMaster_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x19
  int32_t warId; // w22
  int64_t createdDateTime; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  char v19; // w20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-48h]

  if ( (byte_5938BD1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MapUpdateScheduleEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938BD1 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, warInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !warInfo || (v7 = Time, (Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
    sub_21FFECC(Time, v6);
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Time,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_MapUpdateScheduleEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_13;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( (v17 & 1) == 0 )
      break;
    if ( !v32 )
      sub_21FFECC(v17, v18);
    v20 = v32->klass;
    v21 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_21;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_21:
      v23 = sub_2237E2C(v32, System_Collections_Generic_IEnumerator_MapUpdateScheduleEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            v32,
            *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_21FFECC(0, v25);
    if ( *(_DWORD *)(v24 + 16) == warId )
    {
      v26 = *(_QWORD *)(v24 + 24);
      if ( createdDateTime <= v26 && v26 <= (__int64)v7 )
        goto LABEL_30;
    }
  }
  v19 = 0;
LABEL_30:
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_35;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_35:
      v30 = sub_2237E2C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  return v19 & 1;
}


bool MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938BD4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
    byte_5938BD4 = 1;
  }
  PK = (Il2CppObject *)MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
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
    sub_21FFECC(this, 0);
  return n->fields.warId == this->fields.warId;
}