void EventMissionConditionMaster___ctor(EventMissionConditionMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970899 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    byte_5970899 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
  this->fields.missionIdToEventMissionConditionEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.missionIdToEventMissionConditionEntityListDictionary,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    141,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string___ctor__);
}


void EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        EventMissionConditionEntity_o *eventMissionConditionEntity,
        const MethodInfo *method)
{
  EventMissionConditionMaster_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppClass *klass; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_597089B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    this = (EventMissionConditionMaster_o *)sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_597089B = 1;
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
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
    value = (Il2CppObject *)v11;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      eventMissionConditionEntity->fields.missionId,
      (Il2CppObject *)v11,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
  }
  this = (EventMissionConditionMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v13 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_2213CDC(this, eventMissionConditionEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)eventMissionConditionEntity,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v15[4] = eventMissionConditionEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v15 + 4),
      (int32_t)eventMissionConditionEntity,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


void EventMissionConditionMaster__CreateMissionIdToEventMissionConditionEntityListDictionary(
        EventMissionConditionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *missionIdToEventMissionConditionEntityListDictionary; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  EventMissionConditionEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__o *v23; // [xsp+18h] [xbp-28h]

  if ( (byte_597089A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597089A = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          missionIdToEventMissionConditionEntityListDictionary,
          (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Clear__),
        (missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0) )
  {
    sub_2213CDC(missionIdToEventMissionConditionEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)missionIdToEventMissionConditionEntityListDictionary,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
  v23 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v5);
  for ( i = Enumerator; ; i = v23 )
  {
    klass = i->klass;
    v8 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_11;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v10 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            i,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    if ( !v23 )
      sub_2213CDC(v11, v12);
    v13 = v23->klass;
    v14 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_224BC3C(v23, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0);
    }
    v17 = (EventMissionConditionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                             v23,
                                             *(_QWORD *)(v16 + 8));
    if ( v17 )
      EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(this, v17, v18);
  }
  if ( v23 )
  {
    v19 = v23->klass;
    v20 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_30;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_30:
      v22 = sub_224BC3C(v23, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(v23, *(_QWORD *)(v22 + 8));
  }
}


System_Collections_Generic_List_EventMissionConditionEntity__o *EventMissionConditionMaster__GetEntitiesFromTargetId(
        EventMissionConditionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Collections_Generic_IEnumerator_T__o *v37; // [xsp+18h] [xbp-38h]

  if ( (byte_59708A3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_59708A3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    v37 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(Enumerator, v8);
    for ( i = Enumerator; ; i = v37 )
    {
      klass = i->klass;
      v11 = *(unsigned __int16 *)&i->klass->_2.rank;
      if ( *(_WORD *)&i->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_10;
        }
        v13 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v13 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
              i,
              *(_QWORD *)(v13 + 8));
      if ( (v14 & 1) == 0 )
        break;
      if ( !v37 )
        sub_2213CDC(v14, v15);
      v16 = v37->klass;
      v17 = *(unsigned __int16 *)&v37->klass->_2.rank;
      if ( *(_WORD *)&v37->klass->_2.rank )
      {
        v18 = &v16->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_18;
        }
        v19 = (__int64)&v16->vtable[*v18];
      }
      else
      {
LABEL_18:
        v19 = sub_224BC3C(v37, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0);
      }
      v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
              v37,
              *(_QWORD *)(v19 + 8));
      v27 = v20;
      if ( !v20 )
        sub_2213CDC(0, 0);
      if ( *(_DWORD *)(v20 + 32) == missionTargetId )
      {
        if ( !v5
          || (items = v5->fields._items,
              v29 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(v20, v20);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v20,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v27;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
        }
      }
    }
    if ( v37 )
    {
      v32 = v37->klass;
      v33 = *(unsigned __int16 *)&v37->klass->_2.rank;
      if ( *(_WORD *)&v37->klass->_2.rank )
      {
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_34;
        }
        v35 = (__int64)&v32->vtable[*v34];
      }
      else
      {
LABEL_34:
        v35 = sub_224BC3C(v37, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(v37, *(_QWORD *)(v35 + 8));
    }
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

  if ( (byte_5970897 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
    byte_5970897 = 1;
  }
  PK = (Il2CppObject *)EventMissionConditionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionConditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionConditionEntity__o *EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
        EventMissionConditionMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-48h]

  if ( (byte_59708A4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_59708A4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( list )
  {
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__GetEnumerator__);
    v39 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(Enumerator, v10);
    for ( i = Enumerator; ; i = v39 )
    {
      klass = i->klass;
      v13 = *(unsigned __int16 *)&i->klass->_2.rank;
      if ( *(_WORD *)&i->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v13;
          p_offset += 4;
          if ( !v13 )
            goto LABEL_10;
        }
        v15 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v15 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
              i,
              *(_QWORD *)(v15 + 8));
      if ( (v16 & 1) == 0 )
        break;
      if ( !v39 )
        sub_2213CDC(v16, v17);
      v18 = v39->klass;
      v19 = *(unsigned __int16 *)&v39->klass->_2.rank;
      if ( *(_WORD *)&v39->klass->_2.rank )
      {
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_EventMissionConditionEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_18;
        }
        v21 = (__int64)&v18->vtable[*v20];
      }
      else
      {
LABEL_18:
        v21 = sub_224BC3C(v39, System_Collections_Generic_IEnumerator_EventMissionConditionEntity__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
              v39,
              *(_QWORD *)(v21 + 8));
      v29 = v22;
      if ( !v22 )
        sub_2213CDC(0, 0);
      if ( *(_DWORD *)(v22 + 32) == targetId && *(_DWORD *)(v22 + 40) == condType )
      {
        if ( !v7
          || (items = v7->fields._items,
              v31 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
              ++v7->fields._version,
              !items) )
        {
          sub_2213CDC(v22, v22);
        }
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v22,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v29;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), v29, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    if ( v39 )
    {
      v34 = v39->klass;
      v35 = *(unsigned __int16 *)&v39->klass->_2.rank;
      if ( *(_WORD *)&v39->klass->_2.rank )
      {
        v36 = &v34->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_35;
        }
        v37 = (__int64)&v34->vtable[*v36];
      }
      else
      {
LABEL_35:
        v37 = sub_224BC3C(v39, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(v39, *(_QWORD *)(v37 + 8));
    }
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_59708A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_59708A5 = 1;
  }
  value = 0;
  memset(&v26, 0, sizeof(v26));
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v9;
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_20:
    sub_2213CDC(missionIdToEventMissionConditionEntityListDictionary, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v26 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v26;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_2213CDC(v12, 0);
    if ( HIDWORD(v26.fields._current[1].klass) == progressType && LODWORD(v26.fields._current[2].monitor) == condType )
    {
      if ( !v9
        || (items = v9->fields._items,
            v21 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_2213CDC(v12, current);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          current,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v23[4] = (Il2CppClass *)current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)current, v13, v14, v15, v16, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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
  int v7; // w20
  const MethodInfo *v8; // x1
  int klass_high; // w8
  char v10; // w19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_59708A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_59708A2 = 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.missionIdToEventMissionConditionEntityListDictionary;
  value = 0;
  memset(&v12, 0, sizeof(v12));
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_24;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          missionIdToEventMissionConditionEntityListDictionary,
          missionId,
          &value,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
  {
    LOBYTE(v7) = 1;
LABEL_19:
    v10 = v7 ^ 1;
    return v10 & 1;
  }
  missionIdToEventMissionConditionEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_24:
    sub_2213CDC(missionIdToEventMissionConditionEntityListDictionary, *(_QWORD *)&missionId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
      goto LABEL_19;
    }
    if ( !v12.fields._current )
      sub_2213CDC(0, v8);
    klass_high = HIDWORD(v12.fields._current[1].klass);
    if ( (klass_high & 0xFFFFFFFE) != 2 )
    {
      if ( klass_high == 4 )
        v7 &= EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v12.fields._current, v8);
      goto LABEL_14;
    }
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v12.fields._current, v8) )
      break;
    v6 = 1;
LABEL_14:
    if ( (v6 & 1) != 0 && (v7 & 1) == 0 )
    {
      v10 = 1;
      goto LABEL_21;
    }
  }
  v10 = 0;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v10 & 1;
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
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 i; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  EventMissionConditionEntity_o *v28; // x21
  __int64 v29; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x22
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 j; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  EventMissionConditionEntity_o *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x10
  const MethodInfo *v62; // x2
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // [xsp+28h] [xbp-48h]
  __int64 v70; // [xsp+28h] [xbp-48h]

  v4 = this;
  if ( (byte_597089D & 1) == 0 )
  {
    sub_2213A60(&EventMissionConditionEntity_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerable_TypeInfo);
    this = (EventMissionConditionMaster_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597089D = 1;
  }
  if ( !e )
    sub_2213CDC(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_2213A74(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_2213CCC(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_2213A74(&Method_EventMissionConditionMaster_OnListChangedImplementation__);
        sub_2213BA0(v12, v13);
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
        v10 = sub_224BC3C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      v69 = v14;
      if ( !v14 )
        sub_2213CDC(v14, v15);
      for ( i = v14; ; i = v69 )
      {
        v17 = *(_QWORD *)i;
        v18 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v18;
            v19 += 4;
            if ( !v18 )
              goto LABEL_21;
          }
          v20 = v17 + 16LL * *v19 + 312;
        }
        else
        {
LABEL_21:
          v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
        if ( (v21 & 1) == 0 )
          break;
        if ( !v69 )
          sub_2213CDC(v21, v22);
        v23 = *(_QWORD *)v69;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
        {
          v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_29;
          }
          v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
        }
        else
        {
LABEL_29:
          v26 = sub_224BC3C(v69, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v69, *(_QWORD *)(v26 + 8));
        v28 = (EventMissionConditionEntity_o *)v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)v27;
          naturalAligment = EventMissionConditionEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)naturalAligment
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * naturalAligment - 8) == EventMissionConditionEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
              EventMissionConditionMaster__RemoveMissionIdToEventMissionConditionEntityListDictionary(v4, v28, v32);
          }
        }
      }
      v33 = sub_2213BB4(v69, System_IDisposable_TypeInfo);
      if ( v33 )
      {
        v34 = *(_QWORD *)v33;
        v35 = v33;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_43;
          }
          v38 = v34 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_43:
          v38 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v40 = newItems->klass;
      v41 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_51;
        }
        v43 = (__int64)&v40->vtable[*v42];
      }
      else
      {
LABEL_51:
        v43 = sub_224BC3C(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(newItems, *(_QWORD *)(v43 + 8));
      v70 = v44;
      if ( !v44 )
        sub_2213CDC(v44, v45);
      for ( j = v44; ; j = v70 )
      {
        v47 = *(_QWORD *)j;
        v48 = *(unsigned __int16 *)(*(_QWORD *)j + 302LL);
        if ( *(_WORD *)(*(_QWORD *)j + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_59;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_59:
          v50 = sub_224BC3C(j, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(j, *(_QWORD *)(v50 + 8));
        if ( (v51 & 1) == 0 )
          break;
        if ( !v70 )
          sub_2213CDC(v51, v52);
        v53 = *(_QWORD *)v70;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v55 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 2;
            if ( !v54 )
              goto LABEL_67;
          }
          v56 = v53 + 16LL * (*(_DWORD *)v55 + 1) + 312;
        }
        else
        {
LABEL_67:
          v56 = sub_224BC3C(v70, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v70, *(_QWORD *)(v56 + 8));
        v58 = (EventMissionConditionEntity_o *)v57;
        if ( v57 )
        {
          v59 = *(_QWORD *)v57;
          v60 = EventMissionConditionEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 304LL) >= (unsigned int)v60
            && *(EventMissionConditionEntity_c **)(*(_QWORD *)(v59 + 200) + 8 * v60 - 8) == EventMissionConditionEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v59 + 376))(v57, *(_QWORD *)(v59 + 384)) )
              EventMissionConditionMaster__AddMissionIdToEventMissionConditionEntityListDictionary(v4, v58, v62);
          }
        }
      }
      v63 = sub_2213BB4(v70, System_IDisposable_TypeInfo);
      if ( v63 )
      {
        v64 = *(_QWORD *)v63;
        v65 = v63;
        v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
        {
          v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
          {
            --v66;
            v67 += 4;
            if ( !v66 )
              goto LABEL_81;
          }
          v68 = v64 + 16LL * *v67 + 312;
        }
        else
        {
LABEL_81:
          v68 = sub_224BC3C(v63, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
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
  if ( (byte_597089C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
    this = (EventMissionConditionMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    byte_597089C = 1;
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
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__) )
    return;
  this = (EventMissionConditionMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (EventMissionConditionMaster_o *)System_Collections_Generic_List_object___Remove(
                                            (System_Collections_Generic_List_object__o *)value,
                                            (Il2CppObject *)eventMissionConditionEntity,
                                            (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (EventMissionConditionMaster_o *)v4->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_2213CDC(this, eventMissionConditionEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    eventMissionConditionEntity->fields.missionId,
    (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___Remove__);
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

  if ( (byte_5970898 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
    byte_5970898 = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__TryGetEntity__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v24; // x21
  struct EventMissionConditionMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_597089E & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__);
    sub_2213A60(&EventMissionConditionMaster___c_TypeInfo);
    byte_597089E = 1;
  }
  value = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  missionIdToEventMissionConditionEntityListDictionary = this->fields.missionIdToEventMissionConditionEntityListDictionary;
  if ( !missionIdToEventMissionConditionEntityListDictionary )
    goto LABEL_25;
  missionIdToEventMissionConditionEntityListDictionary = (void *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                   (System_Collections_Generic_Dictionary_int__object__o *)missionIdToEventMissionConditionEntityListDictionary,
                                                                   missionId,
                                                                   &value,
                                                                   (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TryGetValue__);
  if ( ((unsigned __int8)missionIdToEventMissionConditionEntityListDictionary & 1) != 0 )
  {
    if ( !value )
      goto LABEL_25;
    monitor = (int)value[1].monitor;
    if ( monitor >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        missionIdToEventMissionConditionEntityListDictionary = value;
        if ( !value )
          break;
        missionIdToEventMissionConditionEntityListDictionary = System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)value,
                                                                 v11,
                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v8, v12, v13, v14, v15, v16, v17);
          }
        }
        if ( monitor == ++v11 )
          goto LABEL_17;
      }
LABEL_25:
      sub_2213CDC(missionIdToEventMissionConditionEntityListDictionary, v8);
    }
  }
LABEL_17:
  missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  if ( !*(&EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo, v8);
    missionIdToEventMissionConditionEntityListDictionary = EventMissionConditionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionConditionMaster___c_StaticFields *)*((_QWORD *)missionIdToEventMissionConditionEntityListDictionary
                                                                         + 23);
  _9__8_0 = (System_Comparison_T__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*((_DWORD *)missionIdToEventMissionConditionEntityListDictionary + 57) )
    {
      j_il2cpp_runtime_class_init_0(missionIdToEventMissionConditionEntityListDictionary, v8);
      static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__8_0,
      v24,
      Method_EventMissionConditionMaster___c__getMissionCondList_b__8_0__,
      0);
    v25 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v25->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__8_0, (int32_t)_9__8_0, v26, v27, v28, v29, v30, v31);
  }
  if ( !v7 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__8_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  il2cpp_array_size_t max_length; // x8
  __int64 v20; // x22
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_59708A0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_59708A0 = 1;
  }
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      this,
                      eventId,
                      missionId,
                      *(const MethodInfo **)&type);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( !MissionCondList )
    goto LABEL_17;
  max_length = MissionCondList->max_length;
  if ( max_length && (int)max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= (unsigned int)max_length )
        sub_2213CE4(v11);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
      LODWORD(max_length) = MissionCondList->max_length;
      if ( (int)++v20 >= (int)max_length )
        return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v10;
    }
