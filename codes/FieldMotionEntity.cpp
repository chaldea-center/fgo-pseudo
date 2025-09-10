void FieldMotionEntity___ctor(FieldMotionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27516 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27516 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t FieldMotionEntity__CreatePrimaryKey(FieldMotionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool FieldMotionEntity__HasFlag(FieldMotionEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool FieldMotionEntity__IsNotStartBattleSkip(FieldMotionEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}