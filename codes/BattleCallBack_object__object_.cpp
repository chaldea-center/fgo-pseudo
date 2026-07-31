void BattleCallBack_object__object____ctor(
        BattleCallBack_T1__T2__o *this,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        System_Action_T1__T2__o *callBack,
        const MethodInfo_3E39AB4 *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  this->fields.arg1 = arg1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)arg1, v9, v10, v11, v12, v13, v14);
  this->fields.arg2 = arg2;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.arg2, (int32_t)arg2, v15, v16, v17, v18, v19, v20);
  this->fields.callBack = callBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callBack,
    (int32_t)callBack,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void BattleCallBack_object__object___call(BattleCallBack_T1__T2__o *this, const MethodInfo_3E39B14 *method)
{
  ActionExtensions__Call_object__object_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    (const MethodInfo_36CE33C *)method->klass->rgctx_data->_4_ActionExtensions_Call_T1__T2_);
}