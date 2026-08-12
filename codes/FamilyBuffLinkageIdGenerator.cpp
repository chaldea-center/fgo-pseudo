void FamilyBuffLinkageIdGenerator___ctor(
        FamilyBuffLinkageIdGenerator_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !servantData || (BuffData = BattleServantData__get_BuffData(servantData, 0)) == 0 )
    sub_2213CDC(BuffData, v6);
  this->fields.current = BattleBuffData__GetFamilyLinkageIdMax(BuffData, 0);
}


int32_t FamilyBuffLinkageIdGenerator__Next(FamilyBuffLinkageIdGenerator_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.current + 1;
  this->fields.current = result;
  return result;
}