void __fastcall PurchaseByBankResponseCommand___ctor(PurchaseByBankResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall PurchaseByBankResponseCommand__ExecuteResponse(
        PurchaseByBankResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19

  if ( (byte_42E8814 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    this = (PurchaseByBankResponseCommand_o *)sub_B5D5C4(&StringLiteral_22094/*"result"*/, v8, v9, v10);
    byte_42E8814 = 1;
  }
  if ( !data )
    goto LABEL_9;
  success = data->fields.success;
  if ( success
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22094/*"result"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (PurchaseByBankResponseCommand_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                                                (System_Type_o *)StringLiteral_22094/*"result"*/,
                                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(PurchaseByBankResponseCommand_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
        this,
        this->klass->vtable._4_GetKind.methodPtr);
      return 0;
    }
LABEL_9:
    sub_B5D69C(this, data);
  }
  return 0;
}


int32_t __fastcall PurchaseByBankResponseCommand__GetKind(
        PurchaseByBankResponseCommand_o *this,
        const MethodInfo *method)
{
  return 11;
}