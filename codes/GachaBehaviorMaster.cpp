void __fastcall GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v17; // x1
  struct GachaBehaviorMaster_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct GachaBehaviorMaster_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
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

  if ( (byte_418AFC6 & 1) == 0 )
  {
    sub_B2C35C(&GachaBehaviorMaster_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11275/*"RankupBeforeClassImageId"*/, v8);
    sub_B2C35C(&StringLiteral_11272/*"RankupAfterClassImageId"*/, v9);
    sub_B2C35C(&StringLiteral_11274/*"RankupAnimation"*/, v10);
    sub_B2C35C(&StringLiteral_11282/*"RarityAnimation"*/, v11);
    sub_B2C35C(&StringLiteral_11276/*"RankupBeforeRarity"*/, v12);
    sub_B2C35C(&StringLiteral_11273/*"RankupAfterRarity"*/, v13);
    sub_B2C35C(&StringLiteral_6936/*"GetAnimation"*/, v14);
    sub_B2C35C(&StringLiteral_7621/*"InitializeAnimation"*/, v15);
    byte_418AFC6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)GachaBehaviorMaster_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_11274/*"RankupAnimation"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11274/*"RankupAnimation"*/;
  sub_B2C2F8(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = GachaBehaviorMaster_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_11275/*"RankupBeforeClassImageId"*/;
  v18->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11275/*"RankupBeforeClassImageId"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v18->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = GachaBehaviorMaster_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_11276/*"RankupBeforeRarity"*/;
  v26->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11276/*"RankupBeforeRarity"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v27, v28, v29, v30, v31, v32, v33);
  v34 = GachaBehaviorMaster_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_11272/*"RankupAfterClassImageId"*/;
  v34->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11272/*"RankupAfterClassImageId"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v34->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = GachaBehaviorMaster_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_11273/*"RankupAfterRarity"*/;
  v42->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11273/*"RankupAfterRarity"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->SCRIPT_KEY_RANKUP_AFTER_RARITY, v43, v44, v45, v46, v47, v48, v49);
  v50 = GachaBehaviorMaster_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_11282/*"RarityAnimation"*/;
  v50->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11282/*"RarityAnimation"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->SCRIPT_KEY_RARITY_ANIMATION, v51, v52, v53, v54, v55, v56, v57);
  v58 = GachaBehaviorMaster_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_6936/*"GetAnimation"*/;
  v58->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_6936/*"GetAnimation"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v58->SCRIPT_KEY_GET_ANIMATION, v59, v60, v61, v62, v63, v64, v65);
  v66 = GachaBehaviorMaster_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_7621/*"InitializeAnimation"*/;
  v66->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7621/*"InitializeAnimation"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->SCRIPT_KEY_INITIALIZE_ANIMATION, v67, v68, v69, v70, v71, v72, v73);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method);
    byte_418AFC4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    313,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AFC2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_418AFC2 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x10
  int32_t missionTargetId; // w9
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_418AFC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&gachaId);
    sub_B2C35C(&GachaBehaviorEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v13);
    byte_418AFC5 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_34;
    v31 = *(&GachaBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (GachaBehaviorEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_B2C728(v29);
LABEL_34:
      sub_B2C434(v29, v30);
    }
    missionTargetId = v29->fields.missionTargetId;
    if ( (!missionTargetId || missionTargetId == gachaId) && v29->fields.missionConditionDetailId == svtId )
    {
      if ( !v14 )
        sub_B2C434(v29, GachaBehaviorEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_30:
    v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
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
  System_String_o *PK; // x2

  if ( (byte_418AFC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__, entity);
    byte_418AFC3 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}