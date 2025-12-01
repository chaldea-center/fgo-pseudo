void EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC7422 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    byte_4CC7422 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    139,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppClass *klass; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CC7424 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    this = (EventMissionConditionMaster_o *)sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_4CC7424 = 1;
  }
  value = 0;
  if ( !eventMissionConditionEntity )
    goto LABEL_14;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    value = (Il2CppObject *)v11;
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (Il2CppObject *)v11,
      (const MethodInfo_3462280 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v13 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1C71608(this, eventMissionConditionEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventMissionConditionEntity,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v15[4] = eventMissionConditionEntity;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)eventMissionConditionEntity, v5, v6, v7, v8, v9, v10);
  }
}


void EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  EventMissionConditionEntity_o *v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  if ( (byte_4CC7423 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7423 = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_346241C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0) )
  {
    sub_1C71608(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0);
    }
    v14 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                                             Enumerator,
                                             *(_QWORD *)(v13 + 8));
    if ( v14 )
      EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v14, v15);
  }
  v16 = Enumerator->klass;
  v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v18 - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_25;
    }
    v19 = (__int64)&v16->vtable[*v18];
  }
  else
  {
LABEL_25:
    v19 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(Enumerator, *(_QWORD *)(v19 + 8));
}


System_Collections_Generic_List_EventMissionConditionEntity__o *EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x8
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4CC742D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntityList__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_4CC742D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C71608(0, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_9;
        }
        v12 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_9:
        v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
              Enumerator,
              *(_QWORD *)(v12 + 8))
          & 1) == 0 )
        break;
      v13 = Enumerator->klass;
      v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v15 = &v13->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_16;
        }
        v16 = (__int64)&v13->vtable[*v15];
      }
      else
      {
LABEL_16:
        v16 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0);
      }
      v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
              Enumerator,
              *(_QWORD *)(v16 + 8));
      v25 = v17;
      if ( !v17 )
        sub_1C71608(0, v18);
      if ( *(_DWORD *)(v17 + 32) == missionTargetId )
      {
        if ( !v5 )
          sub_1C71608(v17, v18);
        items = v5->fields._items;
        v27 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C71608(v17, v18);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v17,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v25;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 4), v25, v19, v20, v21, v22, v23, v24);
        }
      }
    }
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_29;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_29:
      v33 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
      Enumerator,
      *(_QWORD *)(v33 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_o *EventMissionConditionMaster__GetEntity(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7420 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
    byte_4CC7420 = 1;
  }
  PK = (Il2CppObject *)EventMissionConditionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_340D938 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionConditionEntity__o *EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x8
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4CC742E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntityList__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_4CC742E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C71608(0, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_9;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_9:
        v14 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
              Enumerator,
              *(_QWORD *)(v14 + 8))
          & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_16;
        }
        v18 = (__int64)&v15->vtable[*v17];
      }
      else
      {
LABEL_16:
        v18 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0);
      }
      v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
              Enumerator,
              *(_QWORD *)(v18 + 8));
      v27 = v19;
      if ( !v19 )
        sub_1C71608(0, v20);
      if ( *(_DWORD *)(v19 + 32) == targetId && *(_DWORD *)(v19 + 40) == condType )
      {
        if ( !v7 )
          sub_1C71608(v19, v20);
        items = v7->fields._items;
        v29 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C71608(v19, v20);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v19,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v27;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
        }
      }
    }
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_30;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_30:
      v35 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
      Enumerator,
      *(_QWORD *)(v35 + 8));
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v7;
}


System_Collections_Generic_List_EventMissionConditionEntity__o *EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        int32_t progressType,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4CC742F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_4CC742F = 1;
  }
  value = 0;
  memset(&v27, 0, sizeof(v27));
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v9;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_21:
    sub_1C71608(missionIdToEventMissionConditionEntityListDictionary, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C71608(v12, v13);
    if ( HIDWORD(v27.fields._current[1].klass) == progressType && LODWORD(v27.fields._current[2].monitor) == condType )
    {
      if ( !v9 )
        sub_1C71608(v12, v13);
      items = v9->fields._items;
      v22 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C71608(v12, v13);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          current,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)current;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)current, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionConditionMaster__IsMissionRunning(
        EventMissionConditionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  char v6; // w21
  char v7; // w19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  int klass_high; // w9
  bool v11; // w19
  char v12; // w8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4CC742C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_4CC742C = 1;
  }
  value = 0;
  memset(&v15, 0, sizeof(v15));
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v12 = 1;
    return v12 ^ 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_25:
    sub_1C71608(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v6 = 0;
  v15 = v14;
  v7 = 1;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v8 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
      v12 = v7 & 1;
      return v12 ^ 1;
    }
    if ( !v15.fields._current )
      sub_1C71608(v8, v9);
    klass_high = HIDWORD(v15.fields._current[1].klass);
    if ( (klass_high & 0xFFFFFFFE) != 2 )
    {
      if ( klass_high == 4
        && !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v15.fields._current, v9) )
      {
        v7 = 0;
      }
      goto LABEL_15;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v15.fields._current, v9) )
      break;
    v6 = 1;
