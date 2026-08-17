void RecommendSupportData___ctor(RecommendSupportData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct RecommendSupportData_RecommendDeckData_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct RecommendSupportData_RecommendDeckData_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596C430 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&RecommendSupportData_RecommendDeckData___TypeInfo);
    byte_596C430 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct RecommendSupportData_RecommendDeckData_array *)sub_2213B20(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)v4->static_fields->RecommendSupportMemberMax);
  this->fields.deckData = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct RecommendSupportData_RecommendDeckData_array *)sub_2213B20(
                                                                 RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.oldDeckData = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldDeckData, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportData__CancelDeckData(RecommendSupportData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int i; // w22
  __int64 v5; // x0
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x9
  struct RecommendSupportData_RecommendDeckData_array *v8; // x8
  struct RecommendSupportData_RecommendDeckData_array *v9; // x24
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x20
  __int64 v17; // x1
  Il2CppClass **v18; // x0
  __int64 v19; // x0

  if ( (byte_596C42C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C42C = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v5 = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(v5 + 184) + 188LL) )
      break;
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    if ( i >= LODWORD(deckData->max_length) )
      goto LABEL_23;
    oldDeckData = this->fields.oldDeckData;
    if ( !oldDeckData )
      goto LABEL_22;
    if ( i >= LODWORD(oldDeckData->max_length) )
      goto LABEL_23;
    v5 = (__int64)deckData->m_Items[i];
    if ( !v5 )
      goto LABEL_22;
    v5 = RecommendSupportData_RecommendDeckData__Compare(
           (RecommendSupportData_RecommendDeckData_o *)v5,
           oldDeckData->m_Items[i],
           v2);
    if ( (v5 & 1) == 0 )
    {
      v8 = this->fields.oldDeckData;
      if ( !v8 )
        goto LABEL_22;
      if ( i >= LODWORD(v8->max_length) )
        goto LABEL_23;
      v9 = this->fields.deckData;
      v5 = (__int64)RecommendSupportData__DeepCopy((RecommendSupportData_o *)v5, v8->m_Items[i], v2);
      if ( !v9 )
LABEL_22:
        sub_2213CDC(v5, method);
      v16 = v5;
      if ( v5 )
      {
        v5 = sub_2213BB4(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v19 = sub_2213D00(0, v17);
          sub_2213BA0(v19, 0);
        }
      }
      if ( i >= LODWORD(v9->max_length) )
LABEL_23:
        sub_2213CE4(v5);
      v18 = &v9->obj.klass + (int)i;
      v18[4] = (Il2CppClass *)v16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), v16, v10, v11, v12, v13, v14, v15);
    }
  }
}


void RecommendSupportData__ClearDeckData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_596C417 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C417 = 1;
  }
  deckData = this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  if ( !deckData )
    sub_2213CDC(v8, v9);
  if ( v6 )
  {
    v8 = sub_2213BB4(v6, deckData->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v18 = sub_2213D00(0, v16);
      sub_2213BA0(v18, 0);
    }
  }
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(v8);
  v17 = &deckData->obj.klass + index;
  v17[4] = (Il2CppClass *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__CopyData(
        RecommendSupportData_o *this,
        RecommendSupportData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  struct RecommendSupportData_RecommendDeckData_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  bool IsSelectServant_k__BackingField; // w9
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x1
  struct EventUpValSetupInfo_o *EventSetupInfo2_k__BackingField; // x1
  struct EventUpValSetupInfo_o **p_EventSetupInfo2_k__BackingField; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( !data )
    sub_2213CDC(this, 0);
  v7 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, (const MethodInfo *)isInit);
  this->fields.deckData = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v15 = RecommendSupportData__DeepCopyAll(this, data->fields.oldDeckData, v14);
  this->fields.oldDeckData = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldDeckData, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( isInit )
  {
    IsSelectServant_k__BackingField = data->fields._IsSelectServant_k__BackingField;
    EventSetupInfo_k__BackingField = data->fields._EventSetupInfo_k__BackingField;
    this->fields.kind = data->fields.kind;
    this->fields._IsSelectServant_k__BackingField = IsSelectServant_k__BackingField;
    this->fields._EventSetupInfo_k__BackingField = EventSetupInfo_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
      (int32_t)EventSetupInfo_k__BackingField,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    EventSetupInfo2_k__BackingField = data->fields._EventSetupInfo2_k__BackingField;
    this->fields._EventSetupInfo2_k__BackingField = EventSetupInfo2_k__BackingField;
    p_EventSetupInfo2_k__BackingField = &this->fields._EventSetupInfo2_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_EventSetupInfo2_k__BackingField,
      (int32_t)EventSetupInfo2_k__BackingField,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    p_EventSetupInfo2_k__BackingField[2] = (struct EventUpValSetupInfo_o *)data->fields._PushUserServantId_k__BackingField;
  }
}


