void __fastcall BattleWindowOuterClickManagerComponent___ctor(
        BattleWindowOuterClickManagerComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
        BattleWindowOuterClickManagerComponent_o *this,
        BattleWindowOuterClickComponent_OuterClickCall_o *callBack,
        const MethodInfo *method)
{
  UnityEngine_Object_o *outerPanel; // x21
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleWindowOuterClickComponent_o *v13; // x0

  if ( (byte_4BCADC6 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, callBack);
    byte_4BCADC6 = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0LL, 0LL) )
  {
    v13 = this->fields.outerPanel;
    if ( !v13 )
      sub_1C1AE30(0LL, v6);
    v13->fields.clickCallBack = callBack;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v13->fields.clickCallBack, (int64_t)callBack, v7, v8, v9, v10, v11, v12);
  }
}