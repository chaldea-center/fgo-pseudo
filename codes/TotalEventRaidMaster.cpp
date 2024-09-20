void __fastcall TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
    byte_4A5BCA7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    149,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *__fastcall TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BCA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
    byte_4A5BCA5 = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
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

  if ( (byte_4A5BCA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
    byte_4A5BCA6 = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_TotalEventRaidEntity__o *__fastcall TotalEventRaidMaster__TryGetEntityListFromDay(
        TotalEventRaidMaster_o *this,
        int32_t day,
        int64_t *maxHpSum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v11; // x24
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  int32_t *v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x25
  __int64 methodPtr_low; // x9
  __int64 v26; // x1
  _BOOL8 IsOpenTime; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BCA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TotalEventRaidEntity_TypeInfo);
    byte_4A5BCA8 = 1;
  }
  entity = 0LL;
  *maxHpSum = 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_50:
    sub_1B8880C(Instance, v9);
  v11 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_19;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_19:
      v21 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                       Enumerator,
                       *(_QWORD *)(v21 + 8));
    v24 = (Il2CppObject *)v22;
    if ( !v22 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(TotalEventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) < (unsigned int)methodPtr_low
      || *(TotalEventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * methodPtr_low - 8) != TotalEventRaidEntity_TypeInfo )
    {
      sub_1B88ACC(v22);
LABEL_44:
      sub_1B8880C(v22, v23);
    }
    if ( v22[5] == day )
    {
      if ( !MasterData_object )
        sub_1B8880C(v22, TotalEventRaidEntity_TypeInfo);
      if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)MasterData_object, &entity, v22[4], day, 0LL) )
      {
        if ( !entity )
          sub_1B8880C(0LL, v26);
        IsOpenTime = EventRaidEntity__IsOpenTime(entity, v11, 0LL);
        if ( IsOpenTime )
        {
          if ( !v7 )
            sub_1B8880C(IsOpenTime, v28);
          items = v7->fields._items;
          v32 = Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            sub_1B8880C(IsOpenTime, v28);
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v24,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v24, v29, v30);
          }
          if ( !entity )
            sub_1B8880C(v35, v36);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_40;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_40:
    v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v7;
}