void RecommendSupportData__DecisionDeckData(RecommendSupportData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int i; // w22
  __int64 v5; // x0
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x9
  struct RecommendSupportData_RecommendDeckData_array *v8; // x8
  struct RecommendSupportData_RecommendDeckData_array *v9; // x24
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x20
  __int64 v17; // x1
  Il2CppClass **v18; // x0
  __int64 v19; // x0

  if ( (byte_596C42B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C42B = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v5 = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(v5 + 184) + 188LL) )
      break;
    oldDeckData = this->fields.oldDeckData;
    if ( !oldDeckData )
      goto LABEL_22;
    if ( i >= LODWORD(oldDeckData->max_length) )
      goto LABEL_23;
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    if ( i >= LODWORD(deckData->max_length) )
      goto LABEL_23;
    v5 = (__int64)oldDeckData->m_Items[i];
    if ( !v5 )
      goto LABEL_22;
    v5 = RecommendSupportData_RecommendDeckData__Compare(
           (RecommendSupportData_RecommendDeckData_o *)v5,
           deckData->m_Items[i],
           v2);
    if ( (v5 & 1) == 0 )
    {
      v8 = this->fields.deckData;
      if ( !v8 )
        goto LABEL_22;
      if ( i >= LODWORD(v8->max_length) )
        goto LABEL_23;
      v9 = this->fields.oldDeckData;
      v5 = (__int64)RecommendSupportData__DeepCopy((RecommendSupportData_o *)v5, v8->m_Items[i], v2);
      if ( !v9 )
LABEL_22:
        sub_2213CDC(v5, method);
      v16 = v5;
      if ( v5 )
      {
        v5 = sub_2213BB4(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v19 = sub_2213D00(0, v17);
          sub_2213BA0(v19, 0);
        }
      }
      if ( i >= LODWORD(v9->max_length) )
LABEL_23:
        sub_2213CE4(v5);
      v18 = &v9->obj.klass + (int)i;
      v18[4] = (Il2CppClass *)v16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), v16, v10, v11, v12, v13, v14, v15);
    }
  }
}


RecommendSupportData_RecommendDeckData_o *RecommendSupportData__DeepCopy(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_o *source,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int128 v13; // q1
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t questPhase; // w8

  if ( (byte_596C42E & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C42E = 1;
  }
  v4 = sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !source || !v4 )
    sub_2213CDC(v5, v6);
  v13 = *(_OWORD *)&source->fields.userSvtId;
  adviceMessageIds = source->fields.adviceMessageIds;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&source->fields.idx;
  questPhase = source->fields.questPhase;
  *(_OWORD *)(v4 + 32) = v13;
  *(_QWORD *)(v4 + 48) = adviceMessageIds;
  *(_DWORD *)(v4 + 24) = questPhase;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 48), (int32_t)adviceMessageIds, v7, v8, v9, v10, v11, v12);
  return (RecommendSupportData_RecommendDeckData_o *)v4;
}


