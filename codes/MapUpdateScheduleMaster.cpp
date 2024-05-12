void __fastcall MapUpdateScheduleMaster___ctor(MapUpdateScheduleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E5BE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
    byte_438E5BE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    488,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string___ctor__);
}


bool __fastcall MapUpdateScheduleMaster__Any(MapUpdateScheduleMaster_o *this, int32_t warId, const MethodInfo *method)
{
  MapUpdateScheduleMaster___c__DisplayClass0_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_438E5BC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_DataEntityBase____69502424);
    sub_B775C4(&Method_System_Func_DataEntityBase__bool___ctor__);
    sub_B775C4(&System_Func_DataEntityBase__bool__TypeInfo);
    sub_B775C4(&Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__);
    sub_B775C4(&MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
    byte_438E5BC = 1;
  }
  v5 = (MapUpdateScheduleMaster___c__DisplayClass0_0_o *)sub_B77694(MapUpdateScheduleMaster___c__DisplayClass0_0_TypeInfo);
  MapUpdateScheduleMaster___c__DisplayClass0_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.warId = warId;
  list = this->fields.list;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MapUpdateScheduleMaster___c__DisplayClass0_0__Any_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_DataEntityBase__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_1D1F698 *)Method_System_Linq_Enumerable_Any_DataEntityBase____69502424);
}


MapUpdateScheduleEntity_o *__fastcall MapUpdateScheduleMaster__GetEntity(
        MapUpdateScheduleMaster_o *this,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438E5BF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
    byte_438E5BF = 1;
  }
  PK = MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, (const MethodInfo *)mapUpdatedAt);
  return (MapUpdateScheduleEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21FBCE4 *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__GetEntity__);
}


bool __fastcall MapUpdateScheduleMaster__IsNeedMapUpdate(
        MapUpdateScheduleMaster_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x20
  int32_t warId; // w21
  int64_t createdDateTime; // x22
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  int64_t v23; // x8
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-50h]

  if ( (byte_438E5BD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&MapUpdateScheduleEntity_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438E5BD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !warInfo
    || (v7 = Time,
        (Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B7769C(Time, v6);
  }
  warId = warInfo->fields.warId;
  createdDateTime = warInfo->fields.createdDateTime;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Time,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_20:
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_40;
    v22 = *(&MapUpdateScheduleEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
      || *(MapUpdateScheduleEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != MapUpdateScheduleEntity_TypeInfo )
    {
      sub_B77990(v20);
LABEL_40:
      sub_B7769C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == warId )
    {
      v23 = *(_QWORD *)(v20 + 24);
      if ( createdDateTime <= v23 && v23 <= (__int64)v7 )
      {
        v30 = 104;
        v24 = 1;
        goto LABEL_30;
      }
    }
  }
  v24 = 0;
  v30 = 102;
LABEL_30:
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
        goto LABEL_34;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_34:
    v28 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 102 )
    return 0;
  return v24;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapUpdateScheduleMaster__TryGetEntity(
        MapUpdateScheduleMaster_o *this,
        MapUpdateScheduleEntity_o **entity,
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438E5C0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
    byte_438E5C0 = 1;
  }
  PK = MapUpdateScheduleEntity__CreatePK(warId, mapUpdatedAt, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_MapUpdateScheduleMaster__MapUpdateScheduleEntity__string__TryGetEntity__);
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
  __int64 v5; // x9

  v4 = this;
  if ( (byte_43889A5 & 1) == 0 )
  {
    this = (MapUpdateScheduleMaster___c__DisplayClass0_0_o *)sub_B775C4(&MapUpdateScheduleEntity_TypeInfo);
    byte_43889A5 = 1;
  }
  if ( !n )
LABEL_8:
    sub_B7769C(this, n);
  v5 = *(&MapUpdateScheduleEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&n->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (MapUpdateScheduleEntity_c *)n->klass->_2.typeHierarchy[v5 - 1] != MapUpdateScheduleEntity_TypeInfo )
  {
    this = (MapUpdateScheduleMaster___c__DisplayClass0_0_o *)sub_B77990(n);
    goto LABEL_8;
  }
  return LODWORD(n[1].klass) == v4->fields.warId;
}