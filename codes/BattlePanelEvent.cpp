void BattlePanelEvent___ctor(BattlePanelEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePanelEvent__OnDestroy(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_53284356(this, 0, v2);
}


void BattlePanelEvent__SetPanelActive(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_53284356(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void BattlePanelEvent__SetPanelActive_53284356(BattlePanelEvent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *Panel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5973570 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973570 = 1;
  }
  Panel = (UnityEngine_Object_o *)this->fields.Panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag);
  if ( UnityEngine_Object__op_Inequality(Panel, 0, 0) )
  {
    v7 = this->fields.Panel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


void BattlePanelEvent__SetPanelDisable(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_53284356(this, 0, v2);
}