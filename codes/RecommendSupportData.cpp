void __fastcall RecommendSupportData___ctor(RecommendSupportData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct RecommendSupportData_RecommendDeckData_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct RecommendSupportData_RecommendDeckData_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FADA2 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData___TypeInfo, v3);
    byte_49FADA2 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1B64AA8(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)v4->static_fields->RecommendSupportMemberMax);
  this->fields.deckData = v5;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1B64AA8(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.oldDeckData = v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.oldDeckData, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportData__CancelDeckData(RecommendSupportData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  il2cpp_array_size_t i; // w21
  __int64 v5; // x0
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x9
  struct RecommendSupportData_RecommendDeckData_array *v8; // x8
  struct RecommendSupportData_RecommendDeckData_array *v9; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x20
  Il2CppClass **v13; // x0
  __int64 v14; // x0

  if ( (byte_49FAD9F & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    byte_49FAD9F = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(v5 + 184) + 172LL) )
      break;
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    if ( i >= deckData->max_length )
      goto LABEL_23;
    oldDeckData = this->fields.oldDeckData;
    if ( !oldDeckData )
      goto LABEL_22;
    if ( i >= oldDeckData->max_length )
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
      if ( i >= v8->max_length )
        goto LABEL_23;
      v9 = this->fields.deckData;
      v5 = (__int64)RecommendSupportData__DeepCopy((RecommendSupportData_o *)v5, v8->m_Items[i], v2);
      if ( !v9 )
LABEL_22:
        sub_1B64C5C(v5, method);
      v12 = v5;
      if ( v5 )
      {
        v5 = sub_1B64B3C(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v14 = sub_1B64C80();
          sub_1B64B28(v14, 0LL);
        }
      }
      if ( i >= v9->max_length )
LABEL_23:
        sub_1B64C64(v5, method);
      v13 = &v9->obj.klass + (int)i;
      v13[4] = (Il2CppClass *)v12;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 4), v12, v10, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__ClearDeckData(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppClass **v12; // x0
  __int64 v13; // x0

  if ( (byte_49FAD8A & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, *(_QWORD *)&index);
    byte_49FAD8A = 1;
  }
  deckData = this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v6, index, v7);
  if ( !deckData )
    sub_1B64C5C(v8, v9);
  if ( v6 )
  {
    v8 = sub_1B64B3C(v6, deckData->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v13 = sub_1B64C80();
      sub_1B64B28(v13, 0LL);
    }
  }
  if ( deckData->max_length <= index )
    sub_1B64C64(v8, v9);
  v12 = &deckData->obj.klass + index;
  v12[4] = (Il2CppClass *)v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)v6, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__CopyData(
        RecommendSupportData_o *this,
        RecommendSupportData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  struct RecommendSupportData_RecommendDeckData_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x1
  struct EventUpValSetupInfo_o *EventSetupInfo2_k__BackingField; // x1
  struct EventUpValSetupInfo_o **p_EventSetupInfo2_k__BackingField; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( !data )
    sub_1B64C5C(this, 0LL);
  v7 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, (const MethodInfo *)isInit);
  this->fields.deckData = v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v11 = RecommendSupportData__DeepCopyAll(this, data->fields.oldDeckData, v10);
  this->fields.oldDeckData = v11;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.oldDeckData, (int32_t)v11, v12, v13);
  if ( isInit )
  {
    this->fields.kind = data->fields.kind;
    this->fields._IsSelectServant_k__BackingField = data->fields._IsSelectServant_k__BackingField;
    EventSetupInfo_k__BackingField = data->fields._EventSetupInfo_k__BackingField;
    this->fields._EventSetupInfo_k__BackingField = EventSetupInfo_k__BackingField;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo_k__BackingField,
      (int32_t)EventSetupInfo_k__BackingField,
      v14,
      v15);
    EventSetupInfo2_k__BackingField = data->fields._EventSetupInfo2_k__BackingField;
    this->fields._EventSetupInfo2_k__BackingField = EventSetupInfo2_k__BackingField;
    p_EventSetupInfo2_k__BackingField = &this->fields._EventSetupInfo2_k__BackingField;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)p_EventSetupInfo2_k__BackingField,
      (int32_t)EventSetupInfo2_k__BackingField,
      v19,
      v20);
    p_EventSetupInfo2_k__BackingField[2] = (struct EventUpValSetupInfo_o *)data->fields._PushUserServantId_k__BackingField;
  }
}


