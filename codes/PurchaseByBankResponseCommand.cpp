void __fastcall PurchaseByBankResponseCommand___ctor(PurchaseByBankResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall PurchaseByBankResponseCommand__ExecuteResponse(
        PurchaseByBankResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19

  if ( (byte_4187A94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    this = (PurchaseByBankResponseCommand_o *)sub_B2C35C(&StringLiteral_21798/*"result"*/, v5);
    byte_4187A94 = 1;
  }
  if ( !data )
    goto LABEL_9;
  success = data->fields.success;
  if ( success
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"result"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (PurchaseByBankResponseCommand_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                                                (System_Type_o *)StringLiteral_21798/*"result"*/,
                                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(PurchaseByBankResponseCommand_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
        this,
        this->klass->vtable._4_GetKind.methodPtr);
      return 0;
    }
LABEL_9:
    sub_B2C434(this, data);
  }
  return 0;
}


int32_t __fastcall PurchaseByBankResponseCommand__GetKind(
        PurchaseByBankResponseCommand_o *this,
        const MethodInfo *method)
{
  return 11;
}