RecommendSupportData_RecommendDeckData_array *RecommendSupportData__DeepCopyAll(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_array *source,
        const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_596C42D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
    sub_2213A60(&Method_RecommendSupportData_DeepCopy__);
    byte_596C42D = 1;
  }
  v5 = (System_Func_object__object__o *)sub_2213CCC(System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
  System_Func_object__object____ctor(v5, (Il2CppObject *)this, Method_RecommendSupportData_DeepCopy__, 0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)source,
                                                              (System_Func_TSource__TResult__o *)v5,
                                                              (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
  return (RecommendSupportData_RecommendDeckData_array *)System_Linq_Enumerable__ToArray_object_(
                                                           v6,
                                                           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
}


RecommendSupportData_RecommendDeckData_array *RecommendSupportData__GetDeckData(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields.deckData;
}


int64_t RecommendSupportData__GetEquip(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C41D & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C41D = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__58806224(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return (int64_t)v8[2].monitor;
}


System_Int32_array *RecommendSupportData__GetMessage(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C424 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C424 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__58806224(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return (System_Int32_array *)v8[3].klass;
}


System_String_o *RecommendSupportData__GetMessageSentence(
        RecommendSupportData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  bool IsNullOrEmpty; // w8
  int v7; // w9
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x20
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_String_array *ConvertMessageToId; // x1

  if ( (byte_596C428 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11513/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_2213A60(&StringLiteral_11504/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_596C428 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0);
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrEmpty )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    return LocalizationManager__Get((System_String_o *)StringLiteral_11504/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0);
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11513/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v13);
    ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                           (RecommendAdviceMessageMaster_o *)Master_object,
                           ids,
                           0);
    return System_String__Join(v11, ConvertMessageToId, 0);
  }
}


System_String_o *RecommendSupportData__GetMessageSentence_41539300(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Message; // x0
  RecommendSupportData_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596C429 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_596C429 = 1;
  }
  Message = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportData__GetMessage(this, index, method);
  v6 = (RecommendSupportData_o *)System_Linq_Enumerable__ToArray_int_(
                                   Message,
                                   (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  return RecommendSupportData__GetMessageSentence(v6, (System_Int32_array *)v6, v7);
}


RecommendSupportData_RecommendDeckData_array *RecommendSupportData__GetOldDeckData(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields.oldDeckData;
}


int64_t RecommendSupportData__GetOldEquip(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C41F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C41F = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__58806224(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return (int64_t)v8[2].monitor;
}


System_Int32_array *RecommendSupportData__GetOldMessage(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C426 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C426 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__58806224(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return (System_Int32_array *)v8[3].klass;
}


int64_t RecommendSupportData__GetOldServant(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C41B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C41B = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__58806224(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return (int64_t)v8[2].klass;
}


int64_t RecommendSupportData__GetServant(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C419 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C419 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__58806224(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  return (int64_t)v8[2].klass;
}


void RecommendSupportData__Init(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  unsigned __int64 v5; // x21
  __int64 i; // x28
  BalanceConfig_c *v7; // x0
  unsigned int *deckData; // x29
  __int64 v9; // x22
  const MethodInfo *v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppClass *v13; // x0
  __int64 v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UserGameEntity_o *SelfUserGame; // x21
  const MethodInfo *v29; // x2
  UserRecommendSupportEntity_array *RecommendSupportDeck; // x22
  unsigned __int64 j; // x23
  unsigned int *v32; // x28
  UserRecommendSupportEntity_o *v33; // x25
  __int64 v34; // x24
  const MethodInfo *v35; // x2
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  int64_t EquipUserSvtId; // x0
  struct System_Int32_array *adviceMessageIds; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  unsigned int *v51; // x0
  struct RecommendSupportData_RecommendDeckData_array *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x0

  if ( (byte_596C414 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C414 = 1;
  }
  v5 = 0;
  for ( i = 8; ; i += 2 )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, eventUpSetupInfo, method);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v7->static_fields->RecommendSupportMemberMax )
      break;
    deckData = (unsigned int *)this->fields.deckData;
    v9 = sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912((RecommendSupportData_RecommendDeckData_o *)v9, v5, v10);
    if ( !v9 )
      goto LABEL_31;
    v13 = int___TypeInfo;
    *(_DWORD *)(v9 + 20) = 0;
    *(_DWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    v14 = sub_2213B20(v13, 0);
    *(_QWORD *)(v9 + 48) = v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), v14, v15, v16, v17, v18, v19, v20);
    if ( !deckData )
      goto LABEL_31;
    Instance = (DataManager_o *)sub_2213BB4(v9, *(_QWORD *)(*(_QWORD *)deckData + 64LL));
    if ( !Instance )
    {
LABEL_33:
      v71 = sub_2213D00(Instance, v21);
      sub_2213BA0(v71, 0);
    }
    if ( v5 >= deckData[6] )
LABEL_32:
      sub_2213CE4(Instance);
    *(_QWORD *)&deckData[2 * v5 + 8] = v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&deckData[i], v9, v22, v23, v24, v25, v26, v27);
    ++v5;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_31;
  RecommendSupportDeck = UserRecommendSupportMaster__GetRecommendSupportDeck(
                           (UserRecommendSupportMaster_o *)Instance,
                           0);
  for ( j = 0; ; ++j )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12, v29);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 188LL) )
      break;
    if ( !RecommendSupportDeck )
      goto LABEL_31;
    if ( j >= LODWORD(RecommendSupportDeck->max_length) )
      goto LABEL_32;
    v32 = (unsigned int *)this->fields.deckData;
    v33 = RecommendSupportDeck->m_Items[j];
    v34 = sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912((RecommendSupportData_RecommendDeckData_o *)v34, j, v35);
    if ( v33 )
    {
      if ( !v34 )
        goto LABEL_31;
      userSvtLeaderInfo = v33->fields.userSvtLeaderInfo;
      *(_QWORD *)(v34 + 20) = *(_QWORD *)&v33->fields.questId;
      if ( !userSvtLeaderInfo )
        goto LABEL_31;
      *(_QWORD *)(v34 + 32) = userSvtLeaderInfo->fields.userSvtId;
      EquipUserSvtId = UserRecommendSupportEntity__GetEquipUserSvtId(v33, 0);
      adviceMessageIds = v33->fields.adviceMessageIds;
      *(_QWORD *)(v34 + 48) = adviceMessageIds;
      *(_QWORD *)(v34 + 40) = EquipUserSvtId;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v34 + 48),
        (int32_t)adviceMessageIds,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    if ( !v32 )
      goto LABEL_31;
    if ( v34 )
    {
      Instance = (DataManager_o *)sub_2213BB4(v34, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
      if ( !Instance )
        goto LABEL_33;
    }
    if ( j >= v32[6] )
      goto LABEL_32;
    v51 = &v32[2 * j];
    *((_QWORD *)v51 + 4) = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 8), v34, v36, v37, v38, v39, v40, v41);
  }
  v52 = RecommendSupportData__DeepCopyAll(this, this->fields.deckData, v29);
  this->fields.oldDeckData = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldDeckData, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  this->fields._IsSelectServant_k__BackingField = 0;
  this->fields.kind = 1;
  this->fields._EventSetupInfo2_k__BackingField = eventUpSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._EventSetupInfo_k__BackingField = eventUpSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  if ( !SelfUserGame )