void __fastcall RecommendSupportData__DecisionDeckData(RecommendSupportData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  il2cpp_array_size_t i; // w21
  __int64 v5; // x0
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x9
  struct RecommendSupportData_RecommendDeckData_array *v8; // x8
  struct RecommendSupportData_RecommendDeckData_array *v9; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x20
  Il2CppClass **v13; // x0
  __int64 v14; // x0

  if ( (byte_49FAD9E & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    byte_49FAD9E = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(v5 + 184) + 172LL) )
      break;
    oldDeckData = this->fields.oldDeckData;
    if ( !oldDeckData )
      goto LABEL_22;
    if ( i >= oldDeckData->max_length )
      goto LABEL_23;
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    if ( i >= deckData->max_length )
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
      if ( i >= v8->max_length )
        goto LABEL_23;
      v9 = this->fields.oldDeckData;
      v5 = (__int64)RecommendSupportData__DeepCopy((RecommendSupportData_o *)v5, v8->m_Items[i], v2);
      if ( !v9 )
LABEL_22:
        sub_1B64C5C(v5, method);
      v12 = v5;
      if ( v5 )
      {
        v5 = sub_1B64B3C(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v14 = sub_1B64C80();
          sub_1B64B28(v14, 0LL);
        }
      }
      if ( i >= v9->max_length )
LABEL_23:
        sub_1B64C64(v5, method);
      v13 = &v9->obj.klass + (int)i;
      v13[4] = (Il2CppClass *)v12;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 4), v12, v10, v11);
    }
  }
}


RecommendSupportData_RecommendDeckData_o *__fastcall RecommendSupportData__DeepCopy(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_o *source,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *adviceMessageIds; // x1

  if ( (byte_49FADA1 & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, source);
    byte_49FADA1 = 1;
  }
  v4 = sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !source || !v4 )
    sub_1B64C5C(v5, v6);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&source->fields.idx;
  *(_DWORD *)(v4 + 24) = source->fields.questPhase;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&source->fields.userSvtId;
  adviceMessageIds = source->fields.adviceMessageIds;
  *(_QWORD *)(v4 + 48) = adviceMessageIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v4 + 48), (int32_t)adviceMessageIds, v7, v8);
  return (RecommendSupportData_RecommendDeckData_o *)v4;
}


