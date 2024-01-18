void __fastcall FieldMotionEntity___ctor(FieldMotionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186972 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4186972 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FieldMotionEntity__CreatePrimaryKey(FieldMotionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall FieldMotionEntity__HasFlag(FieldMotionEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall FieldMotionEntity__IsNotStartBattleSkip(FieldMotionEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}