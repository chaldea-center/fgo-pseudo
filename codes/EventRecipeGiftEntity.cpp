void __fastcall EventRecipeGiftEntity___ctor(EventRecipeGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418879E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418879E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRecipeGiftEntity__CreatePK(int32_t recipeId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_418879D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_418879D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           recipeId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRecipeGiftEntity__CreatePrimaryKey(
        EventRecipeGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRecipeGiftEntity__CreatePK(this->fields.recipeId, this->fields.idx, v2);
}