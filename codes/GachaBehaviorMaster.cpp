void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v15; // w3
  int32_t v16; // w1
  struct GachaBehaviorMaster_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct GachaBehaviorMaster_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct GachaBehaviorMaster_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct GachaBehaviorMaster_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct GachaBehaviorMaster_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct GachaBehaviorMaster_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FE76D & 1) == 0 )
  {
    sub_1B64870(&GachaBehaviorMaster_TypeInfo, v1);
    sub_1B64870(&StringLiteral_11097/*"RankupBeforeClassImageId"*/, v4);
    sub_1B64870(&StringLiteral_11094/*"RankupAfterClassImageId"*/, v5);
    sub_1B64870(&StringLiteral_11096/*"RankupAnimation"*/, v6);
    sub_1B64870(&StringLiteral_11105/*"RarityAnimation"*/, v7);
    sub_1B64870(&StringLiteral_11098/*"RankupBeforeRarity"*/, v8);
    sub_1B64870(&StringLiteral_11095/*"RankupAfterRarity"*/, v9);
    sub_1B64870(&StringLiteral_6964/*"GetAnimation"*/, v10);
    sub_1B64870(&StringLiteral_7570/*"InitializeAnimation"*/, v11);
    byte_49FE76D = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11096/*"RankupAnimation"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    StringLiteral_11096/*"RankupAnimation"*/,
    v2,
    v3);
  v12 = StringLiteral_11097/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11097/*"RankupBeforeClassImageId"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v12,
    v14,
    v15);
  v16 = StringLiteral_11098/*"RankupBeforeRarity"*/;
  v17 = GachaBehaviorMaster_TypeInfo->static_fields;
  v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11098/*"RankupBeforeRarity"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v16, v18, v19);
  v20 = StringLiteral_11094/*"RankupAfterClassImageId"*/;
  v21 = GachaBehaviorMaster_TypeInfo->static_fields;
  v21->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11094/*"RankupAfterClassImageId"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v21->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID, v20, v22, v23);
  v24 = StringLiteral_11095/*"RankupAfterRarity"*/;
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11095/*"RankupAfterRarity"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v25->SCRIPT_KEY_RANKUP_AFTER_RARITY, v24, v26, v27);
  v28 = StringLiteral_11105/*"RarityAnimation"*/;
  v29 = GachaBehaviorMaster_TypeInfo->static_fields;
  v29->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11105/*"RarityAnimation"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v29->SCRIPT_KEY_RARITY_ANIMATION, v28, v30, v31);
  v32 = StringLiteral_6964/*"GetAnimation"*/;
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_6964/*"GetAnimation"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v33->SCRIPT_KEY_GET_ANIMATION, v32, v34, v35);
  v36 = StringLiteral_7570/*"InitializeAnimation"*/;
  v37 = GachaBehaviorMaster_TypeInfo->static_fields;
  v37->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7570/*"InitializeAnimation"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v37->SCRIPT_KEY_INITIALIZE_ANIMATION, v36, v38, v39);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE76B & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method);
    byte_49FE76B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE769 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_49FE769 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D64D8 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
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
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x8
  GachaBehaviorEntity_c *v32; // x1
  __int64 methodPtr_low; // x10
  int v34; // w9
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_49FE76C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&gachaId);
    sub_1B64870(&GachaBehaviorEntity_TypeInfo, v7);
    sub_1B64870(&System_IDisposable_TypeInfo, v8);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v13);
    byte_49FE76C = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                            Enumerator,
                            *(_QWORD *)(v26 + 8));
    v31 = v27;
    if ( !v27 )
      goto LABEL_37;
    v32 = GachaBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v27->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (GachaBehaviorEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_1B64D8C(v27);
LABEL_37:
      sub_1B64ACC(v27, v28);
    }
    v34 = (int)v27[1].klass;
    if ( (!v34 || v34 == gachaId) && HIDWORD(v27[1].klass) == svtId )
    {
      if ( !v14 )
        sub_1B64ACC(v27, GachaBehaviorEntity_TypeInfo);
      items = v14->fields._items;
      v36 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B64ACC(v27, v32);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v27,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v31;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v31, v29, v30);
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_33;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_33:
    v42 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v14;
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

  if ( (byte_49FE76A & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__, entity);
    byte_49FE76A = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}