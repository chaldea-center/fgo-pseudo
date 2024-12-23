void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B66BDD & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__,
      method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v4);
    byte_4B66BDD = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v5;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    139,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void __fastcall EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x21
  Il2CppClass *klass; // x8
  _QWORD *v17; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v19; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B66BDF & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      eventMissionConditionEntity);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v7);
    this = (EventMissionConditionMaster_o *)sub_1BE4ACC(
                                              &System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                              v8);
    byte_4B66BDF = 1;
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
          (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (Il2CppObject *)v15;
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (Il2CppObject *)v15,
      (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v17 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1BE4D28(this, eventMissionConditionEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventMissionConditionEntity,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v19[4] = eventMissionConditionEntity;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)(v19 + 4),
      (int64_t)eventMissionConditionEntity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


void __fastcall EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  EventMissionConditionEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4B66BDE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__, v3);
    sub_1BE4ACC(&EventMissionConditionEntity_TypeInfo, v4);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4B66BDE = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0LL) )
  {
    sub_1BE4D28(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                             Enumerator,
                                             *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventMissionConditionEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionConditionEntity_TypeInfo )
      {
        EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v19, v20);
      }
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  EventMissionConditionEntity_c *v33; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4B66BE8 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1BE4ACC(&EventMissionConditionEntity_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_4B66BE8 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BE4D28(0LL, v14);
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
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v20 = Enumerator->klass;
      v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v22 = &v20->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_16;
        }
        v23 = (__int64)&v20->vtable[*v22].method;
      }
      else
      {
LABEL_16:
        v23 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
              Enumerator,
              *(_QWORD *)(v23 + 8));
      v32 = v24;
      if ( !v24 )
        goto LABEL_36;
      v33 = EventMissionConditionEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != EventMissionConditionEntity_TypeInfo )
      {
        sub_1BE4FE8(v24);
LABEL_36:
        sub_1BE4D28(v24, v25);
      }
      if ( *(_DWORD *)(v24 + 32) == missionTargetId )
      {
        if ( !v12 )
          sub_1BE4D28(v24, EventMissionConditionEntity_TypeInfo);
        items = v12->fields._items;
        v36 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1BE4D28(v24, v33);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v24,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v32;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 4), v32, v26, v27, v28, v29, v30, v31);
        }
      }
    }
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_31;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_31:
      v42 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
      Enumerator,
      *(_QWORD *)(v42 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
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

  if ( (byte_4B66BDB & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4B66BDB = 1;
  }
  PK = (Il2CppObject *)EventMissionConditionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *__fastcall EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  EventMissionConditionEntity_c *v35; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4B66BE9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&targetId);
    sub_1BE4ACC(&EventMissionConditionEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v13);
    byte_4B66BE9 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BE4D28(0LL, v16);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
            goto LABEL_16;
        }
        v25 = (__int64)&v22->vtable[*v24].method;
      }
      else
      {
LABEL_16:
        v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
              Enumerator,
              *(_QWORD *)(v25 + 8));
      v34 = v26;
      if ( !v26 )
        goto LABEL_37;
      v35 = EventMissionConditionEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionConditionEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != EventMissionConditionEntity_TypeInfo )
      {
        sub_1BE4FE8(v26);
LABEL_37:
        sub_1BE4D28(v26, v27);
      }
      if ( *(_DWORD *)(v26 + 32) == targetId && *(_DWORD *)(v26 + 40) == condType )
      {
        if ( !v14 )
          sub_1BE4D28(v26, EventMissionConditionEntity_TypeInfo);
        items = v14->fields._items;
        v38 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1BE4D28(v26, v35);
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v26,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v34;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v34, v28, v29, v30, v31, v32, v33);
        }
      }
    }
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_32;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_32:
      v44 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
      Enumerator,
      *(_QWORD *)(v44 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v14;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B66BEA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15);
    byte_4B66BEA = 1;
  }
  value = 0LL;
  memset(&v34, 0, sizeof(v34));
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_21:
    sub_1BE4D28(missionIdToEventMissionConditionEntityListDictionary, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1BE4D28(v19, v20);
    if ( HIDWORD(v34.fields._current[1].klass) == progressType && LODWORD(v34.fields._current[2].monitor) == condType )
    {
      if ( !v16 )
        sub_1BE4D28(v19, v20);
      items = v16->fields._items;
      v29 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        sub_1BE4D28(v19, v20);
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          current,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v31[4] = (Il2CppClass *)current;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)current, v21, v22, v23, v24, v25, v26);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionConditionMaster__IsMissionRunning(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v10; // w21
  char v11; // w19
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  int klass_high; // w9
  bool v15; // w19
  char v16; // w8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4B66BE7 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v8);
    byte_4B66BE7 = 1;
  }
  value = 0LL;
  memset(&v19, 0, sizeof(v19));
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v16 = 1;
    return v16 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_25:
    sub_1BE4D28(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v10 = 0;
  v19 = v18;
  v11 = 1;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
      v16 = v11 & 1;
      return v16 ^ 1;
    }
    if ( !v19.fields._current )
      sub_1BE4D28(v12, v13);
    klass_high = HIDWORD(v19.fields._current[1].klass);
    if ( (klass_high & 0xFFFFFFFE) != 2 )
    {
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v19.fields._current, v13) )
      {
        v11 = 0;
      }
      goto LABEL_15;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v19.fields._current, v13) )
      break;
    v10 = 1;
