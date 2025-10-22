void WarBoardControlPlayTalkUiComponent___ctor(WarBoardControlPlayTalkUiComponent_o *this, const MethodInfo *method)
{
  this->fields.fadeTime = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardControlPlayTalkUiComponent__SetDisp(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WarBoardControlPlayTalkUiComponent__SetDispLocal(this, isDisp, this->fields.fadeTime, method);
}


void WarBoardControlPlayTalkUiComponent__SetDispImmediately(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WarBoardControlPlayTalkUiComponent__SetDispLocal(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardControlPlayTalkUiComponent__SetDispLocal(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  WarBoardControlPlayTalkUiComponent_o *v7; // x20
  int v8; // w24
  struct UnityEngine_GameObject_array *v9; // x8
  __int64 v10; // x25
  struct System_Boolean_array **p_activeStates; // x21
  float v12; // s9
  int max_length; // w9
  Il2CppClass **v14; // x8
  UnityEngine_GameObject_o *v15; // x22
  Il2CppObject *Component_object; // x23
  struct System_Boolean_array *v17; // x8
  int v18; // w9
  bool v19; // w1
  UnityEngine_GameObject_o *v20; // x0
  struct System_Boolean_array *v21; // x23
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_GameObject_array *controlUiObjects; // x8
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  v7 = this;
  if ( (byte_4C545C0 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetOrAddComponent_UIWidget___);
    sub_1C3E564(&bool___TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C545C0 = 1;
  }
  if ( isDisp || v7->fields.activeStates )
  {
    v8 = 0;
  }
  else
  {
    controlUiObjects = v7->fields.controlUiObjects;
    if ( !controlUiObjects )
LABEL_28:
      sub_1C3E7C0(this, isDisp);
    v24 = sub_1C3E60C(bool___TypeInfo, LODWORD(controlUiObjects->max_length));
    v7->fields.activeStates = (struct System_Boolean_array *)v24;
    sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.activeStates, v24, v25, v26);
    v8 = 1;
  }
  v9 = v7->fields.controlUiObjects;
  if ( !v9 )
    goto LABEL_28;
  v10 = 0;
  p_activeStates = &v7->fields.activeStates;
  if ( isDisp )
    v12 = 1.0;
  else
    v12 = 0.0;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_34;
    v14 = &v9->obj.klass + v10;
    v15 = (UnityEngine_GameObject_o *)v14[4];
    if ( !v15 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v14[4],
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( isDisp )
      {
        v17 = *p_activeStates;
        if ( !*p_activeStates )
          goto LABEL_27;
        v18 = v17->max_length;
        if ( (int)v10 + 1 > v18 )
          goto LABEL_27;
        if ( (unsigned int)v10 >= v18 )
          goto LABEL_34;
        v19 = v17->m_Items[v10];
        v20 = v15;
      }
      else
      {
        if ( v8 )
        {
          v21 = *p_activeStates;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v15, 0);
          if ( !v21 )
            goto LABEL_28;
          if ( (unsigned int)v10 >= LODWORD(v21->max_length) )
LABEL_34:
            sub_1C3E7C8(this, isDisp);
          v21->m_Items[v10] = (unsigned __int8)this & 1;
        }
        v20 = v15;
        v19 = 0;
      }
      UnityEngine_GameObject__SetActive(v20, v19, 0);
    }
LABEL_27:
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v15, 0);
    BasicHelper__GetOrAddComponent_object_(
      transform,
      (const MethodInfo_30E7174 *)Method_BasicHelper_GetOrAddComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v15, time, v12, 0);
    v9 = v7->fields.controlUiObjects;
    ++v10;
    if ( !v9 )
      goto LABEL_28;
  }
  if ( isDisp )
  {
    *p_activeStates = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.activeStates, 0, (int32_t)method, v4);
  }
}