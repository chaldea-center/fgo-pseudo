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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  WarBoardControlPlayTalkUiComponent_o *v11; // x20
  int v12; // w24
  struct UnityEngine_GameObject_array *v13; // x8
  __int64 v14; // x25
  struct System_Boolean_array **p_activeStates; // x21
  float v16; // s9
  int max_length; // w9
  Il2CppClass **v18; // x8
  UnityEngine_GameObject_o *v19; // x22
  Il2CppObject *Component_object; // x23
  struct System_Boolean_array *v21; // x8
  int v22; // w9
  bool v23; // w1
  UnityEngine_GameObject_o *v24; // x0
  struct System_Boolean_array *v25; // x23
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_GameObject_array *controlUiObjects; // x8
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  v11 = this;
  if ( (byte_4D2E17E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetOrAddComponent_UIWidget___);
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E17E = 1;
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
      sub_1C93D2C(this, isDisp);
    v28 = sub_1C93B7C(bool___TypeInfo, LODWORD(controlUiObjects->max_length));
    v11->fields.activeStates = (struct System_Boolean_array *)v28;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v11->fields.activeStates, v28, v29, v30, v31, v32, v33, v34);
    v12 = 1;
  }
  v13 = v11->fields.controlUiObjects;
  if ( !v13 )
    goto LABEL_28;
  v14 = 0;
  p_activeStates = &v11->fields.activeStates;
  if ( isDisp )
    v16 = 1.0;
  else
    v16 = 0.0;
  while ( 1 )
  {
    max_length = v13->max_length;
    if ( (int)v14 >= max_length )
      break;
    if ( (unsigned int)v14 >= max_length )
      goto LABEL_34;
    v18 = &v13->obj.klass + v14;
    v19 = (UnityEngine_GameObject_o *)v18[4];
    if ( !v19 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v18[4],
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
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
        v21 = *p_activeStates;
        if ( !*p_activeStates )
          goto LABEL_27;
        v22 = v21->max_length;
        if ( (int)v14 + 1 > v22 )
          goto LABEL_27;
        if ( (unsigned int)v14 >= v22 )
          goto LABEL_34;
        v23 = v21->m_Items[v14];
        v24 = v19;
      }
      else
      {
        if ( v12 )
        {
          v25 = *p_activeStates;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v19, 0);
          if ( !v25 )
            goto LABEL_28;
          if ( (unsigned int)v14 >= LODWORD(v25->max_length) )
LABEL_34:
            sub_1C93D34(this);
          v25->m_Items[v14] = (unsigned __int8)this & 1;
        }
        v24 = v19;
        v23 = 0;
      }
      UnityEngine_GameObject__SetActive(v24, v23, 0);
    }
LABEL_27:
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v19, 0);
    BasicHelper__GetOrAddComponent_object_(
      transform,
      (const MethodInfo_3191EDC *)Method_BasicHelper_GetOrAddComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v19, time, v16, 0);
    v13 = v11->fields.controlUiObjects;
    ++v14;
    if ( !v13 )
      goto LABEL_28;
  }
  if ( isDisp )
  {
    *p_activeStates = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v11->fields.activeStates, 0, (int32_t)method, v4, v5, v6, v7, v8);
  }
}