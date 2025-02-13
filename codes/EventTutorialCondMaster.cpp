void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC6F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
    byte_4BDC6F5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    172,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialCondEntity_o *__fastcall EventTutorialCondMaster__GetEntity(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC6F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
    byte_4BDC6F3 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3260880 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialCondEntity__o *__fastcall EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4BDC6F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
    byte_4BDC6F8 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v12);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_EventTutorialCondEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v29 = v22;
    if ( v22 && *(_DWORD *)(v22 + 16) == evId && *(_DWORD *)(v22 + 20) == flgType && *(_DWORD *)(v22 + 24) == number )
    {
      if ( !v9 )
        sub_1C22094(v22, v22);
      items = v9->fields._items;
      v31 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C22094(v22, v22);
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v22,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), v29, v23, v24, v25, v26, v27, v28);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_31;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_31:
    v37 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__TryGetEntity(
        EventTutorialCondMaster_o *this,
        EventTutorialCondEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDC6F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
    byte_4BDC6F4 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__isEnableCondition(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t condType,
        System_Int32_array *condIds,
        int32_t condValue,
        const MethodInfo *method)
{
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  EventTutorialCondMaster_o *v13; // x22
  unsigned __int64 v14; // x24
  int32_t *v15; // x23
  const MethodInfo *v16; // x3
  EventTutorialCondMaster_o *v17; // x23
  unsigned __int64 v18; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v20; // x8
  unsigned __int64 v21; // x23
  int64_t v22; // x20
  int32_t v23; // w22
  TotalEventRaidEntity_o *v25; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDC6F7 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventTutorialCondMaster_o *)sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BDC6F7 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v12 = *(_QWORD *)&condIds->max_length;
          if ( (int)v12 >= 1 )
          {
            v13 = this;
            v14 = 0LL;
            while ( 1 )
            {
              if ( v14 >= (unsigned int)v12 )
                goto LABEL_43;
              if ( !MasterData_object )
                goto LABEL_42;
              v15 = &condIds->m_Items[v14 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    (EventRaidMaster_o *)MasterData_object,
                                                    &entity,
                                                    eventId,
                                                    *v15,
                                                    v11);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v14 >= condIds->max_length )
                  goto LABEL_43;
                if ( !v13 )
                  goto LABEL_42;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v13,
                                                      &v25,
                                                      eventId,
                                                      *v15,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v25 )
                    goto LABEL_42;
                  if ( entity->fields.maxHp > v25->fields.totalDamage )
                  {
                    if ( v14 >= condIds->max_length )
                      goto LABEL_43;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          (EventRaidMaster_o *)MasterData_object,
                                                          eventId,
                                                          *v15,
                                                          v16);
                    if ( !this )
                      goto LABEL_42;
                    v17 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_28:
              LODWORD(v12) = condIds->max_length;
              if ( (__int64)++v14 >= (int)v12 )
                goto LABEL_39;
            }
            v18 = 0LL;
            while ( 1 )
            {
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v18 >= LODWORD(v17->fields._MasterName_k__BackingField) )
                goto LABEL_43;
              if ( !this )
                goto LABEL_42;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *(&v17->fields.revision + v18),
                                                    0LL);
              if ( !this )
                goto LABEL_42;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_42;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields._firstChar == 1 )
                break;
              if ( (__int64)++v18 >= SLODWORD(v17->fields._MasterName_k__BackingField) )
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
    sub_1C22094(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_42;
  v20 = *(_QWORD *)&condIds->max_length;
  if ( (int)v20 < 1 )
    goto LABEL_39;
  v21 = 0LL;
  v22 = condValue;
  do
  {
    if ( v21 >= (unsigned int)v20 )
LABEL_43:
      sub_1C2209C(this, *(_QWORD *)&eventId);
    v23 = condIds->m_Items[v21 + 1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v23, v22, 0, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v20) = condIds->max_length;
    ++v21;
  }
  while ( (__int64)v21 < (int)v20 );
  return (unsigned __int8)this & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__isEnableExtCondition(
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
  bool v23; // w19
  int v24; // w20
  __int128 v26; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v27; // [xsp+10h] [xbp-B0h]
  __int128 v28; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v29; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_4BDC6F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
    this = (EventTutorialCondMaster_o *)sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__);
    byte_4BDC6F6 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v28 = 0u;
  v29 = 0u;
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
  v14 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v14,
    (const MethodInfo_32A64B0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v14 )
LABEL_21:
    sub_1C22094(this, *(_QWORD *)&evId);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v14,
    0,
    isEnableCondition,
    (const MethodInfo_32A6E70 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)v13,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  *(_OWORD *)&v30.fields._list = v26;
  v30.fields._current = (Il2CppObject *)v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C22094(v15, v16);
    v19 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v15,
            (int32_t)v30.fields._current[1].klass,
            HIDWORD(v30.fields._current[2].klass),
            (System_Int32_array *)v30.fields._current[2].monitor,
            0,
            v17);
    v20 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v14,
            (int32_t)current[2].klass,
            (const MethodInfo_32A7084 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v20 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v14,
               klass,
               (const MethodInfo_32A6DE0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v19 && Item,
        (const MethodInfo_32A6E70 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v19,
        (const MethodInfo_32A6E70 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v26,
    v14,
    (const MethodInfo_32A7274 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v28 = v26;
  v29 = v27;
  while ( 1 )
  {
    v23 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
            (const MethodInfo_3401D38 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v23 )
      break;
    if ( BYTE4(v29) )
    {
      v24 = 9;
      goto LABEL_18;
    }
  }
  v24 = 10;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
    (const MethodInfo_3401E40 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v23 && v24 == 9;
}