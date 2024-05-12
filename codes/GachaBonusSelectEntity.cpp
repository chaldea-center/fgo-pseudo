void __fastcall GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F13B & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438F13B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_438F138 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438F138 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int32_t ClassId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438F139 & 1) == 0 )
  {
    sub_B775C4(&SvtClassAttri_TypeInfo);
    sub_B775C4(&StringLiteral_4682/*"D3"*/);
    byte_438F139 = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__IsExtraClass1(ClassId, 0LL) )
  {
    v4 = 1004;
LABEL_13:
    ClassId = v4;
    return System_Int32__ToString_39547236((int32_t)&ClassId, (System_String_o *)StringLiteral_4682/*"D3"*/, 0LL);
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__IsExtraClass2(ClassId, 0LL) )
  {
    v4 = 1005;
    goto LABEL_13;
  }
  return System_Int32__ToString_39547236((int32_t)&ClassId, (System_String_o *)StringLiteral_4682/*"D3"*/, 0LL);
}


int32_t __fastcall GachaBonusSelectEntity__GetClassId(
        GachaBonusSelectEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_438F13A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17799/*"classId"*/);
    byte_438F13A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17799/*"classId"*/, defId, 0LL);
}