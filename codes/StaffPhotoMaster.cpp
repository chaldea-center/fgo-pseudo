void StaffPhotoMaster___ctor(StaffPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3160A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
    byte_4D3160A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
}


int32_t StaffPhotoMaster__GetEnableEntityNum(
        StaffPhotoMaster_o *this,
        int32_t selectedStaffPhotoId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 EnableEntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31609 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__);
    byte_4D31609 = 1;
  }
  staffPhotoEntityList = 0;
  EnableEntityList = StaffPhotoMaster__TryGetEnableEntityList(this, &staffPhotoEntityList, selectedStaffPhotoId, v3);
  if ( !EnableEntityList )
    return 0;
  if ( !staffPhotoEntityList )
    sub_1C93D2C(EnableEntityList, v7);
  return *(_DWORD *)((char *)&off_18 + (_QWORD)staffPhotoEntityList);
}


bool StaffPhotoMaster__TryGetEnableEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        int32_t selectedStaffPhotoId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x22
  int32_t v28; // w23
  int32_t v29; // w25
  int64_t v30; // x24
  _BOOL4 IsOpen; // w0
  int v32; // w24
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4D31608 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    byte_4D31608 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)staffPhotoEntityList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v21 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_16:
      v25 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( !v27 )
      sub_1C93D2C(0, v26);
    v29 = *(_DWORD *)(v27 + 44);
    v28 = *(_DWORD *)(v27 + 48);
    v30 = *(int *)(v27 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v29, v28, v30, 0, 0, 0);
    v32 = *(_DWORD *)(v27 + 16);
    if ( (IsOpen
        & ((v32 != selectedStaffPhotoId) | StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v27, v33))
        & 1) != 0 )
    {
      v41 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1C93D2C(0, v34);
      items = v41->fields._items;
      v43 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v41->fields._version;
      if ( !items )
        sub_1C93D2C(v41, v34);
      size = v41->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          (Il2CppObject *)v27,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v41->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v27;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v45 + 4), v27, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_31;
    }
    v49 = (__int64)&v46->vtable[*v48];
  }
  else
  {
LABEL_31:
    v49 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0);
}


bool StaffPhotoMaster__TryGetOpenEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
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
  __int64 v24; // x1
  __int64 v25; // x21
  int32_t v26; // w22
  int32_t v27; // w24
  int64_t v28; // x23
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_object__o *v36; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4D31607 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    byte_4D31607 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)staffPhotoEntityList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v14);
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
      v19 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
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
      v23 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    if ( !v25 )
      sub_1C93D2C(0, v24);
    v27 = *(_DWORD *)(v25 + 44);
    v26 = *(_DWORD *)(v25 + 48);
    v28 = *(int *)(v25 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v27, v26, v28, 0, 0, 0) )
    {
      v36 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1C93D2C(0, v29);
      items = v36->fields._items;
      v38 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1C93D2C(v36, v29);
      size = v36->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v25,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v25;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 4), v25, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_31;
    }
    v44 = (__int64)&v41->vtable[*v43];
  }
  else
  {
LABEL_31:
    v44 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0);
}