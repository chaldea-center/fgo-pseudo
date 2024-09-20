void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct GachaBehaviorMaster_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct GachaBehaviorMaster_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct GachaBehaviorMaster_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct GachaBehaviorMaster_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct GachaBehaviorMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct GachaBehaviorMaster_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5B3C6 & 1) == 0 )
  {
    sub_1B885B0(&GachaBehaviorMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_11147/*"RankupBeforeClassImageId"*/);
    sub_1B885B0(&StringLiteral_11144/*"RankupAfterClassImageId"*/);
    sub_1B885B0(&StringLiteral_11146/*"RankupAnimation"*/);
    sub_1B885B0(&StringLiteral_11155/*"RarityAnimation"*/);
    sub_1B885B0(&StringLiteral_11148/*"RankupBeforeRarity"*/);
    sub_1B885B0(&StringLiteral_11145/*"RankupAfterRarity"*/);
    sub_1B885B0(&StringLiteral_6992/*"GetAnimation"*/);
    sub_1B885B0(&StringLiteral_7603/*"InitializeAnimation"*/);
    byte_4A5B3C6 = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11146/*"RankupAnimation"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    StringLiteral_11146/*"RankupAnimation"*/,
    v1,
    v2);
  v3 = StringLiteral_11147/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11147/*"RankupBeforeClassImageId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID, v3, v5, v6);
  v7 = StringLiteral_11148/*"RankupBeforeRarity"*/;
  v8 = GachaBehaviorMaster_TypeInfo->static_fields;
  v8->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11148/*"RankupBeforeRarity"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v7, v9, v10);
  v11 = StringLiteral_11144/*"RankupAfterClassImageId"*/;
  v12 = GachaBehaviorMaster_TypeInfo->static_fields;
  v12->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11144/*"RankupAfterClassImageId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID, v11, v13, v14);
  v15 = StringLiteral_11145/*"RankupAfterRarity"*/;
  v16 = GachaBehaviorMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11145/*"RankupAfterRarity"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->SCRIPT_KEY_RANKUP_AFTER_RARITY, v15, v17, v18);
  v19 = StringLiteral_11155/*"RarityAnimation"*/;
  v20 = GachaBehaviorMaster_TypeInfo->static_fields;
  v20->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11155/*"RarityAnimation"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->SCRIPT_KEY_RARITY_ANIMATION, v19, v21, v22);
  v23 = StringLiteral_6992/*"GetAnimation"*/;
  v24 = GachaBehaviorMaster_TypeInfo->static_fields;
  v24->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_6992/*"GetAnimation"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->SCRIPT_KEY_GET_ANIMATION, v23, v25, v26);
  v27 = StringLiteral_7603/*"InitializeAnimation"*/;
  v28 = GachaBehaviorMaster_TypeInfo->static_fields;
  v28->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7603/*"InitializeAnimation"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->SCRIPT_KEY_INITIALIZE_ANIMATION, v27, v29, v30);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_4A5B3C4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B3C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_4A5B3C2 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *__fastcall GachaBehaviorMaster__GetGachaBehaviors(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x8
  GachaBehaviorEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  int v27; // w9
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4A5B3C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&GachaBehaviorEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_4A5B3C5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                            Enumerator,
                            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_37;
    v25 = GachaBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (GachaBehaviorEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_37:
      sub_1B8880C(v20, v21);
    }
    v27 = (int)v20[1].klass;
    if ( (!v27 || v27 == gachaId) && HIDWORD(v20[1].klass) == svtId )
    {
      if ( !v7 )
        sub_1B8880C(v20, GachaBehaviorEntity_TypeInfo);
      items = v7->fields._items;
      v29 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v22, v23);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_33:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v7;
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

  if ( (byte_4A5B3C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_4A5B3C3 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}