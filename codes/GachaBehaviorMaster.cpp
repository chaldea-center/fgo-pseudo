void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct GachaBehaviorMaster_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct GachaBehaviorMaster_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct GachaBehaviorMaster_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct GachaBehaviorMaster_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct GachaBehaviorMaster_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct GachaBehaviorMaster_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4B66E37 & 1) == 0 )
  {
    sub_1BE4ACC(&GachaBehaviorMaster_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_11315/*"RankupBeforeClassImageId"*/, v8);
    sub_1BE4ACC(&StringLiteral_11312/*"RankupAfterClassImageId"*/, v9);
    sub_1BE4ACC(&StringLiteral_11314/*"RankupAnimation"*/, v10);
    sub_1BE4ACC(&StringLiteral_11323/*"RarityAnimation"*/, v11);
    sub_1BE4ACC(&StringLiteral_11316/*"RankupBeforeRarity"*/, v12);
    sub_1BE4ACC(&StringLiteral_11313/*"RankupAfterRarity"*/, v13);
    sub_1BE4ACC(&StringLiteral_7135/*"GetAnimation"*/, v14);
    sub_1BE4ACC(&StringLiteral_7747/*"InitializeAnimation"*/, v15);
    byte_4B66E37 = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11314/*"RankupAnimation"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    StringLiteral_11314/*"RankupAnimation"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_11315/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11315/*"RankupBeforeClassImageId"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_11316/*"RankupBeforeRarity"*/;
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11316/*"RankupBeforeRarity"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v25->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_11312/*"RankupAfterClassImageId"*/;
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11312/*"RankupAfterClassImageId"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v33->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_11313/*"RankupAfterRarity"*/;
  v41 = GachaBehaviorMaster_TypeInfo->static_fields;
  v41->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11313/*"RankupAfterRarity"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v41->SCRIPT_KEY_RANKUP_AFTER_RARITY, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_11323/*"RarityAnimation"*/;
  v49 = GachaBehaviorMaster_TypeInfo->static_fields;
  v49->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11323/*"RarityAnimation"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v49->SCRIPT_KEY_RARITY_ANIMATION, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_7135/*"GetAnimation"*/;
  v57 = GachaBehaviorMaster_TypeInfo->static_fields;
  v57->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7135/*"GetAnimation"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v57->SCRIPT_KEY_GET_ANIMATION, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_7747/*"InitializeAnimation"*/;
  v65 = GachaBehaviorMaster_TypeInfo->static_fields;
  v65->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7747/*"InitializeAnimation"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v65->SCRIPT_KEY_INITIALIZE_ANIMATION, v64, v66, v67, v68, v69, v70, v71);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E35 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method);
    byte_4B66E35 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    319,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66E33 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4B66E33 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  GachaBehaviorEntity_c *v36; // x1
  __int64 methodPtr_low; // x10
  int v38; // w9
  struct System_Object_array *items; // x9
  _QWORD *v40; // x10
  __int64 size; // x11
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_4B66E36 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&GachaBehaviorEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v13);
    byte_4B66E36 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v17);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v26 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                            Enumerator,
                            *(_QWORD *)(v26 + 8));
    v35 = (int64_t)v27;
    if ( !v27 )
      goto LABEL_37;
    v36 = GachaBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v27->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (GachaBehaviorEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_1BE4FE8(v27);
LABEL_37:
      sub_1BE4D28(v27, v28);
    }
    v38 = (int)v27[1].klass;
    if ( (!v38 || v38 == gachaId) && HIDWORD(v27[1].klass) == svtId )
    {
      if ( !v14 )
        sub_1BE4D28(v27, GachaBehaviorEntity_TypeInfo);
      items = v14->fields._items;
      v40 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BE4D28(v27, v36);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v27,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v35;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v42 + 4), v35, v29, v30, v31, v32, v33, v34);
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
        goto LABEL_33;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_33:
    v46 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
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

  if ( (byte_4B66E34 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__, entity);
    byte_4B66E34 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}