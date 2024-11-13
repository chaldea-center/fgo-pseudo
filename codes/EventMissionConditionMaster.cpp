void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16214 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v7, v8);
    byte_4B16214 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    135,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void __fastcall EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  __int64 v14; // x3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x21
  Il2CppClass *klass; // x8
  _QWORD *v21; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v23; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B16216 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      eventMissionConditionEntity,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9, v10);
    this = (EventMissionConditionMaster_o *)sub_1BCA7E0(
                                              &System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                              v11,
                                              v12);
    byte_4B16216 = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_14;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                         eventMissionConditionEntity,
                                                         v13,
                                                         v14);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (Il2CppObject *)v19;
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (Il2CppObject *)v19,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v21 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1BCAA3C(this, eventMissionConditionEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventMissionConditionEntity,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v23[4] = eventMissionConditionEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v23 + 4),
      (int64_t)eventMissionConditionEntity,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void __fastcall EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  EventMissionConditionEntity_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B16215 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__, v4, v5);
    sub_1BCA7E0(&EventMissionConditionEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    byte_4B16215 = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0LL) )
  {
    sub_1BCAA3C(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                             Enumerator,
                                             *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventMissionConditionEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionConditionEntity_TypeInfo )
      {
        EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v25, v26);
      }
    }
  }
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
        goto LABEL_27;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_27:
    v31 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x8
  EventMissionConditionEntity_c *v41; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4B1621F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId,
      method);
    sub_1BCA7E0(&EventMissionConditionEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v18, v19);
    byte_4B1621F = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       *(_QWORD *)&missionTargetId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v22);
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
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            goto LABEL_16;
        }
        v31 = (__int64)&v28->vtable[*v30].method;
      }
      else
      {
LABEL_16:
        v31 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
              Enumerator,
              *(_QWORD *)(v31 + 8));
      v40 = v32;
      if ( !v32 )
        goto LABEL_36;
      v41 = EventMissionConditionEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) != EventMissionConditionEntity_TypeInfo )
      {
        sub_1BCACFC(v32);
LABEL_36:
        sub_1BCAA3C(v32, v33);
      }
      if ( *(_DWORD *)(v32 + 32) == missionTargetId )
      {
        if ( !v20 )
          sub_1BCAA3C(v32, EventMissionConditionEntity_TypeInfo);
        items = v20->fields._items;
        v44 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1BCAA3C(v32, v41);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v32,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v40, v34, v35, v36, v37, v38, v39);
        }
      }
    }
    v47 = Enumerator->klass;
    v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_31;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_31:
      v50 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
      Enumerator,
      *(_QWORD *)(v50 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_o *__fastcall EventMissionConditionMaster__GetEntity(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16212 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__,
      *(_QWORD *)&missionId,
      *(_QWORD *)&missionProgressType);
    byte_4B16212 = 1;
  }
  PK = (Il2CppObject *)EventMissionConditionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  EventMissionConditionEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B16220 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&targetId,
      *(_QWORD *)&condType);
    sub_1BCA7E0(&EventMissionConditionEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v19, v20);
    byte_4B16220 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       *(_QWORD *)&targetId,
                                                       *(_QWORD *)&condType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v23);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v26;
          p_offset += 4;
          if ( !v26 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v29 = Enumerator->klass;
      v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v31 = &v29->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_16;
        }
        v32 = (__int64)&v29->vtable[*v31].method;
      }
      else
      {
LABEL_16:
        v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
              Enumerator,
              *(_QWORD *)(v32 + 8));
      v41 = v33;
      if ( !v33 )
        goto LABEL_37;
      v42 = EventMissionConditionEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != EventMissionConditionEntity_TypeInfo )
      {
        sub_1BCACFC(v33);
LABEL_37:
        sub_1BCAA3C(v33, v34);
      }
      if ( *(_DWORD *)(v33 + 32) == targetId && *(_DWORD *)(v33 + 40) == condType )
      {
        if ( !v21 )
          sub_1BCAA3C(v33, EventMissionConditionEntity_TypeInfo);
        items = v21->fields._items;
        v45 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(v33, v42);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v33,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v41;
          sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
        }
      }
    }
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_32;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_32:
      v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
      Enumerator,
      *(_QWORD *)(v51 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t progressType,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B16221 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v21, v22);
    byte_4B16221 = 1;
  }
  value = 0LL;
  memset(&v41, 0, sizeof(v41));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       *(_QWORD *)&missionId,
                                                       *(_QWORD *)&progressType,
                                                       *(_QWORD *)&condType);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v23;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_21:
    sub_1BCAA3C(missionIdToEventMissionConditionEntityListDictionary, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v26 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1BCAA3C(v26, v27);
    if ( HIDWORD(v41.fields._current[1].klass) == progressType && LODWORD(v41.fields._current[2].monitor) == condType )
    {
      if ( !v23 )
        sub_1BCAA3C(v26, v27);
      items = v23->fields._items;
      v36 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BCAA3C(v26, v27);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v38[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)current, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v23;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__IsMissionRunning(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
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
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v14; // w21
  char v15; // w19
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  int klass_high; // w9
  bool v19; // w19
  char v20; // w8
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4B1621E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v11, v12);
    byte_4B1621E = 1;
  }
  value = 0LL;
  memset(&v23, 0, sizeof(v23));
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v20 = 1;
    return v20 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_25:
    sub_1BCAA3C(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v14 = 0;
  v23 = v22;
  v15 = 1;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v16 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
      v20 = v15 & 1;
      return v20 ^ 1;
    }
    if ( !v23.fields._current )
      sub_1BCAA3C(v16, v17);
    klass_high = HIDWORD(v23.fields._current[1].klass);
    if ( (klass_high & 0xFFFFFFFE) != 2 )
    {
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v23.fields._current, v17) )
      {
        v15 = 0;
      }
      goto LABEL_15;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v23.fields._current, v17) )
      break;
    v14 = 1;
