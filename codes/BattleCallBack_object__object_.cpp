void BattleCallBack_object__object____ctor(
        BattleCallBack_T1__T2__o *this,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        System_Action_T1__T2__o *callBack,
        const MethodInfo_33A3C8C *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  this->fields.arg1 = arg1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)arg1, v9, v10, v11, v12, v13, v14);
  this->fields.arg2 = arg2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.arg2, (int32_t)arg2, v15, v16, v17, v18, v19, v20);
  this->fields.callBack = callBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callBack, (int32_t)callBack, v21, v22, v23, v24, v25, v26);
}


void BattleCallBack_object__object___call(BattleCallBack_T1__T2__o *this, const MethodInfo_33A3CEC *method)
{
  ActionExtensions__Call_object__object_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    (const MethodInfo_30B97DC *)method->klass->rgctx_data->_4_ActionExtensions_Call_T1__T2_);
}