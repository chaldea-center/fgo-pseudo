void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B13 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B16B13 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *__fastcall ServantSkillReleaseMaster__GetEntitiyListGroup(
        ServantSkillReleaseMaster_o *this,
        ServantSkillEntity_o *servantSkillEntity,
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_Dictionary_int__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  _DWORD *v43; // x0
  __int64 v44; // x1
  int64_t v45; // x22
  __int64 methodPtr_low; // x9
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  System_Collections_Generic_List_object__o *v62; // x23
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_Collections_Generic_IEnumerator_T__c *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0

  if ( (byte_4B16B15 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      servantSkillEntity,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__, v6, v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__,
      v8,
      v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__,
      v12,
      v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo, v14, v15);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&ServantSkillReleaseEntity_TypeInfo, v28, v29);
    byte_4B16B15 = 1;
  }
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo,
                                                                  servantSkillEntity,
                                                                  method,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v31);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
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
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                      Enumerator,
                      *(_QWORD *)(v42 + 8));
    v45 = (int64_t)v43;
    if ( !v43 )
      goto LABEL_46;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillReleaseEntity_TypeInfo )
    {
      sub_1BCACFC(v43);
LABEL_46:
      sub_1BCAA3C(v43, v44);
    }
    if ( !servantSkillEntity )
      sub_1BCAA3C(v43, ServantSkillReleaseEntity_TypeInfo);
    if ( v43[4] == servantSkillEntity->fields.svtId
      && v43[5] == servantSkillEntity->fields.num
      && v43[6] == servantSkillEntity->fields.priority )
    {
      if ( !v30 )
        sub_1BCAA3C(v43, ServantSkillReleaseEntity_TypeInfo);
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             v30,
             v43[11],
             (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                              v30,
                                                              *(_DWORD *)(v45 + 44),
                                                              (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_1BCAA3C(0LL, v51);
        items = Item->fields._items;
        v59 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v51);
        size = Item->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            (Il2CppObject *)v45,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v45;
          sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v45, v52, v53, v54, v55, v56, v57);
        }
      }
      else
      {
        v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo,
                                                             v47,
                                                             v48,
                                                             v49);
        System_Collections_Generic_List_object____ctor(
          v62,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v62 )
          sub_1BCAA3C(v63, v64);
        v71 = v62->fields._items;
        v72 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
        ++v62->fields._version;
        if ( !v71 )
          sub_1BCAA3C(v63, v64);
        v73 = v62->fields._size;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v62,
            (Il2CppObject *)v45,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &v71->obj.klass + v73;
          v62->fields._size = v73 + 1;
          v74[4] = (Il2CppClass *)v45;
          sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), v45, v65, v66, v67, v68, v69, v70);
        }
        System_Collections_Generic_Dictionary_int__object___Add(
          v30,
          *(_DWORD *)(v45 + 44),
          (Il2CppObject *)v62,
          (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v75 = Enumerator->klass;
  v76 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_42;
    }
    v78 = (__int64)&v75->vtable[*v77].method;
  }
  else
  {
LABEL_42:
    v78 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v78)(Enumerator, *(_QWORD *)(v78 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v30;
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

  if ( (byte_4B16B11 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B16B11 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantSkillReleaseEntity__o *__fastcall ServantSkillReleaseMaster__GetEntryListFromCondType(
        ServantSkillReleaseMaster_o *this,
        int32_t condType,
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
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  ServantSkillReleaseEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B16B16 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&condType,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantSkillReleaseEntity_TypeInfo, v18, v19);
    byte_4B16B16 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&condType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
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
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = v33;
    if ( !v33 )
      goto LABEL_35;
    v42 = ServantSkillReleaseEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillReleaseEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_35:
      sub_1BCAA3C(v33, v34);
    }
    if ( *(_DWORD *)(v33 + 32) == condType )
    {
      if ( !v20 )
        sub_1BCAA3C(v33, ServantSkillReleaseEntity_TypeInfo);
      items = v20->fields._items;
      v45 = Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BCAA3C(v33, v42);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_31;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_31:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v20;
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

  if ( (byte_4B16B12 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16B12 = 1;
  }
  PK = (Il2CppObject *)ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v16; // x2
  int32_t condGroup; // w19
  int32_t v18; // w27
  bool v19; // w25
  System_String_o *Primarykey; // x28
  __int64 *lookup; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  void *v24; // x29
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v26; // x10
  __int64 v27; // x0
  const MethodInfo *v28; // x5
  __int64 methodPtr_low; // x9
  bool result; // w0
  ServantSkillEntity_o *v31; // x0
  int32_t *v32; // x1
  System_String_o **v33; // x2
  System_String_o **v34; // x3
  int32_t v35; // w4
  bool v36; // w5
  const MethodInfo *v37; // x6
  ServantSkillReleaseEntity_o *v41; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B16B14 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    sub_1BCA7E0(&ServantSkillReleaseEntity_TypeInfo, v15, v16);
    byte_4B16B14 = 1;
  }
  condGroup = 0;
  v18 = 1;
  v41 = 0LL;
  while ( 1 )
  {
    v19 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v18,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1BCAA3C(lookup, v22);
    v23 = *lookup;
    v24 = lookup;
    v25 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v26 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_9;
      }
      v27 = v23 + 16LL * (*(_DWORD *)v26 + 1) + 312;
    }
    else
    {
LABEL_9:
      v27 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v27)(
            v24,
            Primarykey,
            &v41,
            *(_QWORD *)(v27 + 8)) & 1) == 0 )
      return v19;
    lookup = (__int64 *)v41;
    if ( !v41 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v41->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantSkillReleaseEntity_c *)v41->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v18;
    if ( condGroup == v41->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v19 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v41->fields.condGroup;
      if ( v19 )
        return v19;
LABEL_19:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v41,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v28);
    }
  }
  sub_1BCACFC(v41);
  ServantSkillEntity__getEffectExplanation(v31, v32, v33, v34, v35, v36, v37);
  return result;
}