LABEL_15:
    if ( (v14 & 1) != 0 && (v15 & 1) == 0 )
    {
      v19 = 1;
      goto LABEL_22;
    }
  }
  v19 = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v19;
}


void __fastcall EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_NotImplementedException_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  EventMissionConditionEntity_o *v35; // x22
  __int64 v36; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x21
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x20
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  System_Collections_IEnumerator_c **v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  EventMissionConditionEntity_o *v61; // x21
  __int64 v62; // x8
  __int64 v63; // x10
  const MethodInfo *v64; // x2
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x20
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0

  v4 = this;
  if ( (byte_4B16218 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionConditionEntity_TypeInfo, e, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerable_TypeInfo, v7, v8);
    this = (EventMissionConditionMaster_o *)sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    byte_4B16218 = 1;
  }
  if ( !e )
    sub_1BCAA3C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v17 = sub_1BCA7F4(&System_NotImplementedException_TypeInfo, e);
        v21 = (System_NotImplementedException_o *)sub_1BCAA2C(v17, v18, v19, v20);
        System_NotImplementedException___ctor(v21, 0LL);
        v23 = sub_1BCA7F4(&Method_EventMissionConditionMaster_OnListChangedImplementation__, v22);
        sub_1BCA908(v21, v23);
      }
      EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(v4, (const MethodInfo *)e);
    }
  }
  else
  {
    oldItems = e->fields._oldItems;
    if ( oldItems )
    {
      klass = oldItems->klass;
      v14 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1C1C7C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v25 )
        sub_1BCAA3C(0LL, v24);
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_20;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_20:
          v29 = sub_1C1C7C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
          break;
        v30 = *(_QWORD *)v25;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v32 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v31;
            v32 += 2;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * (*(_DWORD *)v32 + 1) + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1C1C7C0(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
        v35 = (EventMissionConditionEntity_o *)v34;
        if ( v34 )
        {
          v36 = *(_QWORD *)v34;
          methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) >= (unsigned int)methodPtr_low
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v36 + 200) + 8 * methodPtr_low - 8) == EventMissionConditionEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v36 + 376))(v34, *(_QWORD *)(v36 + 384)) )
              EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v4, v35, v38);
          }
        }
      }
      v39 = sub_1BCA91C(v25, System_IDisposable_TypeInfo);
      if ( v39 )
      {
        v40 = *(_QWORD *)v39;
        v41 = v39;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_39;
          }
          v44 = v40 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_39:
          v44 = sub_1C1C7C0(v39, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v46 = newItems->klass;
      v47 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v48 = &v46->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v48 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_47;
        }
        v49 = (__int64)&v46->vtable[*v48].method;
      }
      else
      {
LABEL_47:
        v49 = sub_1C1C7C0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v51 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v49)(newItems, *(_QWORD *)(v49 + 8));
      if ( !v51 )
        sub_1BCAA3C(0LL, v50);
      while ( 1 )
      {
        v52 = *(_QWORD *)v51;
        v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_54;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_54:
          v55 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
          break;
        v56 = *(_QWORD *)v51;
        v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v58 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *(v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v57;
            v58 += 2;
            if ( !v57 )
              goto LABEL_61;
          }
          v59 = v56 + 16LL * (*(_DWORD *)v58 + 1) + 312;
        }
        else
        {
LABEL_61:
          v59 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
        v61 = (EventMissionConditionEntity_o *)v60;
        if ( v60 )
        {
          v62 = *(_QWORD *)v60;
          v63 = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v60 + 304LL) >= (unsigned int)v63
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v62 + 200) + 8 * v63 - 8) == EventMissionConditionEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v62 + 376))(v60, *(_QWORD *)(v62 + 384)) )
          {
            EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v4, v61, v64);
          }
        }
      }
      v65 = sub_1BCA91C(v51, System_IDisposable_TypeInfo);
      if ( v65 )
      {
        v66 = *(_QWORD *)v65;
        v67 = v65;
        v68 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
        {
          v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
          {
            --v68;
            v69 += 4;
            if ( !v68 )
              goto LABEL_73;
          }
          v70 = v66 + 16LL * *v69 + 312;
        }
        else
        {
LABEL_73:
          v70 = sub_1C1C7C0(v65, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
      }
    }
  }
}


