void __fastcall EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BAE8C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__,
      method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v4);
    byte_49BAE8C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v5;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (int32_t)v5,
    v6,
    v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    139,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppClass *klass; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49BAE8E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      eventMissionConditionEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v7);
    this = (EventMissionConditionMaster_o *)sub_1B4CF90(
                                              &System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                              v8);
    byte_49BAE8E = 1;
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
          (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (Il2CppObject *)v11;
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (Il2CppObject *)v11,
      (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v13 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1B4D1EC(this, eventMissionConditionEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventMissionConditionEntity,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v15[4] = eventMissionConditionEntity;
    sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 4), (int32_t)eventMissionConditionEntity, v9, v10);
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
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  EventMissionConditionEntity_o *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_49BAE8D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__, v3);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v4);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, v5);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_49BAE8D = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_31F7008 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0LL) )
  {
    sub_1B4D1EC(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0LL);
    }
    v18 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                             Enumerator,
                                             *(_QWORD *)(v17 + 8));
    if ( v18 )
      EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v18, v19);
  }
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_25;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_25:
    v23 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_49BAE97 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntityList__,
      v5);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_49BAE97 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1B4D1EC(0LL, v14);
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
        p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
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
        v23 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
              Enumerator,
              *(_QWORD *)(v23 + 8));
      v28 = v24;
      if ( !v24 )
        sub_1B4D1EC(0LL, v25);
      if ( *(_DWORD *)(v24 + 32) == missionTargetId )
      {
        if ( !v12 )
          sub_1B4D1EC(v24, v25);
        items = v12->fields._items;
        v30 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B4D1EC(v24, v25);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v24,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v28;
          sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
        }
      }
    }
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_29;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_29:
      v36 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
      Enumerator,
      *(_QWORD *)(v36 + 8));
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

  if ( (byte_49BAE8A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_49BAE8A = 1;
  }
  PK = (Il2CppObject *)EventMissionConditionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31A2454 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_49BAE98 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__,
      *(_QWORD *)&targetId);
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntityList__,
      v7);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v13);
    byte_49BAE98 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1B4D1EC(0LL, v16);
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
        p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
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
        v25 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
              Enumerator,
              *(_QWORD *)(v25 + 8));
      v30 = v26;
      if ( !v26 )
        sub_1B4D1EC(0LL, v27);
      if ( *(_DWORD *)(v26 + 32) == targetId && *(_DWORD *)(v26 + 40) == condType )
      {
        if ( !v14 )
          sub_1B4D1EC(v26, v27);
        items = v14->fields._items;
        v32 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1B4D1EC(v26, v27);
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v26,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v30;
          sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 4), v30, v28, v29);
        }
      }
    }
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_30;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_30:
      v38 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
      Enumerator,
      *(_QWORD *)(v38 + 8));
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_49BAE99 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v15);
    byte_49BAE99 = 1;
  }
  value = 0LL;
  memset(&v30, 0, sizeof(v30));
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v16;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_21:
    sub_1B4D1EC(missionIdToEventMissionConditionEntityListDictionary, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1B4D1EC(v19, v20);
    if ( HIDWORD(v30.fields._current[1].klass) == progressType && LODWORD(v30.fields._current[2].monitor) == condType )
    {
      if ( !v16 )
        sub_1B4D1EC(v19, v20);
      items = v16->fields._items;
      v25 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        sub_1B4D1EC(v19, v20);
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          current,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v27[4] = (Il2CppClass *)current;
        sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), (int32_t)current, v21, v22);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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

  if ( (byte_49BAE96 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__,
      *(_QWORD *)&missionId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v8);
    byte_49BAE96 = 1;
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
          (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v16 = 1;
    return v16 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_25:
    sub_1B4D1EC(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v10 = 0;
  v19 = v18;
  v11 = 1;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
      v16 = v11 & 1;
      return v16 ^ 1;
    }
    if ( !v19.fields._current )
      sub_1B4D1EC(v12, v13);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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
  if ( (byte_49BAE90 & 1) == 0 )
  {
    sub_1B4CF90(&EventMissionConditionEntity_TypeInfo, e);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_IEnumerable_TypeInfo, v6);
    this = (EventMissionConditionMaster_o *)sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_49BAE90 = 1;
  }
  if ( !e )
    sub_1B4D1EC(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v14 = sub_1B4CFA4(&System_NotImplementedException_TypeInfo);
        v15 = (System_NotImplementedException_o *)sub_1B4D1DC(v14);
        System_NotImplementedException___ctor(v15, 0LL);
        v16 = sub_1B4CFA4(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
        sub_1B4D0B8(v15, v16);
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
        p_method = sub_1B9D724(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v18 )
        sub_1B4D1EC(0LL, v17);
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
          v22 = sub_1B9D724(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v26 = sub_1B9D724(v18, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      v32 = sub_1B4D0CC(v18, System_IDisposable_TypeInfo);
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
          v37 = sub_1B9D724(v32, System_IDisposable_TypeInfo, 0LL);
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
        v42 = sub_1B9D724(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
      if ( !v44 )
        sub_1B4D1EC(0LL, v43);
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
          v48 = sub_1B9D724(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v52 = sub_1B9D724(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      v58 = sub_1B4D0CC(v44, System_IDisposable_TypeInfo);
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
          v63 = sub_1B9D724(v58, System_IDisposable_TypeInfo, 0LL);
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
  if ( (byte_49BAE8F & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__,
      eventMissionConditionEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__, v6);
    this = (EventMissionConditionMaster_o *)sub_1B4CF90(
                                              &Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__,
                                              v7);
    byte_49BAE8F = 1;
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
          (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_object___Remove(
                                            (System_Collections_Generic_List_object__o *)value,
                                            (Il2CppObject *)eventMissionConditionEntity,
                                            (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1B4D1EC(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_31F8308 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
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

  if ( (byte_49BAE8B & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__,
      entity);
    byte_49BAE8B = 1;
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
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool __fastcall EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_1B4D1EC(this, 0LL);
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
  Il2CppClass *v18; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  int monitor; // w22
  int32_t v21; // w21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BAE91 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v14);
    sub_1B4CF90(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, v15);
    sub_1B4CF90(&EventMissionConditionMaster___c_TypeInfo, v16);
    byte_49BAE91 = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)missionIdToEventMissionConditionEntityListDictionary,
         missionId,
         &value,
         (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
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
                                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !missionIdToEventMissionConditionEntityListDictionary )
          break;
        v18 = (Il2CppClass *)missionIdToEventMissionConditionEntityListDictionary;
        if ( *((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 8) == eventId )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)missionIdToEventMissionConditionEntityListDictionary,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v27[4] = v18;
            sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v18, v22, v23);
          }
        }
        if ( monitor == ++v21 )
          goto LABEL_18;
        missionIdToEventMissionConditionEntityListDictionary = value;
      }
      while ( value );
LABEL_26:
      sub_1B4D1EC(missionIdToEventMissionConditionEntityListDictionary, v18);
    }
  }
LABEL_18:
  missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)missionIdToEventMissionConditionEntityListDictionary + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 56) )
    {
      j_il2cpp_runtime_class_init_0(missionIdToEventMissionConditionEntityListDictionary);
      missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)missionIdToEventMissionConditionEntityListDictionary + 23);
    v28 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, 0LL);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v28;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)v28, v31, v32);
  }
  if ( !v17 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56106144(
    v17,
    v28,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v17,
                                                (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
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
  EventMissionConditionEntity_o *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  __int64 v18; // x22
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49BAE93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v10);
    byte_49BAE93 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_17;
  v17 = *(_QWORD *)&MissionCondList->max_length;
  if ( v17 && (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= (unsigned int)v17 )
        sub_1B4D1F4(v13, v14);
      v14 = MissionCondList->m_Items[v18];
      if ( !v14 )
        break;
      if ( v14->fields.missionProgressType == type )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v20 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v14,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v14;
          sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v15, v16);
        }
      }
      LODWORD(v17) = MissionCondList->max_length;
      if ( (int)++v18 >= (int)v17 )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v12;
    }
