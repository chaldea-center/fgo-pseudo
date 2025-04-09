void __fastcall WarBoardMessageScriptEntity___ctor(WarBoardMessageScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBF1E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BBF1E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardMessageScriptEntity__CreatePK(
        System_String_o *imageId,
        int32_t form,
        const MethodInfo *method)
{
  if ( (byte_49BBF1D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_string__int___, *(_QWORD *)&form);
    byte_49BBF1D = 1;
  }
  return DataEntityBase__CreateMultiplePK_object__int_(
           (Il2CppObject *)imageId,
           form,
           (const MethodInfo_2EFFEBC *)Method_DataEntityBase_CreateMultiplePK_string__int___);
}


System_String_o *__fastcall WarBoardMessageScriptEntity__CreatePrimaryKey(
        WarBoardMessageScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardMessageScriptEntity__CreatePK(this->fields.imageId, this->fields.form, v2);
}