void __fastcall EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B16217 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__,
      eventMissionConditionEntity,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__, v7, v8);
    this = (EventMissionConditionMaster_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__,
                                              v9,
                                              v10);
    byte_4B16217 = 1;
  }
  value = 0LL;
  if ( !eventMissionConditionEntity )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_object___Remove(
                                            (System_Collections_Generic_List_object__o *)value,
                                            (Il2CppObject *)eventMissionConditionEntity,
                                            (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1BCAA3C(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__TryGetEntity(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16213 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&missionId);
    byte_4B16213 = 1;
  }
  PK = (Il2CppObject *)EventMissionConditionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  condType = entity->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( missionType == 4 )
        return EventMissionConditionEntity__isQuestClear(entity, (const MethodInfo *)entity);
      break;
    case 23:
      if ( missionType == 4 )
        return EventMissionConditionEntity__isMissionClear(entity, (const MethodInfo *)entity);
      break;
    case 12:
      return EventMissionConditionEntity__getProgressNumByDateType(entity, (const MethodInfo *)entity) > 0;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_array *__fastcall EventMissionConditionMaster__getMissionCondList(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  int64_t v28; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  int64_t v30; // x2
  __int64 v31; // x3
  int monitor; // w22
  int32_t v33; // w21
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *v42; // x20
  Il2CppObject *v43; // x21
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16219 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&missionId);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, v23, v24);
    sub_1BCA7E0(&EventMissionConditionMaster___c_TypeInfo, v25, v26);
    byte_4B16219 = 1;
  }
  value = 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&missionId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)missionIdToEventMissionConditionEntityListDictionary,
         missionId,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    missionIdToEventMissionConditionEntityListDictionary = value;
    if ( !value )
      goto LABEL_26;
    monitor = (int)value[1].monitor;
    if ( monitor >= 1 )
    {
      v33 = 0;
      do
      {
        missionIdToEventMissionConditionEntityListDictionary = System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                 v33,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !missionIdToEventMissionConditionEntityListDictionary )
          break;
        v28 = (int64_t)missionIdToEventMissionConditionEntityListDictionary;
        if ( *((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 8) == eventId )
        {
          if ( !v27 )
            break;
          items = v27->fields._items;
          v39 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
          ++v27->fields._version;
          if ( !items )
            break;
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)missionIdToEventMissionConditionEntityListDictionary,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v28;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v28, v30, v31, v34, v35, v36, v37);
          }
        }
        if ( monitor == ++v33 )
          goto LABEL_18;
        missionIdToEventMissionConditionEntityListDictionary = value;
      }
      while ( value );
