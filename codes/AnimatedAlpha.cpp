void AnimatedAlpha___ctor(AnimatedAlpha_o *this, const MethodInfo *method)
{
  this->fields.alpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AnimatedAlpha__LateUpdate(AnimatedAlpha_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  __int64 v4; // x1
  void *v5; // x0
  UnityEngine_Object_o *mPanel; // x20

  if ( (byte_59751DA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751DA = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v5 = this->fields.mWidget;
    if ( !v5 )
      goto LABEL_14;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v5 + 440LL))(
      v5,
      *(_QWORD *)(*(_QWORD *)v5 + 448LL),
      this->fields.alpha);
  }
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
  {
    v5 = this->fields.mPanel;
    if ( v5 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v5 + 440LL))(
        v5,
        *(_QWORD *)(*(_QWORD *)v5 + 448LL),
        this->fields.alpha);
      return;
    }
LABEL_14:
    sub_2213CDC(v5, v4);
  }
}


void AnimatedAlpha__OnEnable(AnimatedAlpha_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1

  if ( (byte_59751D9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_59751D9 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  AnimatedAlpha__LateUpdate(this, v17);
}