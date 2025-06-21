void __fastcall ServantSkillAddEntity___ctor(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CF12 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CF12 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o __fastcall ServantSkillAddEntity__ConvertColorFromString(
        ServantSkillAddEntity_o *this,
        System_String_o *colorCode,
        const MethodInfo *method)
{
  int32_t v4; // w0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1CF10 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Convert_TypeInfo, colorCode);
    byte_4B1CF10 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_63546160(colorCode, 16, 0LL);
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
System_String_o *__fastcall ServantSkillAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B1CF11 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4B1CF11 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_30190BC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantSkillAddEntity__CreatePrimaryKey(
        ServantSkillAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillAddEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t __fastcall ServantSkillAddEntity__GetBaseSkillId(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *skillIds; // x8
  __int64 v4; // x9

  skillIds = this->fields.skillIds;
  if ( !skillIds )
    return 0;
  v4 = *(_QWORD *)&skillIds->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
    sub_1BCB25C(this, method, v2);
  return skillIds->m_Items[1];
}


int32_t __fastcall ServantSkillAddEntity__GetCondIgnoreSealedLimitCount(
        ServantSkillAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CF0B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18051/*"condIgnoreSealedLimitCount"*/, method);
    byte_4B1CF0B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18051/*"condIgnoreSealedLimitCount"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ServantSkillAddEntity__GetCondLabelColor(
        ServantSkillAddEntity_o *this,
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
  if ( (byte_4B1CF0E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18052/*"condLabelColor"*/, method);
    byte_4B1CF0E = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18052/*"condLabelColor"*/, 0LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0LL);
  if ( !IsNullOrEmpty )
  {
    v15 = ServantSkillAddEntity__ConvertColorFromString((ServantSkillAddEntity_o *)IsNullOrEmpty, StringValue, v10);
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
UnityEngine_Color_o __fastcall ServantSkillAddEntity__GetCondSpriteColor(
        ServantSkillAddEntity_o *this,
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
  if ( (byte_4B1CF0F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18054/*"condSpriteColor"*/, method);
    byte_4B1CF0F = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18054/*"condSpriteColor"*/, 0LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0LL);
  if ( !IsNullOrEmpty )
  {
    v15 = ServantSkillAddEntity__ConvertColorFromString((ServantSkillAddEntity_o *)IsNullOrEmpty, StringValue, v10);
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


System_Int32_array *__fastcall ServantSkillAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantSkillAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CF0C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18827/*"enableDispOnBattleConfirmDialog"*/, method);
    byte_4B1CF0C = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18827/*"enableDispOnBattleConfirmDialog"*/, 0LL, 0LL);
}


int32_t __fastcall ServantSkillAddEntity__GetExchangedSkillId(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *skillIds; // x8

  skillIds = this->fields.skillIds;
  if ( skillIds && (int)skillIds->max_length >= 2 )
    return skillIds->m_Items[2];
  else
    return 0;
}


bool __fastcall ServantSkillAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantSkillAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CF0D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18827/*"enableDispOnBattleConfirmDialog"*/, method);
    byte_4B1CF0D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18827/*"enableDispOnBattleConfirmDialog"*/, 0LL);
}


bool __fastcall ServantSkillAddEntity__IsCheckCommonRelease(
        ServantSkillAddEntity_o *this,
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