LABEL_31:
    sub_2213CDC(Instance, v12);
  this->fields._PushUserServantId_k__BackingField = SelfUserGame->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__RemoveEquipData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  v4->fields.userSvtEquipId = 0;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__RemoveQuest(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  v4->fields.questId = 0;
  v4->fields.questPhase = 0;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__RemoveServantData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  v4->fields.userSvtId = 0;
}


void RecommendSupportData__ResetDeckData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x22
  __int64 v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  RecommendSupportData_RecommendDeckData_o *v17; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  __int64 v19; // d0
  int32_t questPhase; // w9
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppClass **v28; // x0
  __int64 v29; // x0

  if ( (byte_596C418 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C418 = 1;
  }
  deckData = this->fields.deckData;
  v6 = sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_41533912((RecommendSupportData_RecommendDeckData_o *)v6, index, v7);
  oldDeckData = this->fields.oldDeckData;
  if ( !oldDeckData )
    goto LABEL_11;
  if ( LODWORD(oldDeckData->max_length) <= index )
    goto LABEL_12;
  v17 = oldDeckData->m_Items[index];
  if ( !v17 )
    goto LABEL_11;
  if ( !v6 )
    goto LABEL_11;
  adviceMessageIds = v17->fields.adviceMessageIds;
  v19 = *(_QWORD *)&v17->fields.idx;
  *(_QWORD *)(v6 + 48) = adviceMessageIds;
  *(_QWORD *)(v6 + 16) = v19;
  questPhase = v17->fields.questPhase;
  *(_OWORD *)(v6 + 32) = *(_OWORD *)&v17->fields.userSvtId;
  *(_DWORD *)(v6 + 24) = questPhase;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)adviceMessageIds, v10, v11, v12, v13, v14, v15);
  if ( !deckData )
