void BattleCallBack_int__bool__bool____ctor(
        BattleCallBack_int__bool__bool__o *this,
        int32_t arg1,
        bool arg2,
        bool arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_3E39DE4 *method)
{
  BattleCallBack_int__bool__bool__o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = this;
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  v10->fields.callBack = callBack;
  v10 = (BattleCallBack_int__bool__bool__o *)((char *)v10 + 24);
  LODWORD(v10[-1].fields.callBack) = arg1;
  BYTE4(v10[-1].fields.callBack) = arg2;
  BYTE5(v10[-1].fields.callBack) = arg3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v10, (int32_t)callBack, v11, v12, v13, v14, v15, v16);
}


void BattleCallBack_int__bool__bool___call(BattleCallBack_int__bool__bool__o *this, const MethodInfo_3E39E34 *method)
{
  ActionExtensions__Call_int__bool__bool_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    this->fields.arg3,
    (const MethodInfo_36CE524 *)method->klass->rgctx_data->_5_ActionExtensions_Call_T1__T2__T3_);
}