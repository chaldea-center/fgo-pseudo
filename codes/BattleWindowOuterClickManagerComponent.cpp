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
  int32_t v6; // w2
  int32_t v7; // w3
  struct BattleWindowOuterClickComponent_o *v8; // x0

  if ( (byte_49FF478 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callBack);
    byte_49FF478 = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0LL, 0LL) )
  {
    v8 = this->fields.outerPanel;
    if ( !v8 )
      sub_1B64324(0LL);
    v8->fields.clickCallBack = callBack;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.clickCallBack, (int32_t)callBack, v6, v7);
  }
}