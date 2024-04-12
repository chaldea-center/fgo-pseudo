void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2787 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
    byte_42B2787 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    360,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_42B2785 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
    byte_42B2785 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  EventCombineCostumeEntity_c **v13; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x23
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  System_Int32_array **v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  int32_t v36; // w22
  EventCombineCostumeEntity_c **v37; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v38; // x25
  __int64 v39; // x1
  int32_t Index; // w0
  EventCombineCostumeEntity_o *v41; // x20
  int v42; // w8
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v48; // [xsp+8h] [xbp-68h]
  int v49; // [xsp+10h] [xbp-60h]

  if ( (byte_42B2788 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&EventCombineCostumeEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventEntity__FindIndex__);
    sub_B52984(&Method_System_Predicate_EventEntity___ctor__);
    sub_B52984(&System_Predicate_EventEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__);
    sub_B52984(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    byte_42B2788 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, 0LL),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B52A5C(Instance, v8);
  }
  v48 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  v13 = &EventCombineCostumeEntity_TypeInfo;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = sub_B52A54(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    EventCombineCostumeMaster___c__DisplayClass3_0___ctor((EventCombineCostumeMaster___c__DisplayClass3_0_o *)v18, 0LL);
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_19:
      v23 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v24 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                   Enumerator,
                                   *(_QWORD *)(v23 + 8));
    if ( !v18 )
      goto LABEL_42;
    if ( v24 )
    {
      v32 = *(&(*v13)->_2.bitflags2 + 1);
      if ( LOBYTE((*v24)->m_Items[68]) < (unsigned int)v32
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)&(*v24)->m_Items[43] + 8 * v32 - 8) != *v13 )
      {
        sub_B52D50(v24);
LABEL_42:
        sub_B52A5C(v24, v25);
      }
    }
    *(_QWORD *)(v18 + 16) = v24;
    sub_B52920((BattleServantConfConponent_o *)(v18 + 16), v24, v26, v27, v28, v29, v30, v31);
    v35 = *(_QWORD *)(v18 + 16);
    if ( !v35 )
      sub_B52A5C(v33, v34);
    if ( *(_DWORD *)(v35 + 16) == svtId && *(_DWORD *)(v35 + 20) == costumeId )
    {
      v36 = costumeId;
      v37 = v13;
      v38 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v38,
        (Il2CppObject *)v18,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_EventEntity___ctor__);
      if ( !v48 )
        sub_B52A5C(0LL, v39);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                v48,
                (System_Predicate_T__o *)v38,
                (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_EventEntity__FindIndex__);
      v13 = v37;
      costumeId = v36;
      if ( (Index & 0x80000000) == 0 )
      {
        v41 = *(EventCombineCostumeEntity_o **)(v18 + 16);
        v42 = 133;
        goto LABEL_32;
      }
    }
  }
  v42 = 131;
  v41 = 0LL;
LABEL_32:
  v49 = v42;
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_36:
    v46 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( v49 == 131 )
    return 0LL;
  return v41;
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

  if ( (byte_42B2786 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
    byte_42B2786 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_B52A5C(this, x);
  return x->fields.id == ent->fields.eventId;
}