void __fastcall ServantClassEntity___ctor(ServantClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189E78 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4189E78 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantClassEntity__CreatePrimaryKey(ServantClassEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ServantClassEntity__IsValidClassOnSellectSupport(int32_t classId, const MethodInfo *method)
{
  return (unsigned int)classId < 0xA;
}


float __fastcall ServantClassEntity__getAttackRate(ServantClassEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}