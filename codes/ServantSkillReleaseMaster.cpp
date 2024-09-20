void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B986 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
    byte_4A5B986 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *__fastcall ServantSkillReleaseMaster__GetEntitiyListGroup(
        ServantSkillReleaseMaster_o *this,
        ServantSkillEntity_o *servantSkillEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_Collections_Generic_List_object__o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4A5B988 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    sub_1B885B0(&ServantSkillReleaseEntity_TypeInfo);
    byte_4A5B988 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_46;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantSkillReleaseEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_46:
      sub_1B8880C(v18, v19);
    }
    if ( !servantSkillEntity )
      sub_1B8880C(v18, ServantSkillReleaseEntity_TypeInfo);
    if ( LODWORD(v18[1].klass) == servantSkillEntity->fields.svtId
      && HIDWORD(v18[1].klass) == servantSkillEntity->fields.num
      && LODWORD(v18[1].monitor) == servantSkillEntity->fields.priority )
    {
      if ( !v5 )
        sub_1B8880C(v18, ServantSkillReleaseEntity_TypeInfo);
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             v5,
             HIDWORD(v18[2].monitor),
             (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                              v5,
                                                              HIDWORD(v20[2].monitor),
                                                              (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_1B8880C(0LL, v23);
        items = Item->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1B8880C(Item, v23);
        size = Item->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            v20,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, v24, v25);
        }
      }
      else
      {
        v30 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v30,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v30 )
          sub_1B8880C(v31, v32);
        v35 = v30->fields._items;
        v36 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++v30->fields._version;
        if ( !v35 )
          sub_1B8880C(v31, v32);
        v37 = v30->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            v20,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &v35->obj.klass + v37;
          v30->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v20, v33, v34);
        }
        System_Collections_Generic_Dictionary_int__object___Add(
          v5,
          HIDWORD(v20[2].monitor),
          (Il2CppObject *)v30,
          (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
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
        goto LABEL_42;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_42:
    v42 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v5;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillReleaseEntity_o *__fastcall ServantSkillReleaseMaster__GetEntity(
        ServantSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B984 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
    byte_4A5B984 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantSkillReleaseEntity__o *__fastcall ServantSkillReleaseMaster__GetEntryListFromCondType(
        ServantSkillReleaseMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  ServantSkillReleaseEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B989 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    sub_1B885B0(&ServantSkillReleaseEntity_TypeInfo);
    byte_4A5B989 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_35;
    v23 = ServantSkillReleaseEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillReleaseEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 32) == condType )
    {
      if ( !v5 )
        sub_1B8880C(v18, ServantSkillReleaseEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillReleaseMaster__TryGetEntity(
        ServantSkillReleaseMaster_o *this,
        ServantSkillReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B985 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
    byte_4A5B985 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillReleaseMaster__isUse(
        ServantSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        bool isBaseResult,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int32_t condGroup; // w19
  int32_t v16; // w27
  bool v17; // w25
  System_String_o *Primarykey; // x28
  __int64 *lookup; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  void *v22; // x29
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x5
  __int64 methodPtr_low; // x9
  bool result; // w0
  ServantSkillEntity_o *v29; // x0
  int32_t *v30; // x1
  System_String_o **v31; // x2
  System_String_o **v32; // x3
  int32_t v33; // w4
  bool v34; // w5
  const MethodInfo *v35; // x6
  ServantSkillReleaseEntity_o *v39; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5B987 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantSkillReleaseEntity_TypeInfo);
    byte_4A5B987 = 1;
  }
  condGroup = 0;
  v16 = 1;
  v39 = 0LL;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v16,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1B8880C(lookup, v20);
    v21 = *lookup;
    v22 = lookup;
    v23 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_9;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_9:
      v25 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v25)(
            v22,
            Primarykey,
            &v39,
            *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return v17;
    lookup = (__int64 *)v39;
    if ( !v39 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v39->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantSkillReleaseEntity_c *)v39->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v16;
    if ( condGroup == v39->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v39->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_19:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v39,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v26);
    }
  }
  sub_1B88ACC(v39);
  ServantSkillEntity__getEffectExplanation(v29, v30, v31, v32, v33, v34, v35);
  return result;
}