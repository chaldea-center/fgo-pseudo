void __fastcall CommandCodeCommentEntity___ctor(CommandCodeCommentEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8BE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E8BE1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *comment; // x19

  if ( (byte_42E8BE0 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BE0 = 1;
  }
  comment = this->fields.comment;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__ReplaceCommonTag(comment, 0, 0LL);
}