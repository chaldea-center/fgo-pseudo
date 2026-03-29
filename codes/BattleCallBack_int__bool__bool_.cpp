void BattleCallBack_int__bool__bool____ctor(
        BattleCallBack_int__bool__bool__o *this,
        int32_t arg1,
        bool arg2,
        bool arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_33D9A80 *method)
{
  BattleCallBack_int__bool__bool__o *v8; // x21
  bool v9; // w22
  bool v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v8 = this;
  v9 = arg2;
  v10 = arg3;
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  v8->fields.callBack = callBack;
  v8 = (BattleCallBack_int__bool__bool__o *)((char *)v8 + 24);
  LODWORD(v8[-1].fields.callBack) = arg1;
  BYTE4(v8[-1].fields.callBack) = v9;
  BYTE5(v8[-1].fields.callBack) = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v8, (int32_t)callBack, v11, v12, v13, v14, v15, v16);
}


void BattleCallBack_int__bool__bool___call(BattleCallBack_int__bool__bool__o *this, const MethodInfo_33D9AD0 *method)
{
  ActionExtensions__Call_int__bool__bool_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    this->fields.arg3,
    (const MethodInfo_30EC23C *)method->klass->rgctx_data->_5_ActionExtensions_Call_T1__T2__T3_);
}