void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A2FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__, method);
    byte_418A2FA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    359,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_418A2F8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418A2F8 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  EventCombineCostumeEntity_c **v24; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x23
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  System_Int32_array **v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x8
  int32_t v47; // w22
  EventCombineCostumeEntity_c **v48; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v49; // x25
  __int64 v50; // x1
  int32_t Index; // w0
  EventCombineCostumeEntity_o *v52; // x20
  int v53; // w8
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v59; // [xsp+8h] [xbp-68h]
  int v60; // [xsp+10h] [xbp-60h]

  if ( (byte_418A2FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B2C35C(&EventCombineCostumeEntity_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__FindIndex__, v12);
    sub_B2C35C(&Method_System_Predicate_EventEntity___ctor__, v13);
    sub_B2C35C(&System_Predicate_EventEntity__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__, v16);
    sub_B2C35C(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v17);
    byte_418A2FB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, 0LL),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(Instance, v19);
  }
  v59 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v21);
  v24 = &EventCombineCostumeEntity_TypeInfo;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = sub_B2C42C(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    EventCombineCostumeMaster___c__DisplayClass3_0___ctor((EventCombineCostumeMaster___c__DisplayClass3_0_o *)v29, 0LL);
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v30);
    }
    v35 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                   Enumerator,
                                   *(_QWORD *)(v34 + 8));
    if ( !v29 )
      goto LABEL_42;
    if ( v35 )
    {
      v43 = *(&(*v24)->_2.bitflags2 + 1);
      if ( LOBYTE((*v35)->m_Items[68]) < (unsigned int)v43
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)&(*v35)->m_Items[43] + 8 * v43 - 8) != *v24 )
      {
        sub_B2C728(v35);
LABEL_42:
        sub_B2C434(v35, v36);
      }
    }
    *(_QWORD *)(v29 + 16) = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)(v29 + 16), v35, v37, v38, v39, v40, v41, v42);
    v46 = *(_QWORD *)(v29 + 16);
    if ( !v46 )
      sub_B2C434(v44, v45);
    if ( *(_DWORD *)(v46 + 16) == svtId && *(_DWORD *)(v46 + 20) == costumeId )
    {
      v47 = costumeId;
      v48 = v24;
      v49 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v49,
        (Il2CppObject *)v29,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_EventEntity___ctor__);
      if ( !v59 )
        sub_B2C434(0LL, v50);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                v59,
                (System_Predicate_T__o *)v49,
                (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_EventEntity__FindIndex__);
      v24 = v48;
      costumeId = v47;
      if ( (Index & 0x80000000) == 0 )
      {
        v52 = *(EventCombineCostumeEntity_o **)(v29 + 16);
        v53 = 133;
        goto LABEL_32;
      }
    }
  }
  v53 = 131;
  v52 = 0LL;
LABEL_32:
  v60 = v53;
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_36:
    v57 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  if ( v60 == 131 )
    return 0LL;
  return v52;
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

  if ( (byte_418A2F9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__,
      entity);
    byte_418A2F9 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_B2C434(this, x);
  return x->fields.id == ent->fields.eventId;
}