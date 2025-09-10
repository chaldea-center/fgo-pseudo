void PurchaseByBankResponseCommand___ctor(PurchaseByBankResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0);
}


int32_t PurchaseByBankResponseCommand__ExecuteResponse(
        PurchaseByBankResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19

  if ( (byte_4C28E3F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (PurchaseByBankResponseCommand_o *)sub_1C2D490(&StringLiteral_23055/*"result"*/);
    byte_4C28E3F = 1;
  }
  if ( !data )
    goto LABEL_9;
  success = data->fields.success;
  if ( success
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_23055/*"result"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (PurchaseByBankResponseCommand_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                (System_Collections_Generic_Dictionary_object__object__o *)success,
                                                (Il2CppObject *)StringLiteral_23055/*"result"*/,
                                                (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(PurchaseByBankResponseCommand_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
        this,
        this->klass->vtable._3_ToString.method);
      return 0;
    }
LABEL_9:
    sub_1C2D6EC(this, data);
  }
  return 0;
}


int32_t PurchaseByBankResponseCommand__GetKind(PurchaseByBankResponseCommand_o *this, const MethodInfo *method)
{
  return 11;
}