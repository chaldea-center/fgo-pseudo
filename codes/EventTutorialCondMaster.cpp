void EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B83 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
    byte_4C37B83 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    172,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialCondEntity_o *EventTutorialCondMaster__GetEntity(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37B81 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
    byte_4C37B81 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialCondEntity__o *EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4C37B86 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
    byte_4C37B86 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventTutorialCondEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( v20 && *(_DWORD *)(v20 + 16) == evId && *(_DWORD *)(v20 + 20) == flgType && *(_DWORD *)(v20 + 24) == number )
    {
      if ( !v9 )
        sub_1C32E7C(v20);
      items = v9->fields._items;
      v25 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C32E7C(v20);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v20,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), v23, v21, v22);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_31:
    v31 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialCondMaster__TryGetEntity(
        EventTutorialCondMaster_o *this,
        EventTutorialCondEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37B82 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
    byte_4C37B82 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
}


bool EventTutorialCondMaster__isEnableCondition(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t condType,
        System_Int32_array *condIds,
        int32_t condValue,
        const MethodInfo *method)
{
  Il2CppObject *MasterData_object; // x21
  il2cpp_array_size_t max_length; // x8
  EventTutorialCondMaster_o *v12; // x22
  unsigned __int64 v13; // x24
  int32_t *v14; // x23
  EventTutorialCondMaster_o *v15; // x23
  unsigned __int64 v16; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  il2cpp_array_size_t v18; // x8
  unsigned __int64 v19; // x23
  int64_t v20; // x20
  int32_t v21; // w22
  TotalEventRaidEntity_o *v23; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C37B85 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventTutorialCondMaster_o *)sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C37B85 = 1;
  }
  v23 = 0;
  entity = 0;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          max_length = condIds->max_length;
          if ( (int)max_length >= 1 )
          {
            v12 = this;
            v13 = 0;
            while ( 1 )
            {
              if ( v13 >= (unsigned int)max_length )
                goto LABEL_43;
              if ( !MasterData_object )
                goto LABEL_42;
              v14 = &condIds->m_Items[v13];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    (EventRaidMaster_o *)MasterData_object,
                                                    &entity,
                                                    eventId,
                                                    *v14,
                                                    0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v13 >= LODWORD(condIds->max_length) )
                  goto LABEL_43;
                if ( !v12 )
                  goto LABEL_42;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v12,
                                                      &v23,
                                                      eventId,
                                                      *v14,
                                                      0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v23 )
                    goto LABEL_42;
                  if ( entity->fields.maxHp > v23->fields.totalDamage )
                  {
                    if ( v13 >= LODWORD(condIds->max_length) )
                      goto LABEL_43;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          (EventRaidMaster_o *)MasterData_object,
                                                          eventId,
                                                          *v14,
                                                          0);
                    if ( !this )
                      goto LABEL_42;
                    v15 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_28:
              LODWORD(max_length) = condIds->max_length;
              if ( (__int64)++v13 >= (int)max_length )
                goto LABEL_39;
            }
            v16 = 0;
            while ( 1 )
            {
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v16 >= LODWORD(v15->fields._MasterName_k__BackingField) )
                goto LABEL_43;
              if ( !this )
                goto LABEL_42;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *(&v15->fields.revision + v16),
                                                    0);
              if ( !this )
                goto LABEL_42;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_42;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields._firstChar == 1 )
                break;
              if ( (__int64)++v16 >= SLODWORD(v15->fields._MasterName_k__BackingField) )
                goto LABEL_28;
            }
            LOBYTE(this) = 1;
            return (unsigned __int8)this & 1;
          }
LABEL_39:
          LOBYTE(this) = 0;
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_42:
    sub_1C32E7C(this);
  }
  if ( !condIds )
    goto LABEL_42;
  v18 = condIds->max_length;
  if ( (int)v18 < 1 )
    goto LABEL_39;
  v19 = 0;
  v20 = condValue;
  do
  {
    if ( v19 >= (unsigned int)v18 )
LABEL_43:
      sub_1C32E84(this);
    v21 = condIds->m_Items[v19];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v21, v20, 0, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v18) = condIds->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)v18 );
  return (unsigned __int8)this & 1;
}


bool EventTutorialCondMaster__isEnableExtCondition(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        EventTutorialEntity_o *baseEntity,
        const MethodInfo *method)
{
  EventTutorialCondMaster_o *v10; // x22
  bool isEnableCondition; // w23
  const MethodInfo *v12; // x4
  EventTutorialCondMaster_o *v13; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v14; // x19
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x5
  Il2CppObject *current; // x21
  bool v18; // w20
  bool v19; // w0
  int32_t klass; // w21
  bool Item; // w0
  bool v22; // w19
  int v23; // w20
  __int128 v25; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v26; // [xsp+10h] [xbp-B0h]
  __int128 v27; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v28; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_4C37B84 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
    this = (EventTutorialCondMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__);
    byte_4C37B84 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v27 = 0u;
  v28 = 0u;
  if ( !baseEntity )
    goto LABEL_21;
  isEnableCondition = EventTutorialCondMaster__isEnableCondition(
                        this,
                        baseEntity->fields.eventId,
                        baseEntity->fields.condType,
                        baseEntity->fields.condIds,
                        baseEntity->fields.condValue,
                        method);
  this = (EventTutorialCondMaster_o *)EventTutorialCondMaster__GetEventTutorialCondEntity(
                                        v10,
                                        evId,
                                        flgType,
                                        number,
                                        v12);
  if ( !this )
    goto LABEL_21;
  v13 = this;
  if ( !LODWORD(this->fields._MasterName_k__BackingField) )
    return isEnableCondition;
  v14 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v14,
    (const MethodInfo_33E0AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v14 )
LABEL_21:
    sub_1C32E7C(this);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v14,
    0,
    isEnableCondition,
    (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)v13,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  *(_OWORD *)&v29.fields._list = v25;
  v29.fields._current = (Il2CppObject *)v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C32E7C(v15);
    v18 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v15,
            (int32_t)v29.fields._current[1].klass,
            HIDWORD(v29.fields._current[2].klass),
            (System_Int32_array *)v29.fields._current[2].monitor,
            0,
            v16);
    v19 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v14,
            (int32_t)current[2].klass,
            (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v19 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v14,
               klass,
               (const MethodInfo_33E1418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v18 && Item,
        (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v18,
        (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v25,
    v14,
    (const MethodInfo_33E18AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v27 = v25;
  v28 = v26;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v27,
            (const MethodInfo_3544088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v22 )
      break;
    if ( BYTE4(v28) )
    {
      v23 = 9;
      goto LABEL_18;
    }
  }
  v23 = 10;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v27,
    (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v22 && v23 == 9;
}