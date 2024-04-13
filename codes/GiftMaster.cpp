void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EA468 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v8, v9, v10);
    byte_42EA468 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.idToGiftEntityListDictionary,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    24,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GiftMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42EA46A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__,
      (_DWORD)giftEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12, v13, v14);
    this = (GiftMaster_o *)sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v15, v16, v17);
    byte_42EA46A = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_10;
  this = (GiftMaster_o *)v5->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v18;
    this = (GiftMaster_o *)v5->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      giftEntity->fields.id,
      (WarBoardAIRoute_RouteData_o *)v18,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B5D69C(this, giftEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)giftEntity,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *idToGiftEntityListDictionary; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  GiftEntity_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_42EA469 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v5, v6, v7);
    sub_B5D5C4(&GiftEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    byte_42EA469 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v21);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_17:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v33 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                            Enumerator,
                            *(_QWORD *)(v32 + 8));
    if ( v33 )
    {
      v35 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (GiftEntity_c *)v33->klass->_2.typeHierarchy[v35 - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v33, v34);
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_27:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
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

  if ( (byte_42EA466 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, id, type, *(_QWORD *)&objectId);
    byte_42EA466 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                           PK,
                           (const MethodInfo_23FB260 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v7; // x1

  if ( (byte_42EA46E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, giftId, (_DWORD)method, v3);
    byte_42EA46E = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_B5D69C(0LL, v7);
  return (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ListById,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t priorGiftId; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_Int32_array *priorGiftIconIds; // x21
  char v32; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  __int64 v34; // x20
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x8
  int max_length; // w8
  __int64 v38; // x8
  int32_t v39; // w9
  __int64 v41; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  priorGiftId = giftId;
  if ( (byte_42EA46F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftAddMaster___, giftId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EA46F = 1;
  }
  value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, priorGiftId, v29);
  if ( ValidPriorDataById )
  {
    priorGiftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    v32 = 1;
  }
  else
  {
    v32 = 0;
    priorGiftIconIds = 0LL;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                priorGiftId,
                                &value,
                                (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v33,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v33;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v34 = 0LL;
      while ( 1 )
      {
        size = v33->fields._size;
        if ( (int)v34 >= size )
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        if ( size <= (unsigned int)v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v36 = v33->fields._items->m_Items[v34];
        if ( !v36 )
          break;
        LOBYTE(v36[1].monitor) = v32;
        max_length = priorGiftIconIds->max_length;
        if ( (int)v34 >= max_length )
        {
          v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        if ( value )
        {
          if ( LODWORD(value->fields.eval) <= (unsigned int)v34 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( (unsigned int)v34 >= max_length )
          {
            v41 = sub_B5D6C8(Instance);
            sub_B5D668(v41, 0LL);
          }
          v38 = *(_QWORD *)(*(_QWORD *)&value->fields.viewpoint + 8 * v34 + 32);
          if ( v38 )
          {
            v39 = priorGiftIconIds->m_Items[++v34];
            *(_DWORD *)(v38 + 44) = v39;
            v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
            if ( value )
              continue;
          }
        }
        break;
      }
    }
LABEL_25:
    sub_B5D69C(Instance, v28);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v33;
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GiftMaster_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x0
  System_NotImplementedException_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  System_Collections_IEnumerator_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  GiftEntity_o *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x10
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x21
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  __int64 v54; // x20
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  System_Collections_IEnumerator_c **v62; // x11
  __int64 v63; // x0
  __int64 v64; // x0
  GiftEntity_o *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x10
  const MethodInfo *v68; // x2
  int v69; // w23
  __int64 v70; // x0
  __int64 v71; // x3
  __int64 v72; // x8
  __int64 v73; // x20
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  int v77[2]; // [xsp+0h] [xbp-40h]
  int v78; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_42EA46C & 1) == 0 )
  {
    sub_B5D5C4(&GiftEntity_TypeInfo, (_DWORD)e, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerable_TypeInfo, v9, v10, v11);
    this = (GiftMaster_o *)sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    byte_42EA46C = 1;
  }
  v78 = 0;
  if ( !e )
    sub_B5D69C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v21 = sub_B5D5C8(&System_NotImplementedException_TypeInfo);
      v22 = (System_NotImplementedException_o *)sub_B5D694(v21);
      System_NotImplementedException___ctor(v22, 0LL);
      v23 = sub_B5D5C8(&Method_GiftMaster_OnListChangedImplementation__);
      sub_B5D668(v22, v23);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v26 )
      sub_B5D69C(0LL, v24);
    while ( 1 )
    {
      v27 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_21;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_21:
        v30 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v32 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v33 = 0LL;
        v34 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *(v34 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v33;
          v34 += 2;
          if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_28;
        }
        v35 = v32 + 16LL * (*(_DWORD *)v34 + 1) + 312;
      }
      else
      {
LABEL_28:
        v35 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 1LL, v31);
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v26, *(_QWORD *)(v35 + 8));
      v37 = (GiftEntity_o *)v36;
      if ( v36 )
      {
        v38 = *(_QWORD *)v36;
        v39 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 300LL) >= (unsigned int)v39
          && *(GiftEntity_c **)(*(_QWORD *)(v38 + 200) + 8 * v39 - 8) == GiftEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v38 + 376))(v36, *(_QWORD *)(v38 + 384)) )
            GiftMaster__RemoveIdToGiftEntityListDictionary(v5, v37, v40);
        }
      }
    }
    v77[0] = 117;
    v78 = 1;
    v41 = sub_B5D684(v26, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v44 = 0LL;
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_40;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_40:
        v46 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    }
    v78 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v48 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v50 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_49:
      v51 = sub_AF54C0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v54 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v51)(newItems, *(_QWORD *)(v51 + 8));
    if ( !v54 )
      sub_B5D69C(0LL, v52);
    while ( 1 )
    {
      v55 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v56 = 0LL;
        v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v56;
          v57 += 4;
          if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_56;
        }
        v58 = v55 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_56:
        v58 = sub_AF54C0(v54, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8)) & 1) == 0 )
        break;
      v60 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v61 = 0LL;
        v62 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *(v62 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v61;
          v62 += 2;
          if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_63;
        }
        v63 = v60 + 16LL * (*(_DWORD *)v62 + 1) + 312;
      }
      else
      {
LABEL_63:
        v63 = sub_AF54C0(v54, System_Collections_IEnumerator_TypeInfo, 1LL, v59);
      }
      v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v54, *(_QWORD *)(v63 + 8));
      v65 = (GiftEntity_o *)v64;
      if ( v64 )
      {
        v66 = *(_QWORD *)v64;
        v67 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v64 + 300LL) >= (unsigned int)v67
          && *(GiftEntity_c **)(*(_QWORD *)(v66 + 200) + 8 * v67 - 8) == GiftEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v66 + 376))(v64, *(_QWORD *)(v66 + 384)) )
        {
          GiftMaster__AddIdToGiftEntityListDictionary(v5, v65, v68);
        }
      }
    }
    v77[0] = 213;
    v69 = ++v78;
    v70 = sub_B5D684(v54, System_IDisposable_TypeInfo);
    if ( v70 )
    {
      v72 = *(_QWORD *)v70;
      v73 = v70;
      if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
      {
        v74 = 0LL;
        v75 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
        {
          ++v74;
          v75 += 4;
          if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
            goto LABEL_75;
        }
        v76 = v72 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_75:
        v76 = sub_AF54C0(v70, System_IDisposable_TypeInfo, 0LL, v71);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v76)(v73, *(_QWORD *)(v76 + 8));
    }
    if ( v69 && v77[v69 - 1] == 213 )
    {
      v78 = v69 - 1;
      return;
    }
