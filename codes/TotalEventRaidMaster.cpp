void __fastcall TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67750 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__, method);
    byte_4B67750 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    153,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *__fastcall TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B6774E & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B6774E = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
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

  if ( (byte_4B6774F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__, entity);
    byte_4B6774F = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
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
  int32_t *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x25
  __int64 methodPtr_low; // x9
  __int64 v36; // x1
  _BOOL8 IsOpenTime; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B67751 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&day);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&TotalEventRaidEntity_TypeInfo, v16);
    byte_4B67751 = 1;
  }
  entity = 0LL;
  *maxHpSum = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_50:
    sub_1BE4D28(Instance, v19);
  v21 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v22);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v31 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                       Enumerator,
                       *(_QWORD *)(v31 + 8));
    v34 = (Il2CppObject *)v32;
    if ( !v32 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(TotalEventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
      || *(TotalEventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) != TotalEventRaidEntity_TypeInfo )
    {
      sub_1BE4FE8(v32);
LABEL_44:
      sub_1BE4D28(v32, v33);
    }
    if ( v32[5] == day )
    {
      if ( !MasterData_object )
        sub_1BE4D28(v32, TotalEventRaidEntity_TypeInfo);
      if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)MasterData_object, &entity, v32[4], day, 0LL) )
      {
        if ( !entity )
          sub_1BE4D28(0LL, v36);
        IsOpenTime = EventRaidEntity__IsOpenTime(entity, v21, 0LL);
        if ( IsOpenTime )
        {
          if ( !v17 )
            sub_1BE4D28(IsOpenTime, v38);
          items = v17->fields._items;
          v46 = Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1BE4D28(IsOpenTime, v38);
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v34,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v34;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v34, v39, v40, v41, v42, v43, v44);
          }
          if ( !entity )
            sub_1BE4D28(v49, v50);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_40;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_40:
    v54 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v17;
}