RecommendSupportData_RecommendDeckData_array *__fastcall RecommendSupportData__DeepCopyAll(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_array *source,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_object__object__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_49FADA0 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___,
      source);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(
      &System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo,
      v6);
    sub_1B64A00(&Method_RecommendSupportData_DeepCopy__, v7);
    byte_49FADA0 = 1;
  }
  v8 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
  System_Func_object__object____ctor(v8, (Il2CppObject *)this, Method_RecommendSupportData_DeepCopy__, 0LL);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)source,
                                                              (System_Func_TSource__TResult__o *)v8,
                                                              (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
  return (RecommendSupportData_RecommendDeckData_array *)System_Linq_Enumerable__ToArray_object_(
                                                           v9,
                                                           (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
}


RecommendSupportData_RecommendDeckData_array *__fastcall RecommendSupportData__GetDeckData(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields.deckData;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportData__GetEquip(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v8; // x21
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_49FAD90 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v6);
    byte_49FAD90 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__48410332(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  deckData = (System_Object_array *)this->fields.deckData;
  v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v8, index, v9);
  v10 = BasicHelper__IndexValue_object_(
          deckData,
          index,
          (Il2CppObject *)v8,
          (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v10 )
    sub_1B64C5C(0LL, v11);
  return (int64_t)v10[2].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall RecommendSupportData__GetMessage(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v9; // x21
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_49FAD97 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(&int___TypeInfo, v6);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v7);
    byte_49FAD97 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__48410332(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1B64AA8(int___TypeInfo, 0LL);
  deckData = (System_Object_array *)this->fields.deckData;
  v9 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v9, index, v10);
  v11 = BasicHelper__IndexValue_object_(
          deckData,
          index,
          (Il2CppObject *)v9,
          (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v11 )
    sub_1B64C5C(0LL, v12);
  return (System_Int32_array *)v11[3].klass;
}


System_String_o *__fastcall RecommendSupportData__GetMessageSentence(
        RecommendSupportData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool IsNullOrEmpty; // w0
  bool v9; // w20
  System_String_o *v11; // x20
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_String_array *ConvertMessageToId; // x1

  if ( (byte_49FAD9B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, ids);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_10964/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, v6);
    sub_1B64A00(&StringLiteral_10954/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, v7);
    byte_49FAD9B = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0LL);
  v9 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      return LocalizationManager__Get((System_String_o *)StringLiteral_10954/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v9 )
      return LocalizationManager__Get((System_String_o *)StringLiteral_10954/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10964/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1B64C5C(0LL, v13);
  ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                         (RecommendAdviceMessageMaster_o *)Master_object,
                         ids,
                         0LL);
  return System_String__Join(v11, ConvertMessageToId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RecommendSupportData__GetMessageSentence_32163028(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Message; // x0
  RecommendSupportData_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_49FAD9C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&index);
    byte_49FAD9C = 1;
  }
  Message = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportData__GetMessage(this, index, method);
  v6 = (RecommendSupportData_o *)System_Linq_Enumerable__ToArray_int_(
                                   Message,
                                   (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
  return RecommendSupportData__GetMessageSentence(v6, (System_Int32_array *)v6, v7);
}


RecommendSupportData_RecommendDeckData_array *__fastcall RecommendSupportData__GetOldDeckData(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields.oldDeckData;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportData__GetOldEquip(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v8; // x21
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_49FAD92 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v6);
    byte_49FAD92 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__48410332(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v8, index, v9);
  v10 = BasicHelper__IndexValue_object_(
          oldDeckData,
          index,
          (Il2CppObject *)v8,
          (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v10 )
    sub_1B64C5C(0LL, v11);
  return (int64_t)v10[2].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall RecommendSupportData__GetOldMessage(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v9; // x21
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_49FAD99 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(&int___TypeInfo, v6);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v7);
    byte_49FAD99 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__48410332(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1B64AA8(int___TypeInfo, 0LL);
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v9 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v9, index, v10);
  v11 = BasicHelper__IndexValue_object_(
          oldDeckData,
          index,
          (Il2CppObject *)v9,
          (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v11 )
    sub_1B64C5C(0LL, v12);
  return (System_Int32_array *)v11[3].klass;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportData__GetOldServant(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v8; // x21
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_49FAD8E & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v6);
    byte_49FAD8E = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__48410332(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v8, index, v9);
  v10 = BasicHelper__IndexValue_object_(
          oldDeckData,
          index,
          (Il2CppObject *)v8,
          (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v10 )
    sub_1B64C5C(0LL, v11);
  return (int64_t)v10[2].klass;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportData__GetServant(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v8; // x21
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_49FAD8C & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v6);
    byte_49FAD8C = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__48410332(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  deckData = (System_Object_array *)this->fields.deckData;
  v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648(v8, index, v9);
  v10 = BasicHelper__IndexValue_object_(
          deckData,
          index,
          (Il2CppObject *)v8,
          (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v10 )
    sub_1B64C5C(0LL, v11);
  return (int64_t)v10[2].klass;
}


void __fastcall RecommendSupportData__Init(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned __int64 v9; // x21
  __int64 i; // x28
  BalanceConfig_c *v11; // x0
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x29
  __int64 v13; // x22
  const MethodInfo *v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UserGameEntity_o *SelfUserGame; // x21
  const MethodInfo *v23; // x2
  UserRecommendSupportEntity_array *RecommendSupportDeck; // x22
  unsigned __int64 j; // x23
  struct RecommendSupportData_RecommendDeckData_array *v26; // x28
  UserRecommendSupportEntity_o *v27; // x25
  __int64 v28; // x24
  const MethodInfo *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppClass **v36; // x0
  struct RecommendSupportData_RecommendDeckData_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0

  if ( (byte_49FAD87 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, eventUpSetupInfo);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserRecommendSupportMaster___, v5);
    sub_1B64A00(&int___TypeInfo, v6);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FAD87 = 1;
  }
  v9 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= v11->static_fields->RecommendSupportMemberMax )
      break;
    deckData = this->fields.deckData;
    v13 = sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648((RecommendSupportData_RecommendDeckData_o *)v13, v9, v14);
    if ( !v13 )
      goto LABEL_31;
    *(_DWORD *)(v13 + 20) = 0;
    *(_DWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_QWORD *)(v13 + 40) = 0LL;
    v17 = sub_1B64AA8(int___TypeInfo, 0LL);
    *(_QWORD *)(v13 + 48) = v17;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 48), v17, v18, v19);
    if ( !deckData )
      goto LABEL_31;
    Instance = (DataManager_o *)sub_1B64B3C(v13, deckData->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_33:
      v44 = sub_1B64C80();
      sub_1B64B28(v44, 0LL);
    }
    if ( v9 >= deckData->max_length )
LABEL_32:
      sub_1B64C64(Instance, v16);
    deckData->m_Items[v9] = (RecommendSupportData_RecommendDeckData_o *)v13;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)deckData + i), v13, v20, v21);
    ++v9;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_31;
  RecommendSupportDeck = UserRecommendSupportMaster__GetRecommendSupportDeck(
                           (UserRecommendSupportMaster_o *)Instance,
                           0LL);
  for ( j = 0LL; ; ++j )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 172LL) )
      break;
    if ( !RecommendSupportDeck )
      goto LABEL_31;
    if ( j >= RecommendSupportDeck->max_length )
      goto LABEL_32;
    v26 = this->fields.deckData;
    v27 = RecommendSupportDeck->m_Items[j];
    v28 = sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648((RecommendSupportData_RecommendDeckData_o *)v28, j, v29);
    if ( v27 )
    {
      if ( !v28 )
        goto LABEL_31;
      *(_QWORD *)(v28 + 20) = *(_QWORD *)&v27->fields.questId;
      userSvtLeaderInfo = v27->fields.userSvtLeaderInfo;
      if ( !userSvtLeaderInfo )
        goto LABEL_31;
      *(_QWORD *)(v28 + 32) = userSvtLeaderInfo->fields.userSvtId;
      *(_QWORD *)(v28 + 40) = UserRecommendSupportEntity__GetEquipUserSvtId(v27, 0LL);
      adviceMessageIds = v27->fields.adviceMessageIds;
      *(_QWORD *)(v28 + 48) = adviceMessageIds;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 48), (int32_t)adviceMessageIds, v34, v35);
    }
    if ( !v26 )
      goto LABEL_31;
    if ( v28 )
    {
      Instance = (DataManager_o *)sub_1B64B3C(v28, v26->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_33;
    }
    if ( j >= v26->max_length )
      goto LABEL_32;
    v36 = &v26->obj.klass + j;
    v36[4] = (Il2CppClass *)v28;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 4), v28, v30, v31);
  }
  v37 = RecommendSupportData__DeepCopyAll(this, this->fields.deckData, v23);
  this->fields.oldDeckData = v37;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.oldDeckData, (int32_t)v37, v38, v39);
  this->fields._IsSelectServant_k__BackingField = 0;
  this->fields.kind = 1;
  this->fields._EventSetupInfo2_k__BackingField = eventUpSetupInfo;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v40,
    v41);
  this->fields._EventSetupInfo_k__BackingField = eventUpSetupInfo;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v42,
    v43);
  if ( !SelfUserGame )
