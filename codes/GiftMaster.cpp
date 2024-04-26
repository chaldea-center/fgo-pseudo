void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4353166 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
    byte_4353166 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.idToGiftEntityListDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    24,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4353168 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    this = (GiftMaster_o *)sub_B70694(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_4353168 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_10;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v5;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      giftEntity->fields.id,
      (WarBoardAIRoute_RouteData_o *)v5,
      (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B7076C(this, giftEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)giftEntity,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *idToGiftEntityListDictionary; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  GiftEntity_o *v14; // x0
  const MethodInfo *v15; // x2
  __int64 v16; // x10
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0

  if ( (byte_4353167 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__);
    sub_B70694(&GiftEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4353167 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B7076C(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_17:
      v13 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                            Enumerator,
                            *(_QWORD *)(v13 + 8));
    if ( v14 )
    {
      v16 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (GiftEntity_c *)v14->klass->_2.typeHierarchy[v16 - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v14, v15);
      }
    }
  }
  v17 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19].method;
  }
  else
  {
LABEL_27:
    v20 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(Enumerator, *(_QWORD *)(v20 + 8));
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__GetEntity(
        GiftMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4353164 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
    byte_4353164 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                           PK,
                           (const MethodInfo_21C0890 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_435316C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_435316C = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_B7076C(0LL, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ListById,
                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_Int32_array *priorGiftIconIds; // x21
  char v10; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x20
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x8
  int max_length; // w8
  __int64 v16; // x8
  int32_t v17; // w9
  __int64 v19; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435316D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435316D = 1;
  }
  value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, giftId, v7);
  if ( ValidPriorDataById )
  {
    giftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    priorGiftIconIds = 0LL;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                giftId,
                                &value,
                                (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v11;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v12 = 0LL;
      while ( 1 )
      {
        size = v11->fields._size;
        if ( (int)v12 >= size )
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                                    (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        if ( size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v14 = v11->fields._items->m_Items[v12];
        if ( !v14 )
          break;
        LOBYTE(v14[1].monitor) = v10;
        max_length = priorGiftIconIds->max_length;
        if ( (int)v12 >= max_length )
        {
          v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                                    (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        if ( value )
        {
          if ( LODWORD(value->fields.eval) <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( (unsigned int)v12 >= max_length )
          {
            v19 = sub_B70798(Instance);
            sub_B70738(v19, 0LL);
          }
          v16 = *(_QWORD *)(*(_QWORD *)&value->fields.viewpoint + 8 * v12 + 32);
          if ( v16 )
          {
            v17 = priorGiftIconIds->m_Items[++v12];
            *(_DWORD *)(v16 + 44) = v17;
            v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
            if ( value )
              continue;
          }
        }
        break;
      }
    }
LABEL_25:
    sub_B7076C(Instance, v6);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v11;
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x0
  System_NotImplementedException_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  System_Collections_IEnumerator_c **v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  GiftEntity_o *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x10
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  System_Collections_IEnumerator_c **v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  GiftEntity_o *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x10
  const MethodInfo *v54; // x2
  int v55; // w23
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x20
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  int v62[2]; // [xsp+0h] [xbp-40h]
  int v63; // [xsp+8h] [xbp-38h]

  v4 = this;
  if ( (byte_435316A & 1) == 0 )
  {
    sub_B70694(&GiftEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerable_TypeInfo);
    this = (GiftMaster_o *)sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_435316A = 1;
  }
  v63 = 0;
  if ( !e )
    sub_B7076C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v11 = sub_B70698(&System_NotImplementedException_TypeInfo);
      v12 = (System_NotImplementedException_o *)sub_B70764(v11);
      System_NotImplementedException___ctor(v12, 0LL);
      v13 = sub_B70698(&Method_GiftMaster_OnListChangedImplementation__);
      sub_B70738(v12, v13);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v15 )
      sub_B7076C(0LL, v14);
    while ( 1 )
    {
      v16 = *(_QWORD *)v15;
      if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
      {
        v17 = 0LL;
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
            goto LABEL_21;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_21:
        v19 = sub_B08590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
        break;
      v20 = *(_QWORD *)v15;
      if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
      {
        v21 = 0LL;
        v22 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v21;
          v22 += 2;
          if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
            goto LABEL_28;
        }
        v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
      }
      else
      {
LABEL_28:
        v23 = sub_B08590(v15, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
      v25 = (GiftEntity_o *)v24;
      if ( v24 )
      {
        v26 = *(_QWORD *)v24;
        v27 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) >= (unsigned int)v27
          && *(GiftEntity_c **)(*(_QWORD *)(v26 + 200) + 8 * v27 - 8) == GiftEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v26 + 376))(v24, *(_QWORD *)(v26 + 384)) )
            GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v25, v28);
        }
      }
    }
    v62[0] = 117;
    v63 = 1;
    v29 = sub_B70754(v15, System_IDisposable_TypeInfo);
    if ( v29 )
    {
      v30 = *(_QWORD *)v29;
      v31 = v29;
      if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
            goto LABEL_40;
        }
        v34 = v30 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_40:
        v34 = sub_B08590(v29, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
    }
    v63 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v36 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v38 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_49:
      v39 = sub_B08590(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v39)(newItems, *(_QWORD *)(v39 + 8));
    if ( !v41 )
      sub_B7076C(0LL, v40);
    while ( 1 )
    {
      v42 = *(_QWORD *)v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v43 = 0LL;
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v43;
          v44 += 4;
          if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_56;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_56:
        v45 = sub_B08590(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
        break;
      v46 = *(_QWORD *)v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v47 = 0LL;
        v48 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v47;
          v48 += 2;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_63;
        }
        v49 = v46 + 16LL * (*(_DWORD *)v48 + 1) + 312;
      }
      else
      {
LABEL_63:
        v49 = sub_B08590(v41, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
      v51 = (GiftEntity_o *)v50;
      if ( v50 )
      {
        v52 = *(_QWORD *)v50;
        v53 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 300LL) >= (unsigned int)v53
          && *(GiftEntity_c **)(*(_QWORD *)(v52 + 200) + 8 * v53 - 8) == GiftEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v52 + 376))(v50, *(_QWORD *)(v52 + 384)) )
        {
          GiftMaster__AddIdToGiftEntityListDictionary(v4, v51, v54);
        }
      }
    }
    v62[0] = 213;
    v55 = ++v63;
    v56 = sub_B70754(v41, System_IDisposable_TypeInfo);
    if ( v56 )
    {
      v57 = *(_QWORD *)v56;
      v58 = v56;
      if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
      {
        v59 = 0LL;
        v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
        {
          ++v59;
          v60 += 4;
          if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
            goto LABEL_75;
        }
        v61 = v57 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_75:
        v61 = sub_B08590(v56, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
    }
    if ( v55 && v62[v55 - 1] == 213 )
    {
      v63 = v55 - 1;
      return;
    }
LABEL_81:
    GiftMaster__CreateIdToGiftEntityListDictionary(v4, (const MethodInfo *)e);
  }
}


