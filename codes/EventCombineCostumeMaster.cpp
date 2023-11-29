void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC5C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__, method);
    byte_40FC5C3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    359,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetEntity(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC5C1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FC5C1 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventEntity__o *CombineCostumeItemEventList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  EventCombineCostumeEntity_c **v23; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x23
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x10
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x8
  int32_t v50; // w22
  EventCombineCostumeEntity_c **v51; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v52; // x25
  int32_t Index; // w0
  EventCombineCostumeEntity_o *v54; // x20
  int v55; // w8
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v61; // [xsp+8h] [xbp-68h]
  int v62; // [xsp+10h] [xbp-60h]

  if ( (byte_40FC5C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B16FFC(&EventCombineCostumeEntity_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__FindIndex__, v12);
    sub_B16FFC(&Method_System_Predicate_EventEntity___ctor__, v13);
    sub_B16FFC(&System_Predicate_EventEntity__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__, v16);
    sub_B16FFC(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v17);
    byte_40FC5C4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (CombineCostumeItemEventList = EventMaster__GetCombineCostumeItemEventList(
                                        MasterData_WarQuestSelectionMaster,
                                        0LL),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  v61 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)CombineCostumeItemEventList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  v23 = &EventCombineCostumeEntity_TypeInfo;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = sub_B170CC(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v28, v29, v30, v31);
    EventCombineCostumeMaster___c__DisplayClass3_0___ctor((EventCombineCostumeMaster___c__DisplayClass3_0_o *)v32, 0LL);
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_19:
      v36 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                   Enumerator,
                                   *(_QWORD *)(v36 + 8));
    if ( !v32 )
      goto LABEL_42;
    if ( v37 )
    {
      v44 = *(&(*v23)->_2.bitflags2 + 1);
      if ( LOBYTE((*v37)->m_Items[68]) < (unsigned int)v44
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)&(*v37)->m_Items[43] + 8 * v44 - 8) != *v23 )
      {
        sub_B173C8(v37);
LABEL_42:
        sub_B170D4();
      }
    }
    *(_QWORD *)(v32 + 16) = v37;
    sub_B16F98((BattleServantConfConponent_o *)(v32 + 16), v37, v38, v39, v40, v41, v42, v43);
    v49 = *(_QWORD *)(v32 + 16);
    if ( !v49 )
      sub_B170D4();
    if ( *(_DWORD *)(v49 + 16) == svtId && *(_DWORD *)(v49 + 20) == costumeId )
    {
      v50 = costumeId;
      v51 = v23;
      v52 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_EventEntity__TypeInfo,
                                                                       v45,
                                                                       v46,
                                                                       v47,
                                                                       v48);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v52,
        (Il2CppObject *)v32,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_EventEntity___ctor__);
      if ( !v61 )
        sub_B170D4();
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                v61,
                (System_Predicate_T__o *)v52,
                (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_EventEntity__FindIndex__);
      v23 = v51;
      costumeId = v50;
      if ( (Index & 0x80000000) == 0 )
      {
        v54 = *(EventCombineCostumeEntity_o **)(v32 + 16);
        v55 = 133;
        goto LABEL_32;
      }
    }
  }
  v55 = 131;
  v54 = 0LL;
LABEL_32:
  v62 = v55;
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_36:
    v59 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
  if ( v62 == 131 )
    return 0LL;
  return v54;
}


bool __fastcall EventCombineCostumeMaster__IsEventCombineCostume(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  return EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(this, svtId, costumeId, method) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCombineCostumeMaster__TryGetEntity(
        EventCombineCostumeMaster_o *this,
        EventCombineCostumeEntity_o **entity,
        int32_t svtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FC5C2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__,
      entity);
    byte_40FC5C2 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
}


void __fastcall EventCombineCostumeMaster___c__DisplayClass3_0___ctor(
        EventCombineCostumeMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCombineCostumeMaster___c__DisplayClass3_0___GetListBySvtIdAndCostumeId_b__0(
        EventCombineCostumeMaster___c__DisplayClass3_0_o *this,
        EventEntity_o *x,
        const MethodInfo *method)
{
  struct EventCombineCostumeEntity_o *ent; // x8

  if ( !x || (ent = this->fields.ent) == 0LL )
    sub_B170D4();
  return x->fields.id == ent->fields.eventId;
}