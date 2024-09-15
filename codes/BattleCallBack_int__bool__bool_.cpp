void __fastcall BattleCallBack_int__bool__bool____ctor(
        BattleCallBack_int__bool__bool__o *this,
        int32_t arg1,
        bool arg2,
        bool arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_30789E4 *method)
{
  BattleCallBack_int__bool__bool__o *v8; // x21
  bool v9; // w22
  bool v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3

  v8 = this;
  v9 = arg2;
  v10 = arg3;
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  v8->fields.callBack = callBack;
  v8 = (BattleCallBack_int__bool__bool__o *)((char *)v8 + 24);
  LODWORD(v8[-1].fields.callBack) = arg1;
  BYTE4(v8[-1].fields.callBack) = v9;
  BYTE5(v8[-1].fields.callBack) = v10;
  sub_1B76164((ServantStatusBattleListViewItem_o *)v8, (int32_t)callBack, v11, v12);
}


void __fastcall BattleCallBack_int__bool__bool___call(
        BattleCallBack_int__bool__bool__o *this,
        const MethodInfo_3078A34 *method)
{
  ActionExtensions__Call_int__bool__bool_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    this->fields.arg3,
    (const MethodInfo_2DBA2C4 *)method->klass->rgctx_data->_5_ActionExtensions_Call_T1__T2__T3_);
}