void __fastcall GiftMaster__RemoveIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4353169 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__Remove__);
    this = (GiftMaster_o *)sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    byte_4353169 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_12;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                           (WarBoardManager_TaskList_o *)giftEntity,
                           (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B7076C(this, giftEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_2FC7F44 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GiftMaster__TryGetEntity(
        GiftMaster_o *this,
        GiftEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4353165 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
    byte_4353165 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  int32_t v9; // w22
  bool v10; // w21
  GiftEntity_o *v11; // x20
  GiftEntity_o *v12; // x19
  const MethodInfo *v13; // x4
  __int64 v15; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435316B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B70694(&GiftEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435316B = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, id, v7);
  if ( Instance )
  {
    v8 = *((_QWORD *)Instance + 5);
    if ( !v8 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v8 + 24) )
    {
      v15 = sub_B70798(Instance);
      sub_B70738(v15, 0LL);
    }
    id = *((_DWORD *)Instance + 12);
    v9 = *(_DWORD *)(v8 + 32);
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  Instance = this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                       id,
                       &value,
                       (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_18:
    sub_B7076C(Instance, v6);
  if ( !LODWORD(value->fields.eval) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v11 = *(GiftEntity_o **)(*(_QWORD *)&value->fields.viewpoint + 32LL);
  v12 = (GiftEntity_o *)sub_B70764(GiftEntity_TypeInfo);
  GiftEntity___ctor_27757580(v12, v11, v9, v10, v13);
  return v12;
}