void __fastcall RecommendSupportData___ctor(RecommendSupportData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct RecommendSupportData_RecommendDeckData_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct RecommendSupportData_RecommendDeckData_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1233F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData___TypeInfo, v4, v5);
    byte_4B1233F = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1BCA888(
                                                                RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                (unsigned int)v6->static_fields->RecommendSupportMemberMax);
  this->fields.deckData = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (struct RecommendSupportData_RecommendDeckData_array *)sub_1BCA888(
                                                                 RecommendSupportData_RecommendDeckData___TypeInfo,
                                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.oldDeckData = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldDeckData, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x20
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_4B1233C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B1233C = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
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
        sub_1BCAA3C(v5, method);
      v16 = v5;
      if ( v5 )
      {
        v5 = sub_1BCA91C(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v18 = sub_1BCAA60();
          sub_1BCA908(v18, 0LL);
        }
      }
      if ( i >= v9->max_length )
LABEL_23:
        sub_1BCAA44(v5, method);
      v17 = &v9->obj.klass + (int)i;
      v17[4] = (Il2CppClass *)v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 4), v16, v10, v11, v12, v13, v14, v15);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__ClearDeckData(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v7; // x20
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_4B12327 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, *(_QWORD *)&index, method);
    byte_4B12327 = 1;
  }
  deckData = this->fields.deckData;
  v7 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                     RecommendSupportData_RecommendDeckData_TypeInfo,
                                                     *(_QWORD *)&index,
                                                     method,
                                                     v3);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v7, index, v8);
  if ( !deckData )
    sub_1BCAA3C(v9, v10);
  if ( v7 )
  {
    v9 = sub_1BCA91C(v7, deckData->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v18 = sub_1BCAA60();
      sub_1BCA908(v18, 0LL);
    }
  }
  if ( deckData->max_length <= index )
    sub_1BCAA44(v9, v10);
  v17 = &deckData->obj.klass + index;
  v17[4] = (Il2CppClass *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)v7, v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__CopyData(
        RecommendSupportData_o *this,
        RecommendSupportData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2
  struct RecommendSupportData_RecommendDeckData_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x1
  struct EventUpValSetupInfo_o *EventSetupInfo2_k__BackingField; // x1
  PartyOrganizationUtility_o *p_EventSetupInfo2_k__BackingField; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( !data )
    sub_1BCAA3C(this, 0LL);
  v7 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, (const MethodInfo *)isInit);
  this->fields.deckData = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v15 = RecommendSupportData__DeepCopyAll(this, data->fields.oldDeckData, v14);
  this->fields.oldDeckData = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldDeckData, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  if ( isInit )
  {
    this->fields.kind = data->fields.kind;
    this->fields._IsSelectServant_k__BackingField = data->fields._IsSelectServant_k__BackingField;
    EventSetupInfo_k__BackingField = data->fields._EventSetupInfo_k__BackingField;
    this->fields._EventSetupInfo_k__BackingField = EventSetupInfo_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo_k__BackingField,
      (int64_t)EventSetupInfo_k__BackingField,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    EventSetupInfo2_k__BackingField = data->fields._EventSetupInfo2_k__BackingField;
    this->fields._EventSetupInfo2_k__BackingField = EventSetupInfo2_k__BackingField;
    p_EventSetupInfo2_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo2_k__BackingField;
    sub_1BCA784(
      p_EventSetupInfo2_k__BackingField,
      (int64_t)EventSetupInfo2_k__BackingField,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    p_EventSetupInfo2_k__BackingField->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)data->fields._PushUserServantId_k__BackingField;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x20
  Il2CppClass **v17; // x0
  __int64 v18; // x0

  if ( (byte_4B1233B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B1233B = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
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
        sub_1BCAA3C(v5, method);
      v16 = v5;
      if ( v5 )
      {
        v5 = sub_1BCA91C(v5, v9->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v18 = sub_1BCAA60();
          sub_1BCA908(v18, 0LL);
        }
      }
      if ( i >= v9->max_length )
LABEL_23:
        sub_1BCAA44(v5, method);
      v17 = &v9->obj.klass + (int)i;
      v17[4] = (Il2CppClass *)v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 4), v16, v10, v11, v12, v13, v14, v15);
    }
  }
}


