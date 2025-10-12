void ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37E46 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C37E46 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
}


int32_t ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E39 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16791/*"anotherPayName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37E39 = 1;
  }
  return ItemEntity__getScript_42260400(
           this,
           (System_String_o *)StringLiteral_16791/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E3B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17064/*"battleAppearEffectId"*/);
    byte_4C37E3B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17064/*"battleAppearEffectId"*/, 0, v2);
}


int32_t ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E3D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17065/*"battleAppearItemWait"*/);
    byte_4C37E3D = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17065/*"battleAppearItemWait"*/, 0, v2);
}


int32_t ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E3C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17073/*"battleGetEffectId"*/);
    byte_4C37E3C = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17073/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0) )
    return ItemType__GetCountText(this->fields.type, num, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63518544(v6, this->fields.unit, 0);
}


System_String_o *ItemEntity__GetCountTextWithPrefix(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  bool IsCountableWithPlus; // w0
  int32_t type; // w8
  bool v7; // w19
  System_String_o *CountText; // x1
  __int64 *v9; // x8
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = num;
  if ( (byte_4C37E32 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    sub_1C32C20(&StringLiteral_25262/*"×"*/);
    byte_4C37E32 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0);
    type = this->fields.type;
    v7 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0);
    if ( v7 )
      v9 = &StringLiteral_803/*"+"*/;
    else
      v9 = &StringLiteral_25262/*"×"*/;
    return System_String__Concat_63518544((System_String_o *)*v9, CountText, 0);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0);
    return System_String__Concat_63518544(v10, this->fields.unit, 0);
  }
}


System_String_o *ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E40 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18916/*"effectExplanation"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37E40 = 1;
  }
  return ItemEntity__getScript_42260400(
           this,
           (System_String_o *)StringLiteral_18916/*"effectExplanation"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E3E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19143/*"eventId"*/);
    byte_4C37E3E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_19143/*"eventId"*/, 0, v2);
}


int32_t ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_array *OverwriteImageIdInfo; // x20
  System_String_o *Master_object; // x0
  int max_length; // w8
  CommonReleaseMaster_o *v6; // x21
  unsigned int v7; // w25
  il2cpp_array_size_t klass; // x8
  System_String_array *v9; // x22
  __int64 v10; // x26
  System_String_array *v11; // x23
  int32_t v12; // w24
  int32_t v13; // w23

  if ( (byte_4C37E34 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37E34 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OverwriteImageIdInfo, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
LABEL_27:
        sub_1C32E7C(Master_object);
      max_length = OverwriteImageIdInfo->max_length;
      if ( max_length >= 1 )
      {
        v6 = (CommonReleaseMaster_o *)Master_object;
        v7 = 0;
        while ( 1 )
        {
          if ( v7 >= max_length )
            goto LABEL_28;
          Master_object = OverwriteImageIdInfo->m_Items[v7];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Cu, 0, 0);
          if ( !Master_object )
            goto LABEL_27;
          klass = (il2cpp_array_size_t)Master_object[1].klass;
          v9 = (System_String_array *)Master_object;
          if ( klass )
          {
            if ( (int)klass >= 1 )
              break;
          }
LABEL_24:
          max_length = OverwriteImageIdInfo->max_length;
          if ( (int)++v7 >= max_length )
            return this->fields.imageId;
        }
        v10 = 0;
        while ( (unsigned int)v10 < (unsigned int)klass )
        {
          Master_object = v9->m_Items[v10];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Fu, 0, 0);
          if ( !Master_object )
            goto LABEL_27;
          v11 = (System_String_array *)Master_object;
          if ( SLODWORD(Master_object[1].klass) >= 2 )
          {
            Master_object = (System_String_o *)System_Int32__Parse((System_String_o *)Master_object[1].monitor, 0);
            if ( LODWORD(v11->max_length) <= 1 )
              break;
            v12 = (int)Master_object;
            Master_object = (System_String_o *)System_Int32__Parse(v11->m_Items[1], 0);
            if ( !v6 )
              goto LABEL_27;
            v13 = (int)Master_object;
            Master_object = (System_String_o *)CommonReleaseMaster__IsOpen(v6, v12, 0, 0, 0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v13;
          }
          LODWORD(klass) = v9->max_length;
          if ( (int)++v10 >= (int)klass )
            goto LABEL_24;
        }
LABEL_28:
        sub_1C32E84(Master_object);
      }
    }
  }
  return this->fields.imageId;
}


