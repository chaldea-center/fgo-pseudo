void __fastcall EnterUserSvtInfo___ctor(
        EnterUserSvtInfo_o *this,
        int32_t idx,
        int32_t position,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = idx;
  this->fields.position = position;
  this->fields.userSvtId = userSvtId;
}


int32_t __fastcall EnterUserSvtInfo__get_Idx(EnterUserSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.idx;
}


int32_t __fastcall EnterUserSvtInfo__get_Position(EnterUserSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.position;
}


int64_t __fastcall EnterUserSvtInfo__get_UserSvtId(EnterUserSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.userSvtId;
}