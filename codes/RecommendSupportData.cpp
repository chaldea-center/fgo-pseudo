void RecommendSupportData___ctor(RecommendSupportData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct RecommendSupportData_RecommendDeckData_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C23166 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData___TypeInfo);
    byte_4C23166 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1C2D538(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)v3->static_fields->RecommendSupportMemberMax);
  this->fields.deckData = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1C2D538(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.oldDeckData = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldDeckData, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportData__CancelDeckData(RecommendSupportData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int i; // w21
  __int64 v5; // x0
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x9
  struct RecommendSupportData_RecommendDeckData_array *v8; // x8
  struct RecommendSupportData_RecommendDeckData_array *v9; // x24
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  Il2CppClass **v12; // x0
  __int64 v13; // x0

  if ( (byte_4C23163 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23163 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        sub_1C2D6EC(v5, method);
      v11 = v5;
      if ( v5 )
      {
        v5 = sub_1C2D5CC(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v13 = sub_1C2D710();
          sub_1C2D5B8(v13, 0);
        }
      }
      if ( i >= LODWORD(v9->max_length) )
LABEL_23:
        sub_1C2D6F4(v5, method, v2);
      v12 = &v9->obj.klass + (int)i;
      v12[4] = (Il2CppClass *)v11;
      sub_1C2D434((CGThumbnailListItem_o *)(v12 + 4), v11, (int32_t)v2, v10);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  Il2CppClass **v12; // x0
  __int64 v13; // x0

  if ( (byte_4C2314E & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2314E = 1;
  }
  deckData = this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  if ( !deckData )
    sub_1C2D6EC(v8, v9);
  if ( v6 )
  {
    v8 = sub_1C2D5CC(v6, deckData->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v13 = sub_1C2D710();
      sub_1C2D5B8(v13, 0);
    }
  }
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C2D6F4(v8, v9, v10);
  v12 = &deckData->obj.klass + index;
  v12[4] = (Il2CppClass *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v6, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__CopyData(
        RecommendSupportData_o *this,
        RecommendSupportData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  struct RecommendSupportData_RecommendDeckData_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x1
  struct EventUpValSetupInfo_o *EventSetupInfo2_k__BackingField; // x1
  struct EventUpValSetupInfo_o **p_EventSetupInfo2_k__BackingField; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( !data )
    sub_1C2D6EC(this, 0);
  v7 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, (const MethodInfo *)isInit);
  this->fields.deckData = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v11 = RecommendSupportData__DeepCopyAll(this, data->fields.oldDeckData, v10);
  this->fields.oldDeckData = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldDeckData, (int32_t)v11, v12, v13);
  if ( isInit )
  {
    this->fields.kind = data->fields.kind;
    this->fields._IsSelectServant_k__BackingField = data->fields._IsSelectServant_k__BackingField;
    EventSetupInfo_k__BackingField = data->fields._EventSetupInfo_k__BackingField;
    this->fields._EventSetupInfo_k__BackingField = EventSetupInfo_k__BackingField;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields._EventSetupInfo_k__BackingField,
      (int32_t)EventSetupInfo_k__BackingField,
      v14,
      v15);
    EventSetupInfo2_k__BackingField = data->fields._EventSetupInfo2_k__BackingField;
    this->fields._EventSetupInfo2_k__BackingField = EventSetupInfo2_k__BackingField;
    p_EventSetupInfo2_k__BackingField = &this->fields._EventSetupInfo2_k__BackingField;
    sub_1C2D434(
      (CGThumbnailListItem_o *)p_EventSetupInfo2_k__BackingField,
      (int32_t)EventSetupInfo2_k__BackingField,
      v19,
      v20);
    p_EventSetupInfo2_k__BackingField[2] = (struct EventUpValSetupInfo_o *)data->fields._PushUserServantId_k__BackingField;
  }
}


void RecommendSupportData__DecisionDeckData(RecommendSupportData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int i; // w21
  __int64 v5; // x0
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x9
  struct RecommendSupportData_RecommendDeckData_array *v8; // x8
  struct RecommendSupportData_RecommendDeckData_array *v9; // x24
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  Il2CppClass **v12; // x0
  __int64 v13; // x0

  if ( (byte_4C23162 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23162 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        sub_1C2D6EC(v5, method);
      v11 = v5;
      if ( v5 )
      {
        v5 = sub_1C2D5CC(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v13 = sub_1C2D710();
          sub_1C2D5B8(v13, 0);
        }
      }
      if ( i >= LODWORD(v9->max_length) )
LABEL_23:
        sub_1C2D6F4(v5, method, v2);
      v12 = &v9->obj.klass + (int)i;
      v12[4] = (Il2CppClass *)v11;
      sub_1C2D434((CGThumbnailListItem_o *)(v12 + 4), v11, (int32_t)v2, v10);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *adviceMessageIds; // x1

  if ( (byte_4C23165 & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23165 = 1;
  }
  v4 = sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !source || !v4 )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&source->fields.idx;
  *(_DWORD *)(v4 + 24) = source->fields.questPhase;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&source->fields.userSvtId;
  adviceMessageIds = source->fields.adviceMessageIds;
  *(_QWORD *)(v4 + 48) = adviceMessageIds;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 48), (int32_t)adviceMessageIds, v7, v8);
  return (RecommendSupportData_RecommendDeckData_o *)v4;
}


RecommendSupportData_RecommendDeckData_array *RecommendSupportData__DeepCopyAll(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_array *source,
        const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4C23164 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
    sub_1C2D490(&Method_RecommendSupportData_DeepCopy__);
    byte_4C23164 = 1;
  }
  v5 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
  System_Func_object__object____ctor(v5, (Il2CppObject *)this, Method_RecommendSupportData_DeepCopy__, 0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)source,
                                                              (System_Func_TSource__TResult__o *)v5,
                                                              (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
  return (RecommendSupportData_RecommendDeckData_array *)System_Linq_Enumerable__ToArray_object_(
                                                           v6,
                                                           (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
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

  if ( (byte_4C23154 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23154 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51106464(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
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

  if ( (byte_4C2315B & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2315B = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51106464(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
  return (System_Int32_array *)v8[3].klass;
}


System_String_o *RecommendSupportData__GetMessageSentence(
        RecommendSupportData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  bool v5; // w20
  System_String_o *v7; // x20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  System_String_array *ConvertMessageToId; // x1

  if ( (byte_4C2315F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11029/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_1C2D490(&StringLiteral_11020/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4C2315F = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0);
  v5 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      return LocalizationManager__Get((System_String_o *)StringLiteral_11020/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v5 )
      return LocalizationManager__Get((System_String_o *)StringLiteral_11020/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v9);
  ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                         (RecommendAdviceMessageMaster_o *)Master_object,
                         ids,
                         0);
  return System_String__Join(v7, ConvertMessageToId, 0);
}


System_String_o *RecommendSupportData__GetMessageSentence_34585176(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Message; // x0
  RecommendSupportData_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C23160 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C23160 = 1;
  }
  Message = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportData__GetMessage(this, index, method);
  v6 = (RecommendSupportData_o *)System_Linq_Enumerable__ToArray_int_(
                                   Message,
                                   (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C23156 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23156 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51106464(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
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

  if ( (byte_4C2315D & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2315D = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51106464(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
  return (System_Int32_array *)v8[3].klass;
}


int64_t RecommendSupportData__GetOldServant(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_4C23152 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23152 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51106464(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
  return (int64_t)v8[2].klass;
}


int64_t RecommendSupportData__GetServant(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_4C23150 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23150 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51106464(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
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
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  UserGameEntity_o *SelfUserGame; // x21
  UserRecommendSupportEntity_array *RecommendSupportDeck; // x22
  unsigned __int64 j; // x23
  unsigned int *v21; // x28
  UserRecommendSupportEntity_o *v22; // x25
  __int64 v23; // x24
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  unsigned int *v30; // x0
  struct RecommendSupportData_RecommendDeckData_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x0

  if ( (byte_4C2314B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2314B = 1;
  }
  v5 = 0;
  for ( i = 8; ; i += 2 )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v7->static_fields->RecommendSupportMemberMax )
      break;
    deckData = (unsigned int *)this->fields.deckData;
    v9 = sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796((RecommendSupportData_RecommendDeckData_o *)v9, v5, v10);
    if ( !v9 )
      goto LABEL_31;
    *(_DWORD *)(v9 + 20) = 0;
    *(_DWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    v13 = sub_1C2D538(int___TypeInfo, 0);
    *(_QWORD *)(v9 + 48) = v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 48), v13, v14, v15);
    if ( !deckData )
      goto LABEL_31;
    Instance = (DataManager_o *)sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)deckData + 64LL));
    if ( !Instance )
    {
LABEL_33:
      v38 = sub_1C2D710();
      sub_1C2D5B8(v38, 0);
    }
    if ( v5 >= deckData[6] )
LABEL_32:
      sub_1C2D6F4(Instance, v12, v16);
    *(_QWORD *)&deckData[2 * v5 + 8] = v9;
    sub_1C2D434((CGThumbnailListItem_o *)&deckData[i], v9, (int32_t)v16, v17);
    ++v5;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_31;
  RecommendSupportDeck = UserRecommendSupportMaster__GetRecommendSupportDeck(
                           (UserRecommendSupportMaster_o *)Instance,
                           0);
  for ( j = 0; ; ++j )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 188LL) )
      break;
    if ( !RecommendSupportDeck )
      goto LABEL_31;
    if ( j >= LODWORD(RecommendSupportDeck->max_length) )
      goto LABEL_32;
    v21 = (unsigned int *)this->fields.deckData;
    v22 = RecommendSupportDeck->m_Items[j];
    v23 = sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796((RecommendSupportData_RecommendDeckData_o *)v23, j, v24);
    if ( v22 )
    {
      if ( !v23 )
        goto LABEL_31;
      *(_QWORD *)(v23 + 20) = *(_QWORD *)&v22->fields.questId;
      userSvtLeaderInfo = v22->fields.userSvtLeaderInfo;
      if ( !userSvtLeaderInfo )
        goto LABEL_31;
      *(_QWORD *)(v23 + 32) = userSvtLeaderInfo->fields.userSvtId;
      *(_QWORD *)(v23 + 40) = UserRecommendSupportEntity__GetEquipUserSvtId(v22, 0);
      adviceMessageIds = v22->fields.adviceMessageIds;
      *(_QWORD *)(v23 + 48) = adviceMessageIds;
      sub_1C2D434((CGThumbnailListItem_o *)(v23 + 48), (int32_t)adviceMessageIds, v28, v29);
    }
    if ( !v21 )
      goto LABEL_31;
    if ( v23 )
    {
      Instance = (DataManager_o *)sub_1C2D5CC(v23, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !Instance )
        goto LABEL_33;
    }
    if ( j >= v21[6] )
      goto LABEL_32;
    v30 = &v21[2 * j];
    *((_QWORD *)v30 + 4) = v23;
    sub_1C2D434((CGThumbnailListItem_o *)(v30 + 8), v23, (int32_t)v16, v25);
  }
  v31 = RecommendSupportData__DeepCopyAll(this, this->fields.deckData, v16);
  this->fields.oldDeckData = v31;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldDeckData, (int32_t)v31, v32, v33);
  this->fields._IsSelectServant_k__BackingField = 0;
  this->fields.kind = 1;
  this->fields._EventSetupInfo2_k__BackingField = eventUpSetupInfo;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v34,
    v35);
  this->fields._EventSetupInfo_k__BackingField = eventUpSetupInfo;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v36,
    v37);
  if ( !SelfUserGame )
LABEL_31:
    sub_1C2D6EC(Instance, v12);
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
    sub_1C2D6F4(this, *(_QWORD *)&index, method);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C2D6EC(this, index);
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
    sub_1C2D6F4(this, *(_QWORD *)&index, method);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C2D6EC(this, index);
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
    sub_1C2D6F4(this, *(_QWORD *)&index, method);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C2D6EC(this, index);
  v4->fields.userSvtId = 0;
}


void RecommendSupportData__ResetDeckData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x22
  __int64 v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  RecommendSupportData_RecommendDeckData_o *v13; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  const MethodInfo *v15; // x3
  Il2CppClass **v16; // x0
  __int64 v17; // x0

  if ( (byte_4C2314F & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2314F = 1;
  }
  deckData = this->fields.deckData;
  v6 = sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_34579796((RecommendSupportData_RecommendDeckData_o *)v6, index, v7);
  oldDeckData = this->fields.oldDeckData;
  if ( !oldDeckData )
    goto LABEL_11;
  if ( LODWORD(oldDeckData->max_length) <= index )
    goto LABEL_12;
  v13 = oldDeckData->m_Items[index];
  if ( !v13
    || !v6
    || (*(_QWORD *)(v6 + 16) = *(_QWORD *)&v13->fields.idx,
        *(_DWORD *)(v6 + 24) = v13->fields.questPhase,
        *(_OWORD *)(v6 + 32) = *(_OWORD *)&v13->fields.userSvtId,
        adviceMessageIds = v13->fields.adviceMessageIds,
        *(_QWORD *)(v6 + 48) = adviceMessageIds,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 48), (int32_t)adviceMessageIds, v10, v11),
        !deckData) )
  {
LABEL_11:
    sub_1C2D6EC(v8, v9);
  }
  v8 = sub_1C2D5CC(v6, deckData->obj.klass->_1.element_class);
  if ( !v8 )
  {
    v17 = sub_1C2D710();
    sub_1C2D5B8(v17, 0);
  }
  if ( LODWORD(deckData->max_length) <= index )
LABEL_12:
    sub_1C2D6F4(v8, v9, v10);
  v16 = &deckData->obj.klass + index;
  v16[4] = (Il2CppClass *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), v6, v10, v15);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__SetAdviceMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  struct System_Int32_array *v4; // x19
  RecommendSupportData_o *v6; // x21
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v8; // x20

  v4 = ids;
  v6 = this;
  if ( (byte_4C2314D & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1C2D490(&int___TypeInfo);
    byte_4C2314D = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_9;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C2D6F4(this, *(_QWORD *)&index, ids);
  v8 = deckData->m_Items[index];
  if ( !v4 )
  {
    this = (RecommendSupportData_o *)sub_1C2D538(int___TypeInfo, 0);
    v4 = (struct System_Int32_array *)this;
  }
  if ( !v8 )
LABEL_9:
    sub_1C2D6EC(this, *(_QWORD *)&index);
  v8->fields.adviceMessageIds = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.adviceMessageIds, (int32_t)v4, (int32_t)ids, method);
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
    sub_1C2D6F4(this, *(_QWORD *)&index, userSvtId);
  v6 = deckData->m_Items[index];
  if ( !v6 )
LABEL_5:
    sub_1C2D6EC(this, index);
  v6->fields.userSvtEquipId = userSvtId;
}


void RecommendSupportData__SetOld(RecommendSupportData_o *this, RecommendSupportData_o *data, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !data )
    sub_1C2D6EC(this, 0);
  v4 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, method);
  this->fields.oldDeckData = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldDeckData, (int32_t)v4, v5, v6);
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
    sub_1C2D6F4(this, *(_QWORD *)&index, questInfo);
  v8 = deckData->m_Items[index];
  if ( !v8 )
LABEL_9:
    sub_1C2D6EC(this, index);
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
  if ( (byte_4C2314C & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2314C = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_10;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C2D6F4(this, *(_QWORD *)&index, entity);
  if ( !entity )
    goto LABEL_10;
  v8 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v9 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  v10 = deckData->m_Items[index];
  *(_OWORD *)&v12.fields.currentCryptoKey = v8;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  this = (RecommendSupportData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v11, 0);
  if ( !v10 )
LABEL_10:
    sub_1C2D6EC(this, *(_QWORD *)&index);
  v10->fields.userSvtId = (int64_t)this;
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

  if ( (byte_4C23155 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23155 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
    monitor = (int64_t)v10[2].monitor;
  }
  else
  {
    monitor = 0;
  }
  *userSvtEquipId = monitor;
  return monitor > 0;
}


bool RecommendSupportData__TryGetIsQuestSetting(
        RecommendSupportData_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t *settingIndex,
        System_String_o **svtName,
        const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  int max_length; // w9
  int32_t v18; // w10
  RecommendSupportData_RecommendDeckData_o *v19; // x11
  System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23159 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C23159 = 1;
  }
  entity = 0;
  *settingIndex = -1;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *svtName = static_fields->Empty;
  sub_1C2D434((CGThumbnailListItem_o *)svtName, (int32_t)Empty, questPhase, (const MethodInfo *)settingIndex);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.deckData, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    max_length = deckData->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)max_length )
          sub_1C2D6F4(Master_object, v14, v15);
        v19 = deckData->m_Items[v18];
        if ( !v19 )
          goto LABEL_22;
        if ( v19->fields.questId == questId && v19->fields.questPhase == questPhase )
          break;
        if ( ++v18 >= max_length )
          return 0;
      }
      *settingIndex = v18;
      if ( Master_object )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &entity,
                v19->fields.userSvtId,
                (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
          return 1;
        Master_object = entity;
        if ( entity )
        {
          v21 = UserServantEntity__GetSvtName((UserServantEntity_o *)entity, 0);
          *svtName = v21;
          sub_1C2D434((CGThumbnailListItem_o *)svtName, (int32_t)v21, v22, v23);
          return 1;
        }
      }
LABEL_22:
      sub_1C2D6EC(Master_object, v14);
    }
  }
  return 0;
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Int32_array *klass; // x1

  if ( (byte_4C2315C & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2315C = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
    klass = (System_Int32_array *)v10[3].klass;
  }
  else
  {
    klass = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  }
  *ids = klass;
  sub_1C2D434((CGThumbnailListItem_o *)ids, (int32_t)klass, v12, v13);
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

  if ( (byte_4C23157 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23157 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_int__o *v14; // x20

  if ( (byte_4C2315E & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2315E = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
    v14 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v10[3].klass,
                                                      (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  }
  *adviceMessageIds = v14;
  sub_1C2D434((CGThumbnailListItem_o *)adviceMessageIds, (int32_t)v14, v12, v13);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*adviceMessageIds, 0);
}


bool RecommendSupportData__TryGetOldQuest(
        RecommendSupportData_o *this,
        int32_t index,
        int32_t *questId,
        int32_t *questPhase,
        const MethodInfo *method)
{
  bool result; // w0
  System_Object_array *oldDeckData; // x22
  RecommendSupportData_RecommendDeckData_o *v11; // x23
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t monitor; // w9
  Il2CppClass *klass; // x1
  Il2CppClass *v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2315A & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C2315A = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    result = 0;
    *questId = 0;
    *questPhase = 0;
  }
  else
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v11 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v11, index, v12);
    v13 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v11,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v13 )
      sub_1C2D6EC(0, v14);
    monitor = (int32_t)v13[1].monitor;
    klass = v13[3].klass;
    *questId = HIDWORD(v13[1].klass);
    *questPhase = monitor;
    v19 = klass;
    sub_1C2D434((CGThumbnailListItem_o *)&v19, (int32_t)klass, v15, v16);
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

  if ( (byte_4C23153 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23153 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
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
  System_Object_array *deckData; // x22
  RecommendSupportData_RecommendDeckData_o *v10; // x23
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t monitor; // w9
  Il2CppClass *klass; // x1
  bool result; // w0
  Il2CppClass *v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23158 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23158 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v10 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v10, index, v11);
    v12 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v10,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v12 )
      sub_1C2D6EC(0, v13);
    monitor = (int32_t)v12[1].monitor;
    klass = v12[3].klass;
    *questId = HIDWORD(v12[1].klass);
    *questPhase = monitor;
    v19 = klass;
    sub_1C2D434((CGThumbnailListItem_o *)&v19, (int32_t)klass, v14, v15);
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

  if ( (byte_4C23151 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4C23151 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51106464(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C2D6DC(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_34579796(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
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
  RecommendSupportData___c_c *v3; // x0
  System_Object_array *deckData; // x19
  System_Func_object__bool__o *_9__50_0; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C23161 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
    sub_1C2D490(&System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    sub_1C2D490(&Method_RecommendSupportData___c__get_IsNoServant_b__50_0__);
    sub_1C2D490(&RecommendSupportData___c_TypeInfo);
    byte_4C23161 = 1;
  }
  v3 = RecommendSupportData___c_TypeInfo;
  deckData = (System_Object_array *)this->fields.deckData;
  if ( !RecommendSupportData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportData___c_TypeInfo);
    v3 = RecommendSupportData___c_TypeInfo;
  }
  _9__50_0 = (System_Func_object__bool__o *)v3->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__50_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__50_0, v6, Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, 0);
    static_fields = RecommendSupportData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Func_RecommendSupportData_RecommendDeckData__bool__o *)_9__50_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v8, v9);
  }
  return !BasicHelper__Any_object__51084700(
            deckData,
            (System_Func_T__bool__o *)_9__50_0,
            (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
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
  const MethodInfo *v3; // x3

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void RecommendSupportData__set_EventSetupInfo2(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventSetupInfo2_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void RecommendSupportData_RecommendDeckData___ctor_34579796(
        RecommendSupportData_RecommendDeckData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C23167 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C23167 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.idx = index + 1;
  v5 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.adviceMessageIds = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.adviceMessageIds, (int32_t)v5, v6, v7);
}


bool RecommendSupportData_RecommendDeckData__Compare(
        RecommendSupportData_RecommendDeckData_o *this,
        RecommendSupportData_RecommendDeckData_o *src,
        const MethodInfo *method)
{
  if ( !src )
    sub_1C2D6EC(this, 0);
  return this->fields.idx == src->fields.idx
      && this->fields.questId == src->fields.questId
      && this->fields.questPhase == src->fields.questPhase
      && this->fields.userSvtId == src->fields.userSvtId
      && this->fields.userSvtEquipId == src->fields.userSvtEquipId
      && this->fields.adviceMessageIds == src->fields.adviceMessageIds;
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
  System_Int32_array *adviceMessageIds; // x8
  int32_t questPhase; // w11
  int64_t userSvtId; // x12
  int64_t userSvtEquipId; // x13

  questId = this->fields.questId;
  adviceMessageIds = this->fields.adviceMessageIds;
  questPhase = this->fields.questPhase;
  userSvtId = this->fields.userSvtId;
  userSvtEquipId = this->fields.userSvtEquipId;
  *outIdx = this->fields.idx;
  *outQuestId = questId;
  *outQuestPhase = questPhase;
  *outUserSvtId = userSvtId;
  *outUserSvtEquipId = userSvtEquipId;
  *outAdviceMessageIds = adviceMessageIds;
  sub_1C2D434(
    (CGThumbnailListItem_o *)outAdviceMessageIds,
    (int32_t)adviceMessageIds,
    (int32_t)outQuestId,
    (const MethodInfo *)outQuestPhase);
}


void RecommendSupportData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C23168 & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportData___c_TypeInfo);
    byte_4C23168 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(RecommendSupportData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportData___c_TypeInfo->static_fields->__9 = (struct RecommendSupportData___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)RecommendSupportData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return data->fields.userSvtId > 0;
}