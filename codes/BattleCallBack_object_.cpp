void __fastcall BattleCallBack_object____ctor(
        BattleCallBack_T__o *this,
        Il2CppObject *argument,
        System_Action_T__o *callBack,
        const MethodInfo_2D33F14 *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( !this )
    sub_B170D4();
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  this->fields.argument = argument;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)argument, v7, v8, v9, v10, v11, v12);
  this->fields.callBack = callBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callBack,
    (System_Int32_array **)callBack,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattleCallBack_object___call(BattleCallBack_T__o *this, const MethodInfo_2D33F6C *method)
{
  struct System_Action_T__o *callBack; // x0

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B170D4();
  ((void (__fastcall *)(struct System_Action_T__o *, Il2CppObject *))method->klass->rgctx_data->_0_System_Action_T__Invoke->methodPointer)(
    callBack,
    this->fields.argument);
}