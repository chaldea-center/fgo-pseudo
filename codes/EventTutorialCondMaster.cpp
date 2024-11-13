void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__, method, v2);
    byte_4B163AE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    168,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
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

  if ( (byte_4B163AC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&flagType);
    byte_4B163AC = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialCondEntity__o *__fastcall EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
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
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x8
  EventTutorialCondEntity_c *v44; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v47; // x10
  __int64 size; // x11
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0

  if ( (byte_4B163B1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&evId,
      *(_QWORD *)&flgType);
    sub_1BCA7E0(&EventTutorialCondEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo, v21, v22);
    byte_4B163B1 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo,
                                                       *(_QWORD *)&evId,
                                                       *(_QWORD *)&flgType,
                                                       *(_QWORD *)&number);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v24);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
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
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v43 = v36;
    if ( v36 )
    {
      v44 = EventTutorialCondEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventTutorialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
        || *(EventTutorialCondEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != EventTutorialCondEntity_TypeInfo )
      {
        sub_1BCACFC(v36);
LABEL_37:
        sub_1BCAA3C(v36, v44);
      }
      if ( *(_DWORD *)(v36 + 16) == evId && *(_DWORD *)(v36 + 20) == flgType && *(_DWORD *)(v36 + 24) == number )
      {
        if ( !v23 )
          goto LABEL_37;
        items = v23->fields._items;
        v47 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCAA3C(v36, v44);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v36,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v43, v37, v38, v39, v40, v41, v42);
        }
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_33;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_33:
    v53 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v23;
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

  if ( (byte_4B163AD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B163AD = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v19; // x4
  __int64 v20; // x8
  EventTutorialCondMaster_o *v21; // x22
  unsigned __int64 v22; // x24
  int32_t *v23; // x23
  const MethodInfo *v24; // x3
  EventTutorialCondMaster_o *v25; // x23
  unsigned __int64 v26; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v28; // x8
  unsigned __int64 v29; // x23
  int64_t v30; // x20
  int32_t v31; // w22
  TotalEventRaidEntity_o *v33; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B163B0 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    this = (EventTutorialCondMaster_o *)sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v16, v17);
    byte_4B163B0 = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v20 = *(_QWORD *)&condIds->max_length;
          if ( (int)v20 >= 1 )
          {
            v21 = this;
            v22 = 0LL;
            while ( 1 )
            {
              if ( v22 >= (unsigned int)v20 )
                goto LABEL_43;
              if ( !MasterData_object )
                goto LABEL_42;
              v23 = &condIds->m_Items[v22 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    (EventRaidMaster_o *)MasterData_object,
                                                    &entity,
                                                    eventId,
                                                    *v23,
                                                    v19);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v22 >= condIds->max_length )
                  goto LABEL_43;
                if ( !v21 )
                  goto LABEL_42;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v21,
                                                      &v33,
                                                      eventId,
                                                      *v23,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v33 )
                    goto LABEL_42;
                  if ( entity->fields.maxHp > v33->fields.totalDamage )
                  {
                    if ( v22 >= condIds->max_length )
                      goto LABEL_43;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          (EventRaidMaster_o *)MasterData_object,
                                                          eventId,
                                                          *v23,
                                                          v24);
                    if ( !this )
                      goto LABEL_42;
                    v25 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_28:
              LODWORD(v20) = condIds->max_length;
              if ( (__int64)++v22 >= (int)v20 )
                goto LABEL_39;
            }
            v26 = 0LL;
            while ( 1 )
            {
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v26 >= LODWORD(v25->fields._MasterName_k__BackingField) )
                goto LABEL_43;
              if ( !this )
                goto LABEL_42;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *((_DWORD *)&v25->fields.list + v26),
                                                    0LL);
              if ( !this )
                goto LABEL_42;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_42;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields._firstChar == 1 )
                break;
              if ( (__int64)++v26 >= SLODWORD(v25->fields._MasterName_k__BackingField) )
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
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_42;
  v28 = *(_QWORD *)&condIds->max_length;
  if ( (int)v28 < 1 )
    goto LABEL_39;
  v29 = 0LL;
  v30 = condValue;
  do
  {
    if ( v29 >= (unsigned int)v28 )
LABEL_43:
      sub_1BCAA44(this, *(_QWORD *)&eventId);
    v31 = condIds->m_Items[v29 + 1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventId);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v31, v30, 0, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v28) = condIds->max_length;
    ++v29;
  }
  while ( (__int64)v29 < (int)v28 );
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  bool isEnableCondition; // w23
  const MethodInfo *v40; // x4
  __int64 v41; // x2
  __int64 v42; // x3
  EventTutorialCondMaster_o *v43; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v44; // x19
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x5
  Il2CppObject *current; // x21
  bool v49; // w20
  bool v50; // w0
  int32_t klass; // w21
  bool Item; // w0
  bool v53; // w19
  int v54; // w20
  __int128 v56; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v57; // [xsp+10h] [xbp-B0h]
  __int128 v58; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v59; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_4B163AF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__,
      *(_QWORD *)&evId,
      *(_QWORD *)&flgType);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__, v35, v36);
    this = (EventTutorialCondMaster_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__,
                                          v37,
                                          v38);
    byte_4B163AF = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v58 = 0u;
  v59 = 0u;
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
                                        v40);
  if ( !this )
    goto LABEL_21;
  v43 = this;
  if ( !LODWORD(this->fields._MasterName_k__BackingField) )
    return isEnableCondition;
  v44 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&evId,
                                                                v41,
                                                                v42);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v44,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v44 )
LABEL_21:
    sub_1BCAA3C(this, *(_QWORD *)&evId);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v44,
    0,
    isEnableCondition,
    (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)v43,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  *(_OWORD *)&v60.fields._list = v56;
  v60.fields._current = (Il2CppObject *)v57;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v45 )
      break;
    current = v60.fields._current;
    if ( !v60.fields._current )
      sub_1BCAA3C(v45, v46);
    v49 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v45,
            (int32_t)v60.fields._current[1].klass,
            HIDWORD(v60.fields._current[2].klass),
            (System_Int32_array *)v60.fields._current[2].monitor,
            0,
            v47);
    v50 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v44,
            (int32_t)current[2].klass,
            (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v50 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v44,
               klass,
               (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v44,
        klass,
        v49 && Item,
        (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v44,
        klass,
        v49,
        (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v56,
    v44,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v58 = v56;
  v59 = v57;
  while ( 1 )
  {
    v53 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v58,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v53 )
      break;
    if ( BYTE4(v59) )
    {
      v54 = 9;
      goto LABEL_18;
    }
  }
  v54 = 10;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v58,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v53 && v54 == 9;
}