LABEL_26:
      sub_1BCAA3C(missionIdToEventMissionConditionEntityListDictionary, v28);
    }
  }
LABEL_18:
  missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo, v28);
    missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)missionIdToEventMissionConditionEntityListDictionary + 23) + 8LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 56) )
    {
      j_il2cpp_runtime_class_init_0(missionIdToEventMissionConditionEntityListDictionary, v28);
      missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)missionIdToEventMissionConditionEntityListDictionary + 23);
    v42 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionConditionEntity__TypeInfo, v28, v30, v31);
    System_Comparison_object____ctor(v42, v43, Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, 0LL);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v42;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v27 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56244000(
    v27,
    v42,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v27,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__getMissionCondListByType(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventMissionConditionEntity_array *MissionCondList; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x0
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x8
  __int64 v27; // x22
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B1621B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&missionId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11, v12);
    byte_4B1621B = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_17;
  v26 = *(_QWORD *)&MissionCondList->max_length;
  if ( v26 && (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v27 >= (unsigned int)v26 )
        sub_1BCAA44(v18, v19);
      v19 = (int64_t)MissionCondList->m_Items[v27];
      if ( !v19 )
        break;
      if ( *(_DWORD *)(v19 + 20) == type )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v29 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v19,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v19, v20, v21, v22, v23, v24, v25);
        }
      }
      LODWORD(v26) = MissionCondList->max_length;
      if ( (int)++v27 >= (int)v26 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v17;
    }
LABEL_17:
    sub_1BCAA3C(v18, v19);
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_array *__fastcall EventMissionConditionMaster__getMissionCondListHighPriority(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x19
  const MethodInfo *v16; // x3
  EventMissionConditionEntity_array *MissionCondList; // x0
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x8
  int64_t *m_Items; // x9
  int64_t v27; // x10
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B1621A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&missionId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v13, v14);
    byte_4B1621A = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&missionId,
                                                       *(_QWORD *)&progressType);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v16);
  if ( !MissionCondList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&MissionCondList->max_length < 1 )
    goto LABEL_21;
  v18 = 0LL;
  v25 = (unsigned int)*(_QWORD *)&MissionCondList->max_length;
  m_Items = (int64_t *)MissionCondList->m_Items;
  do
  {
    v27 = *m_Items;
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v27 )
      goto LABEL_22;
    if ( *(_DWORD *)(v27 + 20) == progressType )
    {
LABEL_9:
      if ( v18 )
      {
        if ( !v27 )
          goto LABEL_22;
        if ( *(_DWORD *)(v27 + 24) > *(_DWORD *)(v18 + 24) )
          v18 = *m_Items;
      }
      else
      {
        v18 = *m_Items;
      }
    }
    --v25;
    ++m_Items;
  }
  while ( v25 );
  if ( !v18 )
  {
LABEL_21:
    if ( v15 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v15,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_22:
    sub_1BCAA3C(MissionCondList, v18);
  }
  if ( !v15 )
    goto LABEL_22;
  items = v15->fields._items;
  v29 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v18,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v18, v19, v20, v21, v22, v23, v24);
  }
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v15,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x22
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w0
  int32_t v24; // w23
  int32_t v25; // w24
  int missionId; // w29
  Il2CppObject *Item; // x0
  const MethodInfo *v28; // x3
  EventMissionConditionEntity_o *v29; // x25
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_4B1621C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&missionType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventMissionConditionEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    byte_4B1621C = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    *(_QWORD *)&missionType,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  NetworkManager__getServerDateTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v25,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v29 = (EventMissionConditionEntity_o *)Item;
        methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v28) )
          {
            missionId = v29->fields.missionId;
          }
          else if ( missionId == v29->fields.missionId && v29->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                                     v29,
                                                                                                     v21);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v19 )
                break;
              v21 = (const MethodInfo *)(unsigned int)v29->fields.missionId;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_int__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v19,
                  (int32_t)v21,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v19->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v21;
              }
            }
          }
        }
      }
      if ( v24 == ++v25 )
        return v19;
    }
