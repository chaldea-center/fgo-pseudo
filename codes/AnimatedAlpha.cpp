void AnimatedAlpha___ctor(AnimatedAlpha_o *this, const MethodInfo *method)
{
  this->fields.alpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AnimatedAlpha__LateUpdate(AnimatedAlpha_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  void *v4; // x0
  UnityEngine_Object_o *mPanel; // x20

  if ( (byte_4C477A7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C477A7 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v4 = this->fields.mWidget;
    if ( !v4 )
      goto LABEL_14;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v4 + 440LL))(
      v4,
      *(_QWORD *)(*(_QWORD *)v4 + 448LL),
      this->fields.alpha);
  }
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
  {
    v4 = this->fields.mPanel;
    if ( v4 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v4 + 440LL))(
        v4,
        *(_QWORD *)(*(_QWORD *)v4 + 448LL),
        this->fields.alpha);
      return;
    }
LABEL_14:
    sub_1C372B4(v4);
  }
}


void AnimatedAlpha__OnEnable(AnimatedAlpha_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4C477A6 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C477A6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v6, v7, v8);
  AnimatedAlpha__LateUpdate(this, v9);
}