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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w24
  struct UnityEngine_GameObject_array *v19; // x8
  __int64 v20; // x25
  struct System_Boolean_array **p_activeStates; // x21
  float v22; // s9
  int max_length; // w9
  Il2CppClass **v24; // x8
  UnityEngine_GameObject_o *v25; // x22
  __int64 v26; // x1
  Il2CppObject *Component_object; // x23
  struct System_Boolean_array *v28; // x8
  int v29; // w9
  bool v30; // w1
  UnityEngine_GameObject_o *v31; // x0
  struct System_Boolean_array *v32; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *controlUiObjects; // x8
  int64_t v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  v11 = this;
  if ( (byte_4B13B89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_AddNotExistComponent_UIWidget___, isDisp, method);
    sub_1BCA7E0(&bool___TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v14, v15);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    byte_4B13B89 = 1;
  }
  if ( isDisp || v11->fields.activeStates )
  {
    v18 = 0;
  }
  else
  {
    controlUiObjects = v11->fields.controlUiObjects;
    if ( !controlUiObjects )
LABEL_28:
      sub_1BCAA3C(this, isDisp);
    v35 = sub_1BCA888(bool___TypeInfo, controlUiObjects->max_length);
    v11->fields.activeStates = (struct System_Boolean_array *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.activeStates, v35, v36, v37, v38, v39, v40, v41);
    v18 = 1;
  }
  v19 = v11->fields.controlUiObjects;
  if ( !v19 )
    goto LABEL_28;
  v20 = 0LL;
  p_activeStates = &v11->fields.activeStates;
  if ( isDisp )
    v22 = 1.0;
  else
    v22 = 0.0;
  while ( 1 )
  {
    max_length = v19->max_length;
    if ( (int)v20 >= max_length )
      break;
    if ( (unsigned int)v20 >= max_length )
      goto LABEL_34;
    v24 = &v19->obj.klass + v20;
    v25 = (UnityEngine_GameObject_o *)v24[4];
    if ( !v25 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24[4],
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( isDisp )
      {
        v28 = *p_activeStates;
        if ( !*p_activeStates )
          goto LABEL_27;
        v29 = v28->max_length;
        if ( (int)v20 + 1 > v29 )
          goto LABEL_27;
        if ( (unsigned int)v20 >= v29 )
          goto LABEL_34;
        v30 = v28->m_Items[v20 + 4];
        v31 = v25;
      }
      else
      {
        if ( v18 )
        {
          v32 = *p_activeStates;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v25, 0LL);
          if ( !v32 )
            goto LABEL_28;
          if ( (unsigned int)v20 >= v32->max_length )
LABEL_34:
            sub_1BCAA44(this, isDisp);
          v32->m_Items[v20 + 4] = (unsigned __int8)this & 1;
        }
        v31 = v25;
        v30 = 0;
      }
      UnityEngine_GameObject__SetActive(v31, v30, 0LL);
    }
LABEL_27:
    transform = UnityEngine_GameObject__get_transform(v25, 0LL);
    BasicHelper__AddNotExistComponent_object_(
      transform,
      (const MethodInfo_2EFD8A8 *)Method_BasicHelper_AddNotExistComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v25, time, v22, 0LL);
    v19 = v11->fields.controlUiObjects;
    ++v20;
    if ( !v19 )
      goto LABEL_28;
  }
  if ( isDisp )
  {
    *p_activeStates = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.activeStates, 0LL, (int64_t)method, v4, v5, v6, v7, v8);
  }
}