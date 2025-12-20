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

  if ( (byte_4D31086 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31086 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(v5, v4);
  }
}


void AnimatedAlpha__OnEnable(AnimatedAlpha_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1

  if ( (byte_4D31085 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4D31085 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  AnimatedAlpha__LateUpdate(this, v17);
}