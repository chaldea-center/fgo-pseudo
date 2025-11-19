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

  if ( (byte_4CB6572 & 1) == 0 )
  {
    sub_1C6BA08(&GachaBehaviorMaster_TypeInfo);
    sub_1C6BA08(&StringLiteral_11180/*"RankupBeforeClassImageId"*/);
    sub_1C6BA08(&StringLiteral_11177/*"RankupAfterClassImageId"*/);
    sub_1C6BA08(&StringLiteral_11179/*"RankupAnimation"*/);
    sub_1C6BA08(&StringLiteral_11188/*"RarityAnimation"*/);
    sub_1C6BA08(&StringLiteral_11181/*"RankupBeforeRarity"*/);
    sub_1C6BA08(&StringLiteral_11178/*"RankupAfterRarity"*/);
    sub_1C6BA08(&StringLiteral_7060/*"GetAnimation"*/);
    sub_1C6BA08(&StringLiteral_7658/*"InitializeAnimation"*/);
    byte_4CB6572 = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11179/*"RankupAnimation"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)GachaBehaviorMaster_TypeInfo->static_fields, StringLiteral_11179/*"RankupAnimation"*/, v1, v2);
  v3 = StringLiteral_11180/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11180/*"RankupBeforeClassImageId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID, v3, v5, v6);
  v7 = StringLiteral_11181/*"RankupBeforeRarity"*/;
  v8 = GachaBehaviorMaster_TypeInfo->static_fields;
  v8->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11181/*"RankupBeforeRarity"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v7, v9, v10);
  v11 = StringLiteral_11177/*"RankupAfterClassImageId"*/;
  v12 = GachaBehaviorMaster_TypeInfo->static_fields;
  v12->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11177/*"RankupAfterClassImageId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID, v11, v13, v14);
  v15 = StringLiteral_11178/*"RankupAfterRarity"*/;
  v16 = GachaBehaviorMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11178/*"RankupAfterRarity"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->SCRIPT_KEY_RANKUP_AFTER_RARITY, v15, v17, v18);
  v19 = StringLiteral_11188/*"RarityAnimation"*/;
  v20 = GachaBehaviorMaster_TypeInfo->static_fields;
  v20->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11188/*"RarityAnimation"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->SCRIPT_KEY_RARITY_ANIMATION, v19, v21, v22);
  v23 = StringLiteral_7060/*"GetAnimation"*/;
  v24 = GachaBehaviorMaster_TypeInfo->static_fields;
  v24->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7060/*"GetAnimation"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->SCRIPT_KEY_GET_ANIMATION, v23, v25, v26);
  v27 = StringLiteral_7658/*"InitializeAnimation"*/;
  v28 = GachaBehaviorMaster_TypeInfo->static_fields;
  v28->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7658/*"InitializeAnimation"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v28->SCRIPT_KEY_INITIALIZE_ANIMATION, v27, v29, v30);
}


void GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6570 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_4CB6570 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    321,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB656E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_4CB656E = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33FDB94 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  int v25; // w9
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4CB6571 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_4CB6571 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBehaviorEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      sub_1C6BC60(0, v21);
    v25 = *(_DWORD *)(v20 + 16);
    if ( (!v25 || v25 == gachaId) && *(_DWORD *)(v20 + 20) == svtId )
    {
      if ( !v7 )
        sub_1C6BC60(v20, v21);
      items = v7->fields._items;
      v27 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C6BC60(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v24;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), v24, v22, v23);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_31:
    v33 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
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

  if ( (byte_4CB656F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_4CB656F = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}