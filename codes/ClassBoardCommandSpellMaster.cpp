void __fastcall ClassBoardCommandSpellMaster___ctor(ClassBoardCommandSpellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21CDA & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__,
      method);
    byte_4C21CDA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    436,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string___ctor__);
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

  if ( (byte_4C21CDB & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4C21CDB = 1;
  }
  PK = (Il2CppObject *)ClassBoardCommandSpellEntity__CreatePK(id, commandSpellId, lv, *(const MethodInfo **)&lv);
  return (ClassBoardCommandSpellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_329F900 *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
        ClassBoardCommandSpellMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addFunctionCommandSpellId; // x0

  if ( (byte_4C21CD8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&id);
    byte_4C21CD8 = 1;
  }
  addFunctionCommandSpellId = this->fields.addFunctionCommandSpellId;
  if ( !addFunctionCommandSpellId )
    sub_1C3B9C0(0LL, *(_QWORD *)&id);
  return System_Collections_Generic_HashSet_int___Contains(
           addFunctionCommandSpellId,
           id,
           (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_4C21CDC & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__,
      entity);
    byte_4C21CDC = 1;
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
           (const MethodInfo_329F94C *)Method_DataMasterBase_ClassBoardCommandSpellMaster__ClassBoardCommandSpellEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x0
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x9
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4C21CD9 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__,
      entitys);
    sub_1C3B764(&System_IDisposable_TypeInfo, v9);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, v10);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__get_Count__, v14);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v15);
    byte_4C21CD9 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v16;
  sub_1C3B708((PartyOrganizationUtility_o *)entitys, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
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
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v43 = (Il2CppObject *)v35;
    if ( !v35 )
      sub_1C3B9C0(0LL, v36);
    if ( *(_DWORD *)(v35 + 16) == id && *(_DWORD *)(v35 + 24) == lv )
    {
      v44 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1C3B9C0(0LL, v36);
      items = v44->fields._items;
      v46 = Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__Add__;
      ++v44->fields._version;
      if ( !items )
        sub_1C3B9C0(v44, v36);
      size = v44->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          v43,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v44->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v43;
        sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v43, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_30;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_30:
    v52 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                             Enumerator,
                                                             *(_QWORD *)(v52 + 8));
  if ( !*entitys )
LABEL_37:
    sub_1C3B9C0(list, v23);
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
  System_Collections_Generic_HashSet_int__o *v10; // x19
  struct System_Collections_Generic_HashSet_int__o **p_addFunctionCommandSpellId; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *v19; // x0
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
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4C21CD7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Add__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4C21CD7 = 1;
  }
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_35415FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.addFunctionCommandSpellId = v10;
  p_addFunctionCommandSpellId = &this->fields.addFunctionCommandSpellId;
  sub_1C3B708((PartyOrganizationUtility_o *)p_addFunctionCommandSpellId, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  v19 = (System_Collections_ObjectModel_Collection_T__o *)*(p_addFunctionCommandSpellId - 4);
  if ( !v19 )
    sub_1C3B9C0(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v19,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardCommandSpellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v20);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo )
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
      v29 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardCommandSpellEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    if ( !v31 )
      sub_1C3B9C0(0LL, v30);
    if ( !*p_addFunctionCommandSpellId )
      sub_1C3B9C0(0LL, v30);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            *p_addFunctionCommandSpellId,
            *(_DWORD *)(v31 + 20),
            (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      if ( !*p_addFunctionCommandSpellId )
        sub_1C3B9C0(0LL, v32);
      System_Collections_Generic_HashSet_int___Add(
        *p_addFunctionCommandSpellId,
        *(_DWORD *)(v31 + 20),
        (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_27;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_27:
    v36 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return 1;
}