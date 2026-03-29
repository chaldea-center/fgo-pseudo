void RecommendSupportData___ctor(RecommendSupportData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct RecommendSupportData_RecommendDeckData_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2C6AE & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData___TypeInfo);
    byte_4D2C6AE = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1C93B7C(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)v3->static_fields->RecommendSupportMemberMax);
  this->fields.deckData = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1C93B7C(
                                                                 RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.oldDeckData = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldDeckData, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x20
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_4D2C6AB & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2C6AB = 1;
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
        sub_1C93D2C(v5, method);
      v16 = v5;
      if ( v5 )
      {
        v5 = sub_1C93C10(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v18 = sub_1C93D50();
          sub_1C93BFC(v18, 0);
        }
      }
      if ( i >= LODWORD(v9->max_length) )
LABEL_23:
        sub_1C93D34(v5);
      v17 = &v9->obj.klass + (int)i;
      v17[4] = (Il2CppClass *)v16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 4), v16, v10, v11, v12, v13, v14, v15);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppClass **v16; // x0
  __int64 v17; // x0

  if ( (byte_4D2C696 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C696 = 1;
  }
  deckData = this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  if ( !deckData )
    sub_1C93D2C(v8, v9);
  if ( v6 )
  {
    v8 = sub_1C93C10(v6, deckData->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v17 = sub_1C93D50();
      sub_1C93BFC(v17, 0);
    }
  }
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C93D34(v8);
  v16 = &deckData->obj.klass + index;
  v16[4] = (Il2CppClass *)v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  struct RecommendSupportData_RecommendDeckData_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x1
  struct EventUpValSetupInfo_o *EventSetupInfo2_k__BackingField; // x1
  struct EventUpValSetupInfo_o **p_EventSetupInfo2_k__BackingField; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( !data )
    sub_1C93D2C(this, 0);
  v7 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, (const MethodInfo *)isInit);
  this->fields.deckData = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v15 = RecommendSupportData__DeepCopyAll(this, data->fields.oldDeckData, v14);
  this->fields.oldDeckData = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldDeckData, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( isInit )
  {
    this->fields.kind = data->fields.kind;
    this->fields._IsSelectServant_k__BackingField = data->fields._IsSelectServant_k__BackingField;
    EventSetupInfo_k__BackingField = data->fields._EventSetupInfo_k__BackingField;
    this->fields._EventSetupInfo_k__BackingField = EventSetupInfo_k__BackingField;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
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
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)p_EventSetupInfo2_k__BackingField,
      (int32_t)EventSetupInfo2_k__BackingField,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x20
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_4D2C6AA & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2C6AA = 1;
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
        sub_1C93D2C(v5, method);
      v16 = v5;
      if ( v5 )
      {
        v5 = sub_1C93C10(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v18 = sub_1C93D50();
          sub_1C93BFC(v18, 0);
        }
      }
      if ( i >= LODWORD(v9->max_length) )
LABEL_23:
        sub_1C93D34(v5);
      v17 = &v9->obj.klass + (int)i;
      v17[4] = (Il2CppClass *)v16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 4), v16, v10, v11, v12, v13, v14, v15);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *adviceMessageIds; // x1

  if ( (byte_4D2C6AD & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6AD = 1;
  }
  v4 = sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !source || !v4 )
    sub_1C93D2C(v5, v6);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&source->fields.idx;
  *(_DWORD *)(v4 + 24) = source->fields.questPhase;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&source->fields.userSvtId;
  adviceMessageIds = source->fields.adviceMessageIds;
  *(_QWORD *)(v4 + 48) = adviceMessageIds;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 48), (int32_t)adviceMessageIds, v7, v8, v9, v10, v11, v12);
  return (RecommendSupportData_RecommendDeckData_o *)v4;
}


