void GachaBaseCollateralMaster___ctor(GachaBaseCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2755A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
    byte_4C2755A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_338A52C *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
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

  if ( (byte_4C2755B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
    byte_4C2755B = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0);
  return (GachaBaseCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_338C850 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
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

  if ( (byte_4C2755C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
    byte_4C2755C = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
}


bool GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
        GachaBaseCollateralMaster_o *this,
        System_Collections_Generic_List_int__o **svtIdList,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  GiftMaster_o *v12; // x22
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_ICollection_o *ListById; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_int__o *v31; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C27559 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C27559 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  *svtIdList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)svtIdList, (int32_t)v7, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !this->fields.list )
    sub_1C2D6EC(Master_object, v11);
  v12 = (GiftMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C2D6EC(0, v24);
    if ( *(_DWORD *)(v23 + 16) == gachaId )
    {
      if ( !v12 )
        sub_1C2D6EC(v23, v24);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(v12, *(_DWORD *)(v23 + 24), v25);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1C2D6EC(IsNullOrEmpty, v28);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v42 = v41;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v29 )
            break;
          if ( !v42.fields._current )
            sub_1C2D6EC(v29, v30);
          if ( HIDWORD(v42.fields._current[1].klass) == 1 )
          {
            v31 = *svtIdList;
            if ( !*svtIdList )
              sub_1C2D6EC(0, v30);
            monitor_low = LODWORD(v42.fields._current[1].monitor);
            items = v31->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v31->fields._version;
            if ( !items )
              sub_1C2D6EC(v31, monitor_low);
            size = v31->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v31,
                monitor_low,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v31->fields._size = size + 1;
              items->m_Items[size] = monitor_low;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_42;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_42:
    v39 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtIdList, 0);
}