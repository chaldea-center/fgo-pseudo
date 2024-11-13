void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16513 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16513 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B1650C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16960/*"anotherPayName"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B1650C = 1;
  }
  return ItemEntity__getScript_40108400(
           this,
           (System_String_o *)StringLiteral_16960/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1650E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17275/*"battleAppearEffectId"*/, method, v2);
    byte_4B1650E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17275/*"battleAppearEffectId"*/, 0, v3);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16510 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17276/*"battleAppearItemWait"*/, method, v2);
    byte_4B16510 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17276/*"battleAppearItemWait"*/, 0, v3);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1650F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17283/*"battleGetEffectId"*/, method, v2);
    byte_4B1650F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17283/*"battleGetEffectId"*/, 0, v3);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62401220(v6, this->fields.unit, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemEntity__GetCountTextWithPrefix(
        ItemEntity_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  bool IsCountableWithPlus; // w0
  int32_t type; // w8
  bool v9; // w19
  System_String_o *CountText; // x1
  __int64 *v11; // x8
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = num;
  if ( (byte_4B16505 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, *(_QWORD *)&num, method);
    sub_1BCA7E0(&StringLiteral_25418/*"×"*/, v5, v6);
    byte_4B16505 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v9 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v9 )
      v11 = &StringLiteral_855/*"+"*/;
    else
      v11 = &StringLiteral_25418/*"×"*/;
    return System_String__Concat_62401220((System_String_o *)*v11, CountText, 0LL);
  }
  else
  {
    v12 = System_Int32__ToString((int32_t)&v14, 0LL);
    return System_String__Concat_62401220(v12, this->fields.unit, 0LL);
  }
}


int32_t __fastcall ItemEntity__GetEventId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16511 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, method, v2);
    byte_4B16511 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_19329/*"eventId"*/, 0, v3);
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *OverwriteImageIdInfo; // x21
  __int64 v7; // x1
  System_String_array *Master_object; // x0
  __int64 v9; // x1
  CommonReleaseMaster_o *v10; // x20
  __int64 v11; // x8
  System_String_array *v12; // x21
  __int64 v13; // x24
  System_String_array *v14; // x22
  int32_t v15; // w23
  int32_t v16; // w22

  if ( (byte_4B16507 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16507 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !System_String__IsNullOrEmpty(OverwriteImageIdInfo, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
      Master_object = (System_String_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !OverwriteImageIdInfo )
        goto LABEL_22;
      v10 = (CommonReleaseMaster_o *)Master_object;
      Master_object = System_String__Split(OverwriteImageIdInfo, 0x2Cu, 0, 0LL);
      if ( !Master_object )
        goto LABEL_22;
      v11 = *(_QWORD *)&Master_object->max_length;
      v12 = Master_object;
      if ( v11 && (int)v11 >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v13 >= (unsigned int)v11 )
LABEL_23:
            sub_1BCAA44(Master_object, v9);
          Master_object = (System_String_array *)v12->m_Items[v13];
          if ( !Master_object )
            break;
          Master_object = System_String__Split((System_String_o *)Master_object, 0x2Fu, 0, 0LL);
          if ( !Master_object )
            break;
          v14 = Master_object;
          if ( (int)Master_object->max_length >= 2 )
          {
            Master_object = (System_String_array *)System_Int32__Parse(Master_object->m_Items[0], 0LL);
            if ( v14->max_length <= 1 )
              goto LABEL_23;
            v15 = (int)Master_object;
            Master_object = (System_String_array *)System_Int32__Parse(v14->m_Items[1], 0LL);
            if ( !v10 )
              break;
            v16 = (int)Master_object;
            Master_object = (System_String_array *)CommonReleaseMaster__IsOpen(v10, v15, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              return v16;
          }
          LODWORD(v11) = v12->max_length;
          if ( (int)++v13 >= (int)v11 )
            return this->fields.imageId;
        }
LABEL_22:
        sub_1BCAA3C(Master_object, v9);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1650D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21584/*"maxNum"*/, method, v2);
    byte_4B1650D = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21584/*"maxNum"*/, 0, v3);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16509 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22632/*"overwriteImageIdInfo"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16509 = 1;
  }
  return ItemEntity__getScript_40108400(
           this,
           (System_String_o *)StringLiteral_22632/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16508 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22642/*"overwritePresentboxDetail"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16508 = 1;
  }
  return ItemEntity__getScript_40108400(
           this,
           (System_String_o *)StringLiteral_22642/*"overwritePresentboxDetail"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0

  if ( (byte_4B16512 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24281/*"tradePickupTime"*/, v5, v6);
    byte_4B16512 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v7 = BalanceConfig_TypeInfo;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_24281/*"tradePickupTime"*/, v7->static_fields->SECONDS_PER_DAY, v3);
}


bool __fastcall ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0

  if ( (byte_4B16504 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16504 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_40107724(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1650A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22791/*"playEffect"*/, method, v2);
    byte_4B1650A = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22791/*"playEffect"*/, 0, v3) != 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ItemEntity__getScript(
        ItemEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  ItemEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_4B16506 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B16506 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v10);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v11, v12);
  sub_1BCACFC(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v14, v15);
}


System_String_o *__fastcall ItemEntity__getScript_40108400(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_4B1650B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, defVal);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    byte_4B1650B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return v4;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return v4;
  v4 = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return v4;
  sub_1BCACFC(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v11, v12);
}