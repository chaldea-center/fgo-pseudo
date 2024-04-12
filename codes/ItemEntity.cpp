void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1BEA & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B1BEA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1BE8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16467/*"anotherPayName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1BE8 = 1;
  }
  return ItemEntity__getScript_28305232(
           this,
           (System_String_o *)StringLiteral_16467/*"anotherPayName"*/,
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
  return System_String__Concat_44568316(v6, this->fields.unit, 0LL);
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
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = num;
  if ( (byte_42B1BE1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_23899/*"×"*/);
    byte_42B1BE1 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v7 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v7 )
      v9 = &StringLiteral_701/*"+"*/;
    else
      v9 = &StringLiteral_23899/*"×"*/;
    return System_String__Concat_44568316((System_String_o *)*v9, CountText, 0LL);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0LL);
    return System_String__Concat_44568316(v10, this->fields.unit, 0LL);
  }
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  System_String_o *OverwriteImageIdInfo; // x21
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_String_array *IsOpen; // x0
  System_String_array *v6; // x1
  __int64 v7; // x8
  System_String_array *v8; // x21
  __int64 v9; // x25
  System_String_o *v10; // x22
  System_String_array *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w22
  __int64 v15; // x0

  if ( (byte_42B1BE3 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B1BE3 = 1;
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
      Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      IsOpen = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !IsOpen )
        goto LABEL_27;
      v6 = IsOpen;
      if ( !IsOpen->max_length )
        goto LABEL_28;
      LOWORD(IsOpen->m_Items[0]) = 44;
      if ( !OverwriteImageIdInfo
        || (IsOpen = System_String__Split(OverwriteImageIdInfo, (System_Char_array *)IsOpen, 0LL)) == 0LL )
      {
LABEL_27:
        sub_B52A5C(IsOpen, v6);
      }
      v7 = *(_QWORD *)&IsOpen->max_length;
      v8 = IsOpen;
      if ( v7 && (int)v7 >= 1 )
      {
        v9 = 0LL;
        while ( (unsigned int)v9 < (unsigned int)v7 )
        {
          v10 = v8->m_Items[v9];
          IsOpen = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
          if ( !IsOpen )
            goto LABEL_27;
          v6 = IsOpen;
          if ( !IsOpen->max_length )
            break;
          LOWORD(IsOpen->m_Items[0]) = 47;
          if ( !v10 )
            goto LABEL_27;
          IsOpen = System_String__Split(v10, (System_Char_array *)IsOpen, 0LL);
          if ( !IsOpen )
            goto LABEL_27;
          v11 = IsOpen;
          if ( (int)IsOpen->max_length >= 2 )
          {
            IsOpen = (System_String_array *)System_Int32__Parse(IsOpen->m_Items[0], 0LL);
            if ( v11->max_length <= 1 )
              break;
            v12 = (int)IsOpen;
            IsOpen = (System_String_array *)System_Int32__Parse(v11->m_Items[1], 0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_27;
            v13 = (int)IsOpen;
            IsOpen = (System_String_array *)CommonReleaseMaster__IsOpen(
                                              Master_WarQuestSelectionMaster,
                                              v12,
                                              0LL,
                                              0,
                                              0LL);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
              return v13;
          }
          LODWORD(v7) = v8->max_length;
          if ( (int)++v9 >= (int)v7 )
            return this->fields.imageId;
        }
LABEL_28:
        v15 = sub_B52A88(IsOpen);
        sub_B52A28(v15, 0LL);
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

  if ( (byte_42B1BE9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20596/*"maxNum"*/);
    byte_42B1BE9 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_20596/*"maxNum"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1BE5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21537/*"overwriteImageIdInfo"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1BE5 = 1;
  }
  return ItemEntity__getScript_28305232(
           this,
           (System_String_o *)StringLiteral_21537/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1BE4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21544/*"overwritePresentboxDetail"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1BE4 = 1;
  }
  return ItemEntity__getScript_28305232(
           this,
           (System_String_o *)StringLiteral_21544/*"overwritePresentboxDetail"*/,
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

  if ( (byte_42B1BE0 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B1BE0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_28304764(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B1BE6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21666/*"playEffect"*/);
    byte_42B1BE6 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21666/*"playEffect"*/, 0, v2) != 1;
}


int32_t __fastcall ItemEntity__getScript(
        ItemEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  ItemEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1BE2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&long_TypeInfo);
    byte_42B1BE2 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B52A5C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (ItemEntity_o *)sub_B52D50(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v10, v11);
}


System_String_o *__fastcall ItemEntity__getScript_28305232(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1BE7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&string_TypeInfo);
    byte_42B1BE7 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  v9 = (ItemEntity_o *)sub_B52D50(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v9, v10);
}