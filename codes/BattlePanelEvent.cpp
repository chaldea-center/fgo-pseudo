void __fastcall BattlePanelEvent___ctor(BattlePanelEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePanelEvent__OnDestroy(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_18652588(this, 0, v2);
}


void __fastcall BattlePanelEvent__SetPanelActive(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_18652588(this, 1, v2);
}


void __fastcall BattlePanelEvent__SetPanelActive_18652588(
        BattlePanelEvent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Panel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42AC992 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC992 = 1;
  }
  Panel = (UnityEngine_Object_o *)this->fields.Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Panel, 0LL, 0LL) )
  {
    v7 = this->fields.Panel;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


void __fastcall BattlePanelEvent__SetPanelDisable(BattlePanelEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePanelEvent__SetPanelActive_18652588(this, 0, v2);
}