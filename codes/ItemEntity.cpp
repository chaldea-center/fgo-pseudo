void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188FB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188FB7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4188FB5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16355/*"anotherPayName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188FB5 = 1;
  }
  return ItemEntity__getScript_27390864(
           this,
           (System_String_o *)StringLiteral_16355/*"anotherPayName"*/,
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
  return System_String__Concat_44305532(v6, this->fields.unit, 0LL);
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
  if ( (byte_4188FAE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_691/*"+"*/, *(_QWORD *)&num);
    sub_B2C35C(&StringLiteral_23705/*"×"*/, v5);
    byte_4188FAE = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v8 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v8 )
      v10 = &StringLiteral_691/*"+"*/;
    else
      v10 = &StringLiteral_23705/*"×"*/;
    return System_String__Concat_44305532((System_String_o *)*v10, CountText, 0LL);
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&v13, 0LL);
    return System_String__Concat_44305532(v11, this->fields.unit, 0LL);
  }
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *OverwriteImageIdInfo; // x21
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_String_array *IsOpen; // x0
  System_String_array *v8; // x1
  __int64 v9; // x8
  System_String_array *v10; // x21
  __int64 v11; // x25
  System_String_o *v12; // x22
  System_String_array *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w22
  __int64 v17; // x0

  if ( (byte_4188FB0 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4188FB0 = 1;
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
      Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      IsOpen = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !IsOpen )
        goto LABEL_27;
      v8 = IsOpen;
      if ( !IsOpen->max_length )
        goto LABEL_28;
      LOWORD(IsOpen->m_Items[0]) = 44;
      if ( !OverwriteImageIdInfo
        || (IsOpen = System_String__Split(OverwriteImageIdInfo, (System_Char_array *)IsOpen, 0LL)) == 0LL )
      {
LABEL_27:
        sub_B2C434(IsOpen, v8);
      }
      v9 = *(_QWORD *)&IsOpen->max_length;
      v10 = IsOpen;
      if ( v9 && (int)v9 >= 1 )
      {
        v11 = 0LL;
        while ( (unsigned int)v11 < (unsigned int)v9 )
        {
          v12 = v10->m_Items[v11];
          IsOpen = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
          if ( !IsOpen )
            goto LABEL_27;
          v8 = IsOpen;
          if ( !IsOpen->max_length )
            break;
          LOWORD(IsOpen->m_Items[0]) = 47;
          if ( !v12 )
            goto LABEL_27;
          IsOpen = System_String__Split(v12, (System_Char_array *)IsOpen, 0LL);
          if ( !IsOpen )
            goto LABEL_27;
          v13 = IsOpen;
          if ( (int)IsOpen->max_length >= 2 )
          {
            IsOpen = (System_String_array *)System_Int32__Parse(IsOpen->m_Items[0], 0LL);
            if ( v13->max_length <= 1 )
              break;
            v14 = (int)IsOpen;
            IsOpen = (System_String_array *)System_Int32__Parse(v13->m_Items[1], 0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_27;
            v15 = (int)IsOpen;
            IsOpen = (System_String_array *)CommonReleaseMaster__IsOpen(
                                              Master_WarQuestSelectionMaster,
                                              v14,
                                              0LL,
                                              0,
                                              0LL);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
              return v15;
          }
          LODWORD(v9) = v10->max_length;
          if ( (int)++v11 >= (int)v9 )
            return this->fields.imageId;
        }
LABEL_28:
        v17 = sub_B2C460(IsOpen);
        sub_B2C400(v17, 0LL);
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

  if ( (byte_4188FB6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20441/*"maxNum"*/, method);
    byte_4188FB6 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_20441/*"maxNum"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4188FB2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21367/*"overwriteImageIdInfo"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188FB2 = 1;
  }
  return ItemEntity__getScript_27390864(
           this,
           (System_String_o *)StringLiteral_21367/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4188FB1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21374/*"overwritePresentboxDetail"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188FB1 = 1;
  }
  return ItemEntity__getScript_27390864(
           this,
           (System_String_o *)StringLiteral_21374/*"overwritePresentboxDetail"*/,
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

  if ( (byte_4188FAD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188FAD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_27390396(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188FB3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21490/*"playEffect"*/, method);
    byte_4188FB3 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21490/*"playEffect"*/, 0, v2) != 1;
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
  ItemEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188FAF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4188FAF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B2C434(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v11 = (ItemEntity_o *)sub_B2C728(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v11, v12);
}


System_String_o *__fastcall ItemEntity__getScript_27390864(
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

  if ( (byte_4188FB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B2C35C(&string_TypeInfo, v7);
    byte_4188FB4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  v10 = (ItemEntity_o *)sub_B2C728(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}