LABEL_26:
    sub_1BCAA3C(list, v21);
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_c **v3; // x27
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  int32_t Month; // w22
  int32_t Day; // w23
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x21
  __int64 v39; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v42; // x2
  __int64 v43; // x3
  int32_t v44; // w24
  int32_t v45; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v47; // x26
  __int64 methodPtr_low; // x10
  NetworkManager_c *v49; // x0
  NetworkManager_c **v50; // x23
  int64_t monitor; // x27
  __int64 v52; // x1
  int32_t v53; // w27
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  bool v58; // zf
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_Comparison_T__o *v63; // x19
  Il2CppObject *v64; // x20
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int32_t v73; // [xsp+Ch] [xbp-74h]
  uint64_t v74; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v76; // 0:x0.8
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x0.8
  System_DateTime_o v79; // 0:x0.8

  v3 = &NetworkManager_TypeInfo;
  if ( (byte_4B1621D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionConditionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v10, v11);
    sub_1BCA7E0(&EventMissionConditionEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__, v28, v29);
    sub_1BCA7E0(&EventMissionConditionMaster___c_TypeInfo, v30, v31);
    byte_4B1621D = 1;
  }
  v74 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v32);
  v76.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v76, 0LL);
  v77.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v77, 0LL);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v44 = Count;
    v45 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v45,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v47 = Item;
        methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId
          && HIDWORD(Item[1].klass) == 3
          && LODWORD(Item[2].monitor) == 12 )
        {
          v49 = *v3;
          v73 = Day;
          v50 = v3;
          monitor = (int64_t)v47[3].monitor;
          if ( !v49->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v49, v39);
          v74 = NetworkManager__getServerDateTime_39270492(monitor, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v52);
          v78.fields._dateData = (uint64_t)&v74;
          v53 = System_DateTime__get_Month(v78, 0LL);
          v79.fields._dateData = (uint64_t)&v74;
          list = (void *)System_DateTime__get_Day(v79, 0LL);
          v58 = Month == v53;
          v3 = v50;
          Day = v73;
          if ( v58 && v73 == (_DWORD)list )
          {
            if ( !v38 )
              break;
            items = v38->fields._items;
            v60 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
            ++v38->fields._version;
            if ( !items )
              break;
            size = v38->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v38,
                v47,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v62 = &items->obj.klass + size;
              v38->fields._size = size + 1;
              v62[4] = (Il2CppClass *)v47;
              sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v47, v42, v43, v54, v55, v56, v57);
            }
          }
        }
      }
      if ( v44 == ++v45 )
        goto LABEL_30;
    }
LABEL_42:
    sub_1BCAA3C(list, v39);
  }
LABEL_30:
  list = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo, v39);
    list = EventMissionConditionMaster___c_TypeInfo;
  }
  v63 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v63 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v39);
      list = EventMissionConditionMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)**((_QWORD **)list + 23);
    v63 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionConditionEntity__TypeInfo, v39, v42, v43);
    System_Comparison_object____ctor(
      v63,
      v64,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      0LL);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v63;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)v63, v66, v67, v68, v69, v70, v71);
  }
  if ( !v38 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_56244000(
    v38,
    v63,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v38->fields._size < 1 )
    return 0;
  list = System_Collections_Generic_List_object___get_Item(
           v38,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
  if ( !list )
    goto LABEL_42;
  return *((_DWORD *)list + 4);
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16222 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionConditionMaster___c_TypeInfo, v1, v2);
    byte_4B16222 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMissionConditionMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMissionConditionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMissionConditionMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventMissionConditionMaster___c___ctor(
        EventMissionConditionMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionConditionMaster___c___getMissionCondList_b__8_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}