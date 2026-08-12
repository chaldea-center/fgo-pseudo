void ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D0D & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970D0D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970CFE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17504/*"anotherPayName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970CFE = 1;
  }
  return ItemEntity__getScript_49376732(
           this,
           (System_String_o *)StringLiteral_17504/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D00 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17794/*"battleAppearEffectId"*/);
    byte_5970D00 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17794/*"battleAppearEffectId"*/, 0, v2);
}


int32_t ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D02 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17795/*"battleAppearItemWait"*/);
    byte_5970D02 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17795/*"battleAppearItemWait"*/, 0, v2);
}


int32_t ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D01 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17805/*"battleGetEffectId"*/);
    byte_5970D01 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17805/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *unit; // x0
  System_String_o *v7; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  unit = this->fields.unit;
  v8 = num;
  if ( System_String__IsNullOrEmpty(unit, 0) )
    return ItemType__GetCountText(this->fields.type, num, 0);
  v7 = System_Int32__ToString((int32_t)&v8, 0);
  return System_String__Concat_75651716(v7, this->fields.unit, 0);
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
  if ( (byte_5970CF7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_26668/*"×"*/);
    byte_5970CF7 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0);
    type = this->fields.type;
    v7 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0);
    if ( v7 )
      v9 = &StringLiteral_861/*"+"*/;
    else
      v9 = &StringLiteral_26668/*"×"*/;
    return System_String__Concat_75651716((System_String_o *)*v9, CountText, 0);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0);
    return System_String__Concat_75651716(v10, this->fields.unit, 0);
  }
}


System_String_o *ItemEntity__GetDetail(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x0
  System_String_o *v4; // x20
  __int64 v5; // x1
  int64_t endedAt; // x21
  System_DateTimeOffset_o v7; // kr00_16
  const MethodInfo *v8; // x3
  System_Globalization_CultureInfo_o *v9; // x21
  const MethodInfo *v10; // x4
  System_DateTimeOffset_o v12; // [xsp+8h] [xbp-48h] BYREF
  __int64 v13; // [xsp+18h] [xbp-38h] BYREF
  System_DateTimeOffset_o v14; // [xsp+20h] [xbp-30h] BYREF
  System_DateTimeOffset_o v15; // 0:x0.16
  System_DateTimeOffset_o v16; // 0:x0.16

  if ( (byte_5970D0C & 1) == 0 )
  {
    sub_2213A60(&System_Globalization_CultureInfo_TypeInfo);
    sub_2213A60(&System_DateTimeOffset_TypeInfo);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&StringLiteral_26380/*"yyyy/M/d(ddd) HH:mm"*/);
    sub_2213A60(&StringLiteral_16610/*"[endedAt]"*/);
    sub_2213A60(&StringLiteral_22091/*"ja-JP"*/);
    byte_5970D0C = 1;
  }
  detail = this->fields.detail;
  v14.fields._dateTime.fields._dateData = 0;
  *(_QWORD *)&v14.fields._offsetMinutes = 0;
  *(_QWORD *)&v12.fields._offsetMinutes = 0;
  v13 = 0;
  v12.fields._dateTime.fields._dateData = 0;
  if ( !detail )
    goto LABEL_13;
  v4 = (System_String_o *)StringLiteral_16610/*"[endedAt]"*/;
  if ( System_String__Contains(detail, (System_String_o *)StringLiteral_16610/*"[endedAt]"*/, 0) )
  {
    endedAt = this->fields.endedAt;
    if ( !*(&System_DateTimeOffset_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo, v5);
    v7 = System_DateTimeOffset__FromUnixTimeSeconds(endedAt, 0);
    v14 = v7;
    if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, *(_QWORD *)&v7.fields._offsetMinutes);
    System_TimeSpan___ctor_77242956((System_TimeSpan_o)&v13, 9, 0, 0, 0);
    *(_QWORD *)&v15.fields._offsetMinutes = v13;
    v15.fields._dateTime.fields._dateData = (uint64_t)&v14;
    v12 = System_DateTimeOffset__ToOffset(v15, 0, v8);
    v9 = (System_Globalization_CultureInfo_o *)sub_2213CCC(System_Globalization_CultureInfo_TypeInfo);
    System_Globalization_CultureInfo___ctor_76757736(v9, (System_String_o *)StringLiteral_22091/*"ja-JP"*/, 0);
    v16.fields._dateTime.fields._dateData = (uint64_t)&v12;
    *(_QWORD *)&v16.fields._offsetMinutes = StringLiteral_26380/*"yyyy/M/d(ddd) HH:mm"*/;
    detail = System_DateTimeOffset__ToString_77044136(v16, (System_String_o *)v9, 0, v10);
    if ( this->fields.detail )
      return System_String__Replace_75703400(this->fields.detail, v4, detail, 0);
LABEL_13:
    sub_2213CDC(detail, method);
  }
  return this->fields.detail;
}


