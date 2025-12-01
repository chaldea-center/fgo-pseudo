void WarBoardRoadEntity___ctor(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC85F9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC85F9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardRoadEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  if ( (byte_4CC85F8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC85F8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warBoardId,
           squareIndex1,
           squareIndex2,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarBoardRoadEntity__CreatePrimaryKey(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardRoadEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex1, this->fields.squareIndex2, v2);
}