RecommendSupportData_RecommendDeckData_o *__fastcall RecommendSupportData__DeepCopy(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_o *source,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Int32_array *adviceMessageIds; // x1

  if ( (byte_4B1233E & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, source, method);
    byte_4B1233E = 1;
  }
  v5 = sub_1BCAA2C(RecommendSupportData_RecommendDeckData_TypeInfo, source, method, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !source || !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 16) = *(_QWORD *)&source->fields.idx;
  *(_DWORD *)(v5 + 24) = source->fields.questPhase;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)&source->fields.userSvtId;
  adviceMessageIds = source->fields.adviceMessageIds;
  *(_QWORD *)(v5 + 48) = adviceMessageIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)adviceMessageIds, v8, v9, v10, v11, v12, v13);
  return (RecommendSupportData_RecommendDeckData_o *)v5;
}


RecommendSupportData_RecommendDeckData_array *__fastcall RecommendSupportData__DeepCopyAll(
        RecommendSupportData_o *this,
        RecommendSupportData_RecommendDeckData_array *source,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_object__object__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4B1233D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___,
      source,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___, v6, v7);
    sub_1BCA7E0(
      &System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo,
      v8,
      v9);
    sub_1BCA7E0(&Method_RecommendSupportData_DeepCopy__, v10, v11);
    byte_4B1233D = 1;
  }
  v12 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData__TypeInfo,
                                           source,
                                           method,
                                           v3);
  System_Func_object__object____ctor(v12, (Il2CppObject *)this, Method_RecommendSupportData_DeepCopy__, 0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)source,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_RecommendSupportData_RecommendDeckData__RecommendSupportData_RecommendDeckData___);
  return (RecommendSupportData_RecommendDeckData_array *)System_Linq_Enumerable__ToArray_object_(
                                                           v13,
                                                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportData_RecommendDeckData___);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v13; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1232D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5, v6);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v7, v8);
    byte_4B1232D = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__49290248(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  deckData = (System_Object_array *)this->fields.deckData;
  v13 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                      RecommendSupportData_RecommendDeckData_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v13, index, v14);
  v15 = BasicHelper__IndexValue_object_(
          deckData,
          index,
          (Il2CppObject *)v13,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  return (int64_t)v15[2].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall RecommendSupportData__GetMessage(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v15; // x21
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1

  if ( (byte_4B12334 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v9, v10);
    byte_4B12334 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__49290248(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  deckData = (System_Object_array *)this->fields.deckData;
  v15 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                      RecommendSupportData_RecommendDeckData_TypeInfo,
                                                      v11,
                                                      v12,
                                                      v13);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v15, index, v16);
  v17 = BasicHelper__IndexValue_object_(
          deckData,
          index,
          (Il2CppObject *)v15,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v17 )
    sub_1BCAA3C(0LL, v18);
  return (System_Int32_array *)v17[3].klass;
}


System_String_o *__fastcall RecommendSupportData__GetMessageSentence(
        RecommendSupportData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  bool IsNullOrEmpty; // w0
  __int64 v13; // x1
  bool v14; // w20
  __int64 v16; // x1
  System_String_o *v17; // x20
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  System_String_array *ConvertMessageToId; // x1

  if ( (byte_4B12338 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, ids, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_11149/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11140/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, v10, v11);
    byte_4B12338 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ids, 0LL);
  v14 = IsNullOrEmpty;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      return LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    if ( v14 )
      return LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11149/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_SEPARATOR"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v19);
  ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                         (RecommendAdviceMessageMaster_o *)Master_object,
                         ids,
                         0LL);
  return System_String__Join(v17, ConvertMessageToId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RecommendSupportData__GetMessageSentence_33082808(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Message; // x0
  RecommendSupportData_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B12339 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&index, method);
    byte_4B12339 = 1;
  }
  Message = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportData__GetMessage(this, index, method);
  v6 = (RecommendSupportData_o *)System_Linq_Enumerable__ToArray_int_(
                                   Message,
                                   (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v13; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1232F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5, v6);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v7, v8);
    byte_4B1232F = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__49290248(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v13 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                      RecommendSupportData_RecommendDeckData_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v13, index, v14);
  v15 = BasicHelper__IndexValue_object_(
          oldDeckData,
          index,
          (Il2CppObject *)v13,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  return (int64_t)v15[2].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall RecommendSupportData__GetOldMessage(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v15; // x21
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1

  if ( (byte_4B12336 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v9, v10);
    byte_4B12336 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__49290248(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v15 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                      RecommendSupportData_RecommendDeckData_TypeInfo,
                                                      v11,
                                                      v12,
                                                      v13);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v15, index, v16);
  v17 = BasicHelper__IndexValue_object_(
          oldDeckData,
          index,
          (Il2CppObject *)v15,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v17 )
    sub_1BCAA3C(0LL, v18);
  return (System_Int32_array *)v17[3].klass;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportData__GetOldServant(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Object_array *oldDeckData; // x20
  RecommendSupportData_RecommendDeckData_o *v13; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1232B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5, v6);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v7, v8);
    byte_4B1232B = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__49290248(
          (System_Object_array *)this->fields.oldDeckData,
          index,
          (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  oldDeckData = (System_Object_array *)this->fields.oldDeckData;
  v13 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                      RecommendSupportData_RecommendDeckData_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v13, index, v14);
  v15 = BasicHelper__IndexValue_object_(
          oldDeckData,
          index,
          (Il2CppObject *)v13,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  return (int64_t)v15[2].klass;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportData__GetServant(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Object_array *deckData; // x20
  RecommendSupportData_RecommendDeckData_o *v13; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B12329 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v5, v6);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v7, v8);
    byte_4B12329 = 1;
  }
  if ( !BasicHelper__IsValidIndex_object__49290248(
          (System_Object_array *)this->fields.deckData,
          index,
          (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
    return 0LL;
  deckData = (System_Object_array *)this->fields.deckData;
  v13 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                      RecommendSupportData_RecommendDeckData_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11);
  RecommendSupportData_RecommendDeckData___ctor_33077428(v13, index, v14);
  v15 = BasicHelper__IndexValue_object_(
          deckData,
          index,
          (Il2CppObject *)v13,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  return (int64_t)v15[2].klass;
}


void __fastcall RecommendSupportData__Init(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned __int64 v14; // x21
  __int64 i; // x28
  BalanceConfig_c *v16; // x0
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x29
  int64_t v18; // x22
  const MethodInfo *v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UserGameEntity_o *SelfUserGame; // x21
  const MethodInfo *v36; // x2
  __int64 v37; // x3
  UserRecommendSupportEntity_array *RecommendSupportDeck; // x22
  unsigned __int64 j; // x23
  struct RecommendSupportData_RecommendDeckData_array *v40; // x28
  UserRecommendSupportEntity_o *v41; // x25
  int64_t v42; // x24
  const MethodInfo *v43; // x2
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  int64_t adviceMessageIds; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppClass **v58; // x0
  struct RecommendSupportData_RecommendDeckData_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x0

  if ( (byte_4B12324 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventUpSetupInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserRecommendSupportMaster___, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B12324 = 1;
  }
  v14 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, eventUpSetupInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v16->static_fields->RecommendSupportMemberMax )
      break;
    deckData = this->fields.deckData;
    v18 = sub_1BCAA2C(RecommendSupportData_RecommendDeckData_TypeInfo, eventUpSetupInfo, method, v3);
    RecommendSupportData_RecommendDeckData___ctor_33077428((RecommendSupportData_RecommendDeckData_o *)v18, v14, v19);
    if ( !v18 )
      goto LABEL_31;
    *(_DWORD *)(v18 + 20) = 0;
    *(_DWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_QWORD *)(v18 + 40) = 0LL;
    v22 = sub_1BCA888(int___TypeInfo, 0LL);
    *(_QWORD *)(v18 + 48) = v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 48), v22, v23, v24, v25, v26, v27, v28);
    if ( !deckData )
      goto LABEL_31;
    Instance = (DataManager_o *)sub_1BCA91C(v18, deckData->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_33:
      v78 = sub_1BCAA60();
      sub_1BCA908(v78, 0LL);
    }
    if ( v14 >= deckData->max_length )
LABEL_32:
      sub_1BCAA44(Instance, v21);
    deckData->m_Items[v14] = (RecommendSupportData_RecommendDeckData_o *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)deckData + i), v18, v29, v30, v31, v32, v33, v34);
    ++v14;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserRecommendSupportMaster___);
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 172LL) )
      break;
    if ( !RecommendSupportDeck )
      goto LABEL_31;
    if ( j >= RecommendSupportDeck->max_length )
      goto LABEL_32;
    v40 = this->fields.deckData;
    v41 = RecommendSupportDeck->m_Items[j];
    v42 = sub_1BCAA2C(RecommendSupportData_RecommendDeckData_TypeInfo, v21, v36, v37);
    RecommendSupportData_RecommendDeckData___ctor_33077428((RecommendSupportData_RecommendDeckData_o *)v42, j, v43);
    if ( v41 )
    {
      if ( !v42 )
        goto LABEL_31;
      *(_QWORD *)(v42 + 20) = *(_QWORD *)&v41->fields.questId;
      userSvtLeaderInfo = v41->fields.userSvtLeaderInfo;
      if ( !userSvtLeaderInfo )
        goto LABEL_31;
      *(_QWORD *)(v42 + 32) = userSvtLeaderInfo->fields.userSvtId;
      *(_QWORD *)(v42 + 40) = UserRecommendSupportEntity__GetEquipUserSvtId(v41, 0LL);
      adviceMessageIds = (int64_t)v41->fields.adviceMessageIds;
      *(_QWORD *)(v42 + 48) = adviceMessageIds;
      sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 48), adviceMessageIds, v52, v53, v54, v55, v56, v57);
    }
    if ( !v40 )
      goto LABEL_31;
    if ( v42 )
    {
      Instance = (DataManager_o *)sub_1BCA91C(v42, v40->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_33;
    }
    if ( j >= v40->max_length )
      goto LABEL_32;
    v58 = &v40->obj.klass + j;
    v58[4] = (Il2CppClass *)v42;
    sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), v42, v44, v45, v46, v47, v48, v49);
  }
  v59 = RecommendSupportData__DeepCopyAll(this, this->fields.deckData, v36);
  this->fields.oldDeckData = v59;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldDeckData, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  this->fields._IsSelectServant_k__BackingField = 0;
  this->fields.kind = 1;
  this->fields._EventSetupInfo2_k__BackingField = eventUpSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int64_t)eventUpSetupInfo,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields._EventSetupInfo_k__BackingField = eventUpSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int64_t)eventUpSetupInfo,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( !SelfUserGame )
