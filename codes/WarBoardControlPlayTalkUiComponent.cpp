void __fastcall WarBoardControlPlayTalkUiComponent___ctor(
        WarBoardControlPlayTalkUiComponent_o *this,
        const MethodInfo *method)
{
  this->fields.fadeTime = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlPlayTalkUiComponent__SetDisp(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WarBoardControlPlayTalkUiComponent__SetDispLocal(this, isDisp, this->fields.fadeTime, method);
}


void __fastcall WarBoardControlPlayTalkUiComponent__SetDispImmediately(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WarBoardControlPlayTalkUiComponent__SetDispLocal(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlPlayTalkUiComponent__SetDispLocal(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  WarBoardControlPlayTalkUiComponent_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w24
  struct UnityEngine_GameObject_array *v12; // x8
  __int64 v13; // x25
  struct System_Boolean_array **p_activeStates; // x21
  float v15; // s9
  int max_length; // w9
  Il2CppClass **v17; // x8
  UnityEngine_GameObject_o *v18; // x22
  Il2CppObject *Component_object; // x23
  struct System_Boolean_array *v20; // x8
  int v21; // w9
  bool v22; // w1
  UnityEngine_GameObject_o *v23; // x0
  struct System_Boolean_array *v24; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *controlUiObjects; // x8
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  v7 = this;
  if ( (byte_4A2BA1F & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_AddNotExistComponent_UIWidget___, isDisp);
    sub_1B761C0(&bool___TypeInfo, v8);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v9);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    byte_4A2BA1F = 1;
  }
  if ( isDisp || v7->fields.activeStates )
  {
    v11 = 0;
  }
  else
  {
    controlUiObjects = v7->fields.controlUiObjects;
    if ( !controlUiObjects )
LABEL_28:
      sub_1B7641C(this, isDisp);
    v27 = sub_1B76268(bool___TypeInfo, controlUiObjects->max_length);
    v7->fields.activeStates = (struct System_Boolean_array *)v27;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->fields.activeStates, v27, v28, v29);
    v11 = 1;
  }
  v12 = v7->fields.controlUiObjects;
  if ( !v12 )
    goto LABEL_28;
  v13 = 0LL;
  p_activeStates = &v7->fields.activeStates;
  if ( isDisp )
    v15 = 1.0;
  else
    v15 = 0.0;
  while ( 1 )
  {
    max_length = v12->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( (unsigned int)v13 >= max_length )
      goto LABEL_34;
    v17 = &v12->obj.klass + v13;
    v18 = (UnityEngine_GameObject_o *)v17[4];
    if ( !v18 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v17[4],
                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( isDisp )
      {
        v20 = *p_activeStates;
        if ( !*p_activeStates )
          goto LABEL_27;
        v21 = v20->max_length;
        if ( (int)v13 + 1 > v21 )
          goto LABEL_27;
        if ( (unsigned int)v13 >= v21 )
          goto LABEL_34;
        v22 = v20->m_Items[v13 + 4];
        v23 = v18;
      }
      else
      {
        if ( v11 )
        {
          v24 = *p_activeStates;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v18, 0LL);
          if ( !v24 )
            goto LABEL_28;
          if ( (unsigned int)v13 >= v24->max_length )
LABEL_34:
            sub_1B76424(this, isDisp);
          v24->m_Items[v13 + 4] = (unsigned __int8)this & 1;
        }
        v23 = v18;
        v22 = 0;
      }
      UnityEngine_GameObject__SetActive(v23, v22, 0LL);
    }
LABEL_27:
    transform = UnityEngine_GameObject__get_transform(v18, 0LL);
    BasicHelper__AddNotExistComponent_object_(
      transform,
      (const MethodInfo_2E4D3E4 *)Method_BasicHelper_AddNotExistComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v18, time, v15, 0LL);
    v12 = v7->fields.controlUiObjects;
    ++v13;
    if ( !v12 )
      goto LABEL_28;
  }
  if ( isDisp )
  {
    *p_activeStates = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->fields.activeStates, 0, (int32_t)method, v4);
  }
}