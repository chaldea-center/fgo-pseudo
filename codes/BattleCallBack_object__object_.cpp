void __fastcall BattleCallBack_object__object____ctor(
        BattleCallBack_T1__T2__o *this,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        System_Action_T1__T2__o *callBack,
        const MethodInfo_2D33F9C *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( !this )
    sub_B170D4();
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  this->fields.arg1 = arg1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)arg1, v9, v10, v11, v12, v13, v14);
  this->fields.arg2 = arg2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.arg2,
    (System_Int32_array **)arg2,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.callBack = callBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callBack,
    (System_Int32_array **)callBack,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall BattleCallBack_object__object___call(BattleCallBack_T1__T2__o *this, const MethodInfo_2D34008 *method)
{
  ((void (__fastcall *)(struct System_Action_T1__T2__o *, Il2CppObject *, Il2CppObject *))method->klass->rgctx_data->_0_ActionExtensions_Call_T1__T2_->methodPointer)(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2);
}