System_String_o *ItemEntity__GetEffectExplanation(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D05 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19788/*"effectExplanation"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970D05 = 1;
  }
  return ItemEntity__getScript_49376732(
           this,
           (System_String_o *)StringLiteral_19788/*"effectExplanation"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D03 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20037/*"eventId"*/);
    byte_5970D03 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_20037/*"eventId"*/, 0, v2);
}


int32_t ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_array *OverwriteImageIdInfo; // x20
  __int64 v4; // x1
  System_String_array *Master_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v8; // x21
  unsigned int v9; // w25
  int v10; // w8
  System_String_array *v11; // x22
  __int64 v12; // x26
  System_String_array *v13; // x23
  int32_t v14; // w24
  int32_t v15; // w23

  if ( (byte_5970CF9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970CF9 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)OverwriteImageIdInfo, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
      Master_object = (System_String_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
LABEL_26:
        sub_2213CDC(Master_object, v6);
      max_length = OverwriteImageIdInfo->max_length;
      if ( max_length >= 1 )
      {
        v8 = (CommonReleaseMaster_o *)Master_object;
        v9 = 0;
        while ( 1 )
        {
          if ( v9 >= max_length )
            goto LABEL_27;
          Master_object = (System_String_array *)OverwriteImageIdInfo->m_Items[v9];
          if ( !Master_object )
            goto LABEL_26;
          Master_object = System_String__Split((System_String_o *)Master_object, 0x2Cu, 0, 0);
          if ( !Master_object )
            goto LABEL_26;
          v10 = Master_object->max_length;
          v11 = Master_object;
          if ( v10 >= 1 )
            break;
LABEL_23:
          max_length = OverwriteImageIdInfo->max_length;
          if ( (int)++v9 >= max_length )
            return this->fields.imageId;
        }
        v12 = 0;
        while ( (unsigned int)v12 < v10 )
        {
          Master_object = (System_String_array *)v11->m_Items[v12];
          if ( !Master_object )
            goto LABEL_26;
          Master_object = System_String__Split((System_String_o *)Master_object, 0x2Fu, 0, 0);
          if ( !Master_object )
            goto LABEL_26;
          v13 = Master_object;
          if ( SLODWORD(Master_object->max_length) >= 2 )
          {
            Master_object = (System_String_array *)System_Int32__Parse(Master_object->m_Items[0], 0);
            if ( (v13->max_length & 0xFFFFFFFE) == 0 )
              break;
            v14 = (int)Master_object;
            Master_object = (System_String_array *)System_Int32__Parse(v13->m_Items[1], 0);
            if ( !v8 )
              goto LABEL_26;
            v15 = (int)Master_object;
            Master_object = (System_String_array *)CommonReleaseMaster__IsOpen(v8, v14, 0, 0, 0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v15;
          }
          v10 = v11->max_length;
          if ( (int)++v12 >= v10 )
            goto LABEL_23;
        }
LABEL_27:
        sub_2213CE4(Master_object);
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

  if ( (byte_5970CFF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22599/*"maxNum"*/);
    byte_5970CFF = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22599/*"maxNum"*/, 0, v2);
}


int32_t ItemEntity__GetNotDuplicationGroupId(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D08 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23432/*"notDuplicationGroupId"*/);
    byte_5970D08 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23432/*"notDuplicationGroupId"*/, 0, v2);
}


System_String_array *ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CFB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23702/*"overwriteImageIdInfo"*/);
    byte_5970CFB = 1;
  }
  return EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_23702/*"overwriteImageIdInfo"*/, 0, 0);
}


