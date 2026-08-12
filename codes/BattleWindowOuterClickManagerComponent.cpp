void BattleWindowOuterClickManagerComponent___ctor(
        BattleWindowOuterClickManagerComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
        BattleWindowOuterClickManagerComponent_o *this,
        BattleWindowOuterClickComponent_OuterClickCall_o *callBack,
        const MethodInfo *method)
{
  UnityEngine_Object_o *outerPanel; // x21
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct BattleWindowOuterClickComponent_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_59742D6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742D6 = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callBack);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0, 0) )
  {
    v13 = this->fields.outerPanel;
    if ( !v13
      || (v13->fields.clickCallBack = callBack,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v13->fields.clickCallBack,
            (int32_t)callBack,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v13 = this->fields.outerPanel) == 0) )
    {
      sub_2213CDC(v13, v6);
    }
    v13->fields.targetWindow = (struct BattleWindowComponent_o *)this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v13->fields.targetWindow,
      (int32_t)this,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}