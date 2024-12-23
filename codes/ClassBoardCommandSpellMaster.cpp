void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66944 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__,
      method);
    byte_4B66944 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    434,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_4B66945 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B66945 = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31FDB1C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4B66942 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&id);
    byte_4B66942 = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1BE4D28(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_4B66946 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__,
      entity);
    byte_4B66946 = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x8
  ClassBoardCommandSpellEntity_c *v45; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v47; // x0
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 size; // x11
  Il2CppClass **v51; // x9
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0

  if ( (byte_4B66943 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardCommandSpellEntity_TypeInfo, entitys);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v16);
    byte_4B66943 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v17;
  sub_1BE4A70((PartyOrganizationUtility_o *)entitys, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v26);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v35 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                            Enumerator,
                            *(_QWORD *)(v35 + 8));
    v44 = v36;
    if ( !v36 )
      goto LABEL_37;
    v45 = ClassBoardCommandSpellEntity_TypeInfo;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v36->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ClassBoardCommandSpellEntity_c *)v36->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1BE4FE8(v36);
LABEL_37:
      sub_1BE4D28(v36, v37);
    }
    if ( LODWORD(v36[1].klass) == id && LODWORD(v36[1].monitor) == lv )
    {
      v47 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1BE4D28(0LL, ClassBoardCommandSpellEntity_TypeInfo);
      items = v47->fields._items;
      v49 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v47->fields._version;
      if ( !items )
        sub_1BE4D28(v47, v45);
      size = v47->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v47,
          v44,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v47->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_32;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_32:
    v55 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                                             Enumerator,
                                                             *(_QWORD *)(v55 + 8));
  if ( !*entitys )
LABEL_40:
    sub_1BE4D28(list, v24);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardCommandSpellMaster__preProcess(
        ClassBoardCommandSpellMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_HashSet_int__o *v11; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  int32_t *v31; // x0
  __int64 v32; // x1
  int32_t *v33; // x21
  __int64 methodPtr_low; // x9
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B66941 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardCommandSpellEntity_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4B66941 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v11;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_addFunctionCommandSpellId, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  v20 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 5);
  if ( !v20 )
    sub_1BE4D28(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v20,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                       Enumerator,
                       *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
      || *(ClassBoardCommandSpellEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1BE4FE8(v31);
LABEL_33:
      sub_1BE4D28(v31, v32);
    }
    if ( !*p_addFunctionCommandSpellId )
      sub_1BE4D28(0LL, ClassBoardCommandSpellEntity_TypeInfo);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            v31[5],
            (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1BE4D28(0LL, v35);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        v33[5],
        (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return 1;
}