LABEL_31:
    sub_1B64C5C(Instance, v16);
  this->fields._PushUserServantId_k__BackingField = SelfUserGame->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__RemoveEquipData(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1B64C5C(this, index);
  v4->fields.userSvtEquipId = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__RemoveQuest(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1B64C5C(this, index);
  v4->fields.questId = 0;
  v4->fields.questPhase = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__RemoveServantData(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1B64C5C(this, index);
  v4->fields.userSvtId = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__ResetDeckData(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x22
  __int64 v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  RecommendSupportData_RecommendDeckData_o *v13; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_49FAD8B & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, *(_QWORD *)&index);
    byte_49FAD8B = 1;
  }
  deckData = this->fields.deckData;
  v6 = sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_32157648((RecommendSupportData_RecommendDeckData_o *)v6, index, v7);
  oldDeckData = this->fields.oldDeckData;
  if ( !oldDeckData )
    goto LABEL_11;
  if ( oldDeckData->max_length <= index )
    goto LABEL_12;
  v13 = oldDeckData->m_Items[index];
  if ( !v13
    || !v6
    || (*(_QWORD *)(v6 + 16) = *(_QWORD *)&v13->fields.idx,
        *(_DWORD *)(v6 + 24) = v13->fields.questPhase,
        *(_OWORD *)(v6 + 32) = *(_OWORD *)&v13->fields.userSvtId,
        adviceMessageIds = v13->fields.adviceMessageIds,
        *(_QWORD *)(v6 + 48) = adviceMessageIds,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)adviceMessageIds, v10, v11),
        !deckData) )
  {
LABEL_11:
    sub_1B64C5C(v8, v9);
  }
  v8 = sub_1B64B3C(v6, deckData->obj.klass->_1.element_class);
  if ( !v8 )
  {
    v18 = sub_1B64C80();
    sub_1B64B28(v18, 0LL);
  }
  if ( deckData->max_length <= index )
