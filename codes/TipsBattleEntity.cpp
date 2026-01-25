void TipsBattleEntity___ctor(TipsBattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF31F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEF31F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t TipsBattleEntity__CreatePrimaryKey(TipsBattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}