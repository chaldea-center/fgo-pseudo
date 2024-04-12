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

  if ( (byte_42B3AFA & 1) == 0 )
  {
    sub_B52984(&GachaBehaviorMaster_TypeInfo);
    sub_B52984(&StringLiteral_11362/*"RankupBeforeClassImageId"*/);
    sub_B52984(&StringLiteral_11359/*"RankupAfterClassImageId"*/);
    sub_B52984(&StringLiteral_11361/*"RankupAnimation"*/);
    sub_B52984(&StringLiteral_11369/*"RarityAnimation"*/);
    sub_B52984(&StringLiteral_11363/*"RankupBeforeRarity"*/);
    sub_B52984(&StringLiteral_11360/*"RankupAfterRarity"*/);
    sub_B52984(&StringLiteral_6983/*"GetAnimation"*/);
    sub_B52984(&StringLiteral_7668/*"InitializeAnimation"*/);
    byte_42B3AFA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)GachaBehaviorMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_11361/*"RankupAnimation"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11361/*"RankupAnimation"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = GachaBehaviorMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11362/*"RankupBeforeClassImageId"*/;
  v9->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11362/*"RankupBeforeClassImageId"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = GachaBehaviorMaster_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_11363/*"RankupBeforeRarity"*/;
  v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11363/*"RankupBeforeRarity"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v18, v19, v20, v21, v22, v23, v24);
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_11359/*"RankupAfterClassImageId"*/;
  v25->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11359/*"RankupAfterClassImageId"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v25->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_11360/*"RankupAfterRarity"*/;
  v33->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11360/*"RankupAfterRarity"*/;
  sub_B52920((BattleServantConfConponent_o *)&v33->SCRIPT_KEY_RANKUP_AFTER_RARITY, v34, v35, v36, v37, v38, v39, v40);
  v41 = GachaBehaviorMaster_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_11369/*"RarityAnimation"*/;
  v41->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11369/*"RarityAnimation"*/;
  sub_B52920((BattleServantConfConponent_o *)&v41->SCRIPT_KEY_RARITY_ANIMATION, v42, v43, v44, v45, v46, v47, v48);
  v49 = GachaBehaviorMaster_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_6983/*"GetAnimation"*/;
  v49->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_6983/*"GetAnimation"*/;
  sub_B52920((BattleServantConfConponent_o *)&v49->SCRIPT_KEY_GET_ANIMATION, v50, v51, v52, v53, v54, v55, v56);
  v57 = GachaBehaviorMaster_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_7668/*"InitializeAnimation"*/;
  v57->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7668/*"InitializeAnimation"*/;
  sub_B52920((BattleServantConfConponent_o *)&v57->SCRIPT_KEY_INITIALIZE_ANIMATION, v58, v59, v60, v61, v62, v63, v64);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3AF8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_42B3AF8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    314,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3AF6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_42B3AF6 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
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
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  int32_t missionTargetId; // w9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42B3AF9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&GachaBehaviorEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_42B3AF9 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_34;
    v24 = *(&GachaBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (GachaBehaviorEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_34:
      sub_B52A5C(v22, v23);
    }
    missionTargetId = v22->fields.missionTargetId;
    if ( (!missionTargetId || missionTargetId == gachaId) && v22->fields.missionConditionDetailId == svtId )
    {
      if ( !v7 )
        sub_B52A5C(v22, GachaBehaviorEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
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

  if ( (byte_42B3AF7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_42B3AF7 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}