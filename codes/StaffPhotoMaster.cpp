void __fastcall StaffPhotoMaster___ctor(StaffPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB9D6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__, method);
    byte_49BB9D6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_319B678 *)Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StaffPhotoMaster__GetEnableEntityNum(
        StaffPhotoMaster_o *this,
        int32_t selectedStaffPhotoId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 EnableEntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB9D5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__, *(_QWORD *)&selectedStaffPhotoId);
    byte_49BB9D5 = 1;
  }
  staffPhotoEntityList = 0LL;
  EnableEntityList = StaffPhotoMaster__TryGetEnableEntityList(this, &staffPhotoEntityList, selectedStaffPhotoId, v3);
  if ( !EnableEntityList )
    return 0;
  if ( !staffPhotoEntityList )
    sub_1B4D1EC(EnableEntityList, v7);
  return staffPhotoEntityList->fields._size;
}


bool __fastcall StaffPhotoMaster__TryGetEnableEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        int32_t selectedStaffPhotoId,
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x22
  int32_t v31; // w23
  int32_t v32; // w25
  int64_t v33; // x24
  _BOOL4 IsOpen; // w0
  int v35; // w24
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_49BB9D4 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__,
      staffPhotoEntityList);
    sub_1B4CF90(&CondType_TypeInfo, v7);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo, v13);
    byte_49BB9D4 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v14;
  sub_1B4CF34((CGThumbnailListItem_o *)staffPhotoEntityList, (int32_t)v14, v15, v16);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    if ( !v30 )
      sub_1B4D1EC(0LL, v29);
    v32 = *(_DWORD *)(v30 + 44);
    v31 = *(_DWORD *)(v30 + 48);
    v33 = *(int *)(v30 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v32, v31, v33, 0, 0LL, 0LL);
    v35 = *(_DWORD *)(v30 + 16);
    if ( (IsOpen & ((v35 != selectedStaffPhotoId) | StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v30, v36)) & 1) != 0 )
    {
      v40 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1B4D1EC(0LL, v37);
      items = v40->fields._items;
      v42 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v40->fields._version;
      if ( !items )
        sub_1B4D1EC(v40, v37);
      size = v40->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)v30,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v40->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1B4CF34((CGThumbnailListItem_o *)(v44 + 4), v30, v38, v39);
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_31;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_31:
    v48 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0LL);
}


bool __fastcall StaffPhotoMaster__TryGetOpenEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  int32_t v29; // w22
  int32_t v30; // w24
  int64_t v31; // x23
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_49BB9D3 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__,
      staffPhotoEntityList);
    sub_1B4CF90(&CondType_TypeInfo, v5);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo, v11);
    byte_49BB9D3 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v12;
  sub_1B4CF34((CGThumbnailListItem_o *)staffPhotoEntityList, (int32_t)v12, v13, v14);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v17);
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
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
      v26 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( !v28 )
      sub_1B4D1EC(0LL, v27);
    v30 = *(_DWORD *)(v28 + 44);
    v29 = *(_DWORD *)(v28 + 48);
    v31 = *(int *)(v28 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v30, v29, v31, 0, 0LL, 0LL) )
    {
      v35 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1B4D1EC(0LL, v32);
      items = v35->fields._items;
      v37 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v35->fields._version;
      if ( !items )
        sub_1B4D1EC(v35, v32);
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v28,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v28;
        sub_1B4CF34((CGThumbnailListItem_o *)(v39 + 4), v28, v33, v34);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0LL);
}