LABEL_12:
    sub_1B64C64(v8, v9);
  v17 = &deckData->obj.klass + index;
  v17[4] = (Il2CppClass *)v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 4), v6, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__SetAdviceMessage(
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
  if ( (byte_49FAD89 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1B64A00(&int___TypeInfo, *(_QWORD *)&index);
    byte_49FAD89 = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_9;
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
  v8 = deckData->m_Items[index];
  if ( !v4 )
  {
    this = (RecommendSupportData_o *)sub_1B64AA8(int___TypeInfo, 0LL);
    v4 = (struct System_Int32_array *)this;
  }
  if ( !v8 )
LABEL_9:
    sub_1B64C5C(this, *(_QWORD *)&index);
  v8->fields.adviceMessageIds = v4;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&v8->fields.adviceMessageIds,
    (int32_t)v4,
    (int32_t)ids,
    (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__SetEquipData(
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
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
  v6 = deckData->m_Items[index];
  if ( !v6 )
LABEL_5:
    sub_1B64C5C(this, index);
  v6->fields.userSvtEquipId = userSvtId;
}


void __fastcall RecommendSupportData__SetOld(
        RecommendSupportData_o *this,
        RecommendSupportData_o *data,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !data )
    sub_1B64C5C(this, 0LL);
  v4 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, method);
  this->fields.oldDeckData = v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.oldDeckData, (int32_t)v4, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__SetQuest(
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
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
  v8 = deckData->m_Items[index];
  if ( !v8 )
LABEL_9:
    sub_1B64C5C(this, index);
  v8->fields.questId = id;
  v8->fields.questPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__SetServantData(
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
  if ( (byte_49FAD88 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1B64A00(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                       *(_QWORD *)&index);
    byte_49FAD88 = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_10;
  if ( deckData->max_length <= index )
    sub_1B64C64(this, *(_QWORD *)&index);
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
  this = (RecommendSupportData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v11, 0LL);
  if ( !v10 )
LABEL_10:
    sub_1B64C5C(this, *(_QWORD *)&index);
  v10->fields.userSvtId = (int64_t)this;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetEquip(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v10; // x22
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t monitor; // x8

  if ( (byte_49FAD91 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v8);
    byte_49FAD91 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v10 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v10, index, v11);
    v12 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v10,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v12 )
      sub_1B64C5C(0LL, v13);
    monitor = (int64_t)v12[2].monitor;
  }
  else
  {
    monitor = 0LL;
  }
  *userSvtEquipId = monitor;
  return monitor > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetIsQuestSetting(
        RecommendSupportData_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t *settingIndex,
        System_String_o **svtName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  int max_length; // w9
  int32_t v20; // w10
  RecommendSupportData_RecommendDeckData_o *v21; // x11
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FAD95 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&questId);
    sub_1B64A00(&DataManager_TypeInfo, v11);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12);
    sub_1B64A00(&string_TypeInfo, v13);
    byte_49FAD95 = 1;
  }
  entity = 0LL;
  *settingIndex = -1;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *svtName = static_fields->Empty;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)svtName, (int32_t)Empty, questPhase, (int32_t)settingIndex);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.deckData, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantMaster___);
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    max_length = deckData->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)max_length )
          sub_1B64C64(Master_object, v17);
        v21 = deckData->m_Items[v20];
        if ( !v21 )
          goto LABEL_22;
        if ( v21->fields.questId == questId && v21->fields.questPhase == questPhase )
          break;
        if ( ++v20 >= max_length )
          return 0;
      }
      *settingIndex = v20;
      if ( Master_object )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &entity,
                v21->fields.userSvtId,
                (const MethodInfo_30D6998 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
          return 1;
        Master_object = entity;
        if ( entity )
        {
          v23 = UserServantEntity__GetSvtName((UserServantEntity_o *)entity, 0LL);
          *svtName = v23;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)svtName, (int32_t)v23, v24, v25);
          return 1;
        }
      }
