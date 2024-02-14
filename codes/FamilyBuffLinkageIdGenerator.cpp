void __fastcall FamilyBuffLinkageIdGenerator___ctor(
        FamilyBuffLinkageIdGenerator_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !servantData || (BuffData = BattleServantData__get_BuffData(servantData, 0LL)) == 0LL )
    sub_B0D97C(BuffData);
  this->fields.current = BattleBuffData__GetFamilyLinkageIdMax(BuffData, 0LL);
}


int32_t __fastcall FamilyBuffLinkageIdGenerator__Next(FamilyBuffLinkageIdGenerator_o *this, const MethodInfo *method)
{
  int32_t v2; // w8

  v2 = this->fields.current + 1;
  this->fields.current = v2;
  return v2;
}