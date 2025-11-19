void StaffPhotoCostumeMaster___ctor(StaffPhotoCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F04 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
    byte_4CB6F04 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    213,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StaffPhotoCostumeEntity_o *StaffPhotoCostumeMaster__GetEntity(
        StaffPhotoCostumeMaster_o *this,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6F05 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
    byte_4CB6F05 = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&idx);
  return (StaffPhotoCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_33FDB94 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
}


System_Int32_array *StaffPhotoCostumeMaster__GetPhotoPositionCenterByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imgId,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-18h] BYREF

  costumeEntity = 0;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imgId, method) )
  {
    if ( !costumeEntity )
      sub_1C6BC60(0, v5);
    return StaffPhotoCostumeEntity__GetPhotoPositionCenter(costumeEntity, defaultValue, v6);
  }
  return defaultValue;
}


System_Int32_array *StaffPhotoCostumeMaster__GetPhotoPositionLeftByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imgId,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-18h] BYREF

  costumeEntity = 0;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imgId, method) )
  {
    if ( !costumeEntity )
      sub_1C6BC60(0, v5);
    return StaffPhotoCostumeEntity__GetPhotoPositionLeft(costumeEntity, defaultValue, v6);
  }
  return defaultValue;
}


System_Int32_array *StaffPhotoCostumeMaster__GetPhotoPositionRightByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imgId,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-18h] BYREF

  costumeEntity = 0;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imgId, method) )
  {
    if ( !costumeEntity )
      sub_1C6BC60(0, v5);
    return StaffPhotoCostumeEntity__GetPhotoPositionRight(costumeEntity, defaultValue, v6);
  }
  return defaultValue;
}


bool StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
        StaffPhotoCostumeMaster_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o **staffPhotoCostumeList,
        int32_t staffPhotoId,
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
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4CB6F02 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
    byte_4CB6F02 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)staffPhotoCostumeList, (int32_t)v7, v8, v9);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v12);
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
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
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
      v21 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                            Enumerator,
                            *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      sub_1C6BC60(0, v23);
    if ( LODWORD(v22[1].klass) == staffPhotoId )
    {
      monitor = (int32_t)v22[3].monitor;
      monitor_high = HIDWORD(v22[3].monitor);
      klass_low = SLODWORD(v22[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        v31 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
        if ( !*staffPhotoCostumeList )
          sub_1C6BC60(0, v28);
        items = v31->fields._items;
        v33 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1C6BC60(v31, v28);
        size = v31->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            v24,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v24;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v24, v29, v30);
        }
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
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_32:
    v39 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoCostumeList, 0);
}


// local variable allocation has failed, the output may be wrong!
bool StaffPhotoCostumeMaster__TryGetEntity(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **entity,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6F06 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
    byte_4CB6F06 = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&staffPhotoId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
}


bool StaffPhotoCostumeMaster__TryGetEntityByImageId(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **costumeEntity,
        int32_t imageId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  StaffPhotoCostumeEntity_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool v23; // w21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4CB6F03 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CB6F03 = 1;
  }
  *costumeEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)costumeEntity, 0, imageId, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    v19 = (StaffPhotoCostumeEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                         Enumerator,
                                         *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C6BC60(0, v20);
    if ( v19->fields.imageId == imageId )
    {
      *costumeEntity = v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)costumeEntity, (int32_t)v19, v21, v22);
      v23 = 1;
      goto LABEL_22;
    }
  }
  v23 = 0;
LABEL_22:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_26;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_26:
    v27 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v23;
}


bool StaffPhotoCostumeMaster__TryGetEntityListByStaffId(
        StaffPhotoCostumeMaster_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o **staffPhotoCostumeList,
        int32_t staffPhotoId,
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
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x0
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x9
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4CB6F01 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
    byte_4CB6F01 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)staffPhotoCostumeList, (int32_t)v7, v8, v9);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v12);
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
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
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
      v21 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v26 = (Il2CppObject *)v22;
    if ( !v22 )
      sub_1C6BC60(0, v23);
    if ( *(_DWORD *)(v22 + 16) == staffPhotoId )
    {
      v27 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
      if ( !*staffPhotoCostumeList )
        sub_1C6BC60(0, v23);
      items = v27->fields._items;
      v29 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1C6BC60(v27, v23);
      size = v27->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v26,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v26, v24, v25);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_29:
    v35 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoCostumeList, 0);
}