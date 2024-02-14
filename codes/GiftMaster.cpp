void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4215C73 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v5);
    byte_4215C73 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v6,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.idToGiftEntityListDictionary,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    23,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4215C75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, giftEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    this = (GiftMaster_o *)sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v8);
    byte_4215C75 = 1;
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
          (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    v9,
                                                                                                    v10);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v11;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      giftEntity->fields.id,
      (WarBoardAIRoute_RouteData_o *)v11,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B0D97C(this);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)giftEntity,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *idToGiftEntityListDictionary; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  GiftEntity_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_4215C74 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v3);
    sub_B0D8A4(&GiftEntity_TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4215C74 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B0D97C(idToGiftEntityListDictionary);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      v20 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (GiftEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v18, v19);
      }
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_27:
    v24 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
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

  if ( (byte_4215C71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4215C71 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                           PK,
                           (const MethodInfo_266A024 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0

  if ( (byte_4215C79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, *(_QWORD *)&giftId);
    byte_4215C79 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_B0D97C(0LL);
  return (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ListById,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  int32_t priorGiftId; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_Int32_array *priorGiftIconIds; // x21
  char v16; // w22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  __int64 v20; // x20
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x8
  int max_length; // w8
  __int64 v24; // x8
  int32_t v25; // w9
  __int64 v27; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  priorGiftId = giftId;
  if ( (byte_4215C7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&giftId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4215C7A = 1;
  }
  value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, priorGiftId, v13);
  if ( ValidPriorDataById )
  {
    priorGiftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    priorGiftIconIds = 0LL;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                priorGiftId,
                                &value,
                                (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v19;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v20 = 0LL;
      while ( 1 )
      {
        size = v19->fields._size;
        if ( (int)v20 >= size )
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                                    (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        if ( size <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v22 = v19->fields._items->m_Items[v20];
        if ( !v22 )
          break;
        LOBYTE(v22[1].monitor) = v16;
        max_length = priorGiftIconIds->max_length;
        if ( (int)v20 >= max_length )
        {
          v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                                    (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        if ( value )
        {
          if ( LODWORD(value->fields.eval) <= (unsigned int)v20 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( (unsigned int)v20 >= max_length )
          {
            v27 = sub_B0D9A8(Instance);
            sub_B0D948(v27, 0LL);
          }
          v24 = *(_QWORD *)(*(_QWORD *)&value->fields.viewpoint + 8 * v20 + 32);
          if ( v24 )
          {
            v25 = priorGiftIconIds->m_Items[++v20];
            *(_DWORD *)(v24 + 44) = v25;
            v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
            if ( value )
              continue;
          }
        }
        break;
      }
    }
LABEL_25:
    sub_B0D97C(Instance);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v19;
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_NotImplementedException_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  System_Collections_IEnumerator_c **v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  GiftEntity_o *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x10
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x21
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x20
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  System_Collections_IEnumerator_c **v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  GiftEntity_o *v54; // x21
  __int64 v55; // x8
  __int64 v56; // x10
  const MethodInfo *v57; // x2
  int v58; // w23
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x20
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  int v65[2]; // [xsp+0h] [xbp-40h]
  int v66; // [xsp+8h] [xbp-38h]

  v4 = this;
  if ( (byte_4215C77 & 1) == 0 )
  {
    sub_B0D8A4(&GiftEntity_TypeInfo, e);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_IEnumerable_TypeInfo, v6);
    this = (GiftMaster_o *)sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4215C77 = 1;
  }
  v66 = 0;
  if ( !e )
    sub_B0D97C(this);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v14 = sub_B0D8A8(&System_NotImplementedException_TypeInfo);
      v17 = (System_NotImplementedException_o *)sub_B0D974(v14, v15, v16);
      System_NotImplementedException___ctor(v17, 0LL);
      v18 = sub_B0D8A8(&Method_GiftMaster_OnListChangedImplementation__);
      sub_B0D948(v17, v18);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v19 )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      v20 = *(_QWORD *)v19;
      if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
      {
        v21 = 0LL;
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v21;
          v22 += 4;
          if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
            goto LABEL_21;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_21:
        v23 = sub_AA67A0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
        break;
      v24 = *(_QWORD *)v19;
      if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
      {
        v25 = 0LL;
        v26 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v25;
          v26 += 2;
          if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
            goto LABEL_28;
        }
        v27 = v24 + 16LL * (*(_DWORD *)v26 + 1) + 312;
      }
      else
      {
LABEL_28:
        v27 = sub_AA67A0(v19, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
      v29 = (GiftEntity_o *)v28;
      if ( v28 )
      {
        v30 = *(_QWORD *)v28;
        v31 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) >= (unsigned int)v31
          && *(GiftEntity_c **)(*(_QWORD *)(v30 + 200) + 8 * v31 - 8) == GiftEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v30 + 376))(v28, *(_QWORD *)(v30 + 384)) )
            GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v29, v32);
        }
      }
    }
    v65[0] = 117;
    v66 = 1;
    v33 = sub_B0D964(v19, System_IDisposable_TypeInfo);
    if ( v33 )
    {
      v34 = *(_QWORD *)v33;
      v35 = v33;
      if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
      {
        v36 = 0LL;
        v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
            goto LABEL_40;
        }
        v38 = v34 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_40:
        v38 = sub_AA67A0(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
    }
    v66 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v40 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_49:
      v43 = sub_AA67A0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(newItems, *(_QWORD *)(v43 + 8));
    if ( !v44 )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      v45 = *(_QWORD *)v44;
      if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
      {
        v46 = 0LL;
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v46;
          v47 += 4;
          if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
            goto LABEL_56;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_56:
        v48 = sub_AA67A0(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
        break;
      v49 = *(_QWORD *)v44;
      if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
      {
        v50 = 0LL;
        v51 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          v51 += 2;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
            goto LABEL_63;
        }
        v52 = v49 + 16LL * (*(_DWORD *)v51 + 1) + 312;
      }
      else
      {
LABEL_63:
        v52 = sub_AA67A0(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
      v54 = (GiftEntity_o *)v53;
      if ( v53 )
      {
        v55 = *(_QWORD *)v53;
        v56 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 300LL) >= (unsigned int)v56
          && *(GiftEntity_c **)(*(_QWORD *)(v55 + 200) + 8 * v56 - 8) == GiftEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v55 + 376))(v53, *(_QWORD *)(v55 + 384)) )
        {
          GiftMaster__AddIdToGiftEntityListDictionary(v4, v54, v57);
        }
      }
    }
    v65[0] = 213;
    v58 = ++v66;
    v59 = sub_B0D964(v44, System_IDisposable_TypeInfo);
    if ( v59 )
    {
      v60 = *(_QWORD *)v59;
      v61 = v59;
      if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
      {
        v62 = 0LL;
        v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
        {
          ++v62;
          v63 += 4;
          if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
            goto LABEL_75;
        }
        v64 = v60 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_75:
        v64 = sub_AA67A0(v59, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
    }
    if ( v58 && v65[v58 - 1] == 213 )
    {
      v66 = v58 - 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4215C76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__, giftEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v6);
    this = (GiftMaster_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    byte_4215C76 = 1;
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
          (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                           (WarBoardManager_TaskList_o *)giftEntity,
                           (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B0D97C(this);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_4215C72 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__, entity);
    byte_4215C72 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *Instance; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  int32_t v12; // w22
  bool v13; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  GiftEntity_o *v16; // x20
  GiftEntity_o *v17; // x19
  const MethodInfo *v18; // x4
  __int64 v20; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = id;
  if ( (byte_4215C78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B0D8A4(&GiftEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4215C78 = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v10);
  if ( Instance )
  {
    v11 = *((_QWORD *)Instance + 5);
    if ( !v11 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v11 + 24) )
    {
      v20 = sub_B0D9A8(Instance);
      sub_B0D948(v20, 0LL);
    }
    v3 = *((_DWORD *)Instance + 12);
    v12 = *(_DWORD *)(v11 + 32);
    v13 = 1;
  }
  else
  {
    v13 = 0;
    v12 = 0;
  }
  Instance = this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                       v3,
                       &value,
                       (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_18:
    sub_B0D97C(Instance);
  if ( !LODWORD(value->fields.eval) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v16 = *(GiftEntity_o **)(*(_QWORD *)&value->fields.viewpoint + 32LL);
  v17 = (GiftEntity_o *)sub_B0D974(GiftEntity_TypeInfo, v14, v15);
  GiftEntity___ctor_26788988(v17, v16, v12, v13, v18);
  return v17;
}