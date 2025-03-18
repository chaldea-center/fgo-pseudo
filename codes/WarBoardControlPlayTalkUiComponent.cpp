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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  WarBoardControlPlayTalkUiComponent_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int v15; // w24
  struct UnityEngine_GameObject_array *v16; // x8
  __int64 v17; // x25
  struct System_Boolean_array **p_activeStates; // x21
  float v19; // s9
  int max_length; // w9
  Il2CppClass **v21; // x8
  UnityEngine_GameObject_o *v22; // x22
  Il2CppObject *Component_object; // x23
  struct System_Boolean_array *v24; // x8
  int v25; // w9
  bool v26; // w1
  UnityEngine_GameObject_o *v27; // x0
  struct System_Boolean_array *v28; // x23
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_GameObject_array *controlUiObjects; // x8
  int64_t v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  v11 = this;
  if ( (byte_4C1F879 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_GetOrAddComponent_UIWidget___, isDisp);
    sub_1C3B764(&bool___TypeInfo, v12);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v13);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    byte_4C1F879 = 1;
  }
  if ( isDisp || v11->fields.activeStates )
  {
    v15 = 0;
  }
  else
  {
    controlUiObjects = v11->fields.controlUiObjects;
    if ( !controlUiObjects )
LABEL_28:
      sub_1C3B9C0(this, isDisp);
    v31 = sub_1C3B80C(bool___TypeInfo, controlUiObjects->max_length);
    v11->fields.activeStates = (struct System_Boolean_array *)v31;
    sub_1C3B708((PartyOrganizationUtility_o *)&v11->fields.activeStates, v31, v32, v33, v34, v35, v36, v37);
    v15 = 1;
  }
  v16 = v11->fields.controlUiObjects;
  if ( !v16 )
    goto LABEL_28;
  v17 = 0LL;
  p_activeStates = &v11->fields.activeStates;
  if ( isDisp )
    v19 = 1.0;
  else
    v19 = 0.0;
  while ( 1 )
  {
    max_length = v16->max_length;
    if ( (int)v17 >= max_length )
      break;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_34;
    v21 = &v16->obj.klass + v17;
    v22 = (UnityEngine_GameObject_o *)v21[4];
    if ( !v22 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21[4],
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
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
        v24 = *p_activeStates;
        if ( !*p_activeStates )
          goto LABEL_27;
        v25 = v24->max_length;
        if ( (int)v17 + 1 > v25 )
          goto LABEL_27;
        if ( (unsigned int)v17 >= v25 )
          goto LABEL_34;
        v26 = v24->m_Items[v17 + 4];
        v27 = v22;
      }
      else
      {
        if ( v15 )
        {
          v28 = *p_activeStates;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v22, 0LL);
          if ( !v28 )
            goto LABEL_28;
          if ( (unsigned int)v17 >= v28->max_length )
LABEL_34:
            sub_1C3B9C8(this, isDisp);
          v28->m_Items[v17 + 4] = (unsigned __int8)this & 1;
        }
        v27 = v22;
        v26 = 0;
      }
      UnityEngine_GameObject__SetActive(v27, v26, 0LL);
    }
LABEL_27:
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
    BasicHelper__GetOrAddComponent_object_(
      transform,
      (const MethodInfo_2FDDC40 *)Method_BasicHelper_GetOrAddComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v22, time, v19, 0LL);
    v16 = v11->fields.controlUiObjects;
    ++v17;
    if ( !v16 )
      goto LABEL_28;
  }
  if ( isDisp )
  {
    *p_activeStates = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&v11->fields.activeStates, 0LL, (int64_t)method, v4, v5, v6, v7, v8);
  }
}