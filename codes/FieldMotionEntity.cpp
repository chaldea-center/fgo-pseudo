void __fastcall FieldMotionEntity___ctor(FieldMotionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1641B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1641B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
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