LABEL_11:
    sub_2213CDC(v8, v9);
  v8 = sub_2213BB4(v6, deckData->obj.klass->_1.element_class);
  if ( !v8 )
  {
    v29 = sub_2213D00(0, v21);
    sub_2213BA0(v29, 0);
  }
  if ( LODWORD(deckData->max_length) <= index )
LABEL_12:
    sub_2213CE4(v8);
  v28 = &deckData->obj.klass + index;
  v28[4] = (Il2CppClass *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), v6, v22, v23, v24, v25, v26, v27);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__SetAdviceMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Int32_array *v8; // x19
  RecommendSupportData_o *v10; // x21
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v12; // x20

  v8 = ids;
  v10 = this;
  if ( (byte_596C416 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_2213A60(&int___TypeInfo);
    byte_596C416 = 1;
  }
  deckData = v10->fields.deckData;
  if ( !deckData )
    goto LABEL_9;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  v12 = deckData->m_Items[index];
  if ( !v8 )
  {
    this = (RecommendSupportData_o *)sub_2213B20(int___TypeInfo, 0);
    v8 = (struct System_Int32_array *)this;
  }
  if ( !v12 )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&index);
  v12->fields.adviceMessageIds = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.adviceMessageIds,
    (int32_t)v8,
    (System_String_o *)ids,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__SetEquipData(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t userSvtId,
        int32_t svtId,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v6; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  v6 = deckData->m_Items[index];
  if ( !v6 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  v6->fields.userSvtEquipId = userSvtId;
}


void RecommendSupportData__SetOld(RecommendSupportData_o *this, RecommendSupportData_o *data, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !data )
    sub_2213CDC(this, 0);
  v4 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, method);
  this->fields.oldDeckData = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldDeckData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__SetQuest(
        RecommendSupportData_o *this,
        int32_t index,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8
  int32_t id; // w8
  int32_t phase; // w9
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x10
  RecommendSupportData_RecommendDeckData_o *v8; // x10

  if ( questInfo )
  {
    questEntity = questInfo->fields.questEntity;
    if ( !questEntity )
      goto LABEL_9;
    id = questEntity->fields.id;
    phase = questInfo->fields.phase;
  }
  else
  {
    id = 0;
    phase = 0;
  }
  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_9;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  v8 = deckData->m_Items[index];
  if ( !v8 )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&index);
  v8->fields.questId = id;
  v8->fields.questPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__SetServantData(
        RecommendSupportData_o *this,
        int32_t index,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  RecommendSupportData_o *v6; // x21
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  __int128 v8; // q0
  __int128 v9; // q1
  RecommendSupportData_RecommendDeckData_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_596C415 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C415 = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_10;
  if ( LODWORD(deckData->max_length) <= index )
    sub_2213CE4(this);
  if ( !entity )
    goto LABEL_10;
  v8 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v9 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  v10 = deckData->m_Items[index];
  *(_OWORD *)&v12.fields.currentCryptoKey = v8;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index, entity);
  v11 = v12;
  this = (RecommendSupportData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v11, 0);
  if ( !v10 )
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&index);
  v10->fields.userSvtId = (int64_t)this;
}


bool RecommendSupportData__ShouldShowExpiredDialog(RecommendSupportData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  __int64 v5; // x1
  __int64 questId; // x2
  Il2CppObject *Master_object; // x20
  unsigned int i; // w23
  _QWORD *p_image; // x0
  int v10; // w24
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x9
  RecommendSupportData_RecommendDeckData_o *v13; // x9
  RecommendSupportData_RecommendDeckData_o *v14; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C42F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_596C42F = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  for ( i = 0; ; ++i )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, questId);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    v10 = *(_DWORD *)(p_image[23] + 188LL);
    if ( (int)i >= v10 )
      break;
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    if ( i >= LODWORD(deckData->max_length) )
      goto LABEL_23;
    oldDeckData = this->fields.oldDeckData;
    if ( !oldDeckData )
      goto LABEL_22;
    if ( i >= LODWORD(oldDeckData->max_length) )
