void EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938963 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
    byte_5938963 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
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

  if ( (byte_5938961 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
    byte_5938961 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialCondEntity__o *EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__o *v42; // [xsp+18h] [xbp-48h]

  if ( (byte_5938966 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
    byte_5938966 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
  v42 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v13);
  for ( i = Enumerator; ; i = v42 )
  {
    klass = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            i,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    if ( !v42 )
      sub_21FFECC(v19, v20);
    v21 = v42->klass;
    v22 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventTutorialCondEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_18:
      v24 = sub_2237E2C(v42, System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            v42,
            *(_QWORD *)(v24 + 8));
    v32 = v25;
    if ( v25 && *(_DWORD *)(v25 + 16) == evId && *(_DWORD *)(v25 + 20) == flgType && *(_DWORD *)(v25 + 24) == number )
    {
      if ( !v9
        || (items = v9->fields._items,
            v34 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_21FFECC(v25, v25);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v25,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  if ( v42 )
  {
    v37 = v42->klass;
    v38 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_36;
      }
      v40 = (__int64)&v37->vtable[*v39];
    }
    else
    {
LABEL_36:
      v40 = sub_2237E2C(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  }
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

  if ( (byte_5938962 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
    byte_5938962 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  char *v14; // x23
  EventTutorialCondMaster_o *v15; // x23
  unsigned __int64 v16; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  il2cpp_array_size_t v18; // x8
  int64_t v19; // x20
  unsigned __int64 v20; // x23
  int32_t v21; // w22
  TotalEventRaidEntity_o *v23; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5938965 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventTutorialCondMaster_o *)sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5938965 = 1;
  }
  v23 = 0;
  entity = 0;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
              v14 = (char *)condIds + 4 * v13;
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    (EventRaidMaster_o *)MasterData_object,
                                                    &entity,
                                                    eventId,
                                                    *((_DWORD *)v14 + 8),
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
                                                      *((_DWORD *)v14 + 8),
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
                                                          *((_DWORD *)v14 + 8),
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
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    sub_21FFECC(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_42;
  v18 = condIds->max_length;
  if ( (int)v18 < 1 )
    goto LABEL_39;
  v19 = condValue;
  v20 = 0;
  do
  {
    if ( v20 >= (unsigned int)v18 )
LABEL_43:
      sub_21FFED4(this);
    v21 = condIds->m_Items[v20];
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventId);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v21, v19, 0, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v18) = condIds->max_length;
    ++v20;
  }
  while ( (__int64)v20 < (int)v18 );
  return (unsigned __int8)this & 1;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  Il2CppObject *current; // x21
  bool v19; // w20
  bool v20; // w0
  int32_t klass; // w21
  bool Item; // w0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-B8h] BYREF
  __int128 v25; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v26; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_5938964 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
    this = (EventTutorialCondMaster_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__);
    byte_5938964 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v25 = 0u;
  v26 = 0u;
  if ( !baseEntity )
    goto LABEL_19;
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
    goto LABEL_19;
  v13 = this;
  if ( !LODWORD(this->fields._MasterName_k__BackingField) )
    return isEnableCondition;
  v14 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v14,
    (const MethodInfo_3F551E8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v14 )
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&evId);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v14,
    0,
    isEnableCondition,
    (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)v13,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  v27 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_21FFECC(v15, v16);
    v19 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v15,
            (int32_t)v27.fields._current[1].klass,
            HIDWORD(v27.fields._current[2].klass),
            (System_Int32_array *)v27.fields._current[2].monitor,
            0,
            v17);
    v20 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v14,
            (int32_t)current[2].klass,
            (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v20 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v14,
               klass,
               (const MethodInfo_3F55AF8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v19 && Item,
        (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v19,
        (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v25,
    v14,
    (const MethodInfo_3F55F84 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  do
    isEnableCondition = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
                          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v25,
                          (const MethodInfo_4121538 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
  while ( isEnableCondition && !BYTE4(v26) );
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v25,
    (const MethodInfo_4121648 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return isEnableCondition;
}