LABEL_22:
      sub_1B64C5C(Master_object, v17);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Int32_array **ids,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v11; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Int32_array *klass; // x1

  if ( (byte_49FAD98 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7);
    sub_1B64A00(&int___TypeInfo, v8);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v9);
    byte_49FAD98 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v11 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v11, index, v12);
    v13 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v11,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v13 )
      sub_1B64C5C(0LL, v14);
    klass = (System_Int32_array *)v13[3].klass;
  }
  else
  {
    klass = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, 0LL);
  }
  *ids = klass;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)ids, (int32_t)klass, v15, v16);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*ids, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetOldEquip(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v10; // x22
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t monitor; // x8

  if ( (byte_49FAD93 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v8);
    byte_49FAD93 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v10 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v10, index, v11);
    v12 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v10,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v12 )
      sub_1B64C5C(0LL, v13);
    monitor = (int64_t)v12[2].monitor;
  }
  else
  {
    monitor = 0LL;
  }
  *userSvtEquipId = monitor;
  return monitor > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetOldMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Collections_Generic_List_int__o **adviceMessageIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v13; // x22
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_int__o *v19; // x20

  if ( (byte_49FAD9A & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v11);
    byte_49FAD9A = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v13 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v13, index, v14);
    v15 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v13,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v15 )
      sub_1B64C5C(0LL, v16);
    v19 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v15[3].klass,
                                                      (const MethodInfo_2E776A4 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  }
  *adviceMessageIds = v19;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)adviceMessageIds, (int32_t)v19, v17, v18);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*adviceMessageIds, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetOldQuest(
        RecommendSupportData_o *this,
        int32_t index,
        int32_t *questId,
        int32_t *questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  bool result; // w0
  System_Object_array *oldDeckData; // x22
  RecommendSupportData_RecommendDeckData_o *v13; // x23
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t monitor; // w9
  __int64 klass; // x1
  __int64 v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FAD96 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v9);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v10);
    byte_49FAD96 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    result = 0;
    *questId = 0;
    *questPhase = 0;
  }
  else
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v13 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v13, index, v14);
    v15 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v13,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v15 )
      sub_1B64C5C(0LL, v16);
    monitor = (int32_t)v15[1].monitor;
    klass = (__int64)v15[3].klass;
    *questId = HIDWORD(v15[1].klass);
    *questPhase = monitor;
    v21 = klass;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v21, klass, v17, v18);
    return *questId > 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetOldServant(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v10; // x22
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t klass; // x8

  if ( (byte_49FAD8F & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v8);
    byte_49FAD8F = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v10 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v10, index, v11);
    v12 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v10,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v12 )
      sub_1B64C5C(0LL, v13);
    klass = (int64_t)v12[2].klass;
  }
  else
  {
    klass = 0LL;
  }
  *userSvtId = klass;
  return klass > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetQuest(
        RecommendSupportData_o *this,
        int32_t index,
        int32_t *questId,
        int32_t *questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Object_array *deckData; // x22
  RecommendSupportData_RecommendDeckData_o *v12; // x23
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t monitor; // w9
  __int64 klass; // x1
  bool result; // w0
  __int64 v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FAD94 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v9);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v10);
    byte_49FAD94 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v12 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v12, index, v13);
    v14 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v12,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v14 )
      sub_1B64C5C(0LL, v15);
    monitor = (int32_t)v14[1].monitor;
    klass = (__int64)v14[3].klass;
    *questId = HIDWORD(v14[1].klass);
    *questPhase = monitor;
    v21 = klass;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v21, klass, v16, v17);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportData__TryGetServant(
        RecommendSupportData_o *this,
        int32_t index,
        int64_t *userSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v10; // x22
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t klass; // x8

  if ( (byte_49FAD8D & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index);
    sub_1B64A00(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7);
    sub_1B64A00(&RecommendSupportData_RecommendDeckData_TypeInfo, v8);
    byte_49FAD8D = 1;
  }
  if ( BasicHelper__IsValidIndex_object__48410332(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2E2AEDC *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v10 = (RecommendSupportData_RecommendDeckData_o *)sub_1B64C4C(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_32157648(v10, index, v11);
    v12 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v10,
            (const MethodInfo_2E2AB2C *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v12 )
      sub_1B64C5C(0LL, v13);
    klass = (int64_t)v12[2].klass;
  }
  else
  {
    klass = 0LL;
  }
  *userSvtId = klass;
  return klass > 0;
}


EventUpValSetupInfo_o *__fastcall RecommendSupportData__get_EventSetupInfo(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo_k__BackingField;
}


EventUpValSetupInfo_o *__fastcall RecommendSupportData__get_EventSetupInfo2(
        RecommendSupportData_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo2_k__BackingField;
}


bool __fastcall RecommendSupportData__get_IsNoServant(RecommendSupportData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  RecommendSupportData___c_c *v6; // x0
  System_Object_array *deckData; // x19
  System_Func_object__bool__o *_9__50_0; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FAD9D & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___, method);
    sub_1B64A00(&System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo, v3);
    sub_1B64A00(&Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, v4);
    sub_1B64A00(&RecommendSupportData___c_TypeInfo, v5);
    byte_49FAD9D = 1;
  }
  v6 = RecommendSupportData___c_TypeInfo;
  deckData = (System_Object_array *)this->fields.deckData;
  if ( !RecommendSupportData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportData___c_TypeInfo);
    v6 = RecommendSupportData___c_TypeInfo;
  }
  _9__50_0 = (System_Func_object__bool__o *)v6->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RecommendSupportData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__50_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__50_0, v9, Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, 0LL);
    static_fields = RecommendSupportData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Func_RecommendSupportData_RecommendDeckData__bool__o *)_9__50_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v11, v12);
  }
  return !BasicHelper__Any_object__48394768(
            deckData,
            (System_Func_T__bool__o *)_9__50_0,
            (const MethodInfo_2E27210 *)Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
}