RecommendSupportData_RecommendDeckData_array *RecommendSupportData__DeepCopyAll(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_array *source,
        const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4D2C6AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportData_DeepCopy__);
    byte_4D2C6AC = 1;
  }
  v5 = (System_Func_object__object__o *)sub_1C93D20(System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo);
  System_Func_object__object____ctor(v5, (Il2CppObject *)this, Method_RecommendSupportData_DeepCopy__, 0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)source,
                                                              (System_Func_TSource__TResult__o *)v5,
                                                              (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
  return (RecommendSupportData_RecommendDeckData_array *)System_Linq_Enumerable__ToArray_object_(
                                                           v6,
                                                           (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
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

  if ( (byte_4D2C69C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C69C = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51982632(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C93D2C(0, v9);
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

  if ( (byte_4D2C6A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6A3 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51982632(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C93D2C(0, v9);
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

  if ( (byte_4D2C6A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11115/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/);
    sub_1C93AD4(&StringLiteral_11106/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4D2C6A7 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0);
  v5 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      return LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v5 )
      return LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11115/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v9);
  ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                         (RecommendAdviceMessageMaster_o *)Master_object,
                         ids,
                         0);
  return System_String__Join(v7, ConvertMessageToId, 0);
}


System_String_o *RecommendSupportData__GetMessageSentence_35315544(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Message; // x0
  RecommendSupportData_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2C6A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4D2C6A8 = 1;
  }
  Message = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportData__GetMessage(this, index, method);
  v6 = (RecommendSupportData_o *)System_Linq_Enumerable__ToArray_int_(
                                   Message,
                                   (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4D2C69E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C69E = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51982632(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C93D2C(0, v9);
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

  if ( (byte_4D2C6A5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6A5 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51982632(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C93D2C(0, v9);
  return (System_Int32_array *)v8[3].klass;
}


int64_t RecommendSupportData__GetOldServant(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2C69A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C69A = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51982632(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         oldDeckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C93D2C(0, v9);
  return (int64_t)v8[2].klass;
}


int64_t RecommendSupportData__GetServant(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v6; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2C698 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C698 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__51982632(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0;
  deckData = (System_Object_array *)this->fields.deckData;
  v6 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164(v6, index, v7);
  v8 = BasicHelper__IndexValue_object_(
         deckData,
         index,
         (Il2CppObject *)v6,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v8 )
    sub_1C93D2C(0, v9);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UserGameEntity_o *SelfUserGame; // x21
  const MethodInfo *v27; // x2
  UserRecommendSupportEntity_array *RecommendSupportDeck; // x22
  unsigned __int64 j; // x23
  unsigned int *v30; // x28
  UserRecommendSupportEntity_o *v31; // x25
  __int64 v32; // x24
  const MethodInfo *v33; // x2
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  unsigned int *v48; // x0
  struct RecommendSupportData_RecommendDeckData_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  __int64 v68; // x0

  if ( (byte_4D2C693 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C693 = 1;
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
    v9 = sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164((RecommendSupportData_RecommendDeckData_o *)v9, v5, v10);
    if ( !v9 )
      goto LABEL_31;
    *(_DWORD *)(v9 + 20) = 0;
    *(_DWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    v13 = sub_1C93B7C(int___TypeInfo, 0);
    *(_QWORD *)(v9 + 48) = v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 48), v13, v14, v15, v16, v17, v18, v19);
    if ( !deckData )
      goto LABEL_31;
    Instance = (DataManager_o *)sub_1C93C10(v9, *(_QWORD *)(*(_QWORD *)deckData + 64LL));
    if ( !Instance )
    {
LABEL_33:
      v68 = sub_1C93D50();
      sub_1C93BFC(v68, 0);
    }
    if ( v5 >= deckData[6] )
LABEL_32:
      sub_1C93D34(Instance);
    *(_QWORD *)&deckData[2 * v5 + 8] = v9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&deckData[i], v9, v20, v21, v22, v23, v24, v25);
    ++v5;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
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
    v30 = (unsigned int *)this->fields.deckData;
    v31 = RecommendSupportDeck->m_Items[j];
    v32 = sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164((RecommendSupportData_RecommendDeckData_o *)v32, j, v33);
    if ( v31 )
    {
      if ( !v32 )
        goto LABEL_31;
      *(_QWORD *)(v32 + 20) = *(_QWORD *)&v31->fields.questId;
      userSvtLeaderInfo = v31->fields.userSvtLeaderInfo;
      if ( !userSvtLeaderInfo )
        goto LABEL_31;
      *(_QWORD *)(v32 + 32) = userSvtLeaderInfo->fields.userSvtId;
      *(_QWORD *)(v32 + 40) = UserRecommendSupportEntity__GetEquipUserSvtId(v31, 0);
      adviceMessageIds = v31->fields.adviceMessageIds;
      *(_QWORD *)(v32 + 48) = adviceMessageIds;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 48), (int32_t)adviceMessageIds, v42, v43, v44, v45, v46, v47);
    }
    if ( !v30 )
      goto LABEL_31;
    if ( v32 )
    {
      Instance = (DataManager_o *)sub_1C93C10(v32, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
      if ( !Instance )
        goto LABEL_33;
    }
    if ( j >= v30[6] )
      goto LABEL_32;
    v48 = &v30[2 * j];
    *((_QWORD *)v48 + 4) = v32;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 8), v32, v34, v35, v36, v37, v38, v39);
  }
  v49 = RecommendSupportData__DeepCopyAll(this, this->fields.deckData, v27);
  this->fields.oldDeckData = v49;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldDeckData, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  this->fields._IsSelectServant_k__BackingField = 0;
  this->fields.kind = 1;
  this->fields._EventSetupInfo2_k__BackingField = eventUpSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields._EventSetupInfo_k__BackingField = eventUpSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)eventUpSetupInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( !SelfUserGame )
LABEL_31:
    sub_1C93D2C(Instance, v12);
  this->fields._PushUserServantId_k__BackingField = SelfUserGame->fields.pushUserSvtId;
}


void RecommendSupportData__RemoveEquipData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C93D34(this);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C93D2C(this, index);
  v4->fields.userSvtEquipId = 0;
}


void RecommendSupportData__RemoveQuest(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C93D34(this);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C93D2C(this, index);
  v4->fields.questId = 0;
  v4->fields.questPhase = 0;
}


void RecommendSupportData__RemoveServantData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v4; // x8

  deckData = this->fields.deckData;
  if ( !deckData )
    goto LABEL_5;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C93D34(this);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C93D2C(this, index);
  v4->fields.userSvtId = 0;
}


void RecommendSupportData__ResetDeckData(RecommendSupportData_o *this, int32_t index, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x22
  __int64 v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  RecommendSupportData_RecommendDeckData_o *v17; // x8
  struct System_Int32_array *adviceMessageIds; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppClass **v25; // x0
  __int64 v26; // x0

  if ( (byte_4D2C697 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C697 = 1;
  }
  deckData = this->fields.deckData;
  v6 = sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
  RecommendSupportData_RecommendDeckData___ctor_35310164((RecommendSupportData_RecommendDeckData_o *)v6, index, v7);
  oldDeckData = this->fields.oldDeckData;
  if ( !oldDeckData )
    goto LABEL_11;
  if ( LODWORD(oldDeckData->max_length) <= index )
    goto LABEL_12;
  v17 = oldDeckData->m_Items[index];
  if ( !v17
    || !v6
    || (*(_QWORD *)(v6 + 16) = *(_QWORD *)&v17->fields.idx,
        *(_DWORD *)(v6 + 24) = v17->fields.questPhase,
        *(_OWORD *)(v6 + 32) = *(_OWORD *)&v17->fields.userSvtId,
        adviceMessageIds = v17->fields.adviceMessageIds,
        *(_QWORD *)(v6 + 48) = adviceMessageIds,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 48), (int32_t)adviceMessageIds, v10, v11, v12, v13, v14, v15),
        !deckData) )
  {
LABEL_11:
    sub_1C93D2C(v8, v9);
  }
  v8 = sub_1C93C10(v6, deckData->obj.klass->_1.element_class);
  if ( !v8 )
  {
    v26 = sub_1C93D50();
    sub_1C93BFC(v26, 0);
  }
  if ( LODWORD(deckData->max_length) <= index )
LABEL_12:
    sub_1C93D34(v8);
  v25 = &deckData->obj.klass + index;
  v25[4] = (Il2CppClass *)v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), v6, v19, v20, v21, v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportData__SetAdviceMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Int32_array *v8; // x19
  RecommendSupportData_o *v10; // x21
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v12; // x20

  v8 = ids;
  v10 = this;
  if ( (byte_4D2C695 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1C93AD4(&int___TypeInfo);
    byte_4D2C695 = 1;
  }
  deckData = v10->fields.deckData;
  if ( !deckData )
    goto LABEL_9;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C93D34(this);
  v12 = deckData->m_Items[index];
  if ( !v8 )
  {
    this = (RecommendSupportData_o *)sub_1C93B7C(int___TypeInfo, 0);
    v8 = (struct System_Int32_array *)this;
  }
  if ( !v12 )
LABEL_9:
    sub_1C93D2C(this, *(_QWORD *)&index);
  v12->fields.adviceMessageIds = v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v12->fields.adviceMessageIds,
    (int32_t)v8,
    (int32_t)ids,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


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
    sub_1C93D34(this);
  v6 = deckData->m_Items[index];
  if ( !v6 )
LABEL_5:
    sub_1C93D2C(this, index);
  v6->fields.userSvtEquipId = userSvtId;
}


void RecommendSupportData__SetOld(RecommendSupportData_o *this, RecommendSupportData_o *data, const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !data )
    sub_1C93D2C(this, 0);
  v4 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, method);
  this->fields.oldDeckData = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldDeckData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


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
    sub_1C93D34(this);
  v8 = deckData->m_Items[index];
  if ( !v8 )
LABEL_9:
    sub_1C93D2C(this, index);
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
  if ( (byte_4D2C694 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C694 = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_10;
  if ( LODWORD(deckData->max_length) <= index )
    sub_1C93D34(this);
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
  this = (RecommendSupportData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v11, 0);
  if ( !v10 )
LABEL_10:
    sub_1C93D2C(this, *(_QWORD *)&index);
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

  if ( (byte_4D2C69D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C69D = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C93D2C(0, v11);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  int max_length; // w9
  int32_t v19; // w10
  RecommendSupportData_RecommendDeckData_o *v20; // x11
  System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2C6A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2C6A1 = 1;
  }
  entity = 0;
  *settingIndex = -1;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *svtName = static_fields->Empty;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)svtName,
    (int32_t)Empty,
    questPhase,
    (int32_t)settingIndex,
    (System_String_o *)svtName,
    (int32_t)method,
    v6,
    v7);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.deckData, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    max_length = deckData->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)max_length )
          sub_1C93D34(Master_object);
        v20 = deckData->m_Items[v19];
        if ( !v20 )
          goto LABEL_22;
        if ( v20->fields.questId == questId && v20->fields.questPhase == questPhase )
          break;
        if ( ++v19 >= max_length )
          return 0;
      }
      *settingIndex = v19;
      if ( Master_object )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &entity,
                v20->fields.userSvtId,
                (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
          return 1;
        Master_object = entity;
        if ( entity )
        {
          v22 = UserServantEntity__GetSvtName((UserServantEntity_o *)entity, 0);
          *svtName = v22;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)svtName, (int32_t)v22, v23, v24, v25, v26, v27, v28);
          return 1;
        }
      }
