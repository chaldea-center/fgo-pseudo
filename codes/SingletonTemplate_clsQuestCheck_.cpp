void __fastcall SingletonTemplate_clsQuestCheck____ctor(
        SingletonTemplate_clsQuestCheck__o *this,
        const MethodInfo_2A555A4 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SingletonTemplate_clsQuestCheck___Destroy(
        SingletonTemplate_clsQuestCheck__o *this,
        const MethodInfo_2A555BC *method)
{
  ;
}


clsQuestCheck_o *__fastcall SingletonTemplate_clsQuestCheck___get_Instance(const MethodInfo_2A552BC *method)
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
  SingletonTemplate_CLASS__c *v11; // x21
  __int16 v12; // w8
  SingletonTemplate_CLASS__c *v13; // x20
  __int64 (__fastcall *methodPointer)(MethodInfo *); // x21
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  SingletonTemplate_CLASS__c *v22; // x21
  System_Int32_array **v23; // x20
  Il2CppClass *v24; // x21
  __int16 v25; // w8
  SingletonTemplate_CLASS__c *v26; // x21
  Il2CppClass *v27; // x21
  SingletonTemplate_CLASS__c *v28; // x21
  Il2CppClass *v29; // x21
  SingletonTemplate_CLASS__c *v30; // x21
  Il2CppClass *v31; // x21
  BattleServantConfConponent_o *static_fields; // x0
  SingletonTemplate_CLASS__c *v33; // x20
  Il2CppClass *v34; // x20
  __int16 v35; // w8
  SingletonTemplate_CLASS__c *v36; // x20
  Il2CppClass *v37; // x20
  SingletonTemplate_CLASS__c *v38; // x20
  Il2CppClass *v39; // x20
  SingletonTemplate_CLASS__c *v40; // x19
  Il2CppClass *v41; // x19

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
  if ( !*(_QWORD *)v10->static_fields )
  {
    v11 = method->klass;
    v12 = WORD1(v11->vtable._0_Equals.methodPtr);
    v13 = v11;
    if ( (v12 & 1) == 0 )
    {
      sub_AAFCFC(method->klass);
      v13 = method->klass;
      v12 = WORD1(v13->vtable._0_Equals.methodPtr);
    }
    methodPointer = (__int64 (__fastcall *)(MethodInfo *))v11->rgctx_data->_2_System_Activator_CreateInstance_CLASS_->methodPointer;
    if ( (v12 & 1) == 0 )
      sub_AAFCFC(v13);
    v15 = methodPointer(v13->rgctx_data->_2_System_Activator_CreateInstance_CLASS_);
    v22 = method->klass;
    v23 = (System_Int32_array **)v15;
    if ( (BYTE2(v22->vtable._0_Equals.methodPtr) & 1) == 0 )
      sub_AAFCFC(method->klass);
    v24 = v22->rgctx_data->_0_SingletonTemplate_CLASS_;
    v25 = WORD1(v24->vtable[0].methodPtr);
    if ( (v25 & 1) == 0 )
    {
      sub_AAFCFC(v24);
      v25 = WORD1(v24->vtable[0].methodPtr);
    }
    if ( (v25 & 0x400) != 0 )
    {
      v26 = method->klass;
      if ( (BYTE2(v26->vtable._0_Equals.methodPtr) & 1) == 0 )
        sub_AAFCFC(method->klass);
      v27 = v26->rgctx_data->_0_SingletonTemplate_CLASS_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(v27);
      if ( !v27->_2.cctor_finished )
      {
        v28 = method->klass;
        if ( (BYTE2(v28->vtable._0_Equals.methodPtr) & 1) == 0 )
          sub_AAFCFC(method->klass);
        v29 = v28->rgctx_data->_0_SingletonTemplate_CLASS_;
        if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(v29);
        j_il2cpp_runtime_class_init_0(v29);
      }
    }
    v30 = method->klass;
    if ( (BYTE2(v30->vtable._0_Equals.methodPtr) & 1) == 0 )
      sub_AAFCFC(method->klass);
    v31 = v30->rgctx_data->_0_SingletonTemplate_CLASS_;
    if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(v31);
    static_fields = (BattleServantConfConponent_o *)v31->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v23;
    sub_B16F98(static_fields, v23, v16, v17, v18, v19, v20, v21);
  }
  v33 = method->klass;
  if ( (BYTE2(v33->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  v34 = v33->rgctx_data->_0_SingletonTemplate_CLASS_;
  v35 = WORD1(v34->vtable[0].methodPtr);
  if ( (v35 & 1) == 0 )
  {
    sub_AAFCFC(v34);
    v35 = WORD1(v34->vtable[0].methodPtr);
  }
  if ( (v35 & 0x400) != 0 )
  {
    v36 = method->klass;
    if ( (BYTE2(v36->vtable._0_Equals.methodPtr) & 1) == 0 )
      sub_AAFCFC(method->klass);
    v37 = v36->rgctx_data->_0_SingletonTemplate_CLASS_;
    if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(v37);
    if ( !v37->_2.cctor_finished )
    {
      v38 = method->klass;
      if ( (BYTE2(v38->vtable._0_Equals.methodPtr) & 1) == 0 )
        sub_AAFCFC(method->klass);
      v39 = v38->rgctx_data->_0_SingletonTemplate_CLASS_;
      if ( (BYTE2(v39->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(v39);
      j_il2cpp_runtime_class_init_0(v39);
    }
  }
  v40 = method->klass;
  if ( (BYTE2(v40->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v40);
  v41 = v40->rgctx_data->_0_SingletonTemplate_CLASS_;
  if ( (BYTE2(v41->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(v41);
  return *(clsQuestCheck_o **)v41->static_fields;
}