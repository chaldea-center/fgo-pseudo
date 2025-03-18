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

  if ( (byte_4C221D2 & 1) == 0 )
  {
    sub_1C3B764(&GachaBehaviorMaster_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11379/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v8);
    sub_1C3B764(&StringLiteral_11376/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, v9);
    sub_1C3B764(&StringLiteral_11378/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/, v10);
    sub_1C3B764(&StringLiteral_11387/*"SERVANT_SELL_INFO5"*/, v11);
    sub_1C3B764(&StringLiteral_11380/*"SERVANT_SELL_CANCEL"*/, v12);
    sub_1C3B764(&StringLiteral_11377/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/, v13);
    sub_1C3B764(&StringLiteral_7161/*"HutongGames.PlayMaker.Actions"*/, v14);
    sub_1C3B764(&StringLiteral_7773/*"IsCJKSymbolsandPunctuation"*/, v15);
    byte_4C221D2 = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11378/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    StringLiteral_11378/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_11379/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11379/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_11380/*"SERVANT_SELL_CANCEL"*/;
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11380/*"SERVANT_SELL_CANCEL"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v25->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_11376/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/;
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11376/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v33->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_11377/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
  v41 = GachaBehaviorMaster_TypeInfo->static_fields;
  v41->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11377/*"SERVANT_RECOVER_FATIGUE_GUIDE_HELP"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v41->SCRIPT_KEY_RANKUP_AFTER_RARITY, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_11387/*"SERVANT_SELL_INFO5"*/;
  v49 = GachaBehaviorMaster_TypeInfo->static_fields;
  v49->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11387/*"SERVANT_SELL_INFO5"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v49->SCRIPT_KEY_RARITY_ANIMATION, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_7161/*"HutongGames.PlayMaker.Actions"*/;
  v57 = GachaBehaviorMaster_TypeInfo->static_fields;
  v57->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7161/*"HutongGames.PlayMaker.Actions"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v57->SCRIPT_KEY_GET_ANIMATION, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_7773/*"IsCJKSymbolsandPunctuation"*/;
  v65 = GachaBehaviorMaster_TypeInfo->static_fields;
  v65->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7773/*"IsCJKSymbolsandPunctuation"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v65->SCRIPT_KEY_INITIALIZE_ANIMATION, v64, v66, v67, v68, v69, v70, v71);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C221D0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method);
    byte_4C221D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    321,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C221CE & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4C221CE = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_329F900 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  int v35; // w9
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4C221D1 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__,
      *(_QWORD *)&gachaId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v12);
    byte_4C221D1 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v16);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v25 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v34 = v26;
    if ( !v26 )
      sub_1C3B9C0(0LL, v27);
    v35 = *(_DWORD *)(v26 + 16);
    if ( (!v35 || v35 == gachaId) && *(_DWORD *)(v26 + 20) == svtId )
    {
      if ( !v13 )
        sub_1C3B9C0(v26, v27);
      items = v13->fields._items;
      v37 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1C3B9C0(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v34;
        sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 4), v34, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
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

  if ( (byte_4C221CF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__, entity);
    byte_4C221CF = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}