LABEL_15:
    if ( (v10 & 1) != 0 && (v11 & 1) == 0 )
    {
      v15 = 1;
      goto LABEL_22;
    }
  }
  v15 = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v15;
}


void __fastcall EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x0
  System_NotImplementedException_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  EventMissionConditionEntity_o *v28; // x22
  __int64 v29; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  EventMissionConditionEntity_o *v54; // x21
  __int64 v55; // x8
  __int64 v56; // x10
  const MethodInfo *v57; // x2
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x20
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  v4 = this;
  if ( (byte_4B66BE1 & 1) == 0 )
  {
    sub_1BE4ACC(&EventMissionConditionEntity_TypeInfo, e);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_IEnumerable_TypeInfo, v6);
    this = (EventMissionConditionMaster_o *)sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4B66BE1 = 1;
  }
  if ( !e )
    sub_1BE4D28(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v14 = sub_1BE4AE0(&System_NotImplementedException_TypeInfo);
        v15 = (System_NotImplementedException_o *)sub_1BE4D18(v14);
        System_NotImplementedException___ctor(v15, 0LL);
        v16 = sub_1BE4AE0(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
        sub_1BE4BF4(v15, v16);
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
      v11 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1C36AAC(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v18 )
        sub_1BE4D28(0LL, v17);
      while ( 1 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            v21 += 4;
            if ( !v20 )
              goto LABEL_20;
          }
          v22 = v19 + 16LL * *v21 + 312;
        }
        else
        {
LABEL_20:
          v22 = sub_1C36AAC(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
          break;
        v23 = *(_QWORD *)v18;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_27;
          }
          v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
        }
        else
        {
LABEL_27:
          v26 = sub_1C36AAC(v18, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
        v28 = (EventMissionConditionEntity_o *)v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)v27;
          methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * methodPtr_low - 8) == EventMissionConditionEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
              EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v4, v28, v31);
          }
        }
      }
      v32 = sub_1BE4C08(v18, System_IDisposable_TypeInfo);
      if ( v32 )
      {
        v33 = *(_QWORD *)v32;
        v34 = v32;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_39;
          }
          v37 = v33 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_39:
          v37 = sub_1C36AAC(v32, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v39 = newItems->klass;
      v40 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_47;
        }
        v42 = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_47:
        v42 = sub_1C36AAC(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
      if ( !v44 )
        sub_1BE4D28(0LL, v43);
      while ( 1 )
      {
        v45 = *(_QWORD *)v44;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_54;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_54:
          v48 = sub_1C36AAC(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
          break;
        v49 = *(_QWORD *)v44;
        v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v51 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v50;
            v51 += 2;
            if ( !v50 )
              goto LABEL_61;
          }
          v52 = v49 + 16LL * (*(_DWORD *)v51 + 1) + 312;
        }
        else
        {
LABEL_61:
          v52 = sub_1C36AAC(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
        v54 = (EventMissionConditionEntity_o *)v53;
        if ( v53 )
        {
          v55 = *(_QWORD *)v53;
          v56 = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 304LL) >= (unsigned int)v56
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v55 + 200) + 8 * v56 - 8) == EventMissionConditionEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v55 + 376))(v53, *(_QWORD *)(v55 + 384)) )
          {
            EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v4, v54, v57);
          }
        }
      }
      v58 = sub_1BE4C08(v44, System_IDisposable_TypeInfo);
      if ( v58 )
      {
        v59 = *(_QWORD *)v58;
        v60 = v58;
        v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
          {
            --v61;
            v62 += 4;
            if ( !v61 )
              goto LABEL_73;
          }
          v63 = v59 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_73:
          v63 = sub_1C36AAC(v58, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B66BE0 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__,
      eventMissionConditionEntity);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__, v6);
    this = (EventMissionConditionMaster_o *)sub_1BE4ACC(
                                              &Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__,
                                              v7);
    byte_4B66BE0 = 1;
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
          (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_object___Remove(
                                            (System_Collections_Generic_List_object__o *)value,
                                            (Il2CppObject *)eventMissionConditionEntity,
                                            (const MethodInfo_35ED74C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1BE4D28(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_3251CF0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
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

  if ( (byte_4B66BDC & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__,
      entity);
    byte_4B66BDC = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_1BE4D28(this, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  int64_t v18; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  int monitor; // w22
  int32_t v21; // w21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x20
  Il2CppObject *v33; // x21
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B66BE2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, v15);
    sub_1BE4ACC(&EventMissionConditionMaster___c_TypeInfo, v16);
    byte_4B66BE2 = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)missionIdToEventMissionConditionEntityListDictionary,
         missionId,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    missionIdToEventMissionConditionEntityListDictionary = value;
    if ( !value )
      goto LABEL_26;
    monitor = (int)value[1].monitor;
    if ( monitor >= 1 )
    {
      v21 = 0;
      do
      {
        missionIdToEventMissionConditionEntityListDictionary = System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                 v21,
                                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !missionIdToEventMissionConditionEntityListDictionary )
          break;
        v18 = (int64_t)missionIdToEventMissionConditionEntityListDictionary;
        if ( *((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 8) == eventId )
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
              (Il2CppObject *)missionIdToEventMissionConditionEntityListDictionary,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v18;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), v18, v22, v23, v24, v25, v26, v27);
          }
        }
        if ( monitor == ++v21 )
          goto LABEL_18;
        missionIdToEventMissionConditionEntityListDictionary = value;
      }
      while ( value );
LABEL_26:
      sub_1BE4D28(missionIdToEventMissionConditionEntityListDictionary, v18);
    }
  }
