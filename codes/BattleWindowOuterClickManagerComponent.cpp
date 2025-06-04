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
  const MethodInfo *v8; // x3
  struct BattleWindowOuterClickComponent_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B055DE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callBack);
    byte_4B055DE = 1;
  }
  outerPanel = (UnityEngine_Object_o *)this->fields.outerPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(outerPanel, 0LL, 0LL) )
  {
    v9 = this->fields.outerPanel;
    if ( !v9
      || (v9->fields.clickCallBack = callBack,
          sub_1BC2FAC((CGThumbnailListItem_o *)&v9->fields.clickCallBack, (int32_t)callBack, v7, v8),
          (v9 = this->fields.outerPanel) == 0LL) )
    {
      sub_1BC3264(v9, v6);
    }
    v9->fields.targetWindow = (struct BattleWindowComponent_o *)this;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v9->fields.targetWindow, (int32_t)this, v10, v11);
  }
}