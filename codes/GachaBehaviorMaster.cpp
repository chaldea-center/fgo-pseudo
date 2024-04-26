void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct GachaBehaviorMaster_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct GachaBehaviorMaster_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct GachaBehaviorMaster_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct GachaBehaviorMaster_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct GachaBehaviorMaster_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct GachaBehaviorMaster_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct GachaBehaviorMaster_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_4355A35 & 1) == 0 )
  {
    sub_B70694(&GachaBehaviorMaster_TypeInfo);
    sub_B70694(&StringLiteral_11429/*"RankupBeforeClassImageId"*/);
    sub_B70694(&StringLiteral_11426/*"RankupAfterClassImageId"*/);
    sub_B70694(&StringLiteral_11428/*"RankupAnimation"*/);
    sub_B70694(&StringLiteral_11436/*"RarityAnimation"*/);
    sub_B70694(&StringLiteral_11430/*"RankupBeforeRarity"*/);
    sub_B70694(&StringLiteral_11427/*"RankupAfterRarity"*/);
    sub_B70694(&StringLiteral_7034/*"GetAnimation"*/);
    sub_B70694(&StringLiteral_7720/*"InitializeAnimation"*/);
    byte_4355A35 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)GachaBehaviorMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_11428/*"RankupAnimation"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11428/*"RankupAnimation"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = GachaBehaviorMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11429/*"RankupBeforeClassImageId"*/;
  v9->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11429/*"RankupBeforeClassImageId"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v9->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = GachaBehaviorMaster_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_11430/*"RankupBeforeRarity"*/;
  v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11430/*"RankupBeforeRarity"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v18, v19, v20, v21, v22, v23, v24);
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_11426/*"RankupAfterClassImageId"*/;
  v25->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11426/*"RankupAfterClassImageId"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v25->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_11427/*"RankupAfterRarity"*/;
  v33->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11427/*"RankupAfterRarity"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->SCRIPT_KEY_RANKUP_AFTER_RARITY, v34, v35, v36, v37, v38, v39, v40);
  v41 = GachaBehaviorMaster_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_11436/*"RarityAnimation"*/;
  v41->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11436/*"RarityAnimation"*/;
  sub_B70630((BattleServantConfConponent_o *)&v41->SCRIPT_KEY_RARITY_ANIMATION, v42, v43, v44, v45, v46, v47, v48);
  v49 = GachaBehaviorMaster_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_7034/*"GetAnimation"*/;
  v49->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7034/*"GetAnimation"*/;
  sub_B70630((BattleServantConfConponent_o *)&v49->SCRIPT_KEY_GET_ANIMATION, v50, v51, v52, v53, v54, v55, v56);
  v57 = GachaBehaviorMaster_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_7720/*"InitializeAnimation"*/;
  v57->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7720/*"InitializeAnimation"*/;
  sub_B70630((BattleServantConfConponent_o *)&v57->SCRIPT_KEY_INITIALIZE_ANIMATION, v58, v59, v60, v61, v62, v63, v64);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4355A33 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_4355A33 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    314,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4355A31 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_4355A31 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21C0890 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *__fastcall GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  int32_t missionTargetId; // w9
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_4355A34 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&GachaBehaviorEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_4355A34 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_34;
    v22 = *(&GachaBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (GachaBehaviorEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_B70A60(v20);
LABEL_34:
      sub_B7076C(v20, v21);
    }
    missionTargetId = v20->fields.missionTargetId;
    if ( (!missionTargetId || missionTargetId == gachaId) && v20->fields.missionConditionDetailId == svtId )
    {
      if ( !v7 )
        sub_B7076C(v20, GachaBehaviorEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v20,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_30:
    v27 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
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
  System_String_o *PK; // x2

  if ( (byte_4355A32 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_4355A32 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}