LABEL_81:
    GiftMaster__CreateIdToGiftEntityListDictionary(v5, (const MethodInfo *)e);
  }
}


void __fastcall GiftMaster__RemoveIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GiftMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42EA46B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__,
      (_DWORD)giftEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v9, v10, v11);
    this = (GiftMaster_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v12, v13, v14);
    byte_42EA46B = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_12;
  this = (GiftMaster_o *)v5->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                           (WarBoardManager_TaskList_o *)giftEntity,
                           (const MethodInfo_305896C *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (GiftMaster_o *)v5->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, giftEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_42EA467 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&type);
    byte_42EA467 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  void *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x8
  int32_t v22; // w22
  bool v23; // w21
  GiftEntity_o *v24; // x20
  GiftEntity_o *v25; // x19
  const MethodInfo *v26; // x4
  __int64 v28; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = id;
  if ( (byte_42EA46D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftAddMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&GiftEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EA46D = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v4, v20);
  if ( Instance )
  {
    v21 = *((_QWORD *)Instance + 5);
    if ( !v21 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v21 + 24) )
    {
      v28 = sub_B5D6C8(Instance);
      sub_B5D668(v28, 0LL);
    }
    v4 = *((_DWORD *)Instance + 12);
    v22 = *(_DWORD *)(v21 + 32);
    v23 = 1;
  }
  else
  {
    v23 = 0;
    v22 = 0;
  }
  Instance = this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                       v4,
                       &value,
                       (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_18:
    sub_B5D69C(Instance, v19);
  if ( !LODWORD(value->fields.eval) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v24 = *(GiftEntity_o **)(*(_QWORD *)&value->fields.viewpoint + 32LL);
  v25 = (GiftEntity_o *)sub_B5D694(GiftEntity_TypeInfo);
  GiftEntity___ctor_28430744(v25, v24, v22, v23, v26);
  return v25;
}