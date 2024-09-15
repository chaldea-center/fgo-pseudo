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
  int32_t v7; // w2
  int32_t v8; // w3
  struct BattleWindowOuterClickComponent_o *v9; // x0

  if ( (byte_4A30FEF & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, callBack);
    byte_4A30FEF = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0LL, 0LL) )
  {
    v9 = this->fields.outerPanel;
    if ( !v9 )
      sub_1B7641C(0LL, v6);
    v9->fields.clickCallBack = callBack;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v9->fields.clickCallBack, (int32_t)callBack, v7, v8);
  }
}