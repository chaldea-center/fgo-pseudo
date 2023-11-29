void __fastcall BattleCallBack_int__bool__bool____ctor(
        BattleCallBack_int__bool__bool__o *this,
        int32_t arg1,
        bool arg2,
        bool arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_2D34028 *method)
{
  BattleServantConfConponent_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( !this )
    sub_B170D4();
  v10 = (BattleServantConfConponent_o *)this;
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  v10->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)callBack;
  v10 = (BattleServantConfConponent_o *)((char *)v10 + 24);
  *(_DWORD *)&v10[-1].fields.isOpenAfter = arg1;
  LOBYTE(v10[-1].fields.adjustHeight) = arg2;
  BYTE1(v10[-1].fields.adjustHeight) = arg3;
  sub_B16F98(v10, (System_Int32_array **)callBack, v11, v12, v13, v14, v15, v16);
}


void __fastcall BattleCallBack_int__bool__bool___call(
        BattleCallBack_int__bool__bool__o *this,
        const MethodInfo_2D34094 *method)
{
  ((void (__fastcall *)(struct System_Action_T1__T2__T3__o *, _QWORD, bool, bool))method->klass->rgctx_data->_0_ActionExtensions_Call_T1__T2__T3_->methodPointer)(
    this->fields.callBack,
    (unsigned int)this->fields.arg1,
    this->fields.arg2,
    this->fields.arg3);
}