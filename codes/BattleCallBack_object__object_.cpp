void __fastcall BattleCallBack_object__object____ctor(
        BattleCallBack_T1__T2__o *this,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        System_Action_T1__T2__o *callBack,
        const MethodInfo_3096164 *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  this->fields.arg1 = arg1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)arg1, v9, v10);
  this->fields.arg2 = arg2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.arg2, (int32_t)arg2, v11, v12);
  this->fields.callBack = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callBack, (int32_t)callBack, v13, v14);
}


void __fastcall BattleCallBack_object__object___call(BattleCallBack_T1__T2__o *this, const MethodInfo_30961C4 *method)
{
  ActionExtensions__Call_object__object_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    (const MethodInfo_2DD5B9C *)method->klass->rgctx_data->_4_ActionExtensions_Call_T1__T2_);
}