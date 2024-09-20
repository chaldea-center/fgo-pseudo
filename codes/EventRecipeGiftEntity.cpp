void __fastcall EventRecipeGiftEntity___ctor(EventRecipeGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B24F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B24F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRecipeGiftEntity__CreatePK(int32_t recipeId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A5B24E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B24E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           recipeId,
           idx,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRecipeGiftEntity__CreatePrimaryKey(
        EventRecipeGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRecipeGiftEntity__CreatePK(this->fields.recipeId, this->fields.idx, v2);
}