LABEL_17:
    sub_1B4D1EC(v13, v14);
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
  EventMissionConditionEntity_o *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  EventMissionConditionEntity_o **m_Items; // x9
  EventMissionConditionEntity_o *v20; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49BAE92 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v11);
    byte_49BAE92 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v13);
  if ( !MissionCondList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&MissionCondList->max_length < 1 )
    goto LABEL_21;
  v15 = 0LL;
  v18 = (unsigned int)*(_QWORD *)&MissionCondList->max_length;
  m_Items = MissionCondList->m_Items;
  do
  {
    v20 = *m_Items;
    if ( (progressType & 0x80000000) != 0 )
      goto LABEL_9;
    if ( !v20 )
      goto LABEL_22;
    if ( v20->fields.missionProgressType == progressType )
    {
LABEL_9:
      if ( v15 )
      {
        if ( !v20 )
          goto LABEL_22;
        if ( v20->fields.priority > v15->fields.priority )
          v15 = *m_Items;
      }
      else
      {
        v15 = *m_Items;
      }
    }
    --v18;
    ++m_Items;
  }
  while ( v18 );
  if ( !v15 )
  {
LABEL_21:
    if ( v12 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v12,
                                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_22:
    sub_1B4D1EC(MissionCondList, v15);
  }
  if ( !v12 )
    goto LABEL_22;
  items = v12->fields._items;
  v22 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v15,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v15;
    sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v15, v16, v17);
  }
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v12,
                                                (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
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
  System_Collections_Generic_List_int__o *v12; // x22
  const MethodInfo *v13; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int missionId; // w28
  Il2CppObject *Item; // x0
  const MethodInfo *v20; // x3
  EventMissionConditionEntity_o *v21; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_49BAE94 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_TypeInfo, v11);
    byte_49BAE94 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getServerDateTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v17,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
      if ( Item )
      {
        v21 = (EventMissionConditionEntity_o *)Item;
        if ( LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v20) )
          {
            missionId = v21->fields.missionId;
          }
          else if ( missionId == v21->fields.missionId && v21->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                              v21,
                                                                                              v13);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v12 )
                break;
              v13 = (const MethodInfo *)(unsigned int)v21->fields.missionId;
              items = v12->fields._items;
              v23 = Method_System_Collections_Generic_List_int__Add__;
              ++v12->fields._version;
              if ( !items )
                break;
              size = v12->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v12,
                  (int32_t)v13,
                  *(const MethodInfo_35631B8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v12->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v13;
              }
            }
          }
        }
      }
      if ( v16 == ++v17 )
        return v12;
    }
