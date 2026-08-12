void StaffPhotoCostumeMaster___ctor(StaffPhotoCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59714EA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
    byte_59714EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    215,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StaffPhotoCostumeEntity_o *StaffPhotoCostumeMaster__GetEntity(
        StaffPhotoCostumeMaster_o *this,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59714EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
    byte_59714EB = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&idx);
  return (StaffPhotoCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3F157EC *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
}


StaffPhotoEntity_o *StaffPhotoCostumeMaster__GetStaffPhotoEntityByImageId(
        StaffPhotoCostumeMaster_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  bool EntityByImageId; // w8
  StaffPhotoEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59714E9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int__GetEntity__);
    byte_59714E9 = 1;
  }
  costumeEntity = 0;
  EntityByImageId = StaffPhotoCostumeMaster__TryGetEntityByImageId(this, &costumeEntity, imageId, v3);
  result = 0;
  if ( EntityByImageId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
    if ( !costumeEntity || !Master_object )
      sub_2213CDC(Master_object, v10);
    return (StaffPhotoEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   *(_DWORD *)((char *)&word_10 + (_QWORD)costumeEntity),
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_StaffPhotoMaster__StaffPhotoEntity__int__GetEntity__);
  }
  return result;
}


bool StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
        StaffPhotoCostumeMaster_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o **staffPhotoCostumeList,
        int32_t staffPhotoId,
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
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  int64_t klass_low; // x24
  int32_t monitor; // w22
  int32_t monitor_high; // w23
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_List_object__o *v42; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_Collections_Generic_IEnumerator_T__o *v52; // [xsp+18h] [xbp-58h]

  if ( (byte_59714E7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
    byte_59714E7 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)staffPhotoCostumeList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  v52 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v17);
  for ( i = Enumerator; ; i = v52 )
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
      v22 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            i,
            *(_QWORD *)(v22 + 8));
    if ( (v23 & 1) == 0 )
      break;
    if ( !v52 )
      sub_2213CDC(v23, v24);
    v25 = v52->klass;
    v26 = *(unsigned __int16 *)&v52->klass->_2.rank;
    if ( *(_WORD *)&v52->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
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
      v28 = sub_224BC3C(v52, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    v29 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                            v52,
                            *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_2213CDC(0, v30);
    if ( LODWORD(v29[1].klass) == staffPhotoId )
    {
      klass_low = SLODWORD(v29[4].klass);
      monitor = (int32_t)v29[3].monitor;
      monitor_high = HIDWORD(v29[3].monitor);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v30);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        v42 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
        if ( !*staffPhotoCostumeList
          || (items = v42->fields._items,
              v44 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__,
              ++v42->fields._version,
              !items) )
        {
          sub_2213CDC(v42, v35);
        }
        size = v42->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            v31,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v42->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v31;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v31, v36, v37, v38, v39, v40, v41);
        }
      }
    }
  }
  if ( v52 )
  {
    v47 = v52->klass;
    v48 = *(unsigned __int16 *)&v52->klass->_2.rank;
    if ( *(_WORD *)&v52->klass->_2.rank )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_37;
      }
      v50 = (__int64)&v47->vtable[*v49];
    }
    else
    {
LABEL_37:
      v50 = sub_224BC3C(v52, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(v52, *(_QWORD *)(v50 + 8));
  }
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

  if ( (byte_59714EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
    byte_59714EC = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&staffPhotoId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool StaffPhotoCostumeMaster__TryGetEntityByImageId(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **costumeEntity,
        int32_t imageId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  StaffPhotoCostumeEntity_o *Enumerator; // x0
  StaffPhotoCostumeEntity_o *v14; // x1
  StaffPhotoCostumeEntity_c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  StaffPhotoCostumeEntity_c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  bool v29; // w20
  StaffPhotoCostumeEntity_c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  StaffPhotoCostumeEntity_o *v35; // [xsp+18h] [xbp-38h]

  if ( (byte_59714E8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59714E8 = 1;
  }
  *costumeEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)costumeEntity,
    0,
    *(System_String_o **)&imageId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v11);
  Enumerator = (StaffPhotoCostumeEntity_o *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                              list,
                                              (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  v35 = Enumerator;
  while ( 1 )
  {
    if ( !v35 )
      sub_2213CDC(Enumerator, v14);
    klass = v35->klass;
    v16 = *(unsigned __int16 *)&v35->klass->_2.rank;
    if ( *(_WORD *)&v35->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v18 = sub_224BC3C(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(StaffPhotoCostumeEntity_o *, _QWORD))v18)(v35, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = v35->klass;
    v20 = *(unsigned __int16 *)&v35->klass->_2.rank;
    if ( *(_WORD *)&v35->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable + 16 * *v21;
    }
    else
    {
LABEL_17:
      v22 = sub_224BC3C(v35, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    Enumerator = (StaffPhotoCostumeEntity_o *)(*(__int64 (__fastcall **)(StaffPhotoCostumeEntity_o *, _QWORD))v22)(
                                                v35,
                                                *(_QWORD *)(v22 + 8));
    v14 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, 0);
    if ( Enumerator->fields.imageId == imageId )
    {
      *costumeEntity = Enumerator;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)costumeEntity, (int32_t)Enumerator, v23, v24, v25, v26, v27, v28);
      v29 = 1;
      goto LABEL_23;
    }
  }
  v29 = 0;
LABEL_23:
  v30 = v35->klass;
  v31 = *(unsigned __int16 *)&v35->klass->_2.rank;
  if ( *(_WORD *)&v35->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_27;
    }
    v33 = (__int64)&v30->vtable + 16 * *v32;
  }
  else
  {
LABEL_27:
    v33 = sub_224BC3C(v35, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(StaffPhotoCostumeEntity_o *, _QWORD))v33)(v35, *(_QWORD *)(v33 + 8));
  return v29;
}