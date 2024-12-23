void __fastcall GachaBaseCollateralMaster___ctor(GachaBaseCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E2E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__, method);
    byte_4B66E2E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
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

  if ( (byte_4B66E2F & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4B66E2F = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0LL);
  return (GachaBaseCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31FDB1C *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
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

  if ( (byte_4B66E30 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__,
      entity);
    byte_4B66E30 = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
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
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  GiftMaster_o *v29; // x22
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  _DWORD *v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  __int64 methodPtr_low; // x9
  System_Collections_ICollection_o *ListById; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  System_Collections_Generic_List_int__o *v49; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B66E2D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, svtIdList);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v11);
    sub_1BE4ACC(&GachaBaseCollateralEntity_TypeInfo, v12);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v19);
    byte_4B66E2D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v20 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  *svtIdList = v20;
  sub_1BE4A70((PartyOrganizationUtility_o *)svtIdList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !this->fields.list )
    sub_1BE4D28(Master_object, v28);
  v29 = (GiftMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_18;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_18:
      v39 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v40 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                      Enumerator,
                      *(_QWORD *)(v39 + 8));
    if ( !v40 )
      goto LABEL_48;
    methodPtr_low = LOBYTE(GachaBaseCollateralEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v40 + 304LL) < (unsigned int)methodPtr_low
      || *(GachaBaseCollateralEntity_c **)(*(_QWORD *)(*(_QWORD *)v40 + 200LL) + 8 * methodPtr_low - 8) != GachaBaseCollateralEntity_TypeInfo )
    {
      sub_1BE4FE8(v40);
LABEL_48:
      sub_1BE4D28(v40, v41);
    }
    if ( v40[4] == gachaId )
    {
      if ( !v29 )
        sub_1BE4D28(v40, GachaBaseCollateralEntity_TypeInfo);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(v29, v40[6], v42);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1BE4D28(IsNullOrEmpty, v46);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v60 = v59;
        while ( 1 )
        {
          v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v60,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v47 )
            break;
          if ( !v60.fields._current )
            sub_1BE4D28(v47, v48);
          if ( HIDWORD(v60.fields._current[1].klass) == 1 )
          {
            v49 = *svtIdList;
            if ( !*svtIdList )
              sub_1BE4D28(0LL, v48);
            monitor_low = LODWORD(v60.fields._current[1].monitor);
            items = v49->fields._items;
            v52 = Method_System_Collections_Generic_List_int__Add__;
            ++v49->fields._version;
            if ( !items )
              sub_1BE4D28(v49, monitor_low);
            size = v49->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v49,
                monitor_low,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v49->fields._size = size + 1;
              items->m_Items[size + 1] = monitor_low;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v60,
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
  }
  v54 = Enumerator->klass;
  v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_44;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_44:
    v57 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtIdList, 0LL);
}