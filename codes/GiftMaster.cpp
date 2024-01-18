void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188F16 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v4);
    byte_4188F16 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.idToGiftEntityListDictionary,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    23,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4188F18 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, giftEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    this = (GiftMaster_o *)sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v8);
    byte_4188F18 = 1;
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
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v9;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      giftEntity->fields.id,
      (WarBoardAIRoute_RouteData_o *)v9,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B2C434(this, giftEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)giftEntity,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *idToGiftEntityListDictionary; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  GiftEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_4188F17 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v3);
    sub_B2C35C(&GiftEntity_TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4188F17 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
    }
    v21 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v23 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (GiftEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v21, v22);
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_27:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
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

  if ( (byte_4188F14 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4188F14 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                           PK,
                           (const MethodInfo_24E4520 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_4188F1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, *(_QWORD *)&giftId);
    byte_4188F1C = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_B2C434(0LL, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ListById,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_Int32_array *priorGiftIconIds; // x21
  char v17; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x20
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x8
  int max_length; // w8
  __int64 v23; // x8
  int32_t v24; // w9
  __int64 v26; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  priorGiftId = giftId;
  if ( (byte_4188F1D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&giftId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4188F1D = 1;
  }
  value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, priorGiftId, v14);
  if ( ValidPriorDataById )
  {
    priorGiftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    priorGiftIconIds = 0LL;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                priorGiftId,
                                &value,
                                (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v18;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v19 = 0LL;
      while ( 1 )
      {
        size = v18->fields._size;
        if ( (int)v19 >= size )
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                    (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        if ( size <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v21 = v18->fields._items->m_Items[v19];
        if ( !v21 )
          break;
        LOBYTE(v21[1].monitor) = v17;
        max_length = priorGiftIconIds->max_length;
        if ( (int)v19 >= max_length )
        {
          v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                    (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        if ( value )
        {
          if ( LODWORD(value->fields.eval) <= (unsigned int)v19 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( (unsigned int)v19 >= max_length )
          {
            v26 = sub_B2C460(Instance);
            sub_B2C400(v26, 0LL);
          }
          v23 = *(_QWORD *)(*(_QWORD *)&value->fields.viewpoint + 8 * v19 + 32);
          if ( v23 )
          {
            v24 = priorGiftIconIds->m_Items[++v19];
            *(_DWORD *)(v23 + 44) = v24;
            v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
            if ( value )
              continue;
          }
        }
        break;
      }
    }
LABEL_25:
    sub_B2C434(Instance, v13);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v18;
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GiftMaster_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x0
  System_NotImplementedException_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  GiftEntity_o *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x10
  const MethodInfo *v34; // x2
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x21
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  System_Collections_IEnumerator_c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  GiftEntity_o *v59; // x21
  __int64 v60; // x8
  __int64 v61; // x10
  const MethodInfo *v62; // x2
  int v63; // w23
  __int64 v64; // x0
  __int64 v65; // x3
  __int64 v66; // x8
  __int64 v67; // x20
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  int v71[2]; // [xsp+0h] [xbp-40h]
  int v72; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_4188F1A & 1) == 0 )
  {
    sub_B2C35C(&GiftEntity_TypeInfo, e);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerable_TypeInfo, v7);
    this = (GiftMaster_o *)sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4188F1A = 1;
  }
  v72 = 0;
  if ( !e )
    sub_B2C434(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v15 = sub_B2C360(&System_NotImplementedException_TypeInfo);
      v16 = (System_NotImplementedException_o *)sub_B2C42C(v15);
      System_NotImplementedException___ctor(v16, 0LL);
      v17 = sub_B2C360(&Method_GiftMaster_OnListChangedImplementation__);
      sub_B2C400(v16, v17);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B2C434(0LL, v18);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v22 = 0LL;
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_21;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_21:
        v24 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v27 = 0LL;
        v28 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v27;
          v28 += 2;
          if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_28;
        }
        v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
      }
      else
      {
LABEL_28:
        v29 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
      v31 = (GiftEntity_o *)v30;
      if ( v30 )
      {
        v32 = *(_QWORD *)v30;
        v33 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) >= (unsigned int)v33
          && *(GiftEntity_c **)(*(_QWORD *)(v32 + 200) + 8 * v33 - 8) == GiftEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v32 + 376))(v30, *(_QWORD *)(v32 + 384)) )
            GiftMaster__RemoveIdToGiftEntityListDictionary(v5, v31, v34);
        }
      }
    }
    v71[0] = 117;
    v72 = 1;
    v35 = sub_B2C41C(v20, System_IDisposable_TypeInfo);
    if ( v35 )
    {
      v36 = *(_QWORD *)v35;
      v37 = v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
            goto LABEL_40;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_40:
        v40 = sub_AC5258(v35, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
    }
    v72 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v42 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v44 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_49:
      v45 = sub_AC5258(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v45)(newItems, *(_QWORD *)(v45 + 8));
    if ( !v48 )
      sub_B2C434(0LL, v46);
    while ( 1 )
    {
      v49 = *(_QWORD *)v48;
      if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
            goto LABEL_56;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_56:
        v52 = sub_AC5258(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v48;
      if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
      {
        v55 = 0LL;
        v56 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v55;
          v56 += 2;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
            goto LABEL_63;
        }
        v57 = v54 + 16LL * (*(_DWORD *)v56 + 1) + 312;
      }
      else
      {
LABEL_63:
        v57 = sub_AC5258(v48, System_Collections_IEnumerator_TypeInfo, 1LL, v53);
      }
      v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
      v59 = (GiftEntity_o *)v58;
      if ( v58 )
      {
        v60 = *(_QWORD *)v58;
        v61 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v58 + 300LL) >= (unsigned int)v61
          && *(GiftEntity_c **)(*(_QWORD *)(v60 + 200) + 8 * v61 - 8) == GiftEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v60 + 376))(v58, *(_QWORD *)(v60 + 384)) )
        {
          GiftMaster__AddIdToGiftEntityListDictionary(v5, v59, v62);
        }
      }
    }
    v71[0] = 213;
    v63 = ++v72;
    v64 = sub_B2C41C(v48, System_IDisposable_TypeInfo);
    if ( v64 )
    {
      v66 = *(_QWORD *)v64;
      v67 = v64;
      if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
      {
        v68 = 0LL;
        v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          ++v68;
          v69 += 4;
          if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
            goto LABEL_75;
        }
        v70 = v66 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_75:
        v70 = sub_AC5258(v64, System_IDisposable_TypeInfo, 0LL, v65);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
    }
    if ( v63 && v71[v63 - 1] == 213 )
    {
      v72 = v63 - 1;
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
  GiftMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4188F19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__, giftEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v6);
    this = (GiftMaster_o *)sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    byte_4188F19 = 1;
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
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                           (WarBoardManager_TaskList_o *)giftEntity,
                           (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B2C434(this, giftEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_4188F15 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__, entity);
    byte_4188F15 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  int32_t v13; // w22
  bool v14; // w21
  GiftEntity_o *v15; // x20
  GiftEntity_o *v16; // x19
  const MethodInfo *v17; // x4
  __int64 v19; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = id;
  if ( (byte_4188F1B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B2C35C(&GiftEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188F1B = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v11);
  if ( Instance )
  {
    v12 = *((_QWORD *)Instance + 5);
    if ( !v12 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v12 + 24) )
    {
      v19 = sub_B2C460(Instance);
      sub_B2C400(v19, 0LL);
    }
    v3 = *((_DWORD *)Instance + 12);
    v13 = *(_DWORD *)(v12 + 32);
    v14 = 1;
  }
  else
  {
    v14 = 0;
    v13 = 0;
  }
  Instance = this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                       v3,
                       &value,
                       (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_18:
    sub_B2C434(Instance, v10);
  if ( !LODWORD(value->fields.eval) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v15 = *(GiftEntity_o **)(*(_QWORD *)&value->fields.viewpoint + 32LL);
  v16 = (GiftEntity_o *)sub_B2C42C(GiftEntity_TypeInfo);
  GiftEntity___ctor_27329868(v16, v15, v13, v14, v17);
  return v16;
}