void __fastcall PurchaseByBankResponseCommand___ctor(PurchaseByBankResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall PurchaseByBankResponseCommand__ExecuteResponse(
        PurchaseByBankResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19

  if ( (byte_42AFBCF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (PurchaseByBankResponseCommand_o *)sub_B52984(&StringLiteral_21980/*"result"*/);
    byte_42AFBCF = 1;
  }
  if ( !data )
    goto LABEL_9;
  success = data->fields.success;
  if ( success
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21980/*"result"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (PurchaseByBankResponseCommand_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                                                (System_Type_o *)StringLiteral_21980/*"result"*/,
                                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(PurchaseByBankResponseCommand_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
        this,
        this->klass->vtable._4_GetKind.methodPtr);
      return 0;
    }
LABEL_9:
    sub_B52A5C(this, data);
  }
  return 0;
}


int32_t __fastcall PurchaseByBankResponseCommand__GetKind(
        PurchaseByBankResponseCommand_o *this,
        const MethodInfo *method)
{
  return 11;
}