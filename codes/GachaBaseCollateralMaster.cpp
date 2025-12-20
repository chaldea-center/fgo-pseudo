void GachaBaseCollateralMaster___ctor(GachaBaseCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CBEC & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
    byte_4D2CBEC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
}


GachaBaseCollateralEntity_o *GachaBaseCollateralMaster__GetEntity(
        GachaBaseCollateralMaster_o *this,
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CBED & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
    byte_4D2CBED = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0);
  return (GachaBaseCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_345FF78 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
}


bool GachaBaseCollateralMaster__TryGetEntity(
        GachaBaseCollateralMaster_o *this,
        GachaBaseCollateralEntity_o **entity,
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2CBEE & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
    byte_4D2CBEE = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
}


bool GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
        GachaBaseCollateralMaster_o *this,
        System_Collections_Generic_List_int__o **svtIdList,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  GiftMaster_o *v16; // x22
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_ICollection_o *ListById; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x23
  __int64 v35; // x1
  System_Collections_Generic_List_int__o *v36; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2CBEB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2CBEB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  *svtIdList = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)svtIdList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !this->fields.list )
    sub_1C942F0(Master_object, v15);
  v16 = (GiftMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_11;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v22 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo )
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
      v26 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_1C942F0(0, v28);
    if ( *(_DWORD *)(v27 + 16) == gachaId )
    {
      if ( !v16 )
        sub_1C942F0(v27, v28);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(v16, *(_DWORD *)(v27 + 24), 0);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1C942F0(IsNullOrEmpty, v31);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v47 = v46;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v47,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v47.fields._current;
          if ( !v47.fields._current )
            sub_1C942F0(v32, v33);
          if ( GiftEntity__checkGiftType((GiftEntity_o *)v47.fields._current, 1, 0) )
          {
            v36 = *svtIdList;
            if ( !*svtIdList )
              sub_1C942F0(0, v35);
            monitor_low = LODWORD(current[1].monitor);
            items = v36->fields._items;
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++v36->fields._version;
            if ( !items )
              sub_1C942F0(v36, monitor_low);
            size = v36->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v36,
                monitor_low,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v36->fields._size = size + 1;
              items->m_Items[size] = monitor_low;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v47,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
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
        goto LABEL_42;
    }
    v44 = (__int64)&v41->vtable[*v43];
  }
  else
  {
LABEL_42:
    v44 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtIdList, 0);
}