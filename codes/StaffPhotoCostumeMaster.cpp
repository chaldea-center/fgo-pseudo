void __fastcall StaffPhotoCostumeMaster___ctor(StaffPhotoCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22AA0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__, method);
    byte_4C22AA0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    213,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StaffPhotoCostumeEntity_o *__fastcall StaffPhotoCostumeMaster__GetEntity(
        StaffPhotoCostumeMaster_o *this,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22AA1 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__,
      *(_QWORD *)&staffPhotoId);
    byte_4C22AA1 = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&idx);
  return (StaffPhotoCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_329F900 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
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
      sub_1C3B9C0(0LL, v5);
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
      sub_1C3B9C0(0LL, v5);
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
      sub_1C3B9C0(0LL, v5);
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
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *v46; // x0
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x8
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4C22A9E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__,
      staffPhotoCostumeList);
    sub_1C3B764(&CondType_TypeInfo, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo, v13);
    byte_4C22A9E = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)staffPhotoCostumeList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
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
      v32 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0LL);
    }
    v33 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                            Enumerator,
                            *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      sub_1C3B9C0(0LL, v34);
    if ( LODWORD(v33[1].klass) == staffPhotoId )
    {
      monitor = (int32_t)v33[3].monitor;
      monitor_high = HIDWORD(v33[3].monitor);
      klass_low = SLODWORD(v33[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
      {
        v46 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
        if ( !*staffPhotoCostumeList )
          sub_1C3B9C0(0LL, v39);
        items = v46->fields._items;
        v48 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
        ++v46->fields._version;
        if ( !items )
          sub_1C3B9C0(v46, v39);
        size = v46->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            v35,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v46->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v35;
          sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v35, v40, v41, v42, v43, v44, v45);
        }
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_32;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_32:
    v54 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
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

  if ( (byte_4C22AA2 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__, entity);
    byte_4C22AA2 = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&staffPhotoId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StaffPhotoCostumeMaster__TryGetEntityByImageId(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **costumeEntity,
        int32_t imageId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  StaffPhotoCostumeEntity_o *v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool v34; // w21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4C22A9F & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__,
      costumeEntity);
    sub_1C3B764(&System_IDisposable_TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, v12);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_4C22A9F = 1;
  }
  *costumeEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)costumeEntity, 0LL, *(int64_t *)&imageId, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
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
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0LL);
    }
    v26 = (StaffPhotoCostumeEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                         Enumerator,
                                         *(_QWORD *)(v25 + 8));
    if ( !v26 )
      sub_1C3B9C0(0LL, v27);
    if ( v26->fields.imageId == imageId )
    {
      *costumeEntity = v26;
      sub_1C3B708((PartyOrganizationUtility_o *)costumeEntity, (int64_t)v26, v28, v29, v30, v31, v32, v33);
      v34 = 1;
      goto LABEL_22;
    }
  }
  v34 = 0;
LABEL_22:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_26;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_26:
    v38 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v34;
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x8
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x9
  _QWORD *v43; // x10
  __int64 size; // x11
  Il2CppClass **v45; // x9
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4C22A9D & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__,
      staffPhotoCostumeList);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo, v12);
    byte_4C22A9D = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)staffPhotoCostumeList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
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
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v40 = (Il2CppObject *)v32;
    if ( !v32 )
      sub_1C3B9C0(0LL, v33);
    if ( *(_DWORD *)(v32 + 16) == staffPhotoId )
    {
      v41 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
      if ( !*staffPhotoCostumeList )
        sub_1C3B9C0(0LL, v33);
      items = v41->fields._items;
      v43 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
      ++v41->fields._version;
      if ( !items )
        sub_1C3B9C0(v41, v33);
      size = v41->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          v40,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v41->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v40;
        sub_1C3B708((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v40, v34, v35, v36, v37, v38, v39);
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*staffPhotoCostumeList, 0LL);
}