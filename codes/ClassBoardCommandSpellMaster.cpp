void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AEF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
    byte_4A5AEF1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_4A5AEF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
    byte_4A5AEF2 = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_311DC8C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4A5AEEF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4A5AEEF = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1B8880C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_4A5AEF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
    byte_4A5AEF3 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x8
  ClassBoardCommandSpellEntity_c *v29; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v31; // x0
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x9
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A5AEF0 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardCommandSpellEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    byte_4A5AEF0 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)entitys, (int32_t)v9, v10, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v14);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v23 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                            Enumerator,
                            *(_QWORD *)(v23 + 8));
    v28 = v24;
    if ( !v24 )
      goto LABEL_37;
    v29 = ClassBoardCommandSpellEntity_TypeInfo;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ClassBoardCommandSpellEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1B88ACC(v24);
LABEL_37:
      sub_1B8880C(v24, v25);
    }
    if ( LODWORD(v24[1].klass) == id && LODWORD(v24[1].monitor) == lv )
    {
      v31 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1B8880C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
      items = v31->fields._items;
      v33 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v31->fields._version;
      if ( !items )
        sub_1B8880C(v31, v29);
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          v28,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v26, v27);
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
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                             Enumerator,
                                                             *(_QWORD *)(v39 + 8));
  if ( !*entitys )
LABEL_40:
    sub_1B8880C(list, v12);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardCommandSpellMaster__preProcess(
        ClassBoardCommandSpellMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  int32_t *v19; // x0
  __int64 v20; // x1
  int32_t *v21; // x21
  __int64 methodPtr_low; // x9
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5AEEE & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardCommandSpellEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5AEEE = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v3;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_addFunctionCommandSpellId, (int32_t)v3, v5, v6);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 5);
  if ( !v8 )
    sub_1B8880C(0LL, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v8,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
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
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                       Enumerator,
                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
      || *(ClassBoardCommandSpellEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1B88ACC(v19);
LABEL_33:
      sub_1B8880C(v19, v20);
    }
    if ( !*p_addFunctionCommandSpellId )
      sub_1B8880C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            v19[5],
            (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1B8880C(0LL, v23);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        v21[5],
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return 1;
}