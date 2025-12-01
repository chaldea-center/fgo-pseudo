void CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC71B8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC71B8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t CommandCodeCommentEntity__CreatePrimaryKey(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  return this->fields.commandCodeId;
}


System_String_o *CommandCodeCommentEntity__GetComment(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  System_String_o *comment; // x19

  if ( (byte_4CC71B7 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC71B7 = 1;
  }
  comment = this->fields.comment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0);
}