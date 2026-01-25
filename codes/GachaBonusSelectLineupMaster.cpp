void GachaBonusSelectLineupMaster___ctor(GachaBonusSelectLineupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA16 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
    byte_4CEEA16 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    194,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectLineupEntity_o *GachaBonusSelectLineupMaster__GetEntity(
        GachaBonusSelectLineupMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEA14 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
    byte_4CEEA14 = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaBonusSelectLineupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_3432DB4 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaBonusSelectLineupMaster__TryGetEntity(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEA15 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
    byte_4CEEA15 = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
}


bool GachaBonusSelectLineupMaster__TryGetEntityList(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_array **gachaBonusSelectLineupEntities,
        int32_t lineupId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  System_Object_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  if ( (byte_4CEEA17 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectLineupEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
    byte_4CEEA17 = 1;
  }
  *gachaBonusSelectLineupEntities = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)gachaBonusSelectLineupEntities,
    0,
    lineupId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectLineupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v19 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8))
        & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_16:
      v23 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v32 = v24;
    if ( !v24 )
      sub_1C7BD40(0, v25);
    if ( *(_DWORD *)(v24 + 16) == lineupId )
    {
      if ( !v11 )
        sub_1C7BD40(v24, v25);
      items = v11->fields._items;
      v34 = Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C7BD40(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_29:
    v40 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                             Enumerator,
                                                             *(_QWORD *)(v40 + 8));
  if ( !v11
    || (v41 = System_Collections_Generic_List_object___ToArray(
                v11,
                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__),
        *gachaBonusSelectLineupEntities = (GachaBonusSelectLineupEntity_array *)v41,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)gachaBonusSelectLineupEntities,
          (int32_t)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        !*gachaBonusSelectLineupEntities) )
  {
LABEL_37:
    sub_1C7BD40(list, v12);
  }
  return LODWORD((*gachaBonusSelectLineupEntities)->max_length) != 0;
}