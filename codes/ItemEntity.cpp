void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA512 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA512 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA50D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16553/*"anotherPayName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA50D = 1;
  }
  return ItemEntity__getScript_28493868(
           this,
           (System_String_o *)StringLiteral_16553/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall ItemEntity__GetBattleAppearEffect(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA50F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16843/*"battleAppearEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EA50F = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_16843/*"battleAppearEffectId"*/, 0, v3);
}


int32_t __fastcall ItemEntity__GetBattleAppearItemWait(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA511 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16844/*"battleAppearItemWait"*/, (_DWORD)method, v2, v3);
    byte_42EA511 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_16844/*"battleAppearItemWait"*/, 0, v3);
}


int32_t __fastcall ItemEntity__GetBattleGetEffect(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA510 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16851/*"battleGetEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EA510 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_16851/*"battleGetEffectId"*/, 0, v3);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, 0LL);
  v6 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44577788(v6, this->fields.unit, 0LL);
}


System_String_o *__fastcall ItemEntity__GetCountTextWithPrefix(
        ItemEntity_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  bool IsCountableWithPlus; // w0
  int32_t type; // w8
  bool v11; // w19
  System_String_o *CountText; // x1
  __int64 *v13; // x8
  System_String_o *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = num;
  if ( (byte_42EA506 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_699/*"+"*/, num, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_24017/*"×"*/, v6, v7, v8);
    byte_42EA506 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    IsCountableWithPlus = ItemType__IsCountableWithPlus(this->fields.type, 0LL);
    type = this->fields.type;
    v11 = IsCountableWithPlus;
    CountText = ItemType__GetCountText(type, num, 0LL);
    if ( v11 )
      v13 = &StringLiteral_699/*"+"*/;
    else
      v13 = &StringLiteral_24017/*"×"*/;
    return System_String__Concat_44577788((System_String_o *)*v13, CountText, 0LL);
  }
  else
  {
    v14 = System_Int32__ToString((int32_t)&v16, 0LL);
    return System_String__Concat_44577788(v14, this->fields.unit, 0LL);
  }
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *OverwriteImageIdInfo; // x21
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_String_array *IsOpen; // x0
  System_String_array *v14; // x1
  __int64 v15; // x8
  System_String_array *v16; // x21
  __int64 v17; // x25
  System_String_o *v18; // x22
  System_String_array *v19; // x22
  int32_t v20; // w23
  int32_t v21; // w22
  __int64 v23; // x0

  if ( (byte_42EA508 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42EA508 = 1;
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
      Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      IsOpen = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !IsOpen )
        goto LABEL_27;
      v14 = IsOpen;
      if ( !IsOpen->max_length )
        goto LABEL_28;
      LOWORD(IsOpen->m_Items[0]) = 44;
      if ( !OverwriteImageIdInfo
        || (IsOpen = System_String__Split(OverwriteImageIdInfo, (System_Char_array *)IsOpen, 0LL)) == 0LL )
      {
LABEL_27:
        sub_B5D69C(IsOpen, v14);
      }
      v15 = *(_QWORD *)&IsOpen->max_length;
      v16 = IsOpen;
      if ( v15 && (int)v15 >= 1 )
      {
        v17 = 0LL;
        while ( (unsigned int)v17 < (unsigned int)v15 )
        {
          v18 = v16->m_Items[v17];
          IsOpen = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !IsOpen )
            goto LABEL_27;
          v14 = IsOpen;
          if ( !IsOpen->max_length )
            break;
          LOWORD(IsOpen->m_Items[0]) = 47;
          if ( !v18 )
            goto LABEL_27;
          IsOpen = System_String__Split(v18, (System_Char_array *)IsOpen, 0LL);
          if ( !IsOpen )
            goto LABEL_27;
          v19 = IsOpen;
          if ( (int)IsOpen->max_length >= 2 )
          {
            IsOpen = (System_String_array *)System_Int32__Parse(IsOpen->m_Items[0], 0LL);
            if ( v19->max_length <= 1 )
              break;
            v20 = (int)IsOpen;
            IsOpen = (System_String_array *)System_Int32__Parse(v19->m_Items[1], 0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_27;
            v21 = (int)IsOpen;
            IsOpen = (System_String_array *)CommonReleaseMaster__IsOpen(
                                              Master_WarQuestSelectionMaster,
                                              v20,
                                              0LL,
                                              0,
                                              0LL);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
              return v21;
          }
          LODWORD(v15) = v16->max_length;
          if ( (int)++v17 >= (int)v15 )
            return this->fields.imageId;
        }
LABEL_28:
        v23 = sub_B5D6C8(IsOpen);
        sub_B5D668(v23, 0LL);
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
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA50E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20701/*"maxNum"*/, (_DWORD)method, v2, v3);
    byte_42EA50E = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_20701/*"maxNum"*/, 0, v3);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA50A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21648/*"overwriteImageIdInfo"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA50A = 1;
  }
  return ItemEntity__getScript_28493868(
           this,
           (System_String_o *)StringLiteral_21648/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA509 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21657/*"overwritePresentboxDetail"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA509 = 1;
  }
  return ItemEntity__getScript_28493868(
           this,
           (System_String_o *)StringLiteral_21657/*"overwritePresentboxDetail"*/,
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


bool __fastcall ItemEntity__IsEnable(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x0

  if ( (byte_42EA505 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA505 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_28493400(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EA50B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21779/*"playEffect"*/, (_DWORD)method, v2, v3);
    byte_42EA50B = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21779/*"playEffect"*/, 0, v3) != 1;
}


int32_t __fastcall ItemEntity__getScript(
        ItemEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  ItemEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42EA507 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42EA507 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_B5D69C(0LL, v11);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v13 = (ItemEntity_o *)sub_B5D990(value);
  return (unsigned int)ItemEntity__GetOverwriteImageIdInfo(v13, v14);
}


System_String_o *__fastcall ItemEntity__getScript_28493868(
        ItemEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ItemEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42EA50C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    sub_B5D5C4(&string_TypeInfo, v7, v8, v9);
    byte_42EA50C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return v4;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return v4;
  v4 = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return v4;
  v12 = (ItemEntity_o *)sub_B5D990(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v12, v13);
}