LABEL_31:
    sub_1BCAA3C(Instance, v21);
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
    sub_1BCAA44(this, index);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
    sub_1BCAA44(this, index);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
    sub_1BCAA44(this, index);
  v4 = deckData->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  v4->fields.userSvtId = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__ResetDeckData(
        RecommendSupportData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x22
  int64_t v7; // x20
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct RecommendSupportData_RecommendDeckData_array *oldDeckData; // x8
  RecommendSupportData_RecommendDeckData_o *v18; // x8
  int64_t adviceMessageIds; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppClass **v26; // x0
  __int64 v27; // x0

  if ( (byte_4B12328 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, *(_QWORD *)&index, method);
    byte_4B12328 = 1;
  }
  deckData = this->fields.deckData;
  v7 = sub_1BCAA2C(RecommendSupportData_RecommendDeckData_TypeInfo, *(_QWORD *)&index, method, v3);
  RecommendSupportData_RecommendDeckData___ctor_33077428((RecommendSupportData_RecommendDeckData_o *)v7, index, v8);
  oldDeckData = this->fields.oldDeckData;
  if ( !oldDeckData )
    goto LABEL_11;
  if ( oldDeckData->max_length <= index )
    goto LABEL_12;
  v18 = oldDeckData->m_Items[index];
  if ( !v18
    || !v7
    || (*(_QWORD *)(v7 + 16) = *(_QWORD *)&v18->fields.idx,
        *(_DWORD *)(v7 + 24) = v18->fields.questPhase,
        *(_OWORD *)(v7 + 32) = *(_OWORD *)&v18->fields.userSvtId,
        adviceMessageIds = (int64_t)v18->fields.adviceMessageIds,
        *(_QWORD *)(v7 + 48) = adviceMessageIds,
        sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), adviceMessageIds, v11, v12, v13, v14, v15, v16),
        !deckData) )
  {
LABEL_11:
    sub_1BCAA3C(v9, v10);
  }
  v9 = sub_1BCA91C(v7, deckData->obj.klass->_1.element_class);
  if ( !v9 )
  {
    v27 = sub_1BCAA60();
    sub_1BCA908(v27, 0LL);
  }
  if ( deckData->max_length <= index )
