void __fastcall ServantClassEntity___ctor(ServantClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB56C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB56C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
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