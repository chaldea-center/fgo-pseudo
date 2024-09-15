int32_t __fastcall PurchaseByBankResponseCommand__ExecuteResponse(
        PurchaseByBankResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19

  if ( (byte_4A2F830 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    this = (PurchaseByBankResponseCommand_o *)sub_1B761C0(&StringLiteral_22893/*"result"*/, v5);
    byte_4A2F830 = 1;
  }
  if ( !data )
    goto LABEL_9;
  success = data->fields.success;
  if ( success
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_22893/*"result"*/,
         (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (PurchaseByBankResponseCommand_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)success,
                                                (Il2CppObject *)StringLiteral_22893/*"result"*/,
                                                (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(PurchaseByBankResponseCommand_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
        this,
        this->klass->vtable._4_GetKind.methodPtr);
      return 0;
    }
LABEL_9:
    sub_1B7641C(this, data);
  }
  return 0;
}


int32_t __fastcall PurchaseByBankResponseCommand__GetKind(
        PurchaseByBankResponseCommand_o *this,
        const MethodInfo *method)
{
  return 11;
}