System_String_o *ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970CFA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23717/*"overwritePresentboxDetail"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970CFA = 1;
  }
  return ItemEntity__getScript_49376732(
           this,
           (System_String_o *)StringLiteral_23717/*"overwritePresentboxDetail"*/,
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

  if ( (byte_5970D07 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24058/*"questUseItemGroupId"*/);
    byte_5970D07 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24058/*"questUseItemGroupId"*/, 0, v2);
}


int32_t ItemEntity__GetQuestUseItemPriority(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D06 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24059/*"questUseItemPriority"*/);
    byte_5970D06 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24059/*"questUseItemPriority"*/, 0, v2);
}


System_Int32_array *ItemEntity__GetSkillList(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D0B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24758/*"skillList"*/);
    byte_5970D0B = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_24758/*"skillList"*/, 0, 0);
}


int32_t ItemEntity__GetTradePickupTime(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_5970D04 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_25469/*"tradePickupTime"*/);
    byte_5970D04 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v4 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_25469/*"tradePickupTime"*/, v4->static_fields->SECONDS_PER_DAY, v2);
}


// local variable allocation has failed, the output may be wrong!
void ItemEntity__GetUseLimitAt(
        ItemEntity_o *this,
        int32_t eventId,
        int64_t *outStartedAt,
        int64_t *outEndedAt,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  int64_t *p_endedAt; // x23
  int64_t endedAt; // x25
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5970D09 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_5970D09 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  entity = 0;
  p_endedAt = &this->fields.endedAt;
  endedAt = this->fields.endedAt;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( endedAt >= v9->static_fields->NoneExpireTime )
    goto LABEL_12;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_2213CDC(Master_object, v13);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  int64_t endedAt; // x8

  if ( (byte_5970CF6 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970CF6 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.startedAt )
    return 0;
  endedAt = this->fields.endedAt;
  return !endedAt || Time <= endedAt;
}


bool ItemEntity__IsEnable_49376108(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  int64_t endedAt; // x8
  bool v5; // cc

  if ( this->fields.startedAt > checkTime )
    return 0;
  endedAt = this->fields.endedAt;
  if ( endedAt )
    v5 = endedAt < checkTime;
  else
    v5 = 0;
  return !v5;
}


// local variable allocation has failed, the output may be wrong!
bool ItemEntity__IsEnable_49378212(ItemEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  int64_t Time; // x21
  Il2CppObject *Master_object; // x0
  const MethodInfo *v9; // x1
  Il2CppClass *klass; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D0A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970D0A = 1;
  }
  v5 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return ItemEntity__IsEnable(this, v9);
  if ( !entity )
LABEL_20:
    sub_2213CDC(Master_object, v9);
  if ( Time >= (__int64)entity[5].monitor )
  {
    klass = entity[6].klass;
    return !klass || Time <= (__int64)klass;
  }
  else
  {
    return 0;
  }
}


bool ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970CFC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23887/*"playEffect"*/);
    byte_5970CFC = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_23887/*"playEffect"*/, 0, v2) != 1;
}


int32_t ItemEntity__getScript(ItemEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  ItemEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970CF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5970CF8 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_2213CDC(0, v8);
  if ( value->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, qword_5984368, v9);
  sub_221405C(value, qword_5984368, v9);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v11, v12);
}


System_String_o *ItemEntity__getScript_49376732(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x2
  ItemEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970CFD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5970CFD = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || value->klass == (Il2CppClass *)qword_5984390 )
    return defVal;
  sub_221405C(value, qword_5984390, v8);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}