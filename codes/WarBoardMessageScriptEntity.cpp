void __fastcall WarBoardMessageScriptEntity___ctor(WarBoardMessageScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22FF0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22FF0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardMessageScriptEntity__CreatePK(
        System_String_o *imageId,
        int32_t form,
        const MethodInfo *method)
{
  if ( (byte_4C22FEF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_string__int___, *(_QWORD *)&form);
    byte_4C22FEF = 1;
  }
  return DataEntityBase__CreateMultiplePK_object__int_(
           (Il2CppObject *)imageId,
           form,
           (const MethodInfo_2FEE59C *)Method_DataEntityBase_CreateMultiplePK_string__int___);
}


System_String_o *__fastcall WarBoardMessageScriptEntity__CreatePrimaryKey(
        WarBoardMessageScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardMessageScriptEntity__CreatePK(this->fields.imageId, this->fields.form, v2);
}