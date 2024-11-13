void __fastcall CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15FDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15FDF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommandCodeCommentEntity__CreatePrimaryKey(
        CommandCodeCommentEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeId;
}


System_String_o *__fastcall CommandCodeCommentEntity__GetComment(
        CommandCodeCommentEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *comment; // x19

  if ( (byte_4B15FDE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B15FDE = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}