LABEL_15:
    if ( (v6 & 1) != 0 && (v7 & 1) == 0 )
    {
      v11 = 1;
      goto LABEL_22;
    }
  }
  v11 = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v11;
}


void EventMissionConditionMaster__OnListChangedImplementation(
        EventMissionConditionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  System_NotImplementedException_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  EventMissionConditionEntity_o *v25; // x22
  __int64 v26; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  System_Collections_IEnumerator_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  EventMissionConditionEntity_o *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x10
  const MethodInfo *v54; // x2
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x20
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0

  v4 = this;
  if ( (byte_4CC7426 & 1) == 0 )
  {
    sub_1C713B0(&EventMissionConditionEntity_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerable_TypeInfo);
    this = (EventMissionConditionMaster_o *)sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7426 = 1;
  }
  if ( !e )
    sub_1C71608(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_1C713C4(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_1C715FC(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_1C713C4(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
        sub_1C714D8(v12, v13);
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
      v8 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
      if ( *(_WORD *)&oldItems->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v10 = sub_1C47738(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      if ( !v15 )
        sub_1C71608(0, v14);
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 4;
            if ( !v17 )
              goto LABEL_20;
          }
          v19 = v16 + 16LL * *v18 + 312;
        }
        else
        {
LABEL_20:
          v19 = sub_1C47738(v15, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
          break;
        v20 = *(_QWORD *)v15;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v22 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1C47738(v15, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        v25 = (EventMissionConditionEntity_o *)v24;
        if ( v24 )
        {
          v26 = *(_QWORD *)v24;
          naturalAligment = EventMissionConditionEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)naturalAligment
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v26 + 200) + 8 * naturalAligment - 8) == EventMissionConditionEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v26 + 376))(v24, *(_QWORD *)(v26 + 384)) )
              EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v4, v25, v28);
          }
        }
      }
      v29 = sub_1C714EC(v15, System_IDisposable_TypeInfo);
      if ( v29 )
      {
        v30 = *(_QWORD *)v29;
        v31 = v29;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_39;
          }
          v34 = v30 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_39:
          v34 = sub_1C47738(v29, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v36 = newItems->klass;
      v37 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v38 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_47;
        }
        v39 = (__int64)&v36->vtable[*v38];
      }
      else
      {
LABEL_47:
        v39 = sub_1C47738(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v41 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v39)(newItems, *(_QWORD *)(v39 + 8));
      if ( !v41 )
        sub_1C71608(0, v40);
      while ( 1 )
      {
        v42 = *(_QWORD *)v41;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_54;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_54:
          v45 = sub_1C47738(v41, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
          break;
        v46 = *(_QWORD *)v41;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v48 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v47;
            v48 += 2;
            if ( !v47 )
              goto LABEL_61;
          }
          v49 = v46 + 16LL * (*(_DWORD *)v48 + 1) + 312;
        }
        else
        {
LABEL_61:
          v49 = sub_1C47738(v41, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
        v51 = (EventMissionConditionEntity_o *)v50;
        if ( v50 )
        {
          v52 = *(_QWORD *)v50;
          v53 = EventMissionConditionEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) >= (unsigned int)v53
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v52 + 200) + 8 * v53 - 8) == EventMissionConditionEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v52 + 376))(v50, *(_QWORD *)(v52 + 384)) )
          {
            EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v4, v51, v54);
          }
        }
      }
      v55 = sub_1C714EC(v41, System_IDisposable_TypeInfo);
      if ( v55 )
      {
        v56 = *(_QWORD *)v55;
        v57 = v55;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_73;
          }
          v60 = v56 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_73:
          v60 = sub_1C47738(v55, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
      }
    }
  }
}


void EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CC7425 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
    this = (EventMissionConditionMaster_o *)sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    byte_4CC7425 = 1;
  }
  value = 0;
  if ( !eventMissionConditionEntity )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          eventMissionConditionEntity->fields.missionId,
          &value,
          (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_object___Remove(
                                            (System_Collections_Generic_List_object__o *)value,
                                            (Il2CppObject *)eventMissionConditionEntity,
                                            (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1C71608(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_346371C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionConditionMaster__TryGetEntity(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7421 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
    byte_4CC7421 = 1;
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
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
}


bool EventMissionConditionMaster__checkEventMissionCondition(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *entity,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !entity )
    sub_1C71608(this, 0);
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


EventMissionConditionEntity_array *EventMissionConditionMaster__getMissionCondList(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *missionIdToEventMissionConditionEntityListDictionary; // x0
  int monitor; // w22
  int32_t v11; // w21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC7427 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__);
    sub_1C713B0(&EventMissionConditionMaster___c_TypeInfo);
    byte_4CC7427 = 1;
  }
  value = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)missionIdToEventMissionConditionEntityListDictionary,
         missionId,
         &value,
         (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    missionIdToEventMissionConditionEntityListDictionary = value;
    if ( !value )
      goto LABEL_26;
    monitor = (int)value[1].monitor;
    if ( monitor >= 1 )
    {
      v11 = 0;
      do
      {
        missionIdToEventMissionConditionEntityListDictionary = System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                 v11,
                                                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !missionIdToEventMissionConditionEntityListDictionary )
          break;
        v8 = (Il2CppClass *)missionIdToEventMissionConditionEntityListDictionary;
        if ( *((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 8) == eventId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)missionIdToEventMissionConditionEntityListDictionary,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = v8;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v8, v12, v13, v14, v15, v16, v17);
          }
        }
        if ( monitor == ++v11 )
          goto LABEL_18;
        missionIdToEventMissionConditionEntityListDictionary = value;
      }
      while ( value );
LABEL_26:
      sub_1C71608(missionIdToEventMissionConditionEntityListDictionary, v8);
    }
  }
LABEL_18:
  missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)missionIdToEventMissionConditionEntityListDictionary + 23) + 8LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 56) )
    {
      j_il2cpp_runtime_class_init_0(missionIdToEventMissionConditionEntityListDictionary);
      missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)missionIdToEventMissionConditionEntityListDictionary + 23);
    v22 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__, 0);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v22;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_58794460(
    v7,
    v22,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionConditionEntity__o *EventMissionConditionMaster__getMissionCondListByType(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t type,
        const MethodInfo *method)
{
  EventMissionConditionEntity_array *MissionCondList; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x0
  EventMissionConditionEntity_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  il2cpp_array_size_t max_length; // x8
  __int64 v20; // x22
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4CC7429 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_4CC7429 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_17;
  max_length = MissionCondList->max_length;
  if ( max_length && (int)max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= (unsigned int)max_length )
        sub_1C71610(v11);
      v12 = MissionCondList->m_Items[v20];
      if ( !v12 )
        break;
      if ( v12->fields.missionProgressType == type )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v12,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
      LODWORD(max_length) = MissionCondList->max_length;
      if ( (int)++v20 >= (int)max_length )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v10;
    }
LABEL_17:
    sub_1C71608(v11, v12);
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v10;
}