LABEL_23:
      sub_2213CE4(p_image);
    v13 = oldDeckData->m_Items[i];
    if ( !v13 || (v14 = deckData->m_Items[i]) == 0 )
LABEL_22:
      sub_2213CDC(p_image, v5);
    questId = (unsigned int)v14->fields.questId;
    if ( *(_QWORD *)&v13->fields.questId != *(_QWORD *)&v14->fields.questId )
    {
      if ( !Master_object )
        goto LABEL_22;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questId,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
      {
        p_image = &entity->klass;
        if ( !entity )
          goto LABEL_22;
        if ( !QuestEntity__IsOpenByTime((QuestEntity_o *)entity, 0, 0) )
          break;
      }
    }
  }
  return (int)i < v10;
}


bool RecommendSupportData__TryGetEquip(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtEquipId,
        const MethodInfo *method)
{
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v8; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int64_t monitor; // x8

  if ( (byte_596C41E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C41E = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    monitor = (int64_t)v10[2].monitor;
  }
  else
  {
    monitor = 0;
  }
  *userSvtEquipId = monitor;
  return monitor > 0;
}


// local variable allocation has failed, the output may be wrong!
bool RecommendSupportData__TryGetIsQuestSetting(
        RecommendSupportData_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t *settingIndex,
        System_String_o **svtName,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o **v13; // x8
  System_String_o *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  int max_length; // w9
  int32_t v21; // w11
  RecommendSupportData_RecommendDeckData_o *v22; // x12
  System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C422 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_596C422 = 1;
  }
  entity = 0;
  *settingIndex = -1;
  v13 = *(System_String_o ***)(qword_5984390 + 184);
  v14 = *v13;
  *svtName = *v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)svtName,
    (int32_t)v14,
    *(System_String_o **)&questPhase,
    (System_String_o *)settingIndex,
    (int32_t)svtName,
    (int32_t)method,
    v6,
    v7);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.deckData, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_20;
  max_length = deckData->max_length;
  if ( max_length < 1 )
    return 0;
  v21 = 0;
  while ( 1 )
  {
    if ( max_length == v21 )
      sub_2213CE4(Master_object);
    v22 = deckData->m_Items[v21];
    if ( !v22 )
      goto LABEL_20;
    if ( v22->fields.questId == questId && v22->fields.questPhase == questPhase )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v21 )
      return 0;
  }
  *settingIndex = v21;
  if ( !Master_object )
LABEL_20:
    sub_2213CDC(Master_object, v18);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         v22->fields.userSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
    {
      v24 = UserServantEntity__GetSvtName((UserServantEntity_o *)entity, 0, 0);
      *svtName = v24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)svtName, (int32_t)v24, v25, v26, v27, v28, v29, v30);
      return 1;
    }
    goto LABEL_20;
  }
  return 1;
}


bool RecommendSupportData__TryGetMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Int32_array **ids,
        const MethodInfo *method)
{
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v8; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Int32_array *klass; // x1

  if ( (byte_596C425 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C425 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    klass = (System_Int32_array *)v10[3].klass;
  }
  else
  {
    klass = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  }
  *ids = klass;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)ids, (int32_t)klass, v12, v13, v14, v15, v16, v17);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*ids, 0);
}


