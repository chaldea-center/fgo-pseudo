void __fastcall CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B41 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5B41 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4AB5B40 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    byte_4AB5B40 = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}