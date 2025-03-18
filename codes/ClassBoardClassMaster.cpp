void __fastcall ClassBoardClassMaster___ctor(ClassBoardClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21CCE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__, method);
    byte_4C21CCE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    431,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardClassMaster__GetClassBoardBaseId(
        ClassBoardClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w21
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C21CCC & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__,
      *(_QWORD *)&classId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C21CCC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, *(_QWORD *)&classId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
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
      v18 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C3B9C0(0LL, v20);
    if ( *(_DWORD *)(v19 + 20) == classId )
    {
      v21 = *(_DWORD *)(v19 + 16);
      goto LABEL_22;
    }
  }
  v21 = 0;
LABEL_22:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_26;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_26:
    v25 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v21;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardClassEntity_o *__fastcall ClassBoardClassMaster__GetEntity(
        ClassBoardClassMaster_o *this,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C21CCF & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_4C21CCF = 1;
  }
  PK = (Il2CppObject *)ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classId);
  return (ClassBoardClassEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_329F900 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
        ClassBoardClassMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
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
  ClassBoardClassEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  ClassBoardClassEntity_o *v27; // x22
  _BOOL8 IsOpen; // x0
  __int64 v29; // x1
  __int64 classId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4C21CCD & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__,
      *(_QWORD *)&baseId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4C21CCD = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v15);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
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
      v24 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0LL);
    }
    v25 = (ClassBoardClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                       Enumerator,
                                       *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      sub_1C3B9C0(0LL, v26);
    if ( v25->fields.classBoardBaseId == baseId )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(v25, v26);
      if ( IsOpen )
      {
        if ( !v12 )
          sub_1C3B9C0(IsOpen, v29);
        classId = (unsigned int)v27->fields.classId;
        items = v12->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1C3B9C0(IsOpen, classId);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            classId,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = classId;
        }
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_30;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_30:
    v37 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !v12 )
LABEL_37:
    sub_1C3B9C0(list, v13);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardClassMaster__TryGetEntity(
        ClassBoardClassMaster_o *this,
        ClassBoardClassEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C21CD0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__, entity);
    byte_4C21CD0 = 1;
  }
  PK = (Il2CppObject *)ClassBoardClassEntity__CreatePK(
                         classBoardBaseId,
                         classId,
                         *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
}


bool __fastcall ClassBoardClassMaster__TryGetEntityList(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entitys,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
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
  Il2CppObject *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x0
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x9
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4C21CCA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__, entitys);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v12);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo, v13);
    byte_4C21CCA = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)entitys, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v23);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
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
      v32 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = (Il2CppObject *)v33;
    if ( !v33 )
      sub_1C3B9C0(0LL, v34);
    if ( *(_DWORD *)(v33 + 16) == id )
    {
      v42 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys )
        sub_1C3B9C0(0LL, v34);
      items = v42->fields._items;
      v44 = Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__;
      ++v42->fields._version;
      if ( !items )
        sub_1C3B9C0(v42, v34);
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v42,
          v41,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v42->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v41;
        sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_29;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_29:
    v50 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                             Enumerator,
                                                             *(_QWORD *)(v50 + 8));
  if ( !*entitys )
LABEL_36:
    sub_1C3B9C0(list, v21);
  return (*entitys)->fields._size > 0;
}


bool __fastcall ClassBoardClassMaster__TryGetEntityListFromClassId(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entityList,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
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
  Il2CppObject *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x0
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x9
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4C21CCB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__, entityList);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__, v12);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo, v13);
    byte_4C21CCB = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entityList = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)entityList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v23);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
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
      v32 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = (Il2CppObject *)v33;
    if ( !v33 )
      sub_1C3B9C0(0LL, v34);
    if ( *(_DWORD *)(v33 + 20) == classId )
    {
      v42 = (System_Collections_Generic_List_object__o *)*entityList;
      if ( !*entityList )
        sub_1C3B9C0(0LL, v34);
      items = v42->fields._items;
      v44 = Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__;
      ++v42->fields._version;
      if ( !items )
        sub_1C3B9C0(v42, v34);
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v42,
          v41,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v42->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v41;
        sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_29;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_29:
    v50 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                             Enumerator,
                                                             *(_QWORD *)(v50 + 8));
  if ( !*entityList )
LABEL_36:
    sub_1C3B9C0(list, v21);
  return (*entityList)->fields._size > 0;
}