LABEL_12:
    sub_1BCAA44(v9, v10);
  v26 = &deckData->obj.klass + index;
  v26[4] = (Il2CppClass *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), v7, v20, v21, v22, v23, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportData__SetAdviceMessage(
        RecommendSupportData_o *this,
        int32_t index,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Int32_array *v8; // x19
  RecommendSupportData_o *v10; // x21
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  RecommendSupportData_RecommendDeckData_o *v12; // x20

  v8 = ids;
  v10 = this;
  if ( (byte_4B12326 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&index, ids);
    byte_4B12326 = 1;
  }
  deckData = v10->fields.deckData;
  if ( !deckData )
    goto LABEL_9;
  if ( deckData->max_length <= index )
    sub_1BCAA44(this, *(_QWORD *)&index);
  v12 = deckData->m_Items[index];
  if ( !v8 )
  {
    this = (RecommendSupportData_o *)sub_1BCA888(int___TypeInfo, 0LL);
    v8 = (struct System_Int32_array *)this;
  }
  if ( !v12 )
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  v12->fields.adviceMessageIds = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v12->fields.adviceMessageIds,
    (int64_t)v8,
    (int64_t)ids,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BCAA44(this, index);
  v6 = deckData->m_Items[index];
  if ( !v6 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  v6->fields.userSvtEquipId = userSvtId;
}


void __fastcall RecommendSupportData__SetOld(
        RecommendSupportData_o *this,
        RecommendSupportData_o *data,
        const MethodInfo *method)
{
  struct RecommendSupportData_RecommendDeckData_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !data )
    sub_1BCAA3C(this, 0LL);
  v4 = RecommendSupportData__DeepCopyAll(this, data->fields.deckData, method);
  this->fields.oldDeckData = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldDeckData, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA44(this, index);
  v8 = deckData->m_Items[index];
  if ( !v8 )
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
  if ( (byte_4B12325 & 1) == 0 )
  {
    this = (RecommendSupportData_o *)sub_1BCA7E0(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                       *(_QWORD *)&index,
                                       entity);
    byte_4B12325 = 1;
  }
  deckData = v6->fields.deckData;
  if ( !deckData )
    goto LABEL_10;
  if ( deckData->max_length <= index )
    sub_1BCAA44(this, *(_QWORD *)&index);
  if ( !entity )
    goto LABEL_10;
  v8 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v9 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  v10 = deckData->m_Items[index];
  *(_OWORD *)&v12.fields.currentCryptoKey = v8;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
  v11 = v12;
  this = (RecommendSupportData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v11, 0LL);
  if ( !v10 )
LABEL_10:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v15; // x22
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t monitor; // x8

  if ( (byte_4B1232E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___,
      *(_QWORD *)&index,
      userSvtEquipId);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7, v8);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v9, v10);
    byte_4B1232E = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v15 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v15, index, v16);
    v17 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v15,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v17 )
      sub_1BCAA3C(0LL, v18);
    monitor = (int64_t)v17[2].monitor;
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  __int64 v21; // x1
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  struct RecommendSupportData_RecommendDeckData_array *deckData; // x8
  int max_length; // w9
  int32_t v26; // w10
  RecommendSupportData_RecommendDeckData_o *v27; // x11
  System_String_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12332 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&string_TypeInfo, v17, v18);
    byte_4B12332 = 1;
  }
  entity = 0LL;
  *settingIndex = -1;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *svtName = static_fields->Empty;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)svtName,
    (int64_t)Empty,
    *(int64_t *)&questPhase,
    (int32_t)settingIndex,
    (System_String_o *)svtName,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.deckData, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    deckData = this->fields.deckData;
    if ( !deckData )
      goto LABEL_22;
    max_length = deckData->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)max_length )
          sub_1BCAA44(Master_object, v23);
        v27 = deckData->m_Items[v26];
        if ( !v27 )
          goto LABEL_22;
        if ( v27->fields.questId == questId && v27->fields.questPhase == questPhase )
          break;
        if ( ++v26 >= max_length )
          return 0;
      }
      *settingIndex = v26;
      if ( Master_object )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &entity,
                v27->fields.userSvtId,
                (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
          return 1;
        Master_object = entity;
        if ( entity )
        {
          v29 = UserServantEntity__GetSvtName((UserServantEntity_o *)entity, 0LL);
          *svtName = v29;
          sub_1BCA784((PartyOrganizationUtility_o *)svtName, (int64_t)v29, v30, v31, v32, v33, v34, v35);
          return 1;
        }
      }
