void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16348 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__, method, v2);
    byte_4B16348 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B1634C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v20, v21);
    byte_4B1634C = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventServantEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
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
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v43 = v35;
    if ( v35 )
    {
      methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) != EventServantEntity_TypeInfo )
      {
        sub_1BCAA3C(v35, v36);
      }
      if ( *(_DWORD *)(v35 + 20) == svtId )
      {
        if ( !v22 )
          sub_1BCAA3C(v35, v36);
        items = v22->fields._items;
        v46 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1BCAA3C(v35, v36);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v35,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v43, v37, v38, v39, v40, v41, v42);
        }
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_31;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_31:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                             Enumerator,
                                                             *(_QWORD *)(v52 + 8));
  if ( !v22 )
LABEL_38:
    sub_1BCAA3C(list, v23);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v22,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16346 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v7, v8);
    byte_4B16346 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, *(_QWORD *)&eventId);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16347 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v9, v10);
    byte_4B16347 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  EventServantEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16349 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v7, v8);
    byte_4B16349 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v12,
                                         (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_14:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x21
  Il2CppObject *v27; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x24
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  void **v40; // x23
  int64_t v41; // x2
  __int64 v42; // x3
  int32_t v43; // w24
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v50; // x9
  __int64 klass_low; // x10
  __int64 v52; // x8
  System_Collections_Generic_List_object__o *v53; // x19
  System_Predicate_object__o *v54; // x20

  if ( (byte_4B1634A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity__Find__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Predicate_EventServantEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__, v22, v23);
    sub_1BCA7E0(&EventServantMaster___c__DisplayClass4_0_TypeInfo, v24, v25);
    byte_4B1634A = 1;
  }
  v26 = sub_1BCAA2C(EventServantMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&svtId, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventServantEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v26 )
    goto LABEL_22;
  *(_QWORD *)(v26 + 16) = v33;
  v40 = (void **)(v26 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  if ( Count >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v43,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v27 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v40;
          if ( !*v40 )
            break;
          items = list->fields.items;
          v50 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v27,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v52 + 32) = v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)v27, v41, v42, v44, v45, v46, v47);
          }
        }
      }
      if ( Count == ++v43 )
        goto LABEL_18;
    }
LABEL_22:
    sub_1BCAA3C(list, v27);
  }
LABEL_18:
  v53 = (System_Collections_Generic_List_object__o *)*v40;
  if ( !*v40 )
    goto LABEL_22;
  if ( v53->fields._size < 1 )
    return 0LL;
  v54 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_EventServantEntity__TypeInfo, v27, v41, v42);
  System_Predicate_object____ctor(
    v54,
    (Il2CppObject *)v26,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    0LL);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v53,
                                   (System_Predicate_T__o *)v54,
                                   (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_39987104(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  EventServantEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1634B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v9, v10);
    byte_4B1634B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v14,
                                         (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1634D & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantMaster___c_TypeInfo, v1, v2);
    byte_4B1634D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventServantMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventServantMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventServantMaster___c___ctor(EventServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventServantMaster___c___getEntityServantIgnoreEnd_b__4_1(
        EventServantMaster___c_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.endedAt;
}


void __fastcall EventServantMaster___c__DisplayClass4_0___ctor(
        EventServantMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventServantMaster___c__DisplayClass4_0___getEntityServantIgnoreEnd_b__0(
        EventServantMaster___c__DisplayClass4_0_o *this,
        EventServantEntity_o *a,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventServantMaster___c__DisplayClass4_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v14; // x0
  System_Func_T__TResult__o *_9__4_1; // x20
  Il2CppObject *v16; // x21
  struct EventServantMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0

  v5 = this;
  if ( (byte_4B1634E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___, a, method);
    sub_1BCA7E0(&System_Func_EventServantEntity__long__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, v8, v9);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_1BCA7E0(&EventServantMaster___c_TypeInfo, v10, v11);
    byte_4B1634E = 1;
  }
  if ( !a )
    sub_1BCAA3C(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.servantEntitys;
  v14 = EventServantMaster___c_TypeInfo;
  if ( !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo, a);
    v14 = EventServantMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_T__TResult__o *)v14->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, a);
      v14 = EventServantMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__4_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_EventServantEntity__long__TypeInfo, a, method, v3);
    System_Func_object__long____ctor(
      _9__4_1,
      v16,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      0LL);
    static_fields = EventServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v24, 0LL);
}