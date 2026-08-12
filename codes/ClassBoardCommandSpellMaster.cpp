void ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970599 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
    byte_5970599 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    438,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_597059A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
    byte_597059A = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_3F157EC *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_5970597 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_5970597 = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_2213CDC(0, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_597059B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
    byte_597059B = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
}


bool ClassBoardCommandSpellMaster__TryGetEntityList(
        ClassBoardCommandSpellMaster_o *this,
        System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **entitys,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x1
  System_Collections_Generic_List_object__o *v37; // x0
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-48h]

  if ( (byte_5970598 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    byte_5970598 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entitys, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  v47 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v19);
  for ( i = Enumerator; ; i = v47 )
  {
    klass = i->klass;
    v22 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_10;
      }
      v24 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v24 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
             i,
             *(_QWORD *)(v24 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v47 )
      sub_2213CDC(list, v16);
    v25 = v47->klass;
    v26 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_18:
      v28 = sub_224BC3C(v47, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            v47,
            *(_QWORD *)(v28 + 8));
    v36 = (Il2CppObject *)v29;
    if ( !v29 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v29 + 16) == id && *(_DWORD *)(v29 + 24) == lv )
    {
      v37 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys
        || (items = v37->fields._items,
            v39 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__,
            ++v37->fields._version,
            !items) )
      {
        sub_2213CDC(v37, v36);
      }
      size = v37->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          v36,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v37->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v36;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v36, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  if ( v47 )
  {
    v42 = v47->klass;
    v43 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_35;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_35:
      v45 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
             v47,
             *(_QWORD *)(v45 + 8));
  }
  if ( !*entitys )
LABEL_43:
    sub_2213CDC(list, v16);
  return (*entitys)->fields._size > 0;
}


bool ClassBoardCommandSpellMaster__preProcess(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-38h]

  if ( (byte_5970596 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970596 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v3;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_addFunctionCommandSpellId, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v12 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 4);
  if ( !v12 )
    sub_2213CDC(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v12,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v14);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v19 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v34 )
      sub_2213CDC(v20, v21);
    v22 = v34->klass;
    v23 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_18:
      v25 = sub_224BC3C(v34, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            v34,
            *(_QWORD *)(v25 + 8));
    if ( !v27 )
      sub_2213CDC(0, v26);
    if ( !*p_addFunctionCommandSpellId )
      sub_2213CDC(0, v26);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            *(_DWORD *)(v27 + 20),
            (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_2213CDC(0, v28);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        *(_DWORD *)(v27 + 20),
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  if ( v34 )
  {
    v29 = v34->klass;
    v30 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_32;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_32:
      v32 = sub_224BC3C(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(v34, *(_QWORD *)(v32 + 8));
  }
  return 1;
}