bool RecommendSupportData__TryGetOldEquip(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtEquipId,
        const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v8; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int64_t monitor; // x8

  if ( (byte_596C420 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C420 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    monitor = (int64_t)v10[2].monitor;
  }
  else
  {
    monitor = 0;
  }
  *userSvtEquipId = monitor;
  return monitor > 0;
}


bool RecommendSupportData__TryGetOldMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Collections_Generic_List_int__o **adviceMessageIds,
        const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v8; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_int__o *v18; // x20

  if ( (byte_596C427 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C427 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    v18 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v10[3].klass,
                                                      (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  *adviceMessageIds = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)adviceMessageIds, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*adviceMessageIds, 0);
}


bool RecommendSupportData__TryGetOldQuest(
        RecommendSupportData_o *this,
        int32_t index,
        int32_t *questId,
        int32_t *questPhase,
        const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x0
  bool result; // w0
  System_Object_array *v11; // x22
  RecommendSupportData_RecommendDeckData_o *v12; // x23
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t monitor; // w9
  Il2CppClass *klass; // x1
  Il2CppClass *v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C423 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C423 = 1;
  }
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v24 = 0;
  if ( BasicHelper__IsValidIndex_object__58806224(
         oldDeckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    result = 0;
    *questId = 0;
    *questPhase = 0;
  }
  else
  {
    v11 = (System_Object_array *)this->fields.oldDeckData;
    v12 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v12, index, v13);
    v14 = BasicHelper__IndexValue_object_(
            v11,
            index,
            (Il2CppObject *)v12,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v14 )
      sub_2213CDC(0, v15);
    monitor = (int32_t)v14[1].monitor;
    klass = v14[3].klass;
    *questId = HIDWORD(v14[1].klass);
    *questPhase = monitor;
    v24 = klass;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24, (int32_t)klass, v16, v17, v18, v19, v20, v21);
    return *questId > 0;
  }
  return result;
}


bool RecommendSupportData__TryGetOldServant(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtId,
        const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v8; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int64_t klass; // x8

  if ( (byte_596C41C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C41C = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    klass = (int64_t)v10[2].klass;
  }
  else
  {
    klass = 0;
  }
  *userSvtId = klass;
  return klass > 0;
}


bool RecommendSupportData__TryGetQuest(
        RecommendSupportData_o *this,
        int32_t index,
        int32_t *questId,
        int32_t *questPhase,
        const MethodInfo *method)
{
  System_Object_array *deckData; // x0
  System_Object_array *v10; // x22
  RecommendSupportData_RecommendDeckData_o *v11; // x23
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t monitor; // w9
  Il2CppClass *klass; // x1
  bool result; // w0
  Il2CppClass *v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C421 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C421 = 1;
  }
  deckData = (System_Object_array *)this->fields.deckData;
  v24 = 0;
  if ( BasicHelper__IsValidIndex_object__58806224(
         deckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    v10 = (System_Object_array *)this->fields.deckData;
    v11 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v11, index, v12);
    v13 = BasicHelper__IndexValue_object_(
            v10,
            index,
            (Il2CppObject *)v11,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v13 )
      sub_2213CDC(0, v14);
    monitor = (int32_t)v13[1].monitor;
    klass = v13[3].klass;
    *questId = HIDWORD(v13[1].klass);
    *questPhase = monitor;
    v24 = klass;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24, (int32_t)klass, v15, v16, v17, v18, v19, v20);
    return *questId > 0;
  }
  else
  {
    result = 0;
    *questId = 0;
    *questPhase = 0;
  }
  return result;
}


