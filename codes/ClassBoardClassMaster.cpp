void ClassBoardClassMaster___ctor(ClassBoardClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59383DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
    byte_59383DD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    433,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ClassBoardClassMaster__GetClassBoardBaseId(
        ClassBoardClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  int32_t v16; // w20
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__o *v22; // [xsp+18h] [xbp-38h]

  if ( (byte_59383DB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59383DB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&classId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  v22 = Enumerator;
  while ( 1 )
  {
    if ( !v22 )
      sub_21FFECC(Enumerator, v7);
    klass = v22->klass;
    v9 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_2237E2C(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v22,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v22->klass;
    v13 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_17:
      v15 = sub_2237E2C(v22, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                  v22,
                                                                  *(_QWORD *)(v15 + 8));
    if ( !Enumerator )
      sub_21FFECC(0, v7);
    if ( HIDWORD(Enumerator[1].klass) == classId )
    {
      v16 = (int32_t)Enumerator[1].klass;
      goto LABEL_23;
    }
  }
  v16 = 0;
LABEL_23:
  v17 = v22->klass;
  v18 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_27:
    v20 = sub_2237E2C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(v22, *(_QWORD *)(v20 + 8));
  return v16;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardClassEntity_o *ClassBoardClassMaster__GetEntity(
        ClassBoardClassMaster_o *this,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59383DE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
    byte_59383DE = 1;
  }
  PK = (Il2CppObject *)ClassBoardClassEntity__CreatePK(classBoardBaseId, classId, *(const MethodInfo **)&classId);
  return (ClassBoardClassEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__GetEntity__);
}


System_Int32_array *ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
        ClassBoardClassMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  ClassBoardClassEntity_o *v19; // x0
  const MethodInfo *v20; // x1
  ClassBoardClassEntity_o *v21; // x21
  _BOOL8 IsOpen; // x0
  __int64 classId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-38h]

  if ( (byte_59383DC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_59383DC = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
             i,
             *(_QWORD *)(v14 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v32 )
      sub_21FFECC(list, v6);
    v15 = v32->klass;
    v16 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_2237E2C(v32, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0);
    }
    v19 = (ClassBoardClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                       v32,
                                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_21FFECC(0, v20);
    if ( v19->fields.classBoardBaseId == baseId )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(v19, v20);
      if ( IsOpen )
      {
        if ( !v5
          || (items = v5->fields._items,
              classId = (unsigned int)v21->fields.classId,
              v25 = Method_System_Collections_Generic_List_int__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_21FFECC(IsOpen, classId);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            classId,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = classId;
        }
      }
    }
  }
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_35;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_35:
      v30 = sub_2237E2C(v32, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
             v32,
             *(_QWORD *)(v30 + 8));
  }
  if ( !v5 )
LABEL_43:
    sub_21FFECC(list, v6);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardClassMaster__TryGetEntity(
        ClassBoardClassMaster_o *this,
        ClassBoardClassEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59383DF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
    byte_59383DF = 1;
  }
  PK = (Il2CppObject *)ClassBoardClassEntity__CreatePK(
                         classBoardBaseId,
                         classId,
                         *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ClassBoardClassMaster__ClassBoardClassEntity__string__TryGetEntity__);
}


bool ClassBoardClassMaster__TryGetEntityList(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entitys,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x1
  System_Collections_Generic_List_object__o *v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Collections_Generic_IEnumerator_T__o *v45; // [xsp+18h] [xbp-38h]

  if ( (byte_59383D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
    byte_59383D9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entitys = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entitys, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  v45 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v17);
  for ( i = Enumerator; ; i = v45 )
  {
    klass = i->klass;
    v20 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_10;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v22 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
             i,
             *(_QWORD *)(v22 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v45 )
      sub_21FFECC(list, v14);
    v23 = v45->klass;
    v24 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v45, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v45,
            *(_QWORD *)(v26 + 8));
    v34 = (Il2CppObject *)v27;
    if ( !v27 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v27 + 16) == id )
    {
      v35 = (System_Collections_Generic_List_object__o *)*entitys;
      if ( !*entitys
        || (items = v35->fields._items,
            v37 = Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__,
            ++v35->fields._version,
            !items) )
      {
        sub_21FFECC(v35, v34);
      }
      size = v35->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          v34,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v34;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v34, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  if ( v45 )
  {
    v40 = v45->klass;
    v41 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_34;
      }
      v43 = (__int64)&v40->vtable[*v42];
    }
    else
    {
LABEL_34:
      v43 = sub_2237E2C(v45, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
             v45,
             *(_QWORD *)(v43 + 8));
  }
  if ( !*entitys )
LABEL_42:
    sub_21FFECC(list, v14);
  return (*entitys)->fields._size > 0;
}


bool ClassBoardClassMaster__TryGetEntityListFromClassId(
        ClassBoardClassMaster_o *this,
        System_Collections_Generic_List_ClassBoardClassEntity__o **entityList,
        int32_t classId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x1
  System_Collections_Generic_List_object__o *v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Collections_Generic_IEnumerator_T__o *v45; // [xsp+18h] [xbp-38h]

  if ( (byte_59383DA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
    byte_59383DA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity___ctor__);
  *entityList = (System_Collections_Generic_List_ClassBoardClassEntity__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entityList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ClassBoardClassEntity__GetEnumerator__);
  v45 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v17);
  for ( i = Enumerator; ; i = v45 )
  {
    klass = i->klass;
    v20 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_10;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v22 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
             i,
             *(_QWORD *)(v22 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v45 )
      sub_21FFECC(list, v14);
    v23 = v45->klass;
    v24 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardClassEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v45, System_Collections_Generic_IEnumerator_ClassBoardClassEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v45,
            *(_QWORD *)(v26 + 8));
    v34 = (Il2CppObject *)v27;
    if ( !v27 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v27 + 20) == classId )
    {
      v35 = (System_Collections_Generic_List_object__o *)*entityList;
      if ( !*entityList
        || (items = v35->fields._items,
            v37 = Method_System_Collections_Generic_List_ClassBoardClassEntity__Add__,
            ++v35->fields._version,
            !items) )
      {
        sub_21FFECC(v35, v34);
      }
      size = v35->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          v34,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v34;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v34, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  if ( v45 )
  {
    v40 = v45->klass;
    v41 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_34;
      }
      v43 = (__int64)&v40->vtable[*v42];
    }
    else
    {
LABEL_34:
      v43 = sub_2237E2C(v45, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
             v45,
             *(_QWORD *)(v43 + 8));
  }
  if ( !*entityList )
LABEL_42:
    sub_21FFECC(list, v14);
  return (*entityList)->fields._size > 0;
}