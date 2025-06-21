void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct GachaBehaviorMaster_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  struct GachaBehaviorMaster_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct GachaBehaviorMaster_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  struct GachaBehaviorMaster_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  struct GachaBehaviorMaster_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  struct GachaBehaviorMaster_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4B1C7B2 & 1) == 0 )
  {
    sub_1BCAFF8(&GachaBehaviorMaster_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_11078/*"RankupBeforeClassImageId"*/, v4);
    sub_1BCAFF8(&StringLiteral_11075/*"RankupAfterClassImageId"*/, v5);
    sub_1BCAFF8(&StringLiteral_11077/*"RankupAnimation"*/, v6);
    sub_1BCAFF8(&StringLiteral_11086/*"RarityAnimation"*/, v7);
    sub_1BCAFF8(&StringLiteral_11079/*"RankupBeforeRarity"*/, v8);
    sub_1BCAFF8(&StringLiteral_11076/*"RankupAfterRarity"*/, v9);
    sub_1BCAFF8(&StringLiteral_7007/*"GetAnimation"*/, v10);
    sub_1BCAFF8(&StringLiteral_7592/*"InitializeAnimation"*/, v11);
    byte_4B1C7B2 = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11077/*"RankupAnimation"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)GachaBehaviorMaster_TypeInfo->static_fields, StringLiteral_11077/*"RankupAnimation"*/, v2, v3);
  v12 = StringLiteral_11078/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11078/*"RankupBeforeClassImageId"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID, v12, v14, v15);
  v16 = StringLiteral_11079/*"RankupBeforeRarity"*/;
  v17 = GachaBehaviorMaster_TypeInfo->static_fields;
  v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11079/*"RankupBeforeRarity"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v16, v18, v19);
  v20 = StringLiteral_11075/*"RankupAfterClassImageId"*/;
  v21 = GachaBehaviorMaster_TypeInfo->static_fields;
  v21->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11075/*"RankupAfterClassImageId"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v21->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID, v20, v22, v23);
  v24 = StringLiteral_11076/*"RankupAfterRarity"*/;
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11076/*"RankupAfterRarity"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v25->SCRIPT_KEY_RANKUP_AFTER_RARITY, v24, v26, v27);
  v28 = StringLiteral_11086/*"RarityAnimation"*/;
  v29 = GachaBehaviorMaster_TypeInfo->static_fields;
  v29->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11086/*"RarityAnimation"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v29->SCRIPT_KEY_RARITY_ANIMATION, v28, v30, v31);
  v32 = StringLiteral_7007/*"GetAnimation"*/;
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7007/*"GetAnimation"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v33->SCRIPT_KEY_GET_ANIMATION, v32, v34, v35);
  v36 = StringLiteral_7592/*"InitializeAnimation"*/;
  v37 = GachaBehaviorMaster_TypeInfo->static_fields;
  v37->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7592/*"InitializeAnimation"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v37->SCRIPT_KEY_INITIALIZE_ANIMATION, v36, v38, v39);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C7B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method);
    byte_4B1C7B0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    321,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C7AE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4B1C7AE = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32CC8B8 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GachaBehaviorEntity__o *__fastcall GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
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
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  int v31; // w9
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B1C7B1 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__,
      *(_QWORD *)&gachaId);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v12);
    byte_4B1C7B1 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v16);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_GachaBehaviorEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo )
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
      v25 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( !v26 )
      sub_1BCB254(0LL, v27);
    v31 = *(_DWORD *)(v26 + 16);
    if ( (!v31 || v31 == gachaId) && *(_DWORD *)(v26 + 20) == svtId )
    {
      if ( !v13 )
        sub_1BCB254(v26, v27);
      items = v13->fields._items;
      v33 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1BCB254(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v30;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 4), v30, v28, v29);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBehaviorMaster__TryGetEntity(
        GachaBehaviorMaster_o *this,
        GachaBehaviorEntity_o **entity,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C7AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__, entity);
    byte_4B1C7AF = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}