LABEL_22:
      sub_1C93D2C(Master_object, v16);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Int32_array *klass; // x1

  if ( (byte_4D2C6A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6A4 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C93D2C(0, v11);
    klass = (System_Int32_array *)v10[3].klass;
  }
  else
  {
    klass = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  }
  *ids = klass;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)ids, (int32_t)klass, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D2C69F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C69F = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C93D2C(0, v11);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x20

  if ( (byte_4D2C6A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6A6 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C93D2C(0, v11);
    v18 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v10[3].klass,
                                                      (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  *adviceMessageIds = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)adviceMessageIds, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*adviceMessageIds, 0);
}


bool RecommendSupportData__TryGetOldQuest(
        RecommendSupportData_o *this,
        int32_t index,
        int32_t *questId,
        int32_t *questPhase,
        const MethodInfo *method)
{
  System_Object_array *oldDeckData; // x22
  RecommendSupportData_RecommendDeckData_o *v11; // x23
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t monitor; // w9
  Il2CppClass *klass; // x1
  Il2CppClass *v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2C6A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6A2 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    *questId = 0;
    *questPhase = 0;
    return 0;
  }
  else
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v11 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v11, index, v12);
    v13 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v11,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v13 )
      sub_1C93D2C(0, v14);
    monitor = (int32_t)v13[1].monitor;
    klass = v13[3].klass;
    *questId = HIDWORD(v13[1].klass);
    *questPhase = monitor;
    v23 = klass;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23, (int32_t)klass, v15, v16, v17, v18, v19, v20);
    return *questId > 0;
  }
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

  if ( (byte_4D2C69B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C69B = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C93D2C(0, v11);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t monitor; // w9
  Il2CppClass *klass; // x1
  Il2CppClass *v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2C6A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C6A0 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v10 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v10, index, v11);
    v12 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v10,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v12 )
      sub_1C93D2C(0, v13);
    monitor = (int32_t)v12[1].monitor;
    klass = v12[3].klass;
    *questId = HIDWORD(v12[1].klass);
    *questPhase = monitor;
    v23 = klass;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23, (int32_t)klass, v14, v15, v16, v17, v18, v19);
    return *questId > 0;
  }
  else
  {
    *questId = 0;
    *questPhase = 0;
    return 0;
  }
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

  if ( (byte_4D2C699 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&RecommendSupportData_RecommendDeckData_TypeInfo);
    byte_4D2C699 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51982632(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v8 = (RecommendSupportData_RecommendDeckData_o *)sub_1C93D20(RecommendSupportData_RecommendDeckData_TypeInfo);
    RecommendSupportData_RecommendDeckData___ctor_35310164(v8, index, v9);
    v10 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v8,
            (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v10 )
      sub_1C93D2C(0, v11);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2C6A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
    sub_1C93AD4(&System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportData___c__get_IsNoServant_b__50_0__);
    sub_1C93AD4(&RecommendSupportData___c_TypeInfo);
    byte_4D2C6A9 = 1;
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
    _9__50_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__50_0, v6, Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, 0);
    static_fields = RecommendSupportData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Func_RecommendSupportData_RecommendDeckData__bool__o *)_9__50_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v8, v9, v10, v11, v12, v13);
  }
  return !BasicHelper__Any_object__51960868(
            deckData,
            (System_Func_T__bool__o *)_9__50_0,
            (const MethodInfo_318DC24 *)Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventSetupInfo2_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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


void RecommendSupportData_RecommendDeckData___ctor_35310164(
        RecommendSupportData_RecommendDeckData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2C6AF & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2C6AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.idx = index + 1;
  v5 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.adviceMessageIds = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.adviceMessageIds, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


bool RecommendSupportData_RecommendDeckData__Compare(
        RecommendSupportData_RecommendDeckData_o *this,
        RecommendSupportData_RecommendDeckData_o *src,
        const MethodInfo *method)
{
  if ( !src )
    sub_1C93D2C(this, 0);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)outAdviceMessageIds,
    (int32_t)adviceMessageIds,
    (int32_t)outQuestId,
    (int32_t)outQuestPhase,
    (System_String_o *)outUserSvtId,
    (int32_t)outUserSvtEquipId,
    (int64_t)outAdviceMessageIds,
    (System_String_o *)method);
}


void RecommendSupportData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C6B0 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportData___c_TypeInfo);
    byte_4D2C6B0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(RecommendSupportData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportData___c_TypeInfo->static_fields->__9 = (struct RecommendSupportData___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)RecommendSupportData___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  return data->fields.userSvtId > 0;
}