void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E802 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_int___ctor__, method);
    byte_4A4E802 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3211D9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A4E7F5 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16557/*"anotherPayName"*/, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4E7F5 = 1;
  }
  return ItemEntity__getScript_40375128(
           this,
           (System_String_o *)StringLiteral_16557/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7F7 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16858/*"battleAppearEffectId"*/, method);
    byte_4A4E7F7 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_16858/*"battleAppearEffectId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7F9 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16859/*"battleAppearItemWait"*/, method);
    byte_4A4E7F9 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_16859/*"battleAppearItemWait"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7F8 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16866/*"battleGetEffectId"*/, method);
    byte_4A4E7F8 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_16866/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61645176(v6, this->fields.unit, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemEntity__GetCountTextWithPrefix(
        ItemEntity_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsCountableWithPlus; // w0
  int32_t type; // w8
  bool v8; // w19
  System_String_o *CountText; // x1
  __int64 *v10; // x8
  System_String_o *v11; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = num;
  if ( (byte_4A4E7EE & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_809/*"+"*/, *(_QWORD *)&num);
    sub_1B863B8(&StringLiteral_24996/*"×"*/, v5);
    byte_4A4E7EE = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v8 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v8 )
      v10 = &StringLiteral_809/*"+"*/;
    else
      v10 = &StringLiteral_24996/*"×"*/;
    return System_String__Concat_61645176((System_String_o *)*v10, CountText, 0LL);
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&v13, 0LL);
    return System_String__Concat_61645176(v11, this->fields.unit, 0LL);
  }
}


System_String_o *__fastcall ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A4E7FC & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18683/*"effectExplanation"*/, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4E7FC = 1;
  }
  return ItemEntity__getScript_40375128(
           this,
           (System_String_o *)StringLiteral_18683/*"effectExplanation"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7FA & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18908/*"eventId"*/, method);
    byte_4A4E7FA = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_18908/*"eventId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *OverwriteImageIdInfo; // x20
  System_String_o *Master_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v8; // x21
  unsigned int v9; // w25
  System_String_c *klass; // x8
  System_String_array *v11; // x22
  __int64 v12; // x26
  System_String_array *v13; // x23
  int32_t v14; // w24
  int32_t v15; // w23

  if ( (byte_4A4E7F0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    byte_4A4E7F0 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OverwriteImageIdInfo, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
LABEL_27:
        sub_1B86614(Master_object, v6);
      max_length = OverwriteImageIdInfo->max_length;
      if ( max_length >= 1 )
      {
        v8 = (CommonReleaseMaster_o *)Master_object;
        v9 = 0;
        while ( 1 )
        {
          if ( v9 >= max_length )
            goto LABEL_28;
          Master_object = OverwriteImageIdInfo->m_Items[v9];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Cu, 0, 0LL);
          if ( !Master_object )
            goto LABEL_27;
          klass = Master_object[1].klass;
          v11 = (System_String_array *)Master_object;
          if ( klass )
          {
            if ( (int)klass >= 1 )
              break;
          }
LABEL_24:
          max_length = OverwriteImageIdInfo->max_length;
          if ( (int)++v9 >= max_length )
            return this->fields.imageId;
        }
        v12 = 0LL;
        while ( (unsigned int)v12 < (unsigned int)klass )
        {
          Master_object = v11->m_Items[v12];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Fu, 0, 0LL);
          if ( !Master_object )
            goto LABEL_27;
          v13 = (System_String_array *)Master_object;
          if ( SLODWORD(Master_object[1].klass) >= 2 )
          {
            Master_object = (System_String_o *)System_Int32__Parse((System_String_o *)Master_object[1].monitor, 0LL);
            if ( v13->max_length <= 1 )
              break;
            v14 = (int)Master_object;
            Master_object = (System_String_o *)System_Int32__Parse(v13->m_Items[1], 0LL);
            if ( !v8 )
              goto LABEL_27;
            v15 = (int)Master_object;
            Master_object = (System_String_o *)CommonReleaseMaster__IsOpen(v8, v14, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v15;
          }
          LODWORD(klass) = v11->max_length;
          if ( (int)++v12 >= (int)klass )
            goto LABEL_24;
        }
LABEL_28:
        sub_1B8661C(Master_object, v6);
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

  if ( (byte_4A4E7F6 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_21178/*"maxNum"*/, method);
    byte_4A4E7F6 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21178/*"maxNum"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetNotDuplicationGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7FF & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_21981/*"notDuplicationGroupId"*/, method);
    byte_4A4E7FF = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21981/*"notDuplicationGroupId"*/, 0, v2);
}


System_String_array *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E7F2 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22232/*"overwriteImageIdInfo"*/, method);
    byte_4A4E7F2 = 1;
  }
  return EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_22232/*"overwriteImageIdInfo"*/, 0LL, 0LL);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A4E7F1 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22244/*"overwritePresentboxDetail"*/, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4E7F1 = 1;
  }
  return ItemEntity__getScript_40375128(
           this,
           (System_String_o *)StringLiteral_22244/*"overwritePresentboxDetail"*/,
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

  if ( (byte_4A4E7FE & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22544/*"questUseItemGroupId"*/, method);
    byte_4A4E7FE = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22544/*"questUseItemGroupId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetQuestUseItemPriority(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7FD & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22545/*"questUseItemPriority"*/, method);
    byte_4A4E7FD = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22545/*"questUseItemPriority"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0

  if ( (byte_4A4E7FB & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&StringLiteral_23869/*"tradePickupTime"*/, v4);
    byte_4A4E7FB = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23869/*"tradePickupTime"*/, v5->static_fields->SECONDS_PER_DAY, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemEntity__GetUseLimitAt(
        ItemEntity_o *this,
        int32_t eventId,
        int64_t *outStartedAt,
        int64_t *outEndedAt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t *p_endedAt; // x23
  int64_t endedAt; // x25
  BalanceConfig_c *v14; // x0
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4E800 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    byte_4A4E800 = 1;
  }
  entity = 0LL;
  p_endedAt = &this->fields.endedAt;
  endedAt = this->fields.endedAt;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( endedAt >= v14->static_fields->NoneExpireTime )
    goto LABEL_12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1B86614(Master_object, v16);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_12:
    *outStartedAt = this->fields.startedAt;
    goto LABEL_13;
  }
  if ( !entity )
    goto LABEL_14;
  p_endedAt = (int64_t *)&entity[6];
  *outStartedAt = (int64_t)entity[5].monitor;
LABEL_13:
  *outEndedAt = *p_endedAt;
}


bool __fastcall ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4A4E7ED & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4E7ED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_40374476(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemEntity__IsEnable_40376620(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E801 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    byte_4A4E801 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v10);
  if ( !entity )
LABEL_15:
    sub_1B86614(Master_object, v10);
  return Time >= (__int64)entity[5].monitor && (entity[6].klass == 0LL || Time <= (__int64)entity[6].klass);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4E7F3 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22393/*"playEffect"*/, method);
    byte_4A4E7F3 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22393/*"playEffect"*/, 0, v2) != 1;
}


int32_t __fastcall ItemEntity__getScript(
        ItemEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ItemEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E7EF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B863B8(&long_TypeInfo, v7);
    byte_4A4E7EF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B86614(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1B868D4(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v13, v14);
}


System_String_o *__fastcall ItemEntity__getScript_40375128(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E7F4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B863B8(&string_TypeInfo, v7);
    byte_4A4E7F4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1B868D4(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}