void __fastcall EventRecipeEntity___ctor(EventRecipeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7B8C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7B8C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventRecipeEntity__CreatePrimaryKey(EventRecipeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}