void __fastcall WarBoardActionTrendGroupEntity___ctor(WarBoardActionTrendGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5C0C4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardActionTrendGroupEntity__CreatePrimaryKey(
        WarBoardActionTrendGroupEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}