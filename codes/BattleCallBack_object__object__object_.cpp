void __fastcall BattleCallBack_object__object__object____ctor(
        BattleCallBack_T1__T2__T3__o *this,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_2D601FC *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( !this )
    sub_B2C434(0LL, arg1);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  this->fields.arg1 = arg1;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)arg1, v11, v12, v13, v14, v15, v16);
  this->fields.arg2 = arg2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.arg2,
    (System_Int32_array **)arg2,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.arg3 = arg3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.arg3,
    (System_Int32_array **)arg3,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.callBack = callBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callBack,
    (System_Int32_array **)callBack,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall BattleCallBack_object__object__object___call(
        BattleCallBack_T1__T2__T3__o *this,
        const MethodInfo_2D60284 *method)
{
  ((void (__fastcall *)(struct System_Action_T1__T2__T3__o *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->klass->rgctx_data->_0_ActionExtensions_Call_T1__T2__T3_->methodPointer)(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    this->fields.arg3);
}