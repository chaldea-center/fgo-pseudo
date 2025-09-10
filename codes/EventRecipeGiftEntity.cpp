void EventRecipeGiftEntity___ctor(EventRecipeGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C273BD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C273BD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRecipeGiftEntity__CreatePK(int32_t recipeId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C273BC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C273BC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           recipeId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventRecipeGiftEntity__CreatePrimaryKey(EventRecipeGiftEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRecipeGiftEntity__CreatePK(this->fields.recipeId, this->fields.idx, v2);
}