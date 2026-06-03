void ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77B45 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E77B45 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B36 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17038/*"anotherPayName"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E77B36 = 1;
  }
  return ItemEntity__getScript_43734676(
           this,
           (System_String_o *)StringLiteral_17038/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B38 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17315/*"battleAppearEffectId"*/);
    byte_4E77B38 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17315/*"battleAppearEffectId"*/, 0, v2);
}


int32_t ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B3A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17316/*"battleAppearItemWait"*/);
    byte_4E77B3A = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17316/*"battleAppearItemWait"*/, 0, v2);
}


int32_t ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B39 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17325/*"battleGetEffectId"*/);
    byte_4E77B39 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17325/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0) )
    return ItemType__GetCountText(this->fields.type, num, 0);
  v6 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_65562772(v6, this->fields.unit, 0);
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
  if ( (byte_4E77B2F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_802/*"+"*/);
    sub_1D0F0B4(&StringLiteral_25790/*"×"*/);
    byte_4E77B2F = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0);
    type = this->fields.type;
    v7 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0);
    if ( v7 )
      v9 = &StringLiteral_802/*"+"*/;
    else
      v9 = &StringLiteral_25790/*"×"*/;
    return System_String__Concat_65562772((System_String_o *)*v9, CountText, 0);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0);
    return System_String__Concat_65562772(v10, this->fields.unit, 0);
  }
}


System_String_o *ItemEntity__GetDetail(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x0
  System_String_o *v4; // x20
  int64_t endedAt; // x21
  System_TimeSpan_o v6; // x0
  System_TimeSpan_o v7; // x2
  const MethodInfo *v8; // x3
  System_Globalization_CultureInfo_o *v9; // x21
  const MethodInfo *v10; // x4
  System_DateTimeOffset_o v12; // [xsp+8h] [xbp-48h] BYREF
  __int64 v13; // [xsp+18h] [xbp-38h] BYREF
  System_DateTimeOffset_o v14; // [xsp+20h] [xbp-30h] BYREF
  System_DateTimeOffset_o v15; // 0:x0.16
  System_DateTimeOffset_o v16; // 0:x0.16

  if ( (byte_4E77B44 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Globalization_CultureInfo_TypeInfo);
    sub_1D0F0B4(&System_DateTimeOffset_TypeInfo);
    sub_1D0F0B4(&System_TimeSpan_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25523/*"yyyy/M/d(ddd) HH:mm"*/);
    sub_1D0F0B4(&StringLiteral_16182/*"[endedAt]"*/);
    sub_1D0F0B4(&StringLiteral_21463/*"ja-JP"*/);
    byte_4E77B44 = 1;
  }
  *(_QWORD *)&v12.fields._offsetMinutes = 0;
  v13 = 0;
  v12.fields._dateTime.fields._dateData = 0;
  detail = this->fields.detail;
  if ( !detail )
    goto LABEL_13;
  v4 = (System_String_o *)StringLiteral_16182/*"[endedAt]"*/;
  if ( System_String__Contains(detail, (System_String_o *)StringLiteral_16182/*"[endedAt]"*/, 0) )
  {
    endedAt = this->fields.endedAt;
    if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
    v14 = System_DateTimeOffset__FromUnixTimeSeconds(endedAt, 0);
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v6.fields._ticks = (int64_t)&v13;
    System_TimeSpan___ctor_67173284(v6, 9, 0, 0, 0);
    *(_QWORD *)&v15.fields._offsetMinutes = v13;
    v15.fields._dateTime.fields._dateData = (uint64_t)&v14;
    v7.fields._ticks = 0;
    v12 = System_DateTimeOffset__ToOffset(v15, v7, v8);
    v9 = (System_Globalization_CultureInfo_o *)sub_1D0F300(System_Globalization_CultureInfo_TypeInfo);
    System_Globalization_CultureInfo___ctor_66761620(v9, (System_String_o *)StringLiteral_21463/*"ja-JP"*/, 0);
    v16.fields._dateTime.fields._dateData = (uint64_t)&v12;
    *(_QWORD *)&v16.fields._offsetMinutes = StringLiteral_25523/*"yyyy/M/d(ddd) HH:mm"*/;
    detail = System_DateTimeOffset__ToString_66977220(v16, (System_String_o *)v9, 0, v10);
    if ( this->fields.detail )
      return System_String__Replace_65609336(this->fields.detail, v4, detail, 0);
LABEL_13:
    sub_1D0F30C(detail, method);
  }
  return this->fields.detail;
}


System_String_o *ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B3D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19236/*"effectExplanation"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E77B3D = 1;
  }
  return ItemEntity__getScript_43734676(
           this,
           (System_String_o *)StringLiteral_19236/*"effectExplanation"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B3B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19479/*"eventId"*/);
    byte_4E77B3B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_19479/*"eventId"*/, 0, v2);
}


