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

  if ( (byte_40FB357 & 1) == 0 )
  {
    sub_B16FFC(&GachaBehaviorMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11239/*"RankupBeforeClassImageId"*/, v8);
    sub_B16FFC(&StringLiteral_11236/*"RankupAfterClassImageId"*/, v9);
    sub_B16FFC(&StringLiteral_11238/*"RankupAnimation"*/, v10);
    sub_B16FFC(&StringLiteral_11246/*"RarityAnimation"*/, v11);
    sub_B16FFC(&StringLiteral_11240/*"RankupBeforeRarity"*/, v12);
    sub_B16FFC(&StringLiteral_11237/*"RankupAfterRarity"*/, v13);
    sub_B16FFC(&StringLiteral_6908/*"GetAnimation"*/, v14);
    sub_B16FFC(&StringLiteral_7593/*"InitializeAnimation"*/, v15);
    byte_40FB357 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)GachaBehaviorMaster_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_11238/*"RankupAnimation"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11238/*"RankupAnimation"*/;
  sub_B16F98(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = GachaBehaviorMaster_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_11239/*"RankupBeforeClassImageId"*/;
  v18->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11239/*"RankupBeforeClassImageId"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = GachaBehaviorMaster_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_11240/*"RankupBeforeRarity"*/;
  v26->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11240/*"RankupBeforeRarity"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v26->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v27, v28, v29, v30, v31, v32, v33);
  v34 = GachaBehaviorMaster_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_11236/*"RankupAfterClassImageId"*/;
  v34->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11236/*"RankupAfterClassImageId"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v34->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = GachaBehaviorMaster_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_11237/*"RankupAfterRarity"*/;
  v42->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11237/*"RankupAfterRarity"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v42->SCRIPT_KEY_RANKUP_AFTER_RARITY, v43, v44, v45, v46, v47, v48, v49);
  v50 = GachaBehaviorMaster_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_11246/*"RarityAnimation"*/;
  v50->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11246/*"RarityAnimation"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v50->SCRIPT_KEY_RARITY_ANIMATION, v51, v52, v53, v54, v55, v56, v57);
  v58 = GachaBehaviorMaster_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_6908/*"GetAnimation"*/;
  v58->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_6908/*"GetAnimation"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v58->SCRIPT_KEY_GET_ANIMATION, v59, v60, v61, v62, v63, v64, v65);
  v66 = GachaBehaviorMaster_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_7593/*"InitializeAnimation"*/;
  v66->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7593/*"InitializeAnimation"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v66->SCRIPT_KEY_INITIALIZE_ANIMATION, v67, v68, v69, v70, v71, v72, v73);
}


void __fastcall GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB355 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__, method);
    byte_40FB355 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    313,
    (const MethodInfo_266F73C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *__fastcall GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB353 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_40FB353 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GachaBehaviorEntity__o *__fastcall GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x10
  int32_t missionTargetId; // w9
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_40FB356 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&gachaId);
    sub_B16FFC(&GachaBehaviorEntity_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo, v14);
    byte_40FB356 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo,
                                                                                                  *(_QWORD *)&gachaId,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_34;
    v27 = *(&GachaBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (GachaBehaviorEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] != GachaBehaviorEntity_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_34:
      sub_B170D4();
    }
    missionTargetId = v26->fields.missionTargetId;
    if ( (!missionTargetId || missionTargetId == gachaId) && v26->fields.missionConditionDetailId == svtId )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_30:
    v32 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v15;
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

  if ( (byte_40FB354 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__, entity);
    byte_40FB354 = 1;
  }
  PK = GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}