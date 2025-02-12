void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4A19 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_int___ctor__, method);
    byte_4BB4A19 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3236140 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BB4A0F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17047/*"anim_draw"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB4A0F = 1;
  }
  return ItemEntity__getScript_40545748(
           this,
           (System_String_o *)StringLiteral_17047/*"anim_draw"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4A11 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17364/*"battle"*/, method);
    byte_4BB4A11 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17364/*"battle"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4A13 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17365/*"battle/commandSpell"*/, method);
    byte_4BB4A13 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17365/*"battle/commandSpell"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4A12 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17372/*"battle/setup"*/, method);
    byte_4BB4A12 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17372/*"battle/setup"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62967944(v6, this->fields.unit, 0LL);
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
  if ( (byte_4BB4A08 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_858/*"+"*/, *(_QWORD *)&num);
    sub_1C13D24(&StringLiteral_25567/*"{}"*/, v5);
    byte_4BB4A08 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v8 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v8 )
      v10 = &StringLiteral_858/*"+"*/;
    else
      v10 = &StringLiteral_25567/*"{}"*/;
    return System_String__Concat_62967944((System_String_o *)*v10, CountText, 0LL);
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&v13, 0LL);
    return System_String__Concat_62967944(v11, this->fields.unit, 0LL);
  }
}


System_String_o *__fastcall ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BB4A16 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19208/*"effect/ef_noblegauge01"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB4A16 = 1;
  }
  return ItemEntity__getScript_40545748(
           this,
           (System_String_o *)StringLiteral_19208/*"effect/ef_noblegauge01"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4A14 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19431/*"event/location"*/, method);
    byte_4BB4A14 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_19431/*"event/location"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *OverwriteImageIdInfo; // x21
  System_String_array *Master_object; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x20
  __int64 v8; // x8
  System_String_array *v9; // x21
  __int64 v10; // x24
  System_String_array *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w22

  if ( (byte_4BB4A0A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    byte_4BB4A0A = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !System_String__IsNullOrEmpty(OverwriteImageIdInfo, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
        goto LABEL_22;
      v7 = (CommonReleaseMaster_o *)Master_object;
      Master_object = System_String__Split(OverwriteImageIdInfo, 0x2Cu, 0, 0LL);
      if ( !Master_object )
        goto LABEL_22;
      v8 = *(_QWORD *)&Master_object->max_length;
      v9 = Master_object;
      if ( v8 && (int)v8 >= 1 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= (unsigned int)v8 )
LABEL_23:
            sub_1C13F88(Master_object, v6);
          Master_object = (System_String_array *)v9->m_Items[v10];
          if ( !Master_object )
            break;
          Master_object = System_String__Split((System_String_o *)Master_object, 0x2Fu, 0, 0LL);
          if ( !Master_object )
            break;
          v11 = Master_object;
          if ( (int)Master_object->max_length >= 2 )
          {
            Master_object = (System_String_array *)System_Int32__Parse(Master_object->m_Items[0], 0LL);
            if ( v11->max_length <= 1 )
              goto LABEL_23;
            v12 = (int)Master_object;
            Master_object = (System_String_array *)System_Int32__Parse(v11->m_Items[1], 0LL);
            if ( !v7 )
              break;
            v13 = (int)Master_object;
            Master_object = (System_String_array *)CommonReleaseMaster__IsOpen(v7, v12, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v13;
          }
          LODWORD(v8) = v9->max_length;
          if ( (int)++v10 >= (int)v8 )
            return this->fields.imageId;
        }
LABEL_22:
        sub_1C13F80(Master_object, v6);
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

  if ( (byte_4BB4A10 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21705/*"materialbranchroutesave.dat"*/, method);
    byte_4BB4A10 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21705/*"materialbranchroutesave.dat"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BB4A0C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22762/*"overwriteAttackCost"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB4A0C = 1;
  }
  return ItemEntity__getScript_40545748(
           this,
           (System_String_o *)StringLiteral_22762/*"overwriteAttackCost"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BB4A0B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22773/*"overwriteDetailText"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB4A0B = 1;
  }
  return ItemEntity__getScript_40545748(
           this,
           (System_String_o *)StringLiteral_22773/*"overwriteDetailText"*/,
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


int32_t __fastcall ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0

  if ( (byte_4BB4A15 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&StringLiteral_24423/*"trackAdRevenue"*/, v4);
    byte_4BB4A15 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24423/*"trackAdRevenue"*/, v5->static_fields->SECONDS_PER_DAY, v2);
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
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int64_t *p_endedAt; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4A17 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&DataManager_TypeInfo, v9);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10);
    byte_4BB4A17 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3238670 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    *outStartedAt = this->fields.startedAt;
    p_endedAt = &this->fields.endedAt;
    goto LABEL_10;
  }
  if ( !entity )
LABEL_11:
    sub_1C13F80(Master_object, v12);
  p_endedAt = (int64_t *)&entity[6];
  *outStartedAt = (int64_t)entity[5].monitor;
LABEL_10:
  *outEndedAt = *p_endedAt;
}


bool __fastcall ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4BB4A07 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BB4A07 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_40545072(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemEntity__IsEnable_40546944(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB4A18 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    byte_4BB4A18 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3238670 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v10);
  if ( !entity )
LABEL_15:
    sub_1C13F80(Master_object, v10);
  return Time >= (__int64)entity[5].monitor && (entity[6].klass == 0LL || Time <= (__int64)entity[6].klass);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4A0D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22923/*"piece"*/, method);
    byte_4BB4A0D = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22923/*"piece"*/, 0, v2) != 1;
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

  if ( (byte_4BB4A09 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C13D24(&long_TypeInfo, v7);
    byte_4BB4A09 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C13F80(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1C14240(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v13, v14);
}


System_String_o *__fastcall ItemEntity__getScript_40545748(
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

  if ( (byte_4BB4A0E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C13D24(&string_TypeInfo, v7);
    byte_4BB4A0E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1C14240(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}