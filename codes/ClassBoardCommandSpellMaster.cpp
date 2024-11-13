void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F81 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__,
      method,
      v2);
    byte_4B15F81 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardCommandSpellEntity_o *__fastcall ClassBoardCommandSpellMaster__GetEntity(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15F82 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&commandSpellId);
    byte_4B15F82 = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31B3198 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4B15F7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&id, method);
    byte_4B15F7F = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1BCAA3C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__TryGetEntity(
        ClassBoardCommandSpellMaster_o *this,
        ClassBoardCommandSpellEntity_o **entity,
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15F83 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B15F83 = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(
                         id,
                         commandSpellId,
                         lv,
                         *(const MethodInfo **)&commandSpellId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *v52; // x8
  ClassBoardCommandSpellEntity_c *v53; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v55; // x0
  struct System_Object_array *items; // x9
  _QWORD *v57; // x10
  __int64 size; // x11
  Il2CppClass **v59; // x9
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0

  if ( (byte_4B15F80 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardCommandSpellEntity_TypeInfo, entitys, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v23, v24);
    byte_4B15F80 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo,
                                                       entitys,
                                                       *(_QWORD *)&id,
                                                       *(_QWORD *)&lv);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)entitys, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
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
    v40 = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_16;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_16:
      v43 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v44 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                            Enumerator,
                            *(_QWORD *)(v43 + 8));
    v52 = v44;
    if ( !v44 )
      goto LABEL_37;
    v53 = ClassBoardCommandSpellEntity_TypeInfo;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v44->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ClassBoardCommandSpellEntity_c *)v44->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1BCACFC(v44);
LABEL_37:
      sub_1BCAA3C(v44, v45);
    }
    if ( LODWORD(v44[1].klass) == id && LODWORD(v44[1].monitor) == lv )
    {
      v55 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1BCAA3C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
      items = v55->fields._items;
      v57 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v55->fields._version;
      if ( !items )
        sub_1BCAA3C(v55, v53);
      size = v55->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          v52,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + size;
        v55->fields._size = size + 1;
        v59[4] = (Il2CppClass *)v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v52, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  v60 = Enumerator->klass;
  v61 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_32;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_32:
    v63 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(
                                                             Enumerator,
                                                             *(_QWORD *)(v63 + 8));
  if ( !*entitys )
LABEL_40:
    sub_1BCAA3C(list, v32);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardCommandSpellMaster__preProcess(
        ClassBoardCommandSpellMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  System_Collections_Generic_HashSet_int__o *v21; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_T__o *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int32_t *v41; // x0
  __int64 v42; // x1
  int32_t *v43; // x21
  __int64 methodPtr_low; // x9
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4B15F7E & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardCommandSpellEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    byte_4B15F7E = 1;
  }
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v21,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v21;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1BCA784((PartyOrganizationUtility_o *)p_addFunctionCommandSpellId, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  v30 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 5);
  if ( !v30 )
    sub_1BCAA3C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v30,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
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
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_16;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_16:
      v40 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                       Enumerator,
                       *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ClassBoardCommandSpellEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1BCACFC(v41);
LABEL_33:
      sub_1BCAA3C(v41, v42);
    }
    if ( !*p_addFunctionCommandSpellId )
      sub_1BCAA3C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            v41[5],
            (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1BCAA3C(0LL, v45);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        v43[5],
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return 1;
}