LABEL_18:
  missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)missionIdToEventMissionConditionEntityListDictionary + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 56) )
    {
      j_il2cpp_runtime_class_init_0(missionIdToEventMissionConditionEntityListDictionary);
      missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)missionIdToEventMissionConditionEntityListDictionary + 23);
    v32 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, 0LL);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v32;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v32, v35, v36, v37, v38, v39, v40);
  }
  if ( !v17 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56548584(
    v17,
    v32,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v17,
                                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
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
  __int64 v10; // x1
  EventMissionConditionEntity_array *MissionCondList; // x20
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x0
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  __int64 v22; // x22
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66BE4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v10);
    byte_4B66BE4 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_17;
  v21 = *(_QWORD *)&MissionCondList->max_length;
  if ( v21 && (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v22 >= (unsigned int)v21 )
        sub_1BE4D30(v13, v14);
      v14 = (int64_t)MissionCondList->m_Items[v22];
      if ( !v14 )
        break;
      if ( *(_DWORD *)(v14 + 20) == type )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v14,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v14;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v14, v15, v16, v17, v18, v19, v20);
        }
      }
      LODWORD(v21) = MissionCondList->max_length;
      if ( (int)++v22 >= (int)v21 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
    }
LABEL_17:
    sub_1BE4D28(v13, v14);
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
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
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x3
  EventMissionConditionEntity_array *MissionCondList; // x0
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x8
  int64_t *m_Items; // x9
  int64_t v24; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B66BE3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_4B66BE3 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v13);
  if ( !MissionCondList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&MissionCondList->max_length < 1 )
    goto LABEL_21;
  v15 = 0LL;
  v22 = (unsigned int)*(_QWORD *)&MissionCondList->max_length;
  m_Items = (int64_t *)MissionCondList->m_Items;
  do
  {
    v24 = *m_Items;
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v24 )
      goto LABEL_22;
    if ( *(_DWORD *)(v24 + 20) == progressType )
    {
LABEL_9:
      if ( v15 )
      {
        if ( !v24 )
          goto LABEL_22;
        if ( *(_DWORD *)(v24 + 24) > *(_DWORD *)(v15 + 24) )
          v15 = *m_Items;
      }
      else
      {
        v15 = *m_Items;
      }
    }
    --v22;
    ++m_Items;
  }
  while ( v22 );
  if ( !v15 )
  {
LABEL_21:
    if ( v12 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v12,
                                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_22:
    sub_1BE4D28(MissionCondList, v15);
  }
  if ( !v12 )
    goto LABEL_22;
  items = v12->fields._items;
  v26 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v15,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v15;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v15, v16, v17, v18, v19, v20, v21);
  }
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v12,
                                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x22
  const MethodInfo *v14; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int missionId; // w29
  Il2CppObject *Item; // x0
  const MethodInfo *v21; // x3
  EventMissionConditionEntity_o *v22; // x25
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4B66BE5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&EventMissionConditionEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    byte_4B66BE5 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getServerDateTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = (EventMissionConditionEntity_o *)Item;
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
                 v21) )
          {
            missionId = v22->fields.missionId;
          }
          else if ( missionId == v22->fields.missionId && v22->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                                     v22,
                                                                                                     v14);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v13 )
                break;
              v14 = (const MethodInfo *)(unsigned int)v22->fields.missionId;
              items = v13->fields._items;
              v25 = Method_System_Collections_Generic_List_int__Add__;
              ++v13->fields._version;
              if ( !items )
                break;
              size = v13->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v13,
                  (int32_t)v14,
                  *(const MethodInfo_35CF200 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v13->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v14;
              }
            }
          }
        }
      }
      if ( v17 == ++v18 )
        return v13;
    }