LABEL_17:
    sub_2213CDC(v11, v12);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 max_length; // x8
  EventMissionConditionEntity_o **m_Items; // x9
  EventMissionConditionEntity_o *v21; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_597089F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_597089F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
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
                                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
LABEL_22:
    sub_2213CDC(MissionCondList, v12);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return (EventMissionConditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v9,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventMissionConditionMaster__getTodayFirstMissionId(
        EventMissionConditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_c **v4; // x27
  int v6; // w8
  System_DateTime_o v7; // x1
  int32_t Month; // w22
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
  System_DateTime_o v21; // x1
  int32_t v22; // w27
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  bool v29; // zf
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct EventMissionConditionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x19
  Il2CppObject *v36; // x20
  struct EventMissionConditionMaster___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  uint64_t v45; // [xsp+0h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-68h] BYREF

  v4 = &NetworkManager_TypeInfo;
  if ( (byte_59708A1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__11_0__);
    sub_2213A60(&EventMissionConditionMaster___c_TypeInfo);
    byte_59708A1 = 1;
  }
  v6 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  v45 = 0;
  dateData = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v7.fields._dateData);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionConditionEntity__get_Item__);
      if ( Item )
      {
        v17 = Item;
        if ( LODWORD(Item[2].klass) == eventId && HIDWORD(Item[1].klass) == 3 && LODWORD(Item[2].monitor) == 12 )
        {
          v18 = *v4;
          v19 = v4;
          monitor = (int64_t)v17[3].monitor;
          if ( !*(&v18->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v18, v11);
          v45 = NetworkManager__getServerDateTime_48347596(monitor, 0).fields._dateData;
          if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v21.fields._dateData);
          v22 = System_DateTime__get_Month((System_DateTime_o)&v45, 0);
          list = (void *)System_DateTime__get_Day((System_DateTime_o)&v45, 0);
          v29 = Month == v22;
          v4 = v19;
          if ( v29 && Day == (_DWORD)list )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v31 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v17,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v17;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v17, v23, v24, v25, v26, v27, v28);
            }
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_28;
    }
