void __fastcall GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC5EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC5EE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_42EC5EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, gachaBonusId, slot, method);
    byte_42EC5EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaBonusSelectEntity__CreatePrimaryKey(
        GachaBonusSelectEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaBonusSelectEntity__CreatePK(this->fields.gachaId, this->fields.gachaBonusId, this->fields.slot, v2);
}


System_String_o *__fastcall GachaBonusSelectEntity__GetClassIconId(
        GachaBonusSelectEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t v8; // w8
  int32_t ClassId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EC5EC & 1) == 0 )
  {
    sub_B5D5C4(&SvtClassAttri_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_4620/*"D3"*/, v5, v6, v7);
    byte_42EC5EC = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
  {
    v8 = 1004;
LABEL_13:
    ClassId = v8;
    return System_Int32__ToString_39741776((int32_t)&ClassId, (System_String_o *)StringLiteral_4620/*"D3"*/, 0LL);
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
  {
    v8 = 1005;
    goto LABEL_13;
  }
  return System_Int32__ToString_39741776((int32_t)&ClassId, (System_String_o *)StringLiteral_4620/*"D3"*/, 0LL);
}


int32_t __fastcall GachaBonusSelectEntity__GetClassId(
        GachaBonusSelectEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC5ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17669/*"classId"*/, defId, (_DWORD)method, v3);
    byte_42EC5ED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17669/*"classId"*/, defId, 0LL);
}