LABEL_22:
      sub_1BCAA3C(Master_object, v23);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v17; // x22
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Int32_array *klass; // x1

  if ( (byte_4B12335 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, ids);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v11, v12);
    byte_4B12335 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v17 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v13,
                                                        v14,
                                                        v15);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v17, index, v18);
    v19 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v17,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v19 )
      sub_1BCAA3C(0LL, v20);
    klass = (System_Int32_array *)v19[3].klass;
  }
  else
  {
    klass = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  *ids = klass;
  sub_1BCA784((PartyOrganizationUtility_o *)ids, (int64_t)klass, v21, v22, v23, v24, v25, v26);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v15; // x22
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t monitor; // x8

  if ( (byte_4B12330 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___,
      *(_QWORD *)&index,
      userSvtEquipId);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7, v8);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v9, v10);
    byte_4B12330 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v15 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v15, index, v16);
    v17 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v15,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v17 )
      sub_1BCAA3C(0LL, v18);
    monitor = (int64_t)v17[2].monitor;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v21; // x22
  const MethodInfo *v22; // x2
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x20

  if ( (byte_4B12337 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___,
      *(_QWORD *)&index,
      adviceMessageIds);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v15, v16);
    byte_4B12337 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v21 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v17,
                                                        v18,
                                                        v19);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v21, index, v22);
    v23 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v21,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v23 )
      sub_1BCAA3C(0LL, v24);
    v31 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v23[3].klass,
                                                      (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v17,
                                                      v18,
                                                      v19);
    System_Collections_Generic_List_int____ctor(
      v31,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  *adviceMessageIds = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)adviceMessageIds, (int64_t)v31, v25, v26, v27, v28, v29, v30);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  bool result; // w0
  System_Object_array *oldDeckData; // x22
  RecommendSupportData_RecommendDeckData_o *v18; // x23
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t monitor; // w9
  int64_t klass; // x1
  int64_t v30; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12333 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, questId);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v9, v10);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v11, v12);
    byte_4B12333 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    result = 0;
    *questId = 0;
    *questPhase = 0;
  }
  else
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v18 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v13,
                                                        v14,
                                                        v15);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v18, index, v19);
    v20 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v18,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v20 )
      sub_1BCAA3C(0LL, v21);
    monitor = (int32_t)v20[1].monitor;
    klass = (int64_t)v20[3].klass;
    *questId = HIDWORD(v20[1].klass);
    *questPhase = monitor;
    v30 = klass;
    sub_1BCA784((PartyOrganizationUtility_o *)&v30, klass, v22, v23, v24, v25, v26, v27);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *oldDeckData; // x21
  RecommendSupportData_RecommendDeckData_o *v15; // x22
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t klass; // x8

  if ( (byte_4B1232C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, userSvtId);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7, v8);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v9, v10);
    byte_4B1232C = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.oldDeckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    oldDeckData = (System_Object_array *)this->fields.oldDeckData;
    v15 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v15, index, v16);
    v17 = BasicHelper__IndexValue_object_(
            oldDeckData,
            index,
            (Il2CppObject *)v15,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v17 )
      sub_1BCAA3C(0LL, v18);
    klass = (int64_t)v17[2].klass;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Object_array *deckData; // x22
  RecommendSupportData_RecommendDeckData_o *v17; // x23
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t monitor; // w9
  int64_t klass; // x1
  bool result; // w0
  int64_t v30; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12331 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, questId);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v9, v10);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v11, v12);
    byte_4B12331 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v17 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v13,
                                                        v14,
                                                        v15);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v17, index, v18);
    v19 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v17,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v19 )
      sub_1BCAA3C(0LL, v20);
    monitor = (int32_t)v19[1].monitor;
    klass = (int64_t)v19[3].klass;
    *questId = HIDWORD(v19[1].klass);
    *questPhase = monitor;
    v30 = klass;
    sub_1BCA784((PartyOrganizationUtility_o *)&v30, klass, v21, v22, v23, v24, v25, v26);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *deckData; // x21
  RecommendSupportData_RecommendDeckData_o *v15; // x22
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t klass; // x8

  if ( (byte_4B1232A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___, *(_QWORD *)&index, userSvtId);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___, v7, v8);
    sub_1BCA7E0(&RecommendSupportData_RecommendDeckData_TypeInfo, v9, v10);
    byte_4B1232A = 1;
  }
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.deckData,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportData_RecommendDeckData___) )
  {
    deckData = (System_Object_array *)this->fields.deckData;
    v15 = (RecommendSupportData_RecommendDeckData_o *)sub_1BCAA2C(
                                                        RecommendSupportData_RecommendDeckData_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
    RecommendSupportData_RecommendDeckData___ctor_33077428(v15, index, v16);
    v17 = BasicHelper__IndexValue_object_(
            deckData,
            index,
            (Il2CppObject *)v15,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_RecommendSupportData_RecommendDeckData___);
    if ( !v17 )
      sub_1BCAA3C(0LL, v18);
    klass = (int64_t)v17[2].klass;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  RecommendSupportData___c_c *v11; // x0
  System_Object_array *deckData; // x19
  System_Func_object__bool__o *_9__50_0; // x20
  Il2CppObject *v14; // x21
  struct RecommendSupportData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1233A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___, method, v2);
    sub_1BCA7E0(&System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportData___c_TypeInfo, v9, v10);
    byte_4B1233A = 1;
  }
  v11 = RecommendSupportData___c_TypeInfo;
  deckData = (System_Object_array *)this->fields.deckData;
  if ( !RecommendSupportData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportData___c_TypeInfo, method);
    v11 = RecommendSupportData___c_TypeInfo;
  }
  _9__50_0 = (System_Func_object__bool__o *)v11->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = RecommendSupportData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__50_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_RecommendSupportData_RecommendDeckData__bool__TypeInfo,
                                                method,
                                                v2,
                                                v3);
    System_Func_object__bool____ctor(_9__50_0, v14, Method_RecommendSupportData___c__get_IsNoServant_b__50_0__, 0LL);
    static_fields = RecommendSupportData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Func_RecommendSupportData_RecommendDeckData__bool__o *)_9__50_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__50_0,
      (int64_t)_9__50_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return !BasicHelper__Any_object__49274176(
            deckData,
            (System_Func_T__bool__o *)_9__50_0,
            (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RecommendSupportData_RecommendDeckData___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportData__set_EventSetupInfo2(
        RecommendSupportData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventSetupInfo2_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo2_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
void __fastcall RecommendSupportData_RecommendDeckData___ctor_33077428(
        RecommendSupportData_RecommendDeckData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12340 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&index, method);
    byte_4B12340 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = index + 1;
  v5 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.adviceMessageIds = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.adviceMessageIds, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}


bool __fastcall RecommendSupportData_RecommendDeckData__Compare(
        RecommendSupportData_RecommendDeckData_o *this,
        RecommendSupportData_RecommendDeckData_o *src,
        const MethodInfo *method)
{
  if ( !src )
    sub_1BCAA3C(this, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)outAdviceMessageIds,
    (int64_t)adviceMessageIds,
    (int64_t)outQuestId,
    (int32_t)outQuestPhase,
    (System_String_o *)outUserSvtId,
    (BattleSetupInfo_o *)outUserSvtEquipId,
    (FollowerInfo_o *)outAdviceMessageIds,
    (PartyListViewItem_o *)method);
}


void __fastcall RecommendSupportData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12341 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportData___c_TypeInfo, v1, v2);
    byte_4B12341 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportData___c_TypeInfo->static_fields->__9 = (struct RecommendSupportData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return data->fields.userSvtId > 0;
}