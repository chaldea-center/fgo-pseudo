void CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59705F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59705F8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t CommandCodeCommentEntity__CreatePrimaryKey(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  return this->fields.commandCodeId;
}


System_String_o *CommandCodeCommentEntity__GetComment(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_59705F7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_59705F7 = 1;
  }
  comment = this->fields.comment;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0);
}