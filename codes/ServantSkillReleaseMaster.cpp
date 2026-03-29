void ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3144F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
    byte_4D3144F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    252,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  System_Collections_Generic_List_object__o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4D31451 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    byte_4D31451 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
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
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, 0);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C93D2C(0, v19);
    if ( !servantSkillEntity )
      sub_1C93D2C(v18, v19);
    if ( LODWORD(v18[1].klass) == servantSkillEntity->fields.svtId
      && HIDWORD(v18[1].klass) == servantSkillEntity->fields.num
      && LODWORD(v18[1].monitor) == servantSkillEntity->fields.priority )
    {
      if ( !v5 )
        sub_1C93D2C(v18, v19);
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             v5,
             HIDWORD(v18[2].monitor),
             (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                              v5,
                                                              HIDWORD(v20[2].monitor),
                                                              (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_1C93D2C(0, v22);
        items = Item->fields._items;
        v30 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v22);
        size = Item->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            v20,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
      else
      {
        v33 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v33,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v33 )
          sub_1C93D2C(v34, v35);
        v42 = v33->fields._items;
        v43 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++v33->fields._version;
        if ( !v42 )
          sub_1C93D2C(v34, v35);
        v44 = v33->fields._size;
        if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            v20,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v42->obj.klass + v44;
          v33->fields._size = v44 + 1;
          v45[4] = (Il2CppClass *)v20;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v20, v36, v37, v38, v39, v40, v41);
        }
        System_Collections_Generic_Dictionary_int__object___Add(
          v5,
          HIDWORD(v20[2].monitor),
          (Il2CppObject *)v33,
          (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_40;
    }
    v49 = (__int64)&v46->vtable[*v48];
  }
  else
  {
LABEL_40:
    v49 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
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

  if ( (byte_4D3144D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
    byte_4D3144D = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D31452 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    byte_4D31452 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
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
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C93D2C(0, v19);
    if ( *(_DWORD *)(v18 + 32) == condType )
    {
      if ( !v5 )
        sub_1C93D2C(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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

  if ( (byte_4D3144E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
    byte_4D3144E = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
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
  int32_t v15; // w19
  int32_t v16; // w27
  bool v17; // w25
  System_String_o *Primarykey; // x28
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v22; // x29
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__c **p_offset; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x7
  int32_t *v31; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D31450 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo);
    byte_4D31450 = 1;
  }
  v15 = 0;
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
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3465D74 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C93D2C(lookup, v20);
    klass = lookup->klass;
    v22 = lookup;
    v23 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo )
      {
        --v23;
        p_offset += 2;
        if ( !v23 )
          goto LABEL_9;
      }
      v25 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_9:
      v25 = sub_1C69E5C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo,
              1);
    }
    lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, int32_t **, _QWORD))v25)(
                                                                                    v22,
                                                                                    Primarykey,
                                                                                    &v31,
                                                                                    *(_QWORD *)(v25 + 8));
    if ( ((unsigned __int8)lookup & 1) == 0 )
      return v17;
    if ( !v31 )
      goto LABEL_19;
    ++v16;
    if ( v15 == v31[11] )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_17;
    }
    else
    {
      v15 = v31[11];
      if ( v17 )
        return v17;
LABEL_17:
      isBaseResult = ServantSkillReleaseEntity__IsUseInternal(
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v31[8],
                       v31[9],
                       v31[10],
                       v26);
    }
  }
}