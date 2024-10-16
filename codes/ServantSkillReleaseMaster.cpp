void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6664 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__, method);
    byte_4AB6664 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
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
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  System_Collections_Generic_List_object__o *v42; // x23
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4AB6666 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, servantSkillEntity);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__, v8);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo, v9);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v10);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v14);
    sub_1BAB41C(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v15);
    sub_1BAB41C(&ServantSkillReleaseEntity_TypeInfo, v16);
    byte_4AB6666 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                            Enumerator,
                            *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_46;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v30->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantSkillReleaseEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      sub_1BAB938(v30);
LABEL_46:
      sub_1BAB678(v30, v31);
    }
    if ( !servantSkillEntity )
      sub_1BAB678(v30, ServantSkillReleaseEntity_TypeInfo);
    if ( LODWORD(v30[1].klass) == servantSkillEntity->fields.svtId
      && HIDWORD(v30[1].klass) == servantSkillEntity->fields.num
      && LODWORD(v30[1].monitor) == servantSkillEntity->fields.priority )
    {
      if ( !v17 )
        sub_1BAB678(v30, ServantSkillReleaseEntity_TypeInfo);
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             v17,
             HIDWORD(v30[2].monitor),
             (const MethodInfo_31B7028 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                              v17,
                                                              HIDWORD(v32[2].monitor),
                                                              (const MethodInfo_31B6D94 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_1BAB678(0LL, v35);
        items = Item->fields._items;
        v39 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1BAB678(Item, v35);
        size = Item->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            v32,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v32;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v32, v36, v37);
        }
      }
      else
      {
        v42 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v42,
          (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v42 )
          sub_1BAB678(v43, v44);
        v47 = v42->fields._items;
        v48 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++v42->fields._version;
        if ( !v47 )
          sub_1BAB678(v43, v44);
        v49 = v42->fields._size;
        if ( (unsigned int)v49 >= v47->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            v32,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &v47->obj.klass + v49;
          v42->fields._size = v49 + 1;
          v50[4] = (Il2CppClass *)v32;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v32, v45, v46);
        }
        System_Collections_Generic_Dictionary_int__object___Add(
          v17,
          HIDWORD(v32[2].monitor),
          (Il2CppObject *)v42,
          (const MethodInfo_31B6E34 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_42;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_42:
    v54 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v17;
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

  if ( (byte_4AB6662 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4AB6662 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  ServantSkillReleaseEntity_c *v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4AB6667 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v5);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v10);
    sub_1BAB41C(&ServantSkillReleaseEntity_TypeInfo, v11);
    byte_4AB6667 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      goto LABEL_35;
    v30 = ServantSkillReleaseEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillReleaseEntity_TypeInfo )
    {
      sub_1BAB938(v25);
LABEL_35:
      sub_1BAB678(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 32) == condType )
    {
      if ( !v12 )
        sub_1BAB678(v25, ServantSkillReleaseEntity_TypeInfo);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BAB678(v25, v30);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v27, v28);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v12;
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

  if ( (byte_4AB6663 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4AB6663 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  const MethodInfo *v27; // x5
  __int64 methodPtr_low; // x9
  bool result; // w0
  ServantSkillEntity_o *v30; // x0
  int32_t *v31; // x1
  System_String_o **v32; // x2
  System_String_o **v33; // x3
  int32_t v34; // w4
  bool v35; // w5
  const MethodInfo *v36; // x6
  ServantSkillReleaseEntity_o *v40; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4AB6665 & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1BAB41C(&ServantSkillReleaseEntity_TypeInfo, v15);
    byte_4AB6665 = 1;
  }
  condGroup = 0;
  v17 = 1;
  v40 = 0LL;
  while ( 1 )
  {
    v18 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v17,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1BAB678(lookup, v21);
    v22 = *lookup;
    v23 = lookup;
    v24 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v26 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v26)(
            v23,
            Primarykey,
            &v40,
            *(_QWORD *)(v26 + 8)) & 1) == 0 )
      return v18;
    lookup = (__int64 *)v40;
    if ( !v40 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v40->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantSkillReleaseEntity_c *)v40->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v17;
    if ( condGroup == v40->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v18 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v40->fields.condGroup;
      if ( v18 )
        return v18;
LABEL_19:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v40,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v27);
    }
  }
  sub_1BAB938(v40);
  ServantSkillEntity__getEffectExplanation(v30, v31, v32, v33, v34, v35, v36);
  return result;
}