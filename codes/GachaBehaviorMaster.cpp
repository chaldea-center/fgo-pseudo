void GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct GachaBehaviorMaster_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct GachaBehaviorMaster_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct GachaBehaviorMaster_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct GachaBehaviorMaster_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct GachaBehaviorMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct GachaBehaviorMaster_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C37C5B & 1) == 0 )
  {
    sub_1C32C20(&GachaBehaviorMaster_TypeInfo);
    sub_1C32C20(&StringLiteral_11181/*"RankupBeforeClassImageId"*/);
    sub_1C32C20(&StringLiteral_11178/*"RankupAfterClassImageId"*/);
    sub_1C32C20(&StringLiteral_11180/*"RankupAnimation"*/);
    sub_1C32C20(&StringLiteral_11189/*"RarityAnimation"*/);
    sub_1C32C20(&StringLiteral_11182/*"RankupBeforeRarity"*/);
    sub_1C32C20(&StringLiteral_11179/*"RankupAfterRarity"*/);
    sub_1C32C20(&StringLiteral_7066/*"GetAnimation"*/);
    sub_1C32C20(&StringLiteral_7660/*"InitializeAnimation"*/);
    byte_4C37C5B = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11180/*"RankupAnimation"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)GachaBehaviorMaster_TypeInfo->static_fields, StringLiteral_11180/*"RankupAnimation"*/, v1, v2);
  v3 = StringLiteral_11181/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11181/*"RankupBeforeClassImageId"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID, v3, v5, v6);
  v7 = StringLiteral_11182/*"RankupBeforeRarity"*/;
  v8 = GachaBehaviorMaster_TypeInfo->static_fields;
  v8->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11182/*"RankupBeforeRarity"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v7, v9, v10);
  v11 = StringLiteral_11178/*"RankupAfterClassImageId"*/;
  v12 = GachaBehaviorMaster_TypeInfo->static_fields;
  v12->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11178/*"RankupAfterClassImageId"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID, v11, v13, v14);
  v15 = StringLiteral_11179/*"RankupAfterRarity"*/;
  v16 = GachaBehaviorMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11179/*"RankupAfterRarity"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->SCRIPT_KEY_RANKUP_AFTER_RARITY, v15, v17, v18);
  v19 = StringLiteral_11189/*"RarityAnimation"*/;
  v20 = GachaBehaviorMaster_TypeInfo->static_fields;
  v20->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11189/*"RarityAnimation"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->SCRIPT_KEY_RARITY_ANIMATION, v19, v21, v22);
  v23 = StringLiteral_7066/*"GetAnimation"*/;
  v24 = GachaBehaviorMaster_TypeInfo->static_fields;
  v24->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7066/*"GetAnimation"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v24->SCRIPT_KEY_GET_ANIMATION, v23, v25, v26);
  v27 = StringLiteral_7660/*"InitializeAnimation"*/;
  v28 = GachaBehaviorMaster_TypeInfo->static_fields;
  v28->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7660/*"InitializeAnimation"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v28->SCRIPT_KEY_INITIALIZE_ANIMATION, v27, v29, v30);
}


void GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37C59 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_4C37C59 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    321,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37C57 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_4C37C57 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_339B2F0 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  int v22; // w9
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C37C5A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_4C37C5A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBehaviorEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( !v18 )
      sub_1C32E7C(0);
    v22 = *(_DWORD *)(v18 + 16);
    if ( (!v22 || v22 == gachaId) && *(_DWORD *)(v18 + 20) == svtId )
    {
      if ( !v7 )
        sub_1C32E7C(v18);
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C32E7C(v18);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v18,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v21;
        sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), v21, v19, v20);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_31;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_31:
    v30 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool GachaBehaviorMaster__TryGetEntity(
        GachaBehaviorMaster_o *this,
        GachaBehaviorEntity_o **entity,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37C58 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_4C37C58 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}