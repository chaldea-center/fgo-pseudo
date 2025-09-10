void ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27664 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27664 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27657 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16788/*"anotherPayName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27657 = 1;
  }
  return ItemEntity__getScript_42043932(
           this,
           (System_String_o *)StringLiteral_16788/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27659 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17061/*"battleAppearEffectId"*/);
    byte_4C27659 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17061/*"battleAppearEffectId"*/, 0, v2);
}


int32_t ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2765B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17062/*"battleAppearItemWait"*/);
    byte_4C2765B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17062/*"battleAppearItemWait"*/, 0, v2);
}


int32_t ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2765A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17070/*"battleGetEffectId"*/);
    byte_4C2765A = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17070/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0) )
    return ItemType__GetCountText(this->fields.type, num, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63457864(v6, this->fields.unit, 0);
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
  if ( (byte_4C27650 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    sub_1C2D490(&StringLiteral_25244/*"×"*/);
    byte_4C27650 = 1;
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
      v9 = &StringLiteral_25244/*"×"*/;
    return System_String__Concat_63457864((System_String_o *)*v9, CountText, 0);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0);
    return System_String__Concat_63457864(v10, this->fields.unit, 0);
  }
}


System_String_o *ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2765E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18907/*"effectExplanation"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2765E = 1;
  }
  return ItemEntity__getScript_42043932(
           this,
           (System_String_o *)StringLiteral_18907/*"effectExplanation"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2765C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19133/*"eventId"*/);
    byte_4C2765C = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_19133/*"eventId"*/, 0, v2);
}


int32_t ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_array *OverwriteImageIdInfo; // x20
  System_String_o *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v8; // x21
  unsigned int v9; // w25
  il2cpp_array_size_t klass; // x8
  System_String_array *v11; // x22
  __int64 v12; // x26
  System_String_array *v13; // x23
  int32_t v14; // w24
  int32_t v15; // w23

  if ( (byte_4C27652 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27652 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OverwriteImageIdInfo, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
LABEL_27:
        sub_1C2D6EC(Master_object, v5);
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
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Cu, 0, 0);
          if ( !Master_object )
            goto LABEL_27;
          klass = (il2cpp_array_size_t)Master_object[1].klass;
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
        v12 = 0;
        while ( (unsigned int)v12 < (unsigned int)klass )
        {
          Master_object = v11->m_Items[v12];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Fu, 0, 0);
          if ( !Master_object )
            goto LABEL_27;
          v13 = (System_String_array *)Master_object;
          if ( SLODWORD(Master_object[1].klass) >= 2 )
          {
            Master_object = (System_String_o *)System_Int32__Parse((System_String_o *)Master_object[1].monitor, 0);
            if ( LODWORD(v13->max_length) <= 1 )
              break;
            v14 = (int)Master_object;
            Master_object = (System_String_o *)System_Int32__Parse(v13->m_Items[1], 0);
            if ( !v8 )
              goto LABEL_27;
            v15 = (int)Master_object;
            Master_object = (System_String_o *)CommonReleaseMaster__IsOpen(v8, v14, 0, 0, 0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v15;
          }
          LODWORD(klass) = v11->max_length;
          if ( (int)++v12 >= (int)klass )
            goto LABEL_24;
        }
LABEL_28:
        sub_1C2D6F4(Master_object, v5, v6);
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

  if ( (byte_4C27658 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21484/*"maxNum"*/);
    byte_4C27658 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21484/*"maxNum"*/, 0, v2);
}


int32_t ItemEntity__GetNotDuplicationGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27661 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22283/*"notDuplicationGroupId"*/);
    byte_4C27661 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22283/*"notDuplicationGroupId"*/, 0, v2);
}


System_String_array *ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27654 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22539/*"overwriteImageIdInfo"*/);
    byte_4C27654 = 1;
  }
  return EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_22539/*"overwriteImageIdInfo"*/, 0, 0);
}


System_String_o *ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27653 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22551/*"overwritePresentboxDetail"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27653 = 1;
  }
  return ItemEntity__getScript_42043932(
           this,
           (System_String_o *)StringLiteral_22551/*"overwritePresentboxDetail"*/,
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

  if ( (byte_4C27660 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22847/*"questUseItemGroupId"*/);
    byte_4C27660 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22847/*"questUseItemGroupId"*/, 0, v2);
}


int32_t ItemEntity__GetQuestUseItemPriority(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2765F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22848/*"questUseItemPriority"*/);
    byte_4C2765F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22848/*"questUseItemPriority"*/, 0, v2);
}


int32_t ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_4C2765D & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&StringLiteral_24147/*"tradePickupTime"*/);
    byte_4C2765D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24147/*"tradePickupTime"*/, v4->static_fields->SECONDS_PER_DAY, v2);
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
  __int64 v13; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27662 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C27662 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C2D6EC(Master_object, v13);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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

  if ( (byte_4C2764F & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2764F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool ItemEntity__IsEnable_42043280(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool ItemEntity__IsEnable_42045424(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27663 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27663 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v7);
  if ( !entity )
LABEL_15:
    sub_1C2D6EC(Master_object, v7);
  return Time >= (__int64)entity[5].monitor && (entity[6].klass == 0 || Time <= (__int64)entity[6].klass);
}


bool ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27655 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22696/*"playEffect"*/);
    byte_4C27655 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22696/*"playEffect"*/, 0, v2) != 1;
}


int32_t ItemEntity__getScript(ItemEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ItemEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27651 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C27651 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C2D6EC(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C2D9AC(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v12, v13);
}


System_String_o *ItemEntity__getScript_42043932(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27656 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27656 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1C2D9AC(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v9, v10);
}