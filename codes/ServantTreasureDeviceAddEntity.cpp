void __fastcall ServantTreasureDeviceAddEntity___ctor(ServantTreasureDeviceAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EE94 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_string___ctor__, method);
    byte_4A4EE94 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3211E14 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o __fastcall ServantTreasureDeviceAddEntity__ConvertColorFromString(
        ServantTreasureDeviceAddEntity_o *this,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  int32_t v4; // w0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A4EE92 & 1) == 0 )
  {
    sub_1B863B8(&System_Convert_TypeInfo, colorCode);
    byte_4A4EE92 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_62727524(colorCode, 16, 0LL);
  v5 = (float)BYTE2(v4) / 255.0;
  v6 = (float)BYTE1(v4) / 255.0;
  v7 = (float)(unsigned __int8)v4 / 255.0;
  v8 = 1.0;
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDeviceAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A4EE93 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4A4EE93 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2F6C2D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantTreasureDeviceAddEntity__CreatePrimaryKey(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantTreasureDeviceAddEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t __fastcall ServantTreasureDeviceAddEntity__GetBaseTreasureDeviceId(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *treasureDeviceIds; // x8
  __int64 v3; // x9

  treasureDeviceIds = this->fields.treasureDeviceIds;
  if ( !treasureDeviceIds )
    return 0;
  v3 = *(_QWORD *)&treasureDeviceIds->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B8661C(this, method);
  return treasureDeviceIds->m_Items[1];
}


int32_t __fastcall ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4EE8D & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17972/*"condIgnoreSealedLimitCount"*/, method);
    byte_4A4EE8D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17972/*"condIgnoreSealedLimitCount"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ServantTreasureDeviceAddEntity__GetCondLabelColor(
        ServantTreasureDeviceAddEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_String_o *StringValue; // x19
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x2
  float v11; // s2
  float v12; // s3
  float v13; // s0
  float v14; // s1
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4A4EE90 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17973/*"condLabelColor"*/, method);
    byte_4A4EE90 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17973/*"condLabelColor"*/, 0LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0LL);
  if ( !IsNullOrEmpty )
  {
    v15 = ServantTreasureDeviceAddEntity__ConvertColorFromString(
            (ServantTreasureDeviceAddEntity_o *)IsNullOrEmpty,
            StringValue,
            v10);
    r = v15.fields.r;
    g = v15.fields.g;
    b = v15.fields.b;
    a = v15.fields.a;
  }
  v11 = b;
  v12 = a;
  v13 = r;
  v14 = g;
  result.fields.a = v12;
  result.fields.b = v11;
  result.fields.g = v14;
  result.fields.r = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ServantTreasureDeviceAddEntity__GetCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_String_o *StringValue; // x19
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x2
  float v11; // s2
  float v12; // s3
  float v13; // s0
  float v14; // s1
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4A4EE91 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17975/*"condSpriteColor"*/, method);
    byte_4A4EE91 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17975/*"condSpriteColor"*/, 0LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0LL);
  if ( !IsNullOrEmpty )
  {
    v15 = ServantTreasureDeviceAddEntity__ConvertColorFromString(
            (ServantTreasureDeviceAddEntity_o *)IsNullOrEmpty,
            StringValue,
            v10);
    r = v15.fields.r;
    g = v15.fields.g;
    b = v15.fields.b;
    a = v15.fields.a;
  }
  v11 = b;
  v12 = a;
  v13 = r;
  v14 = g;
  result.fields.a = v12;
  result.fields.b = v11;
  result.fields.g = v14;
  result.fields.r = v13;
  return result;
}


System_Int32_array *__fastcall ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4EE8B & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18417/*"dispMaskTreasureDevices"*/, method);
    byte_4A4EE8B = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18417/*"dispMaskTreasureDevices"*/, 0LL, 0LL);
}


System_Int32_array *__fastcall ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4EE8E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18756/*"enableDispOnBattleConfirmDialog"*/, method);
    byte_4A4EE8E = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18756/*"enableDispOnBattleConfirmDialog"*/, 0LL, 0LL);
}


int32_t __fastcall ServantTreasureDeviceAddEntity__GetExchangedTreasureDeviceId(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *treasureDeviceIds; // x8

  treasureDeviceIds = this->fields.treasureDeviceIds;
  if ( treasureDeviceIds && (int)treasureDeviceIds->max_length >= 2 )
    return treasureDeviceIds->m_Items[2];
  else
    return 0;
}


System_Int32_array *__fastcall ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4EE8C & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_19237/*"fixedCardLimitCounts"*/, method);
    byte_4A4EE8C = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19237/*"fixedCardLimitCounts"*/, 0LL, 0LL);
}


bool __fastcall ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4EE8F & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18756/*"enableDispOnBattleConfirmDialog"*/, method);
    byte_4A4EE8F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18756/*"enableDispOnBattleConfirmDialog"*/, 0LL);
}


bool __fastcall ServantTreasureDeviceAddEntity__IsCheckCommonRelease(
        ServantTreasureDeviceAddEntity_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t commonReleaseId; // w0

  commonReleaseId = this->fields.commonReleaseId;
  return !commonReleaseId
      || CommonReleaseExtension__IsOpenConsiderEquippedWithTargetCostume(
           commonReleaseId,
           this->fields.svtId,
           dispLimitCount,
           0LL);
}