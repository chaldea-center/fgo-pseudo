void __fastcall StaffPhotoMaster___ctor(StaffPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22AA8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__, method);
    byte_4C22AA8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
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

  if ( (byte_4C22AA7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__, *(_QWORD *)&selectedStaffPhotoId);
    byte_4C22AA7 = 1;
  }
  staffPhotoEntityList = 0LL;
  EnableEntityList = StaffPhotoMaster__TryGetEnableEntityList(this, &staffPhotoEntityList, selectedStaffPhotoId, v3);
  if ( !EnableEntityList )
    return 0;
  if ( !staffPhotoEntityList )
    sub_1C3B9C0(EnableEntityList, v7);
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
  __int64 v33; // x1
  int64_t v34; // x22
  int32_t v35; // w23
  int32_t v36; // w25
  int64_t v37; // x24
  _BOOL4 IsOpen; // w0
  int v39; // w24
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0

  if ( (byte_4C22AA6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__,
      staffPhotoEntityList);
    sub_1C3B764(&CondType_TypeInfo, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo, v13);
    byte_4C22AA6 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)staffPhotoEntityList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
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
      v32 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    if ( !v34 )
      sub_1C3B9C0(0LL, v33);
    v36 = *(_DWORD *)(v34 + 44);
    v35 = *(_DWORD *)(v34 + 48);
    v37 = *(int *)(v34 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v36, v35, v37, 0, 0LL, 0LL);
    v39 = *(_DWORD *)(v34 + 16);
    if ( (IsOpen & ((v39 != selectedStaffPhotoId) | StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v34, v40)) & 1) != 0 )
    {
      v48 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1C3B9C0(0LL, v41);
      items = v48->fields._items;
      v50 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v48->fields._version;
      if ( !items )
        sub_1C3B9C0(v48, v41);
      size = v48->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)v34,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        v48->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v34;
        sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 4), v34, v42, v43, v44, v45, v46, v47);
      }
    }
  }
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_31;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_31:
    v56 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(Enumerator, *(_QWORD *)(v56 + 8));
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x21
  int32_t v33; // w22
  int32_t v34; // w24
  int64_t v35; // x23
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4C22AA5 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__,
      staffPhotoEntityList);
    sub_1C3B764(&CondType_TypeInfo, v5);
    sub_1C3B764(&System_IDisposable_TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, v7);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo, v11);
    byte_4C22AA5 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v12;
  sub_1C3B708((PartyOrganizationUtility_o *)staffPhotoEntityList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
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
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    if ( !v32 )
      sub_1C3B9C0(0LL, v31);
    v34 = *(_DWORD *)(v32 + 44);
    v33 = *(_DWORD *)(v32 + 48);
    v35 = *(int *)(v32 + 52);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v34, v33, v35, 0, 0LL, 0LL) )
    {
      v43 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList )
        sub_1C3B9C0(0LL, v36);
      items = v43->fields._items;
      v45 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__;
      ++v43->fields._version;
      if ( !items )
        sub_1C3B9C0(v43, v36);
      size = v43->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          (Il2CppObject *)v32,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v43->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v32;
        sub_1C3B708((PartyOrganizationUtility_o *)(v47 + 4), v32, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_31;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_31:
    v51 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0LL);
}