void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215D1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4215D1A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4215D18 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16404/*"anotherPayName"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215D18 = 1;
  }
  return ItemEntity__getScript_26852112(
           this,
           (System_String_o *)StringLiteral_16404/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43849904(v6, this->fields.unit, 0LL);
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
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = num;
  if ( (byte_4215D11 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_697/*"+"*/, *(_QWORD *)&num);
    sub_B0D8A4(&StringLiteral_23783/*"×"*/, v5);
    byte_4215D11 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v8 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v8 )
      v10 = &StringLiteral_697/*"+"*/;
    else
      v10 = &StringLiteral_23783/*"×"*/;
    return System_String__Concat_43849904((System_String_o *)*v10, CountText, 0LL);
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&v13, 0LL);
    return System_String__Concat_43849904(v11, this->fields.unit, 0LL);
  }
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *OverwriteImageIdInfo; // x21
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_String_array *IsOpen; // x0
  __int64 v8; // x8
  System_String_array *v9; // x21
  __int64 v10; // x25
  System_String_o *v11; // x22
  System_String_array *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w22
  __int64 v16; // x0

  if ( (byte_4215D13 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_4215D13 = 1;
  }
  if ( this->fields.type == 29 )
  {
    OverwriteImageIdInfo = ItemEntity__GetOverwriteImageIdInfo(this, method);
    if ( !System_String__IsNullOrEmpty(OverwriteImageIdInfo, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      IsOpen = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !IsOpen )
        goto LABEL_27;
      if ( !IsOpen->max_length )
        goto LABEL_28;
      LOWORD(IsOpen->m_Items[0]) = 44;
      if ( !OverwriteImageIdInfo
        || (IsOpen = System_String__Split(OverwriteImageIdInfo, (System_Char_array *)IsOpen, 0LL)) == 0LL )
      {
LABEL_27:
        sub_B0D97C(IsOpen);
      }
      v8 = *(_QWORD *)&IsOpen->max_length;
      v9 = IsOpen;
      if ( v8 && (int)v8 >= 1 )
      {
        v10 = 0LL;
        while ( (unsigned int)v10 < (unsigned int)v8 )
        {
          v11 = v9->m_Items[v10];
          IsOpen = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !IsOpen )
            goto LABEL_27;
          if ( !IsOpen->max_length )
            break;
          LOWORD(IsOpen->m_Items[0]) = 47;
          if ( !v11 )
            goto LABEL_27;
          IsOpen = System_String__Split(v11, (System_Char_array *)IsOpen, 0LL);
          if ( !IsOpen )
            goto LABEL_27;
          v12 = IsOpen;
          if ( (int)IsOpen->max_length >= 2 )
          {
            IsOpen = (System_String_array *)System_Int32__Parse(IsOpen->m_Items[0], 0LL);
            if ( v12->max_length <= 1 )
              break;
            v13 = (int)IsOpen;
            IsOpen = (System_String_array *)System_Int32__Parse(v12->m_Items[1], 0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_27;
            v14 = (int)IsOpen;
            IsOpen = (System_String_array *)CommonReleaseMaster__IsOpen(
                                              Master_WarQuestSelectionMaster,
                                              v13,
                                              0LL,
                                              0,
                                              0LL);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
              return v14;
          }
          LODWORD(v8) = v9->max_length;
          if ( (int)++v10 >= (int)v8 )
            return this->fields.imageId;
        }
LABEL_28:
        v16 = sub_B0D9A8(IsOpen);
        sub_B0D948(v16, 0LL);
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

  if ( (byte_4215D19 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20504/*"maxNum"*/, method);
    byte_4215D19 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_20504/*"maxNum"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4215D15 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21436/*"overwriteImageIdInfo"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215D15 = 1;
  }
  return ItemEntity__getScript_26852112(
           this,
           (System_String_o *)StringLiteral_21436/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4215D14 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21443/*"overwritePresentboxDetail"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215D14 = 1;
  }
  return ItemEntity__getScript_26852112(
           this,
           (System_String_o *)StringLiteral_21443/*"overwritePresentboxDetail"*/,
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

  if ( (byte_4215D10 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4215D10 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_26851644(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4215D16 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21560/*"playEffect"*/, method);
    byte_4215D16 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21560/*"playEffect"*/, 0, v2) != 1;
}


int32_t __fastcall ItemEntity__getScript(
        ItemEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4215D12 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B0D8A4(&long_TypeInfo, v7);
    byte_4215D12 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B0D97C(0LL);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (ItemEntity_o *)sub_B0DC70(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v10, v11);
}


System_String_o *__fastcall ItemEntity__getScript_26852112(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4215D17 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B0D8A4(&string_TypeInfo, v7);
    byte_4215D17 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  v10 = (ItemEntity_o *)sub_B0DC70(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}