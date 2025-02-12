void __fastcall TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8659 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__, method);
    byte_4BC8659 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    153,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *__fastcall TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8657 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC8657 = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_324D130 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventRaidMaster__TryGetEntity(
        TotalEventRaidMaster_o *this,
        TotalEventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8658 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__, entity);
    byte_4BC8658 = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TotalEventRaidEntity__o *__fastcall TotalEventRaidMaster__TryGetEntityListFromDay(
        TotalEventRaidMaster_o *this,
        int32_t day,
        int64_t *maxHpSum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v21; // x24
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x25
  __int64 v35; // x1
  _BOOL8 IsOpenTime; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC865A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_TotalEventRaidEntity__GetEnumerator__,
      *(_QWORD *)&day);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_1C1ABD4(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntityList__, v8);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_TotalEventRaidEntity__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo, v14);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BC865A = 1;
  }
  entity = 0LL;
  *maxHpSum = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_47:
    sub_1C1AE30(Instance, v19);
  v21 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_TotalEventRaidEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalEventRaidEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_TotalEventRaidEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_19;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_19:
      v31 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_TotalEventRaidEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v34 = (Il2CppObject *)v32;
    if ( !v32 )
      sub_1C1AE30(0LL, v33);
    if ( *(_DWORD *)(v32 + 20) == day )
    {
      if ( !MasterData_object )
        sub_1C1AE30(v32, v33);
      if ( EventRaidMaster__TryGetEntity(
             (EventRaidMaster_o *)MasterData_object,
             &entity,
             *(_DWORD *)(v32 + 16),
             day,
             0LL) )
      {
        if ( !entity )
          sub_1C1AE30(0LL, v35);
        IsOpenTime = EventRaidEntity__IsOpenTime(entity, v21, 0LL);
        if ( IsOpenTime )
        {
          if ( !v17 )
            sub_1C1AE30(IsOpenTime, v37);
          items = v17->fields._items;
          v45 = Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1C1AE30(IsOpenTime, v37);
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v34,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v34;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v34, v38, v39, v40, v41, v42, v43);
          }
          if ( !entity )
            sub_1C1AE30(v48, v49);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_38;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_38:
    v53 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v17;
}