LABEL_26:
    sub_1BE4D28(list, v14);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_c **v3; // x27
  __int64 v6; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t Month; // w22
  int32_t Day; // w23
  System_Collections_Generic_List_object__o *v21; // x21
  __int64 v22; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v25; // w24
  int32_t v26; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v28; // x26
  __int64 methodPtr_low; // x10
  NetworkManager_c *v30; // x0
  NetworkManager_c **v31; // x23
  int64_t monitor; // x27
  int32_t v33; // w27
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  bool v40; // zf
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x19
  Il2CppObject *v46; // x20
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t v55; // [xsp+Ch] [xbp-74h]
  uint64_t v56; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8
  System_DateTime_o v60; // 0:x0.8
  System_DateTime_o v61; // 0:x0.8

  v3 = &NetworkManager_TypeInfo;
  if ( (byte_4B66BE6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&System_Comparison_EventMissionConditionEntity__TypeInfo, v7);
    sub_1BE4ACC(&System_DateTime_TypeInfo, v8);
    sub_1BE4ACC(&EventMissionConditionEntity_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v16);
    sub_1BE4ACC(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__, v17);
    sub_1BE4ACC(&EventMissionConditionMaster___c_TypeInfo, v18);
    byte_4B66BE6 = 1;
  }
  v56 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v58.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v58, 0LL);
  v59.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v59, 0LL);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v26,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = Item;
        methodPtr_low = LOBYTE(EventMissionConditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionConditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionConditionEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId
          && HIDWORD(Item[1].klass) == 3
          && LODWORD(Item[2].monitor) == 12 )
        {
          v30 = *v3;
          v55 = Day;
          v31 = v3;
          monitor = (int64_t)v28[3].monitor;
          if ( !v30->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v30);
          v56 = NetworkManager__getServerDateTime_39466056(monitor, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v60.fields._dateData = (uint64_t)&v56;
          v33 = System_DateTime__get_Month(v60, 0LL);
          v61.fields._dateData = (uint64_t)&v56;
          list = (void *)System_DateTime__get_Day(v61, 0LL);
          v40 = Month == v33;
          v3 = v31;
          Day = v55;
          if ( v40 && v55 == (_DWORD)list )
          {
            if ( !v21 )
              break;
            items = v21->fields._items;
            v42 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                v28,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v44[4] = (Il2CppClass *)v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v28, v34, v35, v36, v37, v38, v39);
            }
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_30;
    }
LABEL_42:
    sub_1BE4D28(list, v22);
  }
LABEL_30:
  list = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    list = EventMissionConditionMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionConditionMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)list + 23);
    v45 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v45,
      v46,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      0LL);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v45;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v21 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_56548584(
    v21,
    v45,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v21->fields._size < 1 )
    return 0;
  list = System_Collections_Generic_List_object___get_Item(
           v21,
           0,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
  if ( !list )
    goto LABEL_42;
  return *((_DWORD *)list + 4);
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66BEB & 1) == 0 )
  {
    sub_1BE4ACC(&EventMissionConditionMaster___c_TypeInfo, v1);
    byte_4B66BEB = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionConditionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventMissionConditionMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}