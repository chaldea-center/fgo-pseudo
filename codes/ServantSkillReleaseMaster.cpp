void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C228EC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__, method);
    byte_4C228EC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    252,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *__fastcall ServantSkillReleaseMaster__GetEntitiyListGroup(
        ServantSkillReleaseMaster_o *this,
        ServantSkillEntity_o *servantSkillEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__object__o *v16; // x20
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  _DWORD *v29; // x0
  __int64 v30; // x1
  int64_t v31; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  System_Collections_Generic_List_object__o *v44; // x23
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0

  if ( (byte_4C228EE & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__,
      servantSkillEntity);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__, v8);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo, v9);
    sub_1C3B764(&System_IDisposable_TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, v11);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v14);
    sub_1C3B764(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v15);
    byte_4C228EE = 1;
  }
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, 0LL);
    }
    v29 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                      Enumerator,
                      *(_QWORD *)(v28 + 8));
    v31 = (int64_t)v29;
    if ( !v29 )
      sub_1C3B9C0(0LL, v30);
    if ( !servantSkillEntity )
      sub_1C3B9C0(v29, v30);
    if ( v29[4] == servantSkillEntity->fields.svtId
      && v29[5] == servantSkillEntity->fields.num
      && v29[6] == servantSkillEntity->fields.priority )
    {
      if ( !v16 )
        sub_1C3B9C0(v29, v30);
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             v16,
             v29[11],
             (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                              v16,
                                                              *(_DWORD *)(v31 + 44),
                                                              (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_1C3B9C0(0LL, v33);
        items = Item->fields._items;
        v41 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v33);
        size = Item->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            (Il2CppObject *)v31,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v31;
          sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 4), v31, v34, v35, v36, v37, v38, v39);
        }
      }
      else
      {
        v44 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v44,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v44 )
          sub_1C3B9C0(v45, v46);
        v53 = v44->fields._items;
        v54 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++v44->fields._version;
        if ( !v53 )
          sub_1C3B9C0(v45, v46);
        v55 = v44->fields._size;
        if ( (unsigned int)v55 >= v53->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v44,
            (Il2CppObject *)v31,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v44->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)v31;
          sub_1C3B708((PartyOrganizationUtility_o *)(v56 + 4), v31, v47, v48, v49, v50, v51, v52);
        }
        System_Collections_Generic_Dictionary_int__object___Add(
          v16,
          *(_DWORD *)(v31 + 44),
          (Il2CppObject *)v44,
          (const MethodInfo_32F4B9C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v57 = Enumerator->klass;
  v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_40;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_40:
    v60 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(Enumerator, *(_QWORD *)(v60 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v16;
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

  if ( (byte_4C228EA & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C228EA = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_329F900 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantSkillReleaseEntity__o *__fastcall ServantSkillReleaseMaster__GetEntryListFromCondType(
        ServantSkillReleaseMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C228EF & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__,
      *(_QWORD *)&condType);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v10);
    byte_4C228EF = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ServantSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillReleaseEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v32 = v24;
    if ( !v24 )
      sub_1C3B9C0(0LL, v25);
    if ( *(_DWORD *)(v24 + 32) == condType )
    {
      if ( !v11 )
        sub_1C3B9C0(v24, v25);
      items = v11->fields._items;
      v34 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v11;
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

  if ( (byte_4C228EB & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4C228EB = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v15; // x1
  int32_t condGroup; // w19
  int32_t v17; // w27
  bool v18; // w25
  System_String_o *Primarykey; // x28
  __int64 *lookup; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  void *v23; // x29
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__c **v25; // x10
  __int64 v26; // x0
  const MethodInfo *v27; // x5
  ServantSkillReleaseEntity_o *v32; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C228ED & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__get_lookup__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo, v15);
    byte_4C228ED = 1;
  }
  condGroup = 0;
  v17 = 1;
  v32 = 0LL;
  while ( 1 )
  {
    v18 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v17,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_329D6F4 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C3B9C0(lookup, v21);
    v22 = *lookup;
    v23 = lookup;
    v24 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_9;
      }
      v26 = v22 + 16LL * (*(_DWORD *)v25 + 1) + 312;
    }
    else
    {
LABEL_9:
      v26 = sub_1C8D744(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantSkillReleaseEntity__TypeInfo,
              1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v26)(
            v23,
            Primarykey,
            &v32,
            *(_QWORD *)(v26 + 8)) & 1) == 0 )
      return v18;
    lookup = (__int64 *)v32;
    if ( !v32 )
      goto LABEL_19;
    ++v17;
    if ( condGroup == v32->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v18 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v32->fields.condGroup;
      if ( v18 )
        return v18;
LABEL_17:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v32,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v27);
    }
  }
}