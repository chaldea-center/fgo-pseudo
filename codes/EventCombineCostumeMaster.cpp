void __fastcall EventCombineCostumeMaster___ctor(EventCombineCostumeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB13B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB13B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    360,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string___ctor__);
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

  if ( (byte_42EB139 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__,
      svtId,
      costumeId,
      *(_QWORD *)&eventId);
    byte_42EB139 = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&eventId);
  return (EventCombineCostumeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__GetEntity__);
}


EventCombineCostumeEntity_o *__fastcall EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
        EventCombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  int32_t v4; // w20
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  __int64 v43; // x1
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  EventCombineCostumeEntity_c **v46; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v51; // x23
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  System_Int32_array **v57; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x10
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x8
  int32_t v69; // w22
  EventCombineCostumeEntity_c **v70; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x25
  __int64 v72; // x1
  int32_t Index; // w0
  EventCombineCostumeEntity_o *v74; // x20
  int v75; // w8
  System_Collections_Generic_IEnumerator_T__c *v76; // x8
  unsigned __int64 v77; // x10
  int32_t *v78; // x11
  __int64 v79; // x0
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v81; // [xsp+8h] [xbp-68h]
  int v82; // [xsp+10h] [xbp-60h]

  v4 = costumeId;
  if ( (byte_42EB13C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      costumeId,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v7, v8, v9);
    sub_B5D5C4(&EventCombineCostumeEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__FindIndex__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Predicate_EventEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Predicate_EventEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__, v34, v35, v36);
    sub_B5D5C4(&EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo, v37, v38, v39);
    byte_42EB13C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetCombineCostumeItemEventList((EventMaster_o *)Instance, 0LL),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(Instance, v41);
  }
  v81 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v43);
  v46 = &EventCombineCostumeEntity_TypeInfo;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v48;
        p_offset += 4;
        if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v51 = sub_B5D694(EventCombineCostumeMaster___c__DisplayClass3_0_TypeInfo);
    EventCombineCostumeMaster___c__DisplayClass3_0___ctor((EventCombineCostumeMaster___c__DisplayClass3_0_o *)v51, 0LL);
    v53 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_19:
      v56 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v52);
    }
    v57 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                   Enumerator,
                                   *(_QWORD *)(v56 + 8));
    if ( !v51 )
      goto LABEL_42;
    if ( v57 )
    {
      v65 = *(&(*v46)->_2.bitflags2 + 1);
      if ( LOBYTE((*v57)->m_Items[68]) < (unsigned int)v65
        || *(EventCombineCostumeEntity_c **)(*(_QWORD *)&(*v57)->m_Items[43] + 8 * v65 - 8) != *v46 )
      {
        sub_B5D990(v57);
LABEL_42:
        sub_B5D69C(v57, v58);
      }
    }
    *(_QWORD *)(v51 + 16) = v57;
    sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), v57, v59, v60, v61, v62, v63, v64);
    v68 = *(_QWORD *)(v51 + 16);
    if ( !v68 )
      sub_B5D69C(v66, v67);
    if ( *(_DWORD *)(v68 + 16) == svtId && *(_DWORD *)(v68 + 20) == v4 )
    {
      v69 = v4;
      v70 = v46;
      v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v71,
        (Il2CppObject *)v51,
        Method_EventCombineCostumeMaster___c__DisplayClass3_0__GetListBySvtIdAndCostumeId_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_EventEntity___ctor__);
      if ( !v81 )
        sub_B5D69C(0LL, v72);
      Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                v81,
                (System_Predicate_T__o *)v71,
                (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_EventEntity__FindIndex__);
      v46 = v70;
      v4 = v69;
      if ( (Index & 0x80000000) == 0 )
      {
        v74 = *(EventCombineCostumeEntity_o **)(v51 + 16);
        v75 = 133;
        goto LABEL_32;
      }
    }
  }
  v75 = 131;
  v74 = 0LL;
LABEL_32:
  v82 = v75;
  v76 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v77 = 0LL;
    v78 = &v76->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      ++v77;
      v78 += 4;
      if ( v77 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v79 = (__int64)&v76->vtable[*v78].method;
  }
  else
  {
LABEL_36:
    v79 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v44);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v79)(Enumerator, *(_QWORD *)(v79 + 8));
  if ( v82 == 131 )
    return 0LL;
  return v74;
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

  if ( (byte_42EB13A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&costumeId);
    byte_42EB13A = 1;
  }
  PK = EventCombineCostumeEntity__CreatePK(svtId, costumeId, eventId, *(const MethodInfo **)&costumeId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventCombineCostumeMaster__EventCombineCostumeEntity__string__TryGetEntity__);
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
    sub_B5D69C(this, x);
  return x->fields.id == ent->fields.eventId;
}