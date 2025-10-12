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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct BattleWindowOuterClickComponent_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3B11B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B11B = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0, 0) )
  {
    v8 = this->fields.outerPanel;
    if ( !v8
      || (v8->fields.clickCallBack = callBack,
          sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.clickCallBack, (int32_t)callBack, v6, v7),
          (v8 = this->fields.outerPanel) == 0) )
    {
      sub_1C32E7C(v8);
    }
    v8->fields.targetWindow = (struct BattleWindowComponent_o *)this;
    sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.targetWindow, (int32_t)this, v9, v10);
  }
}