EventMissionConditionEntity_array *EventMissionConditionMaster__getMissionCondListHighPriority(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  const MethodInfo *v10; // x3
  EventMissionConditionEntity_array *MissionCondList; // x0
  EventMissionConditionEntity_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 max_length; // x8
  EventMissionConditionEntity_o **m_Items; // x9
  EventMissionConditionEntity_o *v21; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4CC7428 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_4CC7428 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  MissionCondList = EventMissionConditionMaster__getMissionCondList(this, eventId, missionId, v10);
  if ( !MissionCondList )
    goto LABEL_22;
  if ( (int)MissionCondList->max_length < 1 )
    goto LABEL_21;
  v12 = 0;
  max_length = (unsigned int)MissionCondList->max_length;
  m_Items = MissionCondList->m_Items;
  do
  {
    v21 = *m_Items;
    if ( progressType < 0 )
      goto LABEL_9;
    if ( !v21 )
      goto LABEL_22;
    if ( v21->fields.missionProgressType == progressType )
    {
LABEL_9:
      if ( v12 )
      {
        if ( !v21 )
          goto LABEL_22;
        if ( v21->fields.priority > v12->fields.priority )
          v12 = *m_Items;
      }
      else
      {
        v12 = *m_Items;
      }
    }
    --max_length;
    ++m_Items;
  }
  while ( max_length );
  if ( !v12 )
  {
LABEL_21:
    if ( v9 )
      return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v9,
                                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_22:
    sub_1C71608(MissionCondList, v12);
  }
  if ( !v9 )
    goto LABEL_22;
  items = v9->fields._items;
  v23 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v12;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v9,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


System_Collections_Generic_List_int__o *EventMissionConditionMaster__getMissionIdListClearWithDailyOpen(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  const MethodInfo *v8; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int missionId; // w28
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x3
  EventMissionConditionEntity_o *v16; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4CC742A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC742A = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getServerDateTime(0);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    missionId = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
      if ( Item )
      {
        v16 = (EventMissionConditionEntity_o *)Item;
        if ( LODWORD(Item[2].klass) == eventId )
        {
          if ( HIDWORD(Item[1].klass) == 3
            && EventMissionConditionMaster__checkEventMissionCondition(
                 (EventMissionConditionMaster_o *)Item,
                 (EventMissionConditionEntity_o *)Item,
                 missionType,
                 v15) )
          {
            missionId = v16->fields.missionId;
          }
          else if ( missionId == v16->fields.missionId && v16->fields.missionProgressType == 4 )
          {
            list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)EventMissionConditionEntity__getMissionProgress(
                                                                                              v16,
                                                                                              v8);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v7 )
                break;
              v8 = (const MethodInfo *)(unsigned int)v16->fields.missionId;
              items = v7->fields._items;
              v18 = Method_System_Collections_Generic_List_int__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v7,
                  (int32_t)v8,
                  *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v7->fields._size = size + 1;
                items->m_Items[size] = (int)v8;
              }
            }
          }
        }
      }
      if ( v11 == ++v12 )
        return v7;
    }
LABEL_24:
    sub_1C71608(list, v8);
  }
  return v7;
}


int32_t EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_c **v3; // x27
  System_DateTime_o v6; // x0
  int32_t Month; // w22
  System_DateTime_o v8; // x0
  int32_t Day; // w23
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v14; // w24
  int32_t v15; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x26
  NetworkManager_c *v18; // x0
  NetworkManager_c **v19; // x29
  int64_t monitor; // x27
  System_DateTime_o v21; // x0
  int32_t v22; // w27
  System_DateTime_o v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  bool v30; // zf
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x19
  Il2CppObject *v36; // x20
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  uint64_t v45; // [xsp+0h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-68h] BYREF

  v3 = &NetworkManager_TypeInfo;
  if ( (byte_4CC742B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
    sub_1C713B0(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__);
    sub_1C713B0(&EventMissionConditionMaster___c_TypeInfo);
    byte_4CC742B = 1;
  }
  v45 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v6, 0);
  v8.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v8, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v15,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
      if ( Item )
      {
        v17 = Item;
        if ( LODWORD(Item[2].klass) == eventId && HIDWORD(Item[1].klass) == 3 && LODWORD(Item[2].monitor) == 12 )
        {
          v18 = *v3;
          v19 = v3;
          monitor = (int64_t)v17[3].monitor;
          if ( !v18->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v18);
          v45 = NetworkManager__getServerDateTime_41644032(monitor, 0).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v21.fields._dateData = (uint64_t)&v45;
          v22 = System_DateTime__get_Month(v21, 0);
          v23.fields._dateData = (uint64_t)&v45;
          list = (void *)System_DateTime__get_Day(v23, 0);
          v30 = Month == v22;
          v3 = v19;
          if ( v30 && Day == (_DWORD)list )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v32 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v17,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v17;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v17, v24, v25, v26, v27, v28, v29);
            }
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_28;
    }
LABEL_40:
    sub_1C71608(list, v11);
  }
LABEL_28:
  list = EventMissionConditionMaster___c_TypeInfo;
  if ( !EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo);
    list = EventMissionConditionMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionConditionMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)list + 23);
    v35 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__13_0__,
      0);
    static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v35;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0, (int32_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v10 )
    goto LABEL_40;
  System_Collections_Generic_List_object___Sort_58794460(
    v10,
    v35,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v10->fields._size < 1 )
    return 0;
  list = System_Collections_Generic_List_object___get_Item(
           v10,
           0,
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
  if ( !list )
    goto LABEL_40;
  return *((_DWORD *)list + 4);
}


void EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7430 & 1) == 0 )
  {
    sub_1C713B0(&EventMissionConditionMaster___c_TypeInfo);
    byte_4CC7430 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionConditionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventMissionConditionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionConditionMaster___c___ctor(EventMissionConditionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionConditionMaster___c___getMissionCondList_b__8_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t EventMissionConditionMaster___c___getTodayFirstMissionId_b__13_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.id - b->fields.id;
}