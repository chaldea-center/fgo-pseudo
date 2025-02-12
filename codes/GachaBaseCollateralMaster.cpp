void __fastcall GachaBaseCollateralMaster___ctor(GachaBaseCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4945 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__, method);
    byte_4BB4945 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
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

  if ( (byte_4BB4946 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4BB4946 = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0LL);
  return (GachaBaseCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_323D0DC *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
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

  if ( (byte_4BB4947 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__,
      entity);
    byte_4BB4947 = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *Master_object; // x0
  __int64 v27; // x1
  GiftMaster_o *v28; // x22
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_Collections_ICollection_o *ListById; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v44; // x1
  _BOOL8 v45; // x0
  __int64 v46; // x1
  System_Collections_Generic_List_int__o *v47; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB4944 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__, svtIdList);
    sub_1C13D24(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v11);
    sub_1C13D24(&System_IDisposable_TypeInfo, v12);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, v13);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v18);
    byte_4BB4944 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v19 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  *svtIdList = v19;
  sub_1C13CC8((PartyOrganizationUtility_o *)svtIdList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !this->fields.list )
    sub_1C13F80(Master_object, v27);
  v28 = (GiftMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_18;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_18:
      v38 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_1C13F80(0LL, v40);
    if ( *(_DWORD *)(v39 + 16) == gachaId )
    {
      if ( !v28 )
        sub_1C13F80(v39, v40);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(v28, *(_DWORD *)(v39 + 24), v41);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1C13F80(IsNullOrEmpty, v44);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v58 = v57;
        while ( 1 )
        {
          v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v58,
                  (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v45 )
            break;
          if ( !v58.fields._current )
            sub_1C13F80(v45, v46);
          if ( HIDWORD(v58.fields._current[1].klass) == 1 )
          {
            v47 = *svtIdList;
            if ( !*svtIdList )
              sub_1C13F80(0LL, v46);
            monitor_low = LODWORD(v58.fields._current[1].monitor);
            items = v47->fields._items;
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++v47->fields._version;
            if ( !items )
              sub_1C13F80(v47, monitor_low);
            size = v47->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v47,
                monitor_low,
                *(const MethodInfo_36101A8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v47->fields._size = size + 1;
              items->m_Items[size + 1] = monitor_low;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v58,
          (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_42;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_42:
    v55 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtIdList, 0LL);
}