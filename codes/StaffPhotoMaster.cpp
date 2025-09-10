void StaffPhotoMaster___ctor(StaffPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EEC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
    byte_4C27EEC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
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

  if ( (byte_4C27EEB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__);
    byte_4C27EEB = 1;
  }
  staffPhotoEntityList = 0;
  EnableEntityList = StaffPhotoMaster__TryGetEnableEntityList(this, &staffPhotoEntityList, selectedStaffPhotoId, v3);
  if ( !EnableEntityList )
    return 0;
  if ( !staffPhotoEntityList )
    sub_1C2D6EC(EnableEntityList, v7);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  int32_t v24; // w23
  int32_t v25; // w25
  int64_t v26; // x24
  _BOOL4 IsOpen; // w0
  int v28; // w24
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4C27EEA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    byte_4C27EEA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)staffPhotoEntityList, (int32_t)v7, v8, v9);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_16:
      v21 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v23 )
      sub_1C2D6EC(0, v22);
    v25 = *(_DWORD *)(v23 + 44);
    v24 = *(_DWORD *)(v23 + 48);
    v26 = *(int *)(v23 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v25, v24, v26, 0, 0, 0);
    v28 = *(_DWORD *)(v23 + 16);
    if ( (IsOpen
        & ((v28 != selectedStaffPhotoId) | StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v23, v29))
        & 1) != 0 )
    {
      v33 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1C2D6EC(0, v30);
      items = v33->fields._items;
      v35 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C2D6EC(v33, v30);
      size = v33->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)v23,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v23;
        sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), v23, v31, v32);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_31;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_31:
    v41 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0);
}


bool StaffPhotoMaster__TryGetOpenEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  int32_t v22; // w22
  int32_t v23; // w24
  int64_t v24; // x23
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x0
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4C27EE9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    byte_4C27EE9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)staffPhotoEntityList, (int32_t)v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( !v21 )
      sub_1C2D6EC(0, v20);
    v23 = *(_DWORD *)(v21 + 44);
    v22 = *(_DWORD *)(v21 + 48);
    v24 = *(int *)(v21 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v23, v22, v24, 0, 0, 0) )
    {
      v28 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1C2D6EC(0, v25);
      items = v28->fields._items;
      v30 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        sub_1C2D6EC(v28, v25);
      size = v28->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v21,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), v21, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_31:
    v36 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0);
}