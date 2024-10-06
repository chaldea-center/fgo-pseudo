void __fastcall RecommendAdviceMessageEntity___ctor(RecommendAdviceMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70444 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_int___ctor__, method);
    byte_4A70444 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_312C3A8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RecommendAdviceMessageEntity__CreatePrimaryKey(
        RecommendAdviceMessageEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}