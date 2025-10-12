void BattlePanelEvent___ctor(BattlePanelEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePanelEvent__OnDestroy(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_46022820(this, 0, v2);
}


void BattlePanelEvent__SetPanelActive(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_46022820(this, 1, v2);
}


void BattlePanelEvent__SetPanelActive_46022820(BattlePanelEvent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *Panel; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3A4FB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A4FB = 1;
  }
  Panel = (UnityEngine_Object_o *)this->fields.Panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Panel, 0, 0) )
  {
    v6 = this->fields.Panel;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v6, flag, 0);
  }
}


void BattlePanelEvent__SetPanelDisable(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_46022820(this, 0, v2);
}