int32_t ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_array *OverwriteImageIdInfo; // x20
  System_String_o *Master_object; // x0
  __int64 v5; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v7; // x21
  unsigned int v8; // w25
  il2cpp_array_size_t klass; // x8
  System_String_array *v10; // x22
  __int64 v11; // x26
  System_String_array *v12; // x23
  int32_t v13; // w24
  int32_t v14; // w23

  if ( (byte_4E77B31 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E77B31 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OverwriteImageIdInfo, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
LABEL_27:
        sub_1D0F30C(Master_object, v5);
      max_length = OverwriteImageIdInfo->max_length;
      if ( max_length >= 1 )
      {
        v7 = (CommonReleaseMaster_o *)Master_object;
        v8 = 0;
        while ( 1 )
        {
          if ( v8 >= max_length )
            goto LABEL_28;
          Master_object = OverwriteImageIdInfo->m_Items[v8];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Cu, 0, 0);
          if ( !Master_object )
            goto LABEL_27;
          klass = (il2cpp_array_size_t)Master_object[1].klass;
          v10 = (System_String_array *)Master_object;
          if ( klass )
          {
            if ( (int)klass >= 1 )
              break;
          }
LABEL_24:
          max_length = OverwriteImageIdInfo->max_length;
          if ( (int)++v8 >= max_length )
            return this->fields.imageId;
        }
        v11 = 0;
        while ( (unsigned int)v11 < (unsigned int)klass )
        {
          Master_object = v10->m_Items[v11];
          if ( !Master_object )
            goto LABEL_27;
          Master_object = (System_String_o *)System_String__Split(Master_object, 0x2Fu, 0, 0);
          if ( !Master_object )
            goto LABEL_27;
          v12 = (System_String_array *)Master_object;
          if ( SLODWORD(Master_object[1].klass) >= 2 )
          {
            Master_object = (System_String_o *)System_Int32__Parse((System_String_o *)Master_object[1].monitor, 0);
            if ( LODWORD(v12->max_length) <= 1 )
              break;
            v13 = (int)Master_object;
            Master_object = (System_String_o *)System_Int32__Parse(v12->m_Items[1], 0);
            if ( !v7 )
              goto LABEL_27;
            v14 = (int)Master_object;
            Master_object = (System_String_o *)CommonReleaseMaster__IsOpen(v7, v13, 0, 0, 0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v14;
          }
          LODWORD(klass) = v10->max_length;
          if ( (int)++v11 >= (int)klass )
            goto LABEL_24;
        }
LABEL_28:
        sub_1D0F314(Master_object);
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

  if ( (byte_4E77B37 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21930/*"maxNum"*/);
    byte_4E77B37 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21930/*"maxNum"*/, 0, v2);
}


int32_t ItemEntity__GetNotDuplicationGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B40 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22738/*"notDuplicationGroupId"*/);
    byte_4E77B40 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22738/*"notDuplicationGroupId"*/, 0, v2);
}


System_String_array *ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77B33 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23003/*"overwriteImageIdInfo"*/);
    byte_4E77B33 = 1;
  }
  return EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_23003/*"overwriteImageIdInfo"*/, 0, 0);
}


System_String_o *ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B32 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23018/*"overwritePresentboxDetail"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E77B32 = 1;
  }
  return ItemEntity__getScript_43734676(
           this,
           (System_String_o *)StringLiteral_23018/*"overwritePresentboxDetail"*/,
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


int32_t ItemEntity__GetQuestUseItemGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B3F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23334/*"questUseItemGroupId"*/);
    byte_4E77B3F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23334/*"questUseItemGroupId"*/, 0, v2);
}


int32_t ItemEntity__GetQuestUseItemPriority(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B3E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23335/*"questUseItemPriority"*/);
    byte_4E77B3E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23335/*"questUseItemPriority"*/, 0, v2);
}


System_Int32_array *ItemEntity__GetSkillList(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77B43 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23988/*"skillList"*/);
    byte_4E77B43 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23988/*"skillList"*/, 0, 0);
}


int32_t ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_4E77B3C & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24668/*"tradePickupTime"*/);
    byte_4E77B3C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24668/*"tradePickupTime"*/, v4->static_fields->SECONDS_PER_DAY, v2);
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

  if ( (byte_4E77B41 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4E77B41 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1D0F30C(Master_object, v13);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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

  if ( (byte_4E77B2E & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E77B2E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool ItemEntity__IsEnable_43733500(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool ItemEntity__IsEnable_43736168(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E77B42 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E77B42 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v7);
  if ( !entity )
LABEL_15:
    sub_1D0F30C(Master_object, v7);
  return Time >= (__int64)entity[5].monitor && (entity[6].klass == 0 || Time <= (__int64)entity[6].klass);
}


bool ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E77B34 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23173/*"playEffect"*/);
    byte_4E77B34 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23173/*"playEffect"*/, 0, v2) != 1;
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

  if ( (byte_4E77B30 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&long_TypeInfo);
    byte_4E77B30 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1D0F30C(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1D0F6A8(value);
  return ItemEntity__GetImageId(v12, v13);
}


System_String_o *ItemEntity__getScript_43734676(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E77B35 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&string_TypeInfo);
    byte_4E77B35 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1D0F6A8(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v9, v10);
}