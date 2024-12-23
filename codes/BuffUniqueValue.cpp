void __fastcall BuffUniqueValue___ctor(BuffUniqueValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BuffUniqueValue___ctor_43633028(
        BuffUniqueValue_o *this,
        int32_t inBuffUniqueId,
        int32_t inGrantedUniqueId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.buffUniqueId = inBuffUniqueId;
  this->fields.grantedUniqueId = inGrantedUniqueId;
}


bool __fastcall BuffUniqueValue__IsMatch(BuffUniqueValue_o *this, BuffUniqueValue_o *info, const MethodInfo *method)
{
  return info
      && this->fields.buffUniqueId == info->fields.buffUniqueId
      && this->fields.grantedUniqueId == info->fields.grantedUniqueId;
}