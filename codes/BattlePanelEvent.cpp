void __fastcall BattlePanelEvent___ctor(BattlePanelEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePanelEvent__OnDestroy(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_18118324(this, 0, v2);
}


void __fastcall BattlePanelEvent__SetPanelActive(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_18118324(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePanelEvent__SetPanelActive_18118324(
        BattlePanelEvent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Panel; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_42111A5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flag);
    byte_42111A5 = 1;
  }
  Panel = (UnityEngine_Object_o *)this->fields.Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Panel, 0LL, 0LL) )
  {
    v6 = this->fields.Panel;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, flag, 0LL);
  }
}


void __fastcall BattlePanelEvent__SetPanelDisable(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_18118324(this, 0, v2);
}