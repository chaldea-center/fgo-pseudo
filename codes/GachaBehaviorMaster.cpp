void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v33; // x1
  struct GachaBehaviorMaster_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct GachaBehaviorMaster_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct GachaBehaviorMaster_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct GachaBehaviorMaster_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct GachaBehaviorMaster_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct GachaBehaviorMaster_StaticFields *v74; // x0
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct GachaBehaviorMaster_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7

  if ( (byte_42EC5EA & 1) == 0 )
  {
    sub_B5D5C4(&GachaBehaviorMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_11408/*"RankupBeforeClassImageId"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11405/*"RankupAfterClassImageId"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11407/*"RankupAnimation"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11415/*"RarityAnimation"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11409/*"RankupBeforeRarity"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11406/*"RankupAfterRarity"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_7019/*"GetAnimation"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_7705/*"InitializeAnimation"*/, v29, v30, v31);
    byte_42EC5EA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)GachaBehaviorMaster_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_11407/*"RankupAnimation"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11407/*"RankupAnimation"*/;
  sub_B5D560(static_fields, v33, v2, v3, v4, v5, v6, v7);
  v34 = GachaBehaviorMaster_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_11408/*"RankupBeforeClassImageId"*/;
  v34->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11408/*"RankupBeforeClassImageId"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v34->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = GachaBehaviorMaster_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_11409/*"RankupBeforeRarity"*/;
  v42->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11409/*"RankupBeforeRarity"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v42->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v43, v44, v45, v46, v47, v48, v49);
  v50 = GachaBehaviorMaster_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_11405/*"RankupAfterClassImageId"*/;
  v50->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11405/*"RankupAfterClassImageId"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v50->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = GachaBehaviorMaster_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_11406/*"RankupAfterRarity"*/;
  v58->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11406/*"RankupAfterRarity"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v58->SCRIPT_KEY_RANKUP_AFTER_RARITY, v59, v60, v61, v62, v63, v64, v65);
  v66 = GachaBehaviorMaster_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_11415/*"RarityAnimation"*/;
  v66->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11415/*"RarityAnimation"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v66->SCRIPT_KEY_RARITY_ANIMATION, v67, v68, v69, v70, v71, v72, v73);
  v74 = GachaBehaviorMaster_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_7019/*"GetAnimation"*/;
  v74->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7019/*"GetAnimation"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v74->SCRIPT_KEY_GET_ANIMATION, v75, v76, v77, v78, v79, v80, v81);
  v82 = GachaBehaviorMaster_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_7705/*"InitializeAnimation"*/;
  v82->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7705/*"InitializeAnimation"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v82->SCRIPT_KEY_INITIALIZE_ANIMATION, v83, v84, v85, v86, v87, v88, v89);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC5E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC5E8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    314,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EC5E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      gachaId,
      svtId,
      method);
    byte_42EC5E6 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *__fastcall GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x10
  int32_t missionTargetId; // w9
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0

  if ( (byte_42EC5E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      gachaId,
      svtId,
      method);
    sub_B5D5C4(&GachaBehaviorEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v25, v26, v27);
    byte_42EC5E9 = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v42 + 8));
    if ( !v43 )
      goto LABEL_34;
    v45 = *(&GachaBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (GachaBehaviorEntity_c *)v43->klass->_2.typeHierarchy[v45 - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_B5D990(v43);
LABEL_34:
      sub_B5D69C(v43, v44);
    }
    missionTargetId = v43->fields.missionTargetId;
    if ( (!missionTargetId || missionTargetId == gachaId) && v43->fields.missionConditionDetailId == svtId )
    {
      if ( !v28 )
        sub_B5D69C(v43, GachaBehaviorEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v43,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    }
  }
  v47 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_30:
    v50 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v28;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBehaviorMaster__TryGetEntity(
        GachaBehaviorMaster_o *this,
        GachaBehaviorEntity_o **entity,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EC5E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&svtId);
    byte_42EC5E7 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}