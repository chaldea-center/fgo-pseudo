void __fastcall SingletonTemplate_object____cctor(const MethodInfo_2A55780 *method)
{
  ;
}


void __fastcall SingletonTemplate_object___Delete(const MethodInfo_2A555C0 *method)
{
  SingletonTemplate_CLASS__c *klass; // x20
  Il2CppClass *_0_SingletonTemplate_CLASS; // x20
  __int16 v4; // w8
  SingletonTemplate_CLASS__c *v5; // x20
  Il2CppClass *v6; // x20
  SingletonTemplate_CLASS__c *v7; // x20
  Il2CppClass *v8; // x20
  SingletonTemplate_CLASS__c *v9; // x20
  Il2CppClass *v10; // x20
  SingletonTemplate_CLASS__c *v11; // x20
  Il2CppClass *v12; // x20
  __int16 v13; // w8
  SingletonTemplate_CLASS__c *v14; // x20
  Il2CppClass *v15; // x20
  SingletonTemplate_CLASS__c *v16; // x20
  Il2CppClass *v17; // x20
  SingletonTemplate_CLASS__c *v18; // x19
  Il2CppClass *v19; // x19

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_SingletonTemplate_CLASS = klass->rgctx_data->_0_SingletonTemplate_CLASS_;
  v4 = WORD1(_0_SingletonTemplate_CLASS->vtable[0].methodPtr);
  if ( (v4 & 1) == 0 )
  {
    sub_AAFCFC(_0_SingletonTemplate_CLASS);
    v4 = WORD1(_0_SingletonTemplate_CLASS->vtable[0].methodPtr);
  }
  if ( (v4 & 0x400) != 0 )
  {
    v5 = method->klass;
    if ( (BYTE2(v5->vtable._0_Equals.methodPtr) & 1) == 0 )
      sub_AAFCFC(method->klass);
    v6 = v5->rgctx_data->_0_SingletonTemplate_CLASS_;
    if ( (BYTE2(v6->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(v6);
    if ( !v6->_2.cctor_finished )
    {
      v7 = method->klass;
      if ( (BYTE2(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
        sub_AAFCFC(method->klass);
      v8 = v7->rgctx_data->_0_SingletonTemplate_CLASS_;
      if ( (BYTE2(v8->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(v8);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = method->klass;
  if ( (BYTE2(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  v10 = v9->rgctx_data->_0_SingletonTemplate_CLASS_;
  if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(v10);
  if ( *(_QWORD *)v10->static_fields )
  {
    v11 = method->klass;
    if ( (BYTE2(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
      sub_AAFCFC(method->klass);
    v12 = v11->rgctx_data->_0_SingletonTemplate_CLASS_;
    v13 = WORD1(v12->vtable[0].methodPtr);
    if ( (v13 & 1) == 0 )
    {
      sub_AAFCFC(v12);
      v13 = WORD1(v12->vtable[0].methodPtr);
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 = method->klass;
      if ( (BYTE2(v14->vtable._0_Equals.methodPtr) & 1) == 0 )
        sub_AAFCFC(method->klass);
      v15 = v14->rgctx_data->_0_SingletonTemplate_CLASS_;
      if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(v15);
      if ( !v15->_2.cctor_finished )
      {
        v16 = method->klass;
        if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
          sub_AAFCFC(method->klass);
        v17 = v16->rgctx_data->_0_SingletonTemplate_CLASS_;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(v17);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = method->klass;
    if ( (BYTE2(v18->vtable._0_Equals.methodPtr) & 1) == 0 )
      sub_AAFCFC(v18);
    v19 = v18->rgctx_data->_0_SingletonTemplate_CLASS_;
    if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(v19);
    *(_QWORD *)v19->static_fields = 0LL;
  }
}