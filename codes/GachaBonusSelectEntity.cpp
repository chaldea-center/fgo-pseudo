void __fastcall GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E3B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66E3B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_4B66E38 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&gachaBonusId);
    byte_4B66E38 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v4; // x1
  int32_t v5; // w8
  int32_t ClassId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B66E39 & 1) == 0 )
  {
    sub_1BE4ACC(&SvtClassAttri_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_5072/*"D3"*/, v4);
    byte_4B66E39 = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
  {
    v5 = 1004;
LABEL_11:
    ClassId = v5;
    return System_Int32__ToString_63504416((int32_t)&ClassId, (System_String_o *)StringLiteral_5072/*"D3"*/, 0LL);
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
  {
    v5 = 1005;
    goto LABEL_11;
  }
  return System_Int32__ToString_63504416((int32_t)&ClassId, (System_String_o *)StringLiteral_5072/*"D3"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GachaBonusSelectEntity__GetClassId(
        GachaBonusSelectEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4B66E3A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18225/*"classId"*/, *(_QWORD *)&defId);
    byte_4B66E3A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18225/*"classId"*/, defId, 0LL);
}