LABEL_24:
    sub_1B4D1EC(list, v13);
  }
  return v12;
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
  int32_t Month; // w22
  int32_t Day; // w23
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 v21; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t v25; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v27; // x26
  NetworkManager_c *v28; // x0
  NetworkManager_c **v29; // x29
  int64_t monitor; // x27
  int32_t v31; // w27
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  bool v34; // zf
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  uint64_t v45; // [xsp+0h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-68h] BYREF
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8

  v3 = &NetworkManager_TypeInfo;
  if ( (byte_49BAE95 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__, v6);
    sub_1B4CF90(&System_Comparison_EventMissionConditionEntity__TypeInfo, v7);
    sub_1B4CF90(&System_DateTime_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v14);
    sub_1B4CF90(&NetworkManager_TypeInfo, v15);
    sub_1B4CF90(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__, v16);
    sub_1B4CF90(&EventMissionConditionMaster___c_TypeInfo, v17);
    byte_49BAE95 = 1;
  }
  v45 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v47.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v47, 0LL);
  v48.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v48, 0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v25,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
      if ( Item )
      {
        v27 = Item;
        if ( LODWORD(Item[2].klass) == eventId && HIDWORD(Item[1].klass) == 3 && LODWORD(Item[2].monitor) == 12 )
        {
          v28 = *v3;
          v29 = v3;
          monitor = (int64_t)v27[3].monitor;
          if ( !v28->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v28);
          v45 = NetworkManager__getServerDateTime_39105304(monitor, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v49.fields._dateData = (uint64_t)&v45;
          v31 = System_DateTime__get_Month(v49, 0LL);
          v50.fields._dateData = (uint64_t)&v45;
          list = (void *)System_DateTime__get_Day(v50, 0LL);
          v34 = Month == v31;
          v3 = v29;
          if ( v34 && Day == (_DWORD)list )
          {
            if ( !v20 )
              break;
            items = v20->fields._items;
            v36 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                v27,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v27;
              sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v27, v32, v33);
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_28;
    }
LABEL_40:
    sub_1B4D1EC(list, v21);
  }
LABEL_28:
  list = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    list = EventMissionConditionMaster___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v39 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionConditionMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)list + 23);
    v39 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v39,
      v40,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      0LL);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v39;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)v39, v42, v43);
  }
  if ( !v20 )
    goto LABEL_40;
  System_Collections_Generic_List_object___Sort_56106144(
    v20,
    v39,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v20->fields._size < 1 )
    return 0;
  list = System_Collections_Generic_List_object___get_Item(
           v20,
           0,
           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
  if ( !list )
    goto LABEL_40;
  return *((_DWORD *)list + 4);
}


void __fastcall EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAE9A & 1) == 0 )
  {
    sub_1B4CF90(&EventMissionConditionMaster___c_TypeInfo, v1);
    byte_49BAE9A = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionConditionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventMissionConditionMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t __fastcall EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.id - b->fields.id;
}