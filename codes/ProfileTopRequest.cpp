void ProfileTopRequest___ctor(ProfileTopRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ProfileTopRequest__beginRequest(
        ProfileTopRequest_o *this,
        System_Int64_array *targetUserIds,
        const MethodInfo *method)
{
  if ( (byte_4C5890A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_24023/*"targetUserIds"*/);
    byte_4C5890A = 1;
  }
  RequestBase__addField_44302936((RequestBase_o *)this, (System_String_o *)StringLiteral_24023/*"targetUserIds"*/, &targetUserIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void ProfileTopRequest__beginRequestFriendCode(
        ProfileTopRequest_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  if ( (byte_4C5890B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19696/*"friendCode"*/);
    byte_4C5890B = 1;
  }
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_19696/*"friendCode"*/, friendCode, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ProfileTopRequest__getURL(ProfileTopRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C58909 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22811/*"profile/top"*/);
    byte_4C58909 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_22811/*"profile/top"*/, 0);
}


void ProfileTopRequest__requestCompleted(
        ProfileTopRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C5890C & 1) == 0 )
  {
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&StringLiteral_22400/*"ok"*/);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C5890C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(18, responseList, 0);
  if ( v5 && ResponseData__checkError_44298060(v5, 0) )
    v6 = &StringLiteral_22400/*"ok"*/;
  else
    v6 = &StringLiteral_22233/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}