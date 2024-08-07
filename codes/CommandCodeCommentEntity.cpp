void __fastcall CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE919 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE919 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
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
  System_String_o *comment; // x19

  if ( (byte_49FE918 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    byte_49FE918 = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}