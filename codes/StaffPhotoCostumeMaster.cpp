void __fastcall StaffPhotoCostumeMaster___ctor(StaffPhotoCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F03B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__, method);
    byte_4A4F03B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    213,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StaffPhotoCostumeEntity_o *__fastcall StaffPhotoCostumeMaster__GetEntity(
        StaffPhotoCostumeMaster_o *this,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4F03C & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__,
      *(_QWORD *)&staffPhotoId);
    byte_4A4F03C = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&idx);
  return (StaffPhotoCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3218D38 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
}


System_Int32_array *__fastcall StaffPhotoCostumeMaster__GetPhotoPositionCenterByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imgId,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-18h] BYREF

  costumeEntity = 0LL;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imgId, method) )
  {
    if ( !costumeEntity )
      sub_1B86614(0LL, v5);
    return StaffPhotoCostumeEntity__GetPhotoPositionCenter(costumeEntity, defaultValue, v6);
  }
  return defaultValue;
}


System_Int32_array *__fastcall StaffPhotoCostumeMaster__GetPhotoPositionLeftByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imgId,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-18h] BYREF

  costumeEntity = 0LL;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imgId, method) )
  {
    if ( !costumeEntity )
      sub_1B86614(0LL, v5);
    return StaffPhotoCostumeEntity__GetPhotoPositionLeft(costumeEntity, defaultValue, v6);
  }
  return defaultValue;
}


System_Int32_array *__fastcall StaffPhotoCostumeMaster__GetPhotoPositionRightByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imgId,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-18h] BYREF

  costumeEntity = 0LL;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imgId, method) )
  {
    if ( !costumeEntity )
      sub_1B86614(0LL, v5);
    return StaffPhotoCostumeEntity__GetPhotoPositionRight(costumeEntity, defaultValue, v6);
  }
  return defaultValue;
}


bool __fastcall StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
        StaffPhotoCostumeMaster_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o **staffPhotoCostumeList,
        int32_t staffPhotoId,
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
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_4A4F039 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__,
      staffPhotoCostumeList);
    sub_1B863B8(&CondType_TypeInfo, v7);
    sub_1B863B8(&System_IDisposable_TypeInfo, v8);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, v9);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo, v13);
    byte_4A4F039 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)staffPhotoCostumeList, (int32_t)v14, v15, v16);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B86614(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v19);
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
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
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
      v28 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0LL);
    }
    v29 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                            Enumerator,
                            *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_1B86614(0LL, v30);
    if ( LODWORD(v29[1].klass) == staffPhotoId )
    {
      monitor = (int32_t)v29[3].monitor;
      monitor_high = HIDWORD(v29[3].monitor);
      klass_low = SLODWORD(v29[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
      {
        v38 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
        if ( !*staffPhotoCostumeList )
          sub_1B86614(0LL, v35);
        items = v38->fields._items;
        v40 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
        ++v38->fields._version;
        if ( !items )
          sub_1B86614(v38, v35);
        size = v38->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            v31,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v38->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_1B8635C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v31, v36, v37);
        }
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_32;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_32:
    v46 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoCostumeList, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StaffPhotoCostumeMaster__TryGetEntity(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **entity,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4F03D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__, entity);
    byte_4A4F03D = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&staffPhotoId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
}


bool __fastcall StaffPhotoCostumeMaster__TryGetEntityByImageId(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **costumeEntity,
        int32_t imageId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  StaffPhotoCostumeEntity_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A4F03A & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__,
      costumeEntity);
    sub_1B863B8(&System_IDisposable_TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, v8);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4A4F03A = 1;
  }
  *costumeEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)costumeEntity, 0, imageId, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B86614(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0LL);
    }
    v22 = (StaffPhotoCostumeEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                         Enumerator,
                                         *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1B86614(0LL, v23);
    if ( v22->fields.imageId == imageId )
    {
      *costumeEntity = v22;
      sub_1B8635C((CGThumbnailListItem_o *)costumeEntity, (int32_t)v22, v24, v25);
      v26 = 1;
      goto LABEL_22;
    }
  }
  v26 = 0;
LABEL_22:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_26;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_26:
    v30 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v26;
}


bool __fastcall StaffPhotoCostumeMaster__TryGetEntityListByStaffId(
        StaffPhotoCostumeMaster_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o **staffPhotoCostumeList,
        int32_t staffPhotoId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x0
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x9
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4A4F038 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__,
      staffPhotoCostumeList);
    sub_1B863B8(&System_IDisposable_TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, v8);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__, v11);
    sub_1B863B8(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo, v12);
    byte_4A4F038 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v13;
  sub_1B8635C((CGThumbnailListItem_o *)staffPhotoCostumeList, (int32_t)v13, v14, v15);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B86614(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v32 = (Il2CppObject *)v28;
    if ( !v28 )
      sub_1B86614(0LL, v29);
    if ( *(_DWORD *)(v28 + 16) == staffPhotoId )
    {
      v33 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
      if ( !*staffPhotoCostumeList )
        sub_1B86614(0LL, v29);
      items = v33->fields._items;
      v35 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1B86614(v33, v29);
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v32,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v32;
        sub_1B8635C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v32, v30, v31);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_29;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_29:
    v41 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoCostumeList, 0LL);
}