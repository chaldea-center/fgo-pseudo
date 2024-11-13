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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
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
  int64_t v72; // x1
  struct GachaBehaviorMaster_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7

  if ( (byte_4B1645A & 1) == 0 )
  {
    sub_1BCA7E0(&GachaBehaviorMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11284/*"RankupBeforeClassImageId"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11281/*"RankupAfterClassImageId"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11283/*"RankupAnimation"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11292/*"RarityAnimation"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11285/*"RankupBeforeRarity"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11282/*"RankupAfterRarity"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_7115/*"GetAnimation"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_7728/*"InitializeAnimation"*/, v22, v23);
    byte_4B1645A = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11283/*"RankupAnimation"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    StringLiteral_11283/*"RankupAnimation"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = StringLiteral_11284/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11284/*"RankupBeforeClassImageId"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_11285/*"RankupBeforeRarity"*/;
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11285/*"RankupBeforeRarity"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_11281/*"RankupAfterClassImageId"*/;
  v41 = GachaBehaviorMaster_TypeInfo->static_fields;
  v41->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11281/*"RankupAfterClassImageId"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v41->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = StringLiteral_11282/*"RankupAfterRarity"*/;
  v49 = GachaBehaviorMaster_TypeInfo->static_fields;
  v49->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11282/*"RankupAfterRarity"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->SCRIPT_KEY_RANKUP_AFTER_RARITY, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_11292/*"RarityAnimation"*/;
  v57 = GachaBehaviorMaster_TypeInfo->static_fields;
  v57->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11292/*"RarityAnimation"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57->SCRIPT_KEY_RARITY_ANIMATION, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_7115/*"GetAnimation"*/;
  v65 = GachaBehaviorMaster_TypeInfo->static_fields;
  v65->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7115/*"GetAnimation"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->SCRIPT_KEY_GET_ANIMATION, v64, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_7728/*"InitializeAnimation"*/;
  v73 = GachaBehaviorMaster_TypeInfo->static_fields;
  v73->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7728/*"InitializeAnimation"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v73->SCRIPT_KEY_INITIALIZE_ANIMATION, v72, v74, v75, v76, v77, v78, v79);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16458 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method, v2);
    byte_4B16458 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16456 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId,
      *(_QWORD *)&svtId);
    byte_4B16456 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GachaBehaviorEntity__o *__fastcall GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x8
  GachaBehaviorEntity_c *v43; // x1
  __int64 methodPtr_low; // x10
  int v45; // w9
  struct System_Object_array *items; // x9
  _QWORD *v47; // x10
  __int64 size; // x11
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0

  if ( (byte_4B16459 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&gachaId,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&GachaBehaviorEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v19, v20);
    byte_4B16459 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo,
                                                       *(_QWORD *)&gachaId,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            Enumerator,
                            *(_QWORD *)(v33 + 8));
    v42 = (int64_t)v34;
    if ( !v34 )
      goto LABEL_37;
    v43 = GachaBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (GachaBehaviorEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_1BCACFC(v34);
LABEL_37:
      sub_1BCAA3C(v34, v35);
    }
    v45 = (int)v34[1].klass;
    if ( (!v45 || v45 == gachaId) && HIDWORD(v34[1].klass) == svtId )
    {
      if ( !v21 )
        sub_1BCAA3C(v34, GachaBehaviorEntity_TypeInfo);
      items = v21->fields._items;
      v47 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v43);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          v34,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v49[4] = (Il2CppClass *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v42, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_33;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_33:
    v53 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v21;
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

  if ( (byte_4B16457 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&gachaId);
    byte_4B16457 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}