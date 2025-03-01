void __fastcall BattleCallBack_int__bool__bool____ctor(
        BattleCallBack_int__bool__bool__o *this,
        int32_t arg1,
        bool arg2,
        bool arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_31F1384 *method)
{
  PartyOrganizationUtility_o *v8; // x21
  bool v9; // w22
  bool v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v8 = (PartyOrganizationUtility_o *)this;
  v9 = arg2;
  v10 = arg3;
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  v8->fields._normalFollowerInfo = (struct FollowerInfo_o *)callBack;
  v8 = (PartyOrganizationUtility_o *)((char *)v8 + 24);
  *(_DWORD *)&v8[-1].fields._IsQuestStartMenuMode_k__BackingField = arg1;
  *(&v8[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = v9;
  *(&v8[-1].fields._IsNormalFlowQuest_k__BackingField + 4) = v10;
  sub_1C2E0D0(v8, (int64_t)callBack, v11, v12, v13, v14, v15, v16);
}


void __fastcall BattleCallBack_int__bool__bool___call(
        BattleCallBack_int__bool__bool__o *this,
        const MethodInfo_31F13D4 *method)
{
  ActionExtensions__Call_int__bool__bool_(
    this->fields.callBack,
    this->fields.arg1,
    this->fields.arg2,
    this->fields.arg3,
    (const MethodInfo_2F2446C *)method->klass->rgctx_data->_5_ActionExtensions_Call_T1__T2__T3_);
}