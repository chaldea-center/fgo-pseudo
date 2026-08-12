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
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  WarBoardControlPlayTalkUiComponent_o *v11; // x19
  int v12; // w23
  struct UnityEngine_GameObject_array *v13; // x8
  unsigned int v14; // w27
  float v15; // s9
  unsigned int max_length; // w9
  Il2CppClass **v17; // x8
  UnityEngine_GameObject_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Component_object; // x22
  struct System_Boolean_array *activeStates; // x8
  unsigned int v23; // w9
  bool v24; // w1
  struct System_Boolean_array *v25; // x22
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_GameObject_array *controlUiObjects; // x8
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  v11 = this;
  if ( (byte_596DEF5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetOrAddComponent_UIWidget___);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEF5 = 1;
  }
  if ( isDisp || v11->fields.activeStates )
  {
    v12 = 0;
  }
  else
  {
    controlUiObjects = v11->fields.controlUiObjects;
    if ( !controlUiObjects )
LABEL_28:
      sub_2213CDC(this, isDisp);
    v28 = sub_2213B20(bool___TypeInfo, LODWORD(controlUiObjects->max_length));
    v11->fields.activeStates = (struct System_Boolean_array *)v28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.activeStates, v28, v29, v30, v31, v32, v33, v34);
    v12 = 1;
  }
  v13 = v11->fields.controlUiObjects;
  if ( !v13 )
    goto LABEL_28;
  v14 = 0;
  if ( isDisp )
    v15 = 1.0;
  else
    v15 = 0.0;
  while ( 1 )
  {
    max_length = v13->max_length;
    if ( (int)v14 >= (int)max_length )
      break;
    if ( v14 >= max_length )
      goto LABEL_34;
    v17 = &v13->obj.klass + (int)v14;
    v18 = (UnityEngine_GameObject_o *)v17[4];
    if ( !v18 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v17[4],
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( isDisp )
      {
        activeStates = v11->fields.activeStates;
        if ( !activeStates )
          goto LABEL_27;
        v23 = activeStates->max_length;
        if ( (int)(v14 + 1) > (int)v23 )
          goto LABEL_27;
        if ( v14 >= v23 )
          goto LABEL_34;
        v24 = activeStates->m_Items[v14];
      }
      else if ( v12 )
      {
        v25 = v11->fields.activeStates;
        this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v18, 0);
        if ( !v25 )
          goto LABEL_28;
        if ( v14 >= LODWORD(v25->max_length) )
LABEL_34:
          sub_2213CE4(this);
        v24 = 0;
        v25->m_Items[v14] = (unsigned __int8)this & 1;
      }
      else
      {
        v24 = 0;
      }
      UnityEngine_GameObject__SetActive(v18, v24, 0);
    }
LABEL_27:
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0);
    BasicHelper__GetOrAddComponent_object_(
      transform,
      (const MethodInfo_3813E18 *)Method_BasicHelper_GetOrAddComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v18, time, v15, 0);
    v13 = v11->fields.controlUiObjects;
    ++v14;
    if ( !v13 )
      goto LABEL_28;
  }
  if ( isDisp )
  {
    v11->fields.activeStates = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v11->fields.activeStates,
      0,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
}