bool RecommendSupportData__TryGetServant(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtId,
        const MethodInfo *method)
{
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v8; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int64_t klass; // x8

  if ( (byte_596C41A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_596C41A = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_2213CCC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_41533912(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    klass = (int64_t)v10[2].klass;
  }
  else
  {
    klass = 0;
  }
  *userSvtId = klass;
  return klass > 0;
}


EventUpValSetupInfo_o *RecommendSupportData__get_EventSetupInfo(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields._EventSetupInfo_k__BackingField;
}


EventUpValSetupInfo_o *RecommendSupportData__get_EventSetupInfo2(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo2_k__BackingField;
}


bool RecommendSupportData__get_IsNoServant(RecommendSupportData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportData___c_c *v4; // x0
  System_Object_array *deckData; // x19
  struct RecommendSupportData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__50_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C42A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
    sub_2213A60(&System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportData___c__get_IsNoServant_b__50_0__);
    sub_2213A60(&RecommendSupportData___c_TypeInfo);
    byte_596C42A = 1;
  }
  v4 = RecommendSupportData___c_TypeInfo;
  deckData = (System_Object_array *)this->fields.deckData;
  if ( !*(&RecommendSupportData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportData___c_TypeInfo, method, v2);
    v4 = RecommendSupportData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__50_0 = (System_Func_object__bool__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__50_0, v8, Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, 0);
    v9 = RecommendSupportData___c_TypeInfo->static_fields;
    v9->__9__50_0 = (struct System_Func_RecommendSupportData_RecommendDeckData__bool__o *)_9__50_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__50_0, (int32_t)_9__50_0, v10, v11, v12, v13, v14, v15);
  }
  return !BasicHelper__Any_object__58785420(
            deckData,
            (System_Func_T__bool__o *)_9__50_0,
            (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
}


bool RecommendSupportData__get_IsSelectServant(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields._IsSelectServant_k__BackingField;
}


int32_t RecommendSupportData__get_Kind(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t RecommendSupportData__get_PushUserServantId(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields._PushUserServantId_k__BackingField;
}


void RecommendSupportData__set_EventSetupInfo(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportData__set_EventSetupInfo2(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventSetupInfo2_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportData__set_IsSelectServant(RecommendSupportData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelectServant_k__BackingField = value;
}


void RecommendSupportData__set_PushUserServantId(RecommendSupportData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._PushUserServantId_k__BackingField = value;
}


void RecommendSupportData_RecommendDeckData___ctor(
        RecommendSupportData_RecommendDeckData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportData_RecommendDeckData___ctor_41533912(
        RecommendSupportData_RecommendDeckData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  struct System_Int32_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596C431 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596C431 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = int___TypeInfo;
  this->fields.idx = index + 1;
  v6 = (struct System_Int32_array *)sub_2213B20(v5, 0);
  this->fields.adviceMessageIds = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.adviceMessageIds,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


bool RecommendSupportData_RecommendDeckData__Compare(
        RecommendSupportData_RecommendDeckData_o *this,
        RecommendSupportData_RecommendDeckData_o *src,
        const MethodInfo *method)
{
  if ( !src )
    sub_2213CDC(this, 0);
  return this->fields.idx == src->fields.idx
      && this->fields.questId == src->fields.questId
      && this->fields.questPhase == src->fields.questPhase
      && this->fields.userSvtId == src->fields.userSvtId
      && this->fields.userSvtEquipId == src->fields.userSvtEquipId
      && this->fields.adviceMessageIds == src->fields.adviceMessageIds;
}


bool RecommendSupportData_RecommendDeckData__CompareQuest(
        RecommendSupportData_RecommendDeckData_o *this,
        RecommendSupportData_RecommendDeckData_o *src,
        const MethodInfo *method)
{
  if ( !src )
    sub_2213CDC(this, 0);
  return this->fields.questId == src->fields.questId && this->fields.questPhase == src->fields.questPhase;
}


void RecommendSupportData_RecommendDeckData__Deconstruct(
        RecommendSupportData_RecommendDeckData_o *this,
        int32_t *outIdx,
        int32_t *outQuestId,
        int32_t *outQuestPhase,
        int64_t *outUserSvtId,
        int64_t *outUserSvtEquipId,
        System_Int32_array **outAdviceMessageIds,
        const MethodInfo *method)
{
  int32_t questId; // w10
  int32_t questPhase; // w11
  System_Int32_array *adviceMessageIds; // x1
  int64_t userSvtId; // x9
  int64_t userSvtEquipId; // x10

  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  *outIdx = this->fields.idx;
  adviceMessageIds = this->fields.adviceMessageIds;
  *outQuestId = questId;
  userSvtId = this->fields.userSvtId;
  userSvtEquipId = this->fields.userSvtEquipId;
  *outQuestPhase = questPhase;
  *outAdviceMessageIds = adviceMessageIds;
  *outUserSvtId = userSvtId;
  *outUserSvtEquipId = userSvtEquipId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)outAdviceMessageIds,
    (int32_t)adviceMessageIds,
    (System_String_o *)outQuestId,
    (System_String_o *)outQuestPhase,
    (int32_t)outUserSvtId,
    (int32_t)outUserSvtEquipId,
    (bool)outAdviceMessageIds,
    (bool)method);
}


void RecommendSupportData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C432 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportData___c_TypeInfo);
    byte_596C432 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportData___c_TypeInfo->static_fields->__9 = (struct RecommendSupportData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportData___c___ctor(RecommendSupportData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportData___c___get_IsNoServant_b__50_0(
        RecommendSupportData___c_o *this,
        RecommendSupportData_RecommendDeckData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return data->fields.userSvtId > 0;
}