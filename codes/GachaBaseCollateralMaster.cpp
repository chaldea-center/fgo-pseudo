void __fastcall GachaBaseCollateralMaster___ctor(GachaBaseCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E714 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__, method);
    byte_4A4E714 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBaseCollateralEntity_o *__fastcall GachaBaseCollateralMaster__GetEntity(
        GachaBaseCollateralMaster_o *this,
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4E715 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4A4E715 = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0LL);
  return (GachaBaseCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3218D38 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
}


bool __fastcall GachaBaseCollateralMaster__TryGetEntity(
        GachaBaseCollateralMaster_o *this,
        GachaBaseCollateralEntity_o **entity,
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4E716 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__,
      entity);
    byte_4A4E716 = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
}


bool __fastcall GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
        GachaBaseCollateralMaster_o *this,
        System_Collections_Generic_List_int__o **svtIdList,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_int__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  GiftMaster_o *v24; // x22
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
  const MethodInfo *v37; // x2
  System_Collections_ICollection_o *ListById; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v40; // x1
  _BOOL8 v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_int__o *v43; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4E713 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__, svtIdList);
    sub_1B863B8(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v11);
    sub_1B863B8(&System_IDisposable_TypeInfo, v12);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, v13);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v18);
    byte_4A4E713 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v19 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  *svtIdList = v19;
  sub_1B8635C((CGThumbnailListItem_o *)svtIdList, (int32_t)v19, v20, v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !this->fields.list )
    sub_1B86614(Master_object, v23);
  v24 = (GiftMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v25);
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_18;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_18:
      v34 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    if ( !v35 )
      sub_1B86614(0LL, v36);
    if ( *(_DWORD *)(v35 + 16) == gachaId )
    {
      if ( !v24 )
        sub_1B86614(v35, v36);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(v24, *(_DWORD *)(v35 + 24), v37);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1B86614(IsNullOrEmpty, v40);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v53,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v54 = v53;
        while ( 1 )
        {
          v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v54,
                  (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v41 )
            break;
          if ( !v54.fields._current )
            sub_1B86614(v41, v42);
          if ( HIDWORD(v54.fields._current[1].klass) == 1 )
          {
            v43 = *svtIdList;
            if ( !*svtIdList )
              sub_1B86614(0LL, v42);
            monitor_low = LODWORD(v54.fields._current[1].monitor);
            items = v43->fields._items;
            v46 = Method_System_Collections_Generic_List_int__Add__;
            ++v43->fields._version;
            if ( !items )
              sub_1B86614(v43, monitor_low);
            size = v43->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v43,
                monitor_low,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v43->fields._size = size + 1;
              items->m_Items[size + 1] = monitor_low;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v54,
          (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
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
        goto LABEL_42;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_42:
    v51 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtIdList, 0LL);
}