LABEL_40:
    sub_2213CDC(list, v11);
  }
LABEL_28:
  list = EventMissionConditionMaster___c_TypeInfo;
  if ( !*(&EventMissionConditionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionMaster___c_TypeInfo, v11);
    list = EventMissionConditionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionConditionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v11);
      static_fields = EventMissionConditionMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v36,
      Method_EventMissionConditionMaster___c__getTodayFirstMissionId_b__11_0__,
      0);
    v37 = EventMissionConditionMaster___c_TypeInfo->static_fields;
    v37->__9__11_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__11_0, (int32_t)_9__11_0, v38, v39, v40, v41, v42, v43);
  }
  if ( !v10 )
    goto LABEL_40;
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__11_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  if ( v10->fields._size < 1 )
    return 0;
  list = System_Collections_Generic_List_object___get_Item(
           v10,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
  if ( !list )
    goto LABEL_40;
  return *((_DWORD *)list + 4);
}


void EventMissionConditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59708A6 & 1) == 0 )
  {
    sub_2213A60(&EventMissionConditionMaster___c_TypeInfo);
    byte_59708A6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMissionConditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionConditionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMissionConditionMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return a->fields.missionProgressType - b->fields.missionProgressType;
}


int32_t EventMissionConditionMaster___c___getTodayFirstMissionId_b__11_0(
        EventMissionConditionMaster___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}