void ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27D24 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
    byte_4C27D24 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    252,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *ServantSkillReleaseMaster__GetEntitiyListGroup(
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  System_Collections_Generic_List_object__o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4C27D26 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    byte_4C27D26 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, 0);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( !servantSkillEntity )
      sub_1C2D6EC(v18, v19);
    if ( LODWORD(v18[1].klass) == servantSkillEntity->fields.svtId
      && HIDWORD(v18[1].klass) == servantSkillEntity->fields.num
      && LODWORD(v18[1].monitor) == servantSkillEntity->fields.priority )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             v5,
             HIDWORD(v18[2].monitor),
             (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                              v5,
                                                              HIDWORD(v20[2].monitor),
                                                              (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_1C2D6EC(0, v22);
        items = Item->fields._items;
        v26 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v22);
        size = Item->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            v20,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v20;
          sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v20, v23, v24);
        }
      }
      else
      {
        v29 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v29,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v29 )
          sub_1C2D6EC(v30, v31);
        v34 = v29->fields._items;
        v35 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++v29->fields._version;
        if ( !v34 )
          sub_1C2D6EC(v30, v31);
        v36 = v29->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            v20,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          v29->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v20;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v20, v32, v33);
        }
        System_Collections_Generic_Dictionary_int__object___Add(
          v5,
          HIDWORD(v20[2].monitor),
          (Il2CppObject *)v29,
          (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_40;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_40:
    v41 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v5;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillReleaseEntity_o *ServantSkillReleaseMaster__GetEntity(
        ServantSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27D22 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
    byte_4C27D22 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_338C850 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantSkillReleaseEntity__o *ServantSkillReleaseMaster__GetEntryListFromCondType(
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C27D27 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    byte_4C27D27 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( *(_DWORD *)(v18 + 32) == condType )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool ServantSkillReleaseMaster__TryGetEntity(
        ServantSkillReleaseMaster_o *this,
        ServantSkillReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27D23 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
    byte_4C27D23 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantSkillReleaseMaster__isUse(
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
  System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__c **v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x5
  ServantSkillReleaseEntity_o *v31; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C27D25 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo);
    byte_4C27D25 = 1;
  }
  condGroup = 0;
  v16 = 1;
  v31 = 0;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v16,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C2D6EC(lookup, v20);
    v21 = *lookup;
    v22 = lookup;
    v23 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo )
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
      v25 = sub_1C7DCA8(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo,
              1);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v25)(
            v22,
            Primarykey,
            &v31,
            *(_QWORD *)(v25 + 8))
        & 1) == 0 )
      return v17;
    lookup = (__int64 *)v31;
    if ( !v31 )
      goto LABEL_19;
    ++v16;
    if ( condGroup == v31->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v31->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_17:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v31,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v26);
    }
  }
}