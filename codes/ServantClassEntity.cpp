void __fastcall ServantClassEntity___ctor(ServantClassEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1687C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1687C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantClassEntity__CreatePrimaryKey(ServantClassEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ServantClassEntity__IsValidClassOnSellectSupport(int32_t classId, const MethodInfo *method)
{
  return (unsigned int)classId < 0xB;
}


float __fastcall ServantClassEntity__getAttackRate(ServantClassEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}