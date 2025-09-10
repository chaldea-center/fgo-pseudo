void ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2703A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
    byte_4C2703A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    436,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardCommandSpellEntity_o *ClassBoardCommandSpellMaster__GetEntity(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2703B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
    byte_4C2703B = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_338C850 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4C27038 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C27038 = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1C2D6EC(0, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardCommandSpellMaster__TryGetEntity(
        ClassBoardCommandSpellMaster_o *this,
        ClassBoardCommandSpellEntity_o **entity,
        int32_t id,
        int32_t commandSpellId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2703C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
    byte_4C2703C = 1;
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
           (const MethodInfo_338C89C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


bool ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x0
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x9
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4C27039 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    byte_4C27039 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)entitys, (int32_t)v9, v10, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8))
        & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_16:
      v23 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = (Il2CppObject *)v24;
    if ( !v24 )
      sub_1C2D6EC(0, v25);
    if ( *(_DWORD *)(v24 + 16) == id && *(_DWORD *)(v24 + 24) == lv )
    {
      v29 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1C2D6EC(0, v25);
      items = v29->fields._items;
      v31 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v29->fields._version;
      if ( !items )
        sub_1C2D6EC(v29, v25);
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          v28,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v28;
        sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v28, v26, v27);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_30;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_30:
    v37 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !*entitys )
LABEL_37:
    sub_1C2D6EC(list, v12);
  return (*entitys)->fields._size > 0;
}


bool ClassBoardCommandSpellMaster__preProcess(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C27037 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27037 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v3;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1C2D434((CGThumbnailListItem_o *)p_addFunctionCommandSpellId, (int32_t)v3, v5, v6);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 4);
  if ( !v8 )
    sub_1C2D6EC(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v8,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v20 )
      sub_1C2D6EC(0, v19);
    if ( !*p_addFunctionCommandSpellId )
      sub_1C2D6EC(0, v19);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            *(_DWORD *)(v20 + 20),
            (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1C2D6EC(0, v21);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        *(_DWORD *)(v20 + 20),
        (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_27:
    v25 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return 1;
}