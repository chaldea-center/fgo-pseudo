void __fastcall ItemEntity___ctor(ItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC1C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FC1C3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ItemEntity__CreatePrimaryKey(ItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ItemEntity__GetAnotherPayName(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FC1C1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16291/*"anotherPayName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FC1C1 = 1;
  }
  return ItemEntity__getScript_28921972(
           this,
           (System_String_o *)StringLiteral_16291/*"anotherPayName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetCountText(ItemEntity_o *this, int32_t num, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v7; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = num;
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
    return ItemType__GetCountText(this->fields.type, num, v5);
  v7 = System_Int32__ToString((int32_t)&v8, 0LL);
  return System_String__Concat_43743732(v7, this->fields.unit, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemEntity__GetCountTextWithPrefix(
        ItemEntity_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  unsigned int type; // w0
  System_String_o *CountText; // x0
  __int64 *v9; // x8
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = num;
  if ( (byte_40FC1BA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_690/*"+"*/, *(_QWORD *)&num);
    sub_B16FFC(&StringLiteral_23611/*"×"*/, v5);
    byte_40FC1BA = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.unit, 0LL) )
  {
    type = this->fields.type;
    if ( type <= 0x10 && ((1 << type) & 0x16002) != 0 )
    {
      CountText = ItemType__GetCountText(type, num, v6);
      v9 = &StringLiteral_690/*"+"*/;
    }
    else
    {
      CountText = ItemType__GetCountText(type, num, v6);
      v9 = &StringLiteral_23611/*"×"*/;
    }
    return System_String__Concat_43743732((System_String_o *)*v9, CountText, 0LL);
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v12, 0LL);
    return System_String__Concat_43743732(v10, this->fields.unit, 0LL);
  }
}


int32_t __fastcall ItemEntity__GetImageId(ItemEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *OverwriteImageIdInfo; // x21
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v7; // x2
  __int64 IsOpen; // x0
  __int64 v9; // x2
  System_String_array *v10; // x1
  __int64 v11; // x8
  System_String_array *v12; // x21
  __int64 v13; // x25
  System_String_o *v14; // x22
  System_String_array *v15; // x22
  int32_t v16; // w23
  int32_t v17; // w0
  int32_t v18; // w22

  if ( (byte_40FC1BC & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40FC1BC = 1;
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
      Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      IsOpen = sub_B17014(char___TypeInfo, 1LL, v7);
      if ( !IsOpen )
        goto LABEL_27;
      v10 = (System_String_array *)IsOpen;
      if ( !*(_DWORD *)(IsOpen + 24) )
        goto LABEL_28;
      *(_WORD *)(IsOpen + 32) = 44;
      if ( !OverwriteImageIdInfo
        || (IsOpen = (__int64)System_String__Split(OverwriteImageIdInfo, (System_Char_array *)IsOpen, 0LL)) == 0 )
      {
LABEL_27:
        sub_B170D4();
      }
      v11 = *(_QWORD *)(IsOpen + 24);
      v12 = (System_String_array *)IsOpen;
      if ( v11 && (int)v11 >= 1 )
      {
        v13 = 0LL;
        while ( (unsigned int)v13 < (unsigned int)v11 )
        {
          v14 = v12->m_Items[v13];
          IsOpen = sub_B17014(char___TypeInfo, 1LL, v9);
          if ( !IsOpen )
            goto LABEL_27;
          v10 = (System_String_array *)IsOpen;
          if ( !*(_DWORD *)(IsOpen + 24) )
            break;
          *(_WORD *)(IsOpen + 32) = 47;
          if ( !v14 )
            goto LABEL_27;
          IsOpen = (__int64)System_String__Split(v14, (System_Char_array *)IsOpen, 0LL);
          if ( !IsOpen )
            goto LABEL_27;
          v15 = (System_String_array *)IsOpen;
          if ( *(int *)(IsOpen + 24) >= 2 )
          {
            IsOpen = System_Int32__Parse(*(System_String_o **)(IsOpen + 32), 0LL);
            if ( v15->max_length <= 1 )
              break;
            v16 = IsOpen;
            v17 = System_Int32__Parse(v15->m_Items[1], 0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_27;
            v18 = v17;
            IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v16, 0LL, 0, 0LL);
            if ( (IsOpen & 1) != 0 )
              return v18;
          }
          LODWORD(v11) = v12->max_length;
          if ( (int)++v13 >= (int)v11 )
            return this->fields.imageId;
        }
LABEL_28:
        sub_B17100(IsOpen, v10, v9);
        sub_B170A0();
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

  if ( (byte_40FC1C2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20358/*"maxNum"*/, method);
    byte_40FC1C2 = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_20358/*"maxNum"*/, 0, v2);
}


System_String_o *__fastcall ItemEntity__GetOverwriteImageIdInfo(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FC1BE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21277/*"overwriteImageIdInfo"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FC1BE = 1;
  }
  return ItemEntity__getScript_28921972(
           this,
           (System_String_o *)StringLiteral_21277/*"overwriteImageIdInfo"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall ItemEntity__GetOverwritePresentboxDetail(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FC1BD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21284/*"overwritePresentboxDetail"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FC1BD = 1;
  }
  return ItemEntity__getScript_28921972(
           this,
           (System_String_o *)StringLiteral_21284/*"overwritePresentboxDetail"*/,
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

  if ( (byte_40FC1B9 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FC1B9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ItemEntity__IsEnable_28920384(ItemEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && (this->fields.endedAt == 0 || this->fields.endedAt >= checkTime);
}


bool __fastcall ItemEntity__IsRewardDispTogether(ItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FC1BF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21398/*"playEffect"*/, method);
    byte_40FC1BF = 1;
  }
  return ItemEntity__getScript(this, (System_String_o *)StringLiteral_21398/*"playEffect"*/, 0, v2) != 1;
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

  if ( (byte_40FC1BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FC1BB = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B170D4();
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  sub_B173C8(value);
  return ItemEntity__GetImageId(v10, v11);
}


System_String_o *__fastcall ItemEntity__getScript_28921972(
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

  if ( (byte_40FC1C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&string_TypeInfo, v7);
    byte_40FC1C0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_B173C8(value);
  return (System_String_o *)ItemEntity__IsRewardDispTogether(v10, v11);
}