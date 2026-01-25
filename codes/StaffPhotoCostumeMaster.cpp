void StaffPhotoCostumeMaster___ctor(StaffPhotoCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF286 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
    byte_4CEF286 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    213,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StaffPhotoCostumeEntity_o *StaffPhotoCostumeMaster__GetEntity(
        StaffPhotoCostumeMaster_o *this,
        int32_t staffPhotoId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF287 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
    byte_4CEF287 = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&idx);
  return (StaffPhotoCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3432DB4 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__GetEntity__);
}


bool StaffPhotoCostumeMaster__TryGetEnableListByStaffId(
        StaffPhotoCostumeMaster_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o **staffPhotoCostumeList,
        int32_t staffPhotoId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4CEF284 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
    byte_4CEF284 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_StaffPhotoCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity___ctor__);
  *staffPhotoCostumeList = (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)staffPhotoCostumeList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v21 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_16:
      v25 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                            Enumerator,
                            *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_1C7BD40(0, v27);
    if ( LODWORD(v26[1].klass) == staffPhotoId )
    {
      monitor = (int32_t)v26[3].monitor;
      monitor_high = HIDWORD(v26[3].monitor);
      klass_low = SLODWORD(v26[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        v39 = (System_Collections_Generic_List_object__o *)*staffPhotoCostumeList;
        if ( !*staffPhotoCostumeList )
          sub_1C7BD40(0, v32);
        items = v39->fields._items;
        v41 = Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__Add__;
        ++v39->fields._version;
        if ( !items )
          sub_1C7BD40(v39, v32);
        size = v39->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            v28,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v39->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v28;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v28, v33, v34, v35, v36, v37, v38);
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_32;
    }
    v47 = (__int64)&v44->vtable[*v46];
  }
  else
  {
LABEL_32:
    v47 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
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

  if ( (byte_4CEF288 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
    byte_4CEF288 = 1;
  }
  PK = (Il2CppObject *)StaffPhotoCostumeEntity__CreatePK(staffPhotoId, idx, *(const MethodInfo **)&staffPhotoId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_StaffPhotoCostumeMaster__StaffPhotoCostumeEntity__string__TryGetEntity__);
}


bool StaffPhotoCostumeMaster__TryGetEntityByImageId(
        StaffPhotoCostumeMaster_o *this,
        StaffPhotoCostumeEntity_o **costumeEntity,
        int32_t imageId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  StaffPhotoCostumeEntity_o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  bool v31; // w21
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4CEF285 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CEF285 = 1;
  }
  *costumeEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)costumeEntity, 0, imageId, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_StaffPhotoCostumeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v13);
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
          goto LABEL_9;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v18 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_16:
      v22 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_StaffPhotoCostumeEntity__TypeInfo, 0);
    }
    v23 = (StaffPhotoCostumeEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                         Enumerator,
                                         *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C7BD40(0, v24);
    if ( v23->fields.imageId == imageId )
    {
      *costumeEntity = v23;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)costumeEntity, (int32_t)v23, v25, v26, v27, v28, v29, v30);
      v31 = 1;
      goto LABEL_22;
    }
  }
  v31 = 0;
LABEL_22:
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
        goto LABEL_26;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_26:
    v35 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v31;
}