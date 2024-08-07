void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8BB & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__,
      method);
    byte_49FE8BB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_49FE8BC & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FE8BC = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D6AF0 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_49FE8B9 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&id);
    byte_49FE8B9 = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1B64C5C(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_3366994 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_49FE8BD & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__,
      entity);
    byte_49FE8BD = 1;
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
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x8
  ClassBoardCommandSpellEntity_c *v37; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x9
  _QWORD *v41; // x10
  __int64 size; // x11
  Il2CppClass **v43; // x9
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_49FE8BA & 1) == 0 )
  {
    sub_1B64A00(&ClassBoardCommandSpellEntity_TypeInfo, entitys);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9);
    sub_1B64A00(&System_IDisposable_TypeInfo, v10);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__, v15);
    sub_1B64A00(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v16);
    byte_49FE8BA = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v17;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)entitys, (int32_t)v17, v18, v19);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                            Enumerator,
                            *(_QWORD *)(v31 + 8));
    v36 = v32;
    if ( !v32 )
      goto LABEL_37;
    v37 = ClassBoardCommandSpellEntity_TypeInfo;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v32->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ClassBoardCommandSpellEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1B64F1C(v32);
LABEL_37:
      sub_1B64C5C(v32, v33);
    }
    if ( LODWORD(v32[1].klass) == id && LODWORD(v32[1].monitor) == lv )
    {
      v39 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1B64C5C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
      items = v39->fields._items;
      v41 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v39->fields._version;
      if ( !items )
        sub_1B64C5C(v39, v37);
      size = v39->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          v36,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v36;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v36, v34, v35);
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_32;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_32:
    v47 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                                                             Enumerator,
                                                             *(_QWORD *)(v47 + 8));
  if ( !*entitys )
LABEL_40:
    sub_1B64C5C(list, v20);
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  int32_t *v27; // x0
  __int64 v28; // x1
  int32_t *v29; // x21
  __int64 methodPtr_low; // x9
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_49FE8B8 & 1) == 0 )
  {
    sub_1B64A00(&ClassBoardCommandSpellEntity_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Add__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int___ctor__, v6);
    sub_1B64A00(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_1B64A00(&System_IDisposable_TypeInfo, v8);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_49FE8B8 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v11;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_addFunctionCommandSpellId, (int32_t)v11, v13, v14);
  v16 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 5);
  if ( !v16 )
    sub_1B64C5C(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v16,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                       Enumerator,
                       *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ClassBoardCommandSpellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(ClassBoardCommandSpellEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardCommandSpellEntity_TypeInfo )
    {
      sub_1B64F1C(v27);
LABEL_33:
      sub_1B64C5C(v27, v28);
    }
    if ( !*p_addFunctionCommandSpellId )
      sub_1B64C5C(0LL, ClassBoardCommandSpellEntity_TypeInfo);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            v27[5],
            (const MethodInfo_3366994 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1B64C5C(0LL, v31);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        v29[5],
        (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return 1;
}