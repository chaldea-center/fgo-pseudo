void __fastcall GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1645E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1645E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_4B1645B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&gachaBonusId, *(_QWORD *)&slot);
    byte_4B1645B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w8
  int32_t ClassId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1645C & 1) == 0 )
  {
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5061/*"D3"*/, v4, v5);
    byte_4B1645C = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v6);
  if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
  {
    v8 = 1004;
LABEL_11:
    ClassId = v8;
    return System_Int32__ToString_63206828((int32_t)&ClassId, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v7);
  if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
  {
    v8 = 1005;
    goto LABEL_11;
  }
  return System_Int32__ToString_63206828((int32_t)&ClassId, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GachaBonusSelectEntity__GetClassId(
        GachaBonusSelectEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4B1645D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18174/*"classId"*/, *(_QWORD *)&defId, method);
    byte_4B1645D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18174/*"classId"*/, defId, 0LL);
}