bool __fastcall RecommendSupportData__get_IsSelectServant(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields._IsSelectServant_k__BackingField;
}


int32_t __fastcall RecommendSupportData__get_Kind(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t __fastcall RecommendSupportData__get_PushUserServantId(RecommendSupportData_o *this, const MethodInfo *method)
{
  return this->fields._PushUserServantId_k__BackingField;
}


void __fastcall RecommendSupportData__set_EventSetupInfo(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportData__set_EventSetupInfo2(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EventSetupInfo2_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportData__set_IsSelectServant(
        RecommendSupportData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelectServant_k__BackingField = value;
}


void __fastcall RecommendSupportData__set_PushUserServantId(
        RecommendSupportData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._PushUserServantId_k__BackingField = value;
}


void __fastcall RecommendSupportData_RecommendDeckData___ctor(
        RecommendSupportData_RecommendDeckData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData_RecommendDeckData___ctor_32157648(
        RecommendSupportData_RecommendDeckData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FADA3 & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, *(_QWORD *)&index);
    byte_49FADA3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = index + 1;
  v5 = (struct System_Int32_array *)sub_1B64AA8(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v5;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.adviceMessageIds, (int32_t)v5, v6, v7);
}


bool __fastcall RecommendSupportData_RecommendDeckData__Compare(
        RecommendSupportData_RecommendDeckData_o *this,
        RecommendSupportData_RecommendDeckData_o *src,
        const MethodInfo *method)
{
  if ( !src )
    sub_1B64C5C(this, 0LL);
  return this->fields.idx == src->fields.idx
      && this->fields.questId == src->fields.questId
      && this->fields.questPhase == src->fields.questPhase
      && this->fields.userSvtId == src->fields.userSvtId
      && this->fields.userSvtEquipId == src->fields.userSvtEquipId
      && this->fields.adviceMessageIds == src->fields.adviceMessageIds;
}


void __fastcall RecommendSupportData_RecommendDeckData__Deconstruct(
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
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)outAdviceMessageIds,
    (int32_t)adviceMessageIds,
    (int32_t)outQuestId,
    (int32_t)outQuestPhase);
}


void __fastcall RecommendSupportData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FADA4 & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportData___c_TypeInfo, v1);
    byte_49FADA4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(RecommendSupportData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportData___c_TypeInfo->static_fields->__9 = (struct RecommendSupportData___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RecommendSupportData___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RecommendSupportData___c___ctor(RecommendSupportData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportData___c___get_IsNoServant_b__50_0(
        RecommendSupportData___c_o *this,
        RecommendSupportData_RecommendDeckData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64C5C(this, 0LL);
  return data->fields.userSvtId > 0;
}