int32_t ItemEntity__GetItemType(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t ItemEntity__GetMaxNum(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E3A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21497/*"maxNum"*/);
    byte_4C37E3A = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21497/*"maxNum"*/, 0, v2);
}


int32_t ItemEntity__GetNotDuplicationGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E43 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22300/*"notDuplicationGroupId"*/);
    byte_4C37E43 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22300/*"notDuplicationGroupId"*/, 0, v2);
}


System_String_array *ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37E36 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22556/*"overwriteImageIdInfo"*/);
    byte_4C37E36 = 1;
  }
  return EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_22556/*"overwriteImageIdInfo"*/, 0, 0);
}


System_String_o *ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E35 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22568/*"overwritePresentboxDetail"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37E35 = 1;
  }
  return ItemEntity__getScript_42260400(
           this,
           (System_String_o *)StringLiteral_22568/*"overwritePresentboxDetail"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetPrice(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.sellQp;
}


int32_t ItemEntity__GetPriceIcon(ItemEntity_o *this, const MethodInfo *method)
{
  return 24;
}


int32_t ItemEntity__GetPriceUnitIcon(ItemEntity_o *this, const MethodInfo *method)
{
  return 14;
}


int32_t ItemEntity__GetQuestUseItemGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E42 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22864/*"questUseItemGroupId"*/);
    byte_4C37E42 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22864/*"questUseItemGroupId"*/, 0, v2);
}


int32_t ItemEntity__GetQuestUseItemPriority(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E41 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22865/*"questUseItemPriority"*/);
    byte_4C37E41 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22865/*"questUseItemPriority"*/, 0, v2);
}


int32_t ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_4C37E3F & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&StringLiteral_24165/*"tradePickupTime"*/);
    byte_4C37E3F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24165/*"tradePickupTime"*/, v4->static_fields->SECONDS_PER_DAY, v2);
}


void ItemEntity__GetUseLimitAt(
        ItemEntity_o *this,
        int32_t eventId,
        int64_t *outStartedAt,
        int64_t *outEndedAt,
        const MethodInfo *method)
{
  int64_t *p_endedAt; // x23
  int64_t endedAt; // x25
  BalanceConfig_c *v11; // x0
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C37E44 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C37E44 = 1;
  }
  entity = 0;
  p_endedAt = &this->fields.endedAt;
  endedAt = this->fields.endedAt;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( endedAt >= v11->static_fields->NoneExpireTime )
    goto LABEL_12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C32E7C(Master_object);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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


bool ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4C37E31 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37E31 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool ItemEntity__IsEnable_42259216(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool ItemEntity__IsEnable_42261892(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37E45 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37E45 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v7);
  if ( !entity )
LABEL_15:
    sub_1C32E7C(Master_object);
  return Time >= (__int64)entity[5].monitor && (entity[6].klass == 0 || Time <= (__int64)entity[6].klass);
}


bool ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C37E37 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22713/*"playEffect"*/);
    byte_4C37E37 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22713/*"playEffect"*/, 0, v2) != 1;
}


int32_t ItemEntity__getScript(ItemEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  ItemEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37E33 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C37E33 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C32E7C(0);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v8, v9);
  sub_1C3313C(value);
  return ItemEntity__GetImageId(v11, v12);
}


System_String_o *ItemEntity__getScript_42260400(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37E38 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C37E38 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1C3313C(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v9, v10);
}