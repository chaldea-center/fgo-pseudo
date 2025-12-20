void ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C5CC & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
    byte_4D2C5CC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    436,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_4D2C5CD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
    byte_4D2C5CD = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_345FF78 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4D2C5CA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D2C5CA = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1C942F0(0, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_4D2C5CE & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
    byte_4D2C5CE = 1;
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
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x9
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4D2C5CB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    byte_4D2C5CB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)entitys, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v23 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8))
        & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_16:
      v27 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v36 = (Il2CppObject *)v28;
    if ( !v28 )
      sub_1C942F0(0, v29);
    if ( *(_DWORD *)(v28 + 16) == id && *(_DWORD *)(v28 + 24) == lv )
    {
      v37 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1C942F0(0, v29);
      items = v37->fields._items;
      v39 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v37->fields._version;
      if ( !items )
        sub_1C942F0(v37, v29);
      size = v37->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          v36,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v37->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v36;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v36, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_30;
    }
    v45 = (__int64)&v42->vtable[*v44];
  }
  else
  {
LABEL_30:
    v45 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                             Enumerator,
                                                             *(_QWORD *)(v45 + 8));
  if ( !*entitys )
LABEL_37:
    sub_1C942F0(list, v16);
  return (*entitys)->fields._size > 0;
}


bool ClassBoardCommandSpellMaster__preProcess(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4D2C5C9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2C5C9 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v3;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_addFunctionCommandSpellId, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v12 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 4);
  if ( !v12 )
    sub_1C942F0(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v12,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v18 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_16:
      v22 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v24 )
      sub_1C942F0(0, v23);
    if ( !*p_addFunctionCommandSpellId )
      sub_1C942F0(0, v23);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            *(_DWORD *)(v24 + 20),
            (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1C942F0(0, v25);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        *(_DWORD *)(v24 + 20),
        (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_27;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_27:
    v29 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return 1;
}