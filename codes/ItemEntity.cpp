void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B472 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B472 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B46D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16792/*"anotherPayName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B46D = 1;
  }
  return ItemEntity__getScript_39384600(
           this,
           (System_String_o *)StringLiteral_16792/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B46F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17103/*"battleAppearEffectId"*/);
    byte_4A5B46F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17103/*"battleAppearEffectId"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B471 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17104/*"battleAppearItemWait"*/);
    byte_4A5B471 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17104/*"battleAppearItemWait"*/, 0, v2);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B470 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17111/*"battleGetEffectId"*/);
    byte_4A5B470 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_17111/*"battleGetEffectId"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61707032(v6, this->fields.unit, 0LL);
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
  if ( (byte_4A5B466 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_25163/*"×"*/);
    byte_4A5B466 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v7 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v7 )
      v9 = &StringLiteral_860/*"+"*/;
    else
      v9 = &StringLiteral_25163/*"×"*/;
    return System_String__Concat_61707032((System_String_o *)*v9, CountText, 0LL);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0LL);
    return System_String__Concat_61707032(v10, this->fields.unit, 0LL);
  }
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

  if ( (byte_4A5B468 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B468 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !System_String__IsNullOrEmpty(OverwriteImageIdInfo, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_1B88814(Master_object, v5);
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
        sub_1B8880C(Master_object, v5);
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

  if ( (byte_4A5B46E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21350/*"maxNum"*/);
    byte_4A5B46E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21350/*"maxNum"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B46A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22391/*"overwriteImageIdInfo"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B46A = 1;
  }
  return ItemEntity__getScript_39384600(
           this,
           (System_String_o *)StringLiteral_22391/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B469 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22401/*"overwritePresentboxDetail"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B469 = 1;
  }
  return ItemEntity__getScript_39384600(
           this,
           (System_String_o *)StringLiteral_22401/*"overwritePresentboxDetail"*/,
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

  if ( (byte_4A5B465 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B465 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_39383924(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B46B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22549/*"playEffect"*/);
    byte_4A5B46B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_22549/*"playEffect"*/, 0, v2) != 1;
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

  if ( (byte_4A5B467 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B467 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B8880C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1B88ACC(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v12, v13);
}


System_String_o *__fastcall ItemEntity__getScript_39384600(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B46C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5B46C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1B88ACC(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v9, v10);
}