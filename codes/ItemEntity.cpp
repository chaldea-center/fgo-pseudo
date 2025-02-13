void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC883 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC883 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC876 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17073/*"anotherPayName"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC876 = 1;
  }
  return ItemEntity__getScript_40646820(
           this,
           (System_String_o *)StringLiteral_17073/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC878 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17391/*"battleAppearEffectId"*/);
    byte_4BDC878 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17391/*"battleAppearEffectId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC87A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17392/*"battleAppearItemWait"*/);
    byte_4BDC87A = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17392/*"battleAppearItemWait"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC879 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17399/*"battleGetEffectId"*/);
    byte_4BDC879 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17399/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_63115476(v6, this->fields.unit, 0LL);
}


System_String_o *__fastcall ItemEntity__GetCountTextWithPrefix(
        ItemEntity_o *this,
        int32_t num,
        const MethodInfo *method)
{
  bool IsCountableWithPlus; // w0
  int32_t type; // w8
  bool v7; // w19
  System_String_o *CountText; // x1
  __int64 *v9; // x8
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = num;
  if ( (byte_4BDC86F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_858/*"+"*/);
    sub_1C21E38(&StringLiteral_25612/*"×"*/);
    byte_4BDC86F = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v7 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v7 )
      v9 = &StringLiteral_858/*"+"*/;
    else
      v9 = &StringLiteral_25612/*"×"*/;
    return System_String__Concat_63115476((System_String_o *)*v9, CountText, 0LL);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0LL);
    return System_String__Concat_63115476(v10, this->fields.unit, 0LL);
  }
}


System_String_o *__fastcall ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC87D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19237/*"effectExplanation"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC87D = 1;
  }
  return ItemEntity__getScript_40646820(
           this,
           (System_String_o *)StringLiteral_19237/*"effectExplanation"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC87B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19460/*"eventId"*/);
    byte_4BDC87B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_19460/*"eventId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_o *OverwriteImageIdInfo; // x21
  System_String_array *Master_object; // x0
  __int64 v5; // x1
  CommonReleaseMaster_o *v6; // x20
  __int64 v7; // x8
  System_String_array *v8; // x21
  __int64 v9; // x24
  System_String_array *v10; // x22
  int32_t v11; // w23
  int32_t v12; // w22

  if ( (byte_4BDC871 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC871 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !System_String__IsNullOrEmpty(OverwriteImageIdInfo, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
        goto LABEL_22;
      v6 = (CommonReleaseMaster_o *)Master_object;
      Master_object = System_String__Split(OverwriteImageIdInfo, 0x2Cu, 0, 0LL);
      if ( !Master_object )
        goto LABEL_22;
      v7 = *(_QWORD *)&Master_object->max_length;
      v8 = Master_object;
      if ( v7 && (int)v7 >= 1 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= (unsigned int)v7 )
LABEL_23:
            sub_1C2209C(Master_object, v5);
          Master_object = (System_String_array *)v8->m_Items[v9];
          if ( !Master_object )
            break;
          Master_object = System_String__Split((System_String_o *)Master_object, 0x2Fu, 0, 0LL);
          if ( !Master_object )
            break;
          v10 = Master_object;
          if ( (int)Master_object->max_length >= 2 )
          {
            Master_object = (System_String_array *)System_Int32__Parse(Master_object->m_Items[0], 0LL);
            if ( v10->max_length <= 1 )
              goto LABEL_23;
            v11 = (int)Master_object;
            Master_object = (System_String_array *)System_Int32__Parse(v10->m_Items[1], 0LL);
            if ( !v6 )
              break;
            v12 = (int)Master_object;
            Master_object = (System_String_array *)CommonReleaseMaster__IsOpen(v6, v11, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v12;
          }
          LODWORD(v7) = v8->max_length;
          if ( (int)++v9 >= (int)v7 )
            return this->fields.imageId;
        }
LABEL_22:
        sub_1C22094(Master_object, v5);
      }
    }
  }
  return this->fields.imageId;
}


int32_t __fastcall ItemEntity__GetItemType(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall ItemEntity__GetMaxNum(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC877 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21737/*"maxNum"*/);
    byte_4BDC877 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21737/*"maxNum"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetNotDuplicationGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC880 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22548/*"notDuplicationGroupId"*/);
    byte_4BDC880 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22548/*"notDuplicationGroupId"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC873 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22799/*"overwriteImageIdInfo"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC873 = 1;
  }
  return ItemEntity__getScript_40646820(
           this,
           (System_String_o *)StringLiteral_22799/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC872 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22810/*"overwritePresentboxDetail"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC872 = 1;
  }
  return ItemEntity__getScript_40646820(
           this,
           (System_String_o *)StringLiteral_22810/*"overwritePresentboxDetail"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetPrice(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.sellQp;
}


int32_t __fastcall ItemEntity__GetPriceIcon(ItemEntity_o *this, const MethodInfo *method)
{
  return 24;
}


int32_t __fastcall ItemEntity__GetPriceUnitIcon(ItemEntity_o *this, const MethodInfo *method)
{
  return 14;
}


int32_t __fastcall ItemEntity__GetQuestUseItemGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC87F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23106/*"questUseItemGroupId"*/);
    byte_4BDC87F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23106/*"questUseItemGroupId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetQuestUseItemPriority(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC87E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23107/*"questUseItemPriority"*/);
    byte_4BDC87E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23107/*"questUseItemPriority"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_4BDC87C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&StringLiteral_24463/*"tradePickupTime"*/);
    byte_4BDC87C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24463/*"tradePickupTime"*/, v4->static_fields->SECONDS_PER_DAY, v2);
}


void __fastcall ItemEntity__GetUseLimitAt(
        ItemEntity_o *this,
        int32_t eventId,
        int64_t *outStartedAt,
        int64_t *outEndedAt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int64_t *p_endedAt; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDC881 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4BDC881 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    *outStartedAt = this->fields.startedAt;
    p_endedAt = &this->fields.endedAt;
    goto LABEL_10;
  }
  if ( !entity )
LABEL_11:
    sub_1C22094(Master_object, v10);
  p_endedAt = (int64_t *)&entity[6];
  *outStartedAt = (int64_t)entity[5].monitor;
LABEL_10:
  *outEndedAt = *p_endedAt;
}


bool __fastcall ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4BDC86E & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC86E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_40646144(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsEnable_40648244(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDC882 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC882 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v7);
  if ( !entity )
LABEL_15:
    sub_1C22094(Master_object, v7);
  return Time >= (__int64)entity[5].monitor && (entity[6].klass == 0LL || Time <= (__int64)entity[6].klass);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDC874 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22961/*"playEffect"*/);
    byte_4BDC874 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22961/*"playEffect"*/, 0, v2) != 1;
}


int32_t __fastcall ItemEntity__getScript(
        ItemEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ItemEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDC870 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDC870 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C22094(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C22354(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v12, v13);
}


System_String_o *__fastcall ItemEntity__getScript_40646820(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDC875 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDC875 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1C22354(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v9, v10);
}