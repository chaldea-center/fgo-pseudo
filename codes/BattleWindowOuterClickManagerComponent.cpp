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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleWindowOuterClickComponent_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D34284 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34284 = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0, 0) )
  {
    v13 = this->fields.outerPanel;
    if ( !v13
      || (v13->fields.clickCallBack = callBack,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v13->fields.clickCallBack,
            (int32_t)callBack,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v13 = this->fields.outerPanel) == 0) )
    {
      sub_1C93D2C(v13, v6);
    }
    v13->fields.targetWindow = (struct BattleWindowComponent_o *)this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13->fields.targetWindow, (int32_t)this, v14, v15, v16, v17, v18, v19);
  }
}