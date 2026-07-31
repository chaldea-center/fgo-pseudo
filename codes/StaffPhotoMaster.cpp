void StaffPhotoMaster___ctor(StaffPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939333 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
    byte_5939333 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    214,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int___ctor__);
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

  if ( (byte_5939332 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__);
    byte_5939332 = 1;
  }
  staffPhotoEntityList = 0;
  EnableEntityList = StaffPhotoMaster__TryGetEnableEntityList(this, &staffPhotoEntityList, selectedStaffPhotoId, v3);
  if ( !EnableEntityList )
    return 0;
  if ( !staffPhotoEntityList )
    sub_21FFECC(EnableEntityList, v7);
  return *(_DWORD *)((char *)off_18 + (_QWORD)staffPhotoEntityList);
}


bool StaffPhotoMaster__TryGetEnableEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        int32_t selectedStaffPhotoId,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x21
  int64_t v31; // x24
  int32_t v32; // w22
  int32_t v33; // w23
  _BOOL4 IsOpen; // w0
  int v35; // w23
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_object__o *v44; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  System_Collections_Generic_IEnumerator_T__o *v54; // [xsp+18h] [xbp-58h]

  if ( (byte_5939331 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    byte_5939331 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)staffPhotoEntityList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  v54 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v17);
  for ( i = Enumerator; ; i = v54 )
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
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            i,
            *(_QWORD *)(v22 + 8));
    if ( (v23 & 1) == 0 )
      break;
    if ( !v54 )
      sub_21FFECC(v23, v24);
    v25 = v54->klass;
    v26 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
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
      v28 = sub_2237E2C(v54, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            v54,
            *(_QWORD *)(v28 + 8));
    if ( !v30 )
      sub_21FFECC(0, v29);
    v31 = *(int *)(v30 + 52);
    v32 = *(_DWORD *)(v30 + 44);
    v33 = *(_DWORD *)(v30 + 48);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
    IsOpen = CondType__IsOpen(v32, v33, v31, 0, 0, 0);
    v35 = *(_DWORD *)(v30 + 16);
    if ( (IsOpen
        & ((v35 != selectedStaffPhotoId) | StaffPhotoEntity__IsEnableSameSet((StaffPhotoEntity_o *)v30, v36))
        & 1) != 0 )
    {
      v44 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList
        || (items = v44->fields._items,
            v46 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__,
            ++v44->fields._version,
            !items) )
      {
        sub_21FFECC(v44, v37);
      }
      size = v44->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v30,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v44->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v30;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), v30, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  if ( v54 )
  {
    v49 = v54->klass;
    v50 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_36;
      }
      v52 = (__int64)&v49->vtable[*v51];
    }
    else
    {
LABEL_36:
      v52 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(v54, *(_QWORD *)(v52 + 8));
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0);
}


bool StaffPhotoMaster__TryGetOpenEntityList(
        StaffPhotoMaster_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o **staffPhotoEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x20
  int64_t v29; // x23
  int32_t v30; // w21
  int32_t v31; // w22
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-58h]

  if ( (byte_5939330 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
    byte_5939330 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StaffPhotoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StaffPhotoEntity___ctor__);
  *staffPhotoEntityList = (System_Collections_Generic_List_StaffPhotoEntity__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)staffPhotoEntityList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v15);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            i,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v49 )
      sub_21FFECC(v21, v22);
    v23 = v49->klass;
    v24 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo )
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
      v26 = sub_2237E2C(v49, System_Collections_Generic_IEnumerator_StaffPhotoEntity__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v49,
            *(_QWORD *)(v26 + 8));
    if ( !v28 )
      sub_21FFECC(0, v27);
    v29 = *(int *)(v28 + 52);
    v30 = *(_DWORD *)(v28 + 44);
    v31 = *(_DWORD *)(v28 + 48);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v27);
    if ( CondType__IsOpen(v30, v31, v29, 0, 0, 0) )
    {
      v39 = (System_Collections_Generic_List_object__o *)*staffPhotoEntityList;
      if ( !*staffPhotoEntityList
        || (items = v39->fields._items,
            v41 = Method_System_Collections_Generic_List_StaffPhotoEntity__Add__,
            ++v39->fields._version,
            !items) )
      {
        sub_21FFECC(v39, v32);
      }
      size = v39->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          (Il2CppObject *)v28,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), v28, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  if ( v49 )
  {
    v44 = v49->klass;
    v45 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_36;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_36:
      v47 = sub_2237E2C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoEntityList, 0);
}