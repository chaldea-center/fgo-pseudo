void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E252 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_int___ctor__, method);
    byte_4A2E252 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30FF580 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E24D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16786/*"anotherPayName"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E24D = 1;
  }
  return ItemEntity__getScript_39203796(
           this,
           (System_String_o *)StringLiteral_16786/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E24F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17097/*"battleAppearEffectId"*/, method);
    byte_4A2E24F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17097/*"battleAppearEffectId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E251 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17098/*"battleAppearItemWait"*/, method);
    byte_4A2E251 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17098/*"battleAppearItemWait"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E250 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17105/*"battleGetEffectId"*/, method);
    byte_4A2E250 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17105/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61535060(v6, this->fields.unit, 0LL);
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
  if ( (byte_4A2E246 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_860/*"+"*/, *(_QWORD *)&num);
    sub_1B761C0(&StringLiteral_25150/*"×"*/, v5);
    byte_4A2E246 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v8 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v8 )
      v10 = &StringLiteral_860/*"+"*/;
    else
      v10 = &StringLiteral_25150/*"×"*/;
    return System_String__Concat_61535060((System_String_o *)*v10, CountText, 0LL);
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&v13, 0LL);
    return System_String__Concat_61535060(v11, this->fields.unit, 0LL);
  }
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

  if ( (byte_4A2E248 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    byte_4A2E248 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !System_String__IsNullOrEmpty(OverwriteImageIdInfo, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_array *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_1B76424(Master_object, v6);
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
        sub_1B7641C(Master_object, v6);
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

  if ( (byte_4A2E24E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21343/*"maxNum"*/, method);
    byte_4A2E24E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21343/*"maxNum"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E24A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22382/*"overwriteImageIdInfo"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E24A = 1;
  }
  return ItemEntity__getScript_39203796(
           this,
           (System_String_o *)StringLiteral_22382/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E249 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22392/*"overwritePresentboxDetail"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E249 = 1;
  }
  return ItemEntity__getScript_39203796(
           this,
           (System_String_o *)StringLiteral_22392/*"overwritePresentboxDetail"*/,
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


bool __fastcall ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4A2E245 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    byte_4A2E245 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_39203120(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E24B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22539/*"playEffect"*/, method);
    byte_4A2E24B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22539/*"playEffect"*/, 0, v2) != 1;
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

  if ( (byte_4A2E247 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B761C0(&long_TypeInfo, v7);
    byte_4A2E247 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B7641C(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1B766DC(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v13, v14);
}


System_String_o *__fastcall ItemEntity__getScript_39203796(
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

  if ( (byte_4A2E24C & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B761C0(&string_TypeInfo, v7);
    byte_4A2E24C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1B766DC(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}