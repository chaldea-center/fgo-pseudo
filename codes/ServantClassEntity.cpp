void ServantClassEntity___ctor(ServantClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27B21 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27B21 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantClassEntity__CreatePrimaryKey(ServantClassEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool ServantClassEntity__IsValidClassOnSellectSupport(int32_t classId, const MethodInfo *method)
{
  return (unsigned int)classId < 0xB;
}


float ServantClassEntity__getAttackRate(ServantClassEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}