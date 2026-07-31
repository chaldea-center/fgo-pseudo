void CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938448 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938448 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t CommandCodeCommentEntity__CreatePrimaryKey(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  return this->fields.commandCodeId;
}


System_String_o *CommandCodeCommentEntity__GetComment(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_5938447 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5938447 = 1;
  }
  comment = this->fields.comment;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0);
}