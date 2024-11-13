void __fastcall WarBoardMessageEntity___ctor(WarBoardMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B171DE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardMessageEntity__CreatePK(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B171DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&sceneType, *(_QWORD *)&idx);
    byte_4B171DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           sceneType,
           idx,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardMessageEntity__CreatePrimaryKey(
        WarBoardMessageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardMessageEntity__CreatePK(this->fields.stageId, this->fields.sceneType, this->fields.idx, v2);
}