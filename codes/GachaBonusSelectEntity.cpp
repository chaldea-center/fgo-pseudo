void __fastcall GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B3CA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_4A5B3C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B3C7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int32_t v4; // w8
  int32_t ClassId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5B3C8 & 1) == 0 )
  {
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    sub_1B885B0(&StringLiteral_4988/*"D3"*/);
    byte_4A5B3C8 = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
  {
    v4 = 1004;
LABEL_11:
    ClassId = v4;
    return System_Int32__ToString_62512312((int32_t)&ClassId, (System_String_o *)StringLiteral_4988/*"D3"*/, 0LL);
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
  {
    v4 = 1005;
    goto LABEL_11;
  }
  return System_Int32__ToString_62512312((int32_t)&ClassId, (System_String_o *)StringLiteral_4988/*"D3"*/, 0LL);
}


int32_t __fastcall GachaBonusSelectEntity__GetClassId(
        GachaBonusSelectEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4A5B3C9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17992/*"classId"*/);
    byte_4A5B3C9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17992/*"classId"*/, defId, 0LL);
}