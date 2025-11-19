int32_t PurchaseByBankResponseCommand__ExecuteResponse(
        PurchaseByBankResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19

  if ( (byte_4CB7E8A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (PurchaseByBankResponseCommand_o *)sub_1C6BA08(&StringLiteral_23171/*"result"*/);
    byte_4CB7E8A = 1;
  }
  if ( !data )
    goto LABEL_9;
  success = data->fields.success;
  if ( success
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_23171/*"result"*/,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (PurchaseByBankResponseCommand_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)success,
                                                (Il2CppObject *)StringLiteral_23171/*"result"*/,
                                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(PurchaseByBankResponseCommand_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
        this,
        this->klass->vtable._3_ToString.method);
      return 0;
    }
LABEL_9:
    sub_1C6BC60(this, data);
  }
  return 0;
}


int32_t PurchaseByBankResponseCommand__GetKind(PurchaseByBankResponseCommand_o *this, const MethodInfo *method)
{
  return 11;
}