void __fastcall WarBoardControlPlayTalkUiComponent___ctor(
        WarBoardControlPlayTalkUiComponent_o *this,
        const MethodInfo *method)
{
  LODWORD(this->fields.controlUiObjects) = 1056964608;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlPlayTalkUiComponent__SetDisp(
        WarBoardControlPlayTalkUiComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  WarBoardControlPlayTalkUiComponent__SetDispLocal(this, isDisp, *(float *)&this->fields.controlUiObjects, method);
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
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  WarBoardControlPlayTalkUiComponent_o *v11; // x20
  int v12; // w24
  struct System_Boolean_array *v13; // x8
  __int64 v14; // x25
  WarBoardControlPlayTalkUiComponent_o *v15; // x21
  float v16; // s9
  int max_length; // w9
  Il2CppClass **v18; // x8
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  WarBoardControlPlayTalkUiComponent_c *klass; // x8
  int namespaze; // w9
  char v23; // w1
  UnityEngine_GameObject_o *v24; // x0
  WarBoardControlPlayTalkUiComponent_c *v25; // x23
  UnityEngine_Transform_o *transform; // x0
  struct System_Boolean_array *activeStates; // x8
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0

  v11 = this;
  if ( (byte_4389A2D & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_AddNotExistComponent_UIWidget___);
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389A2D = 1;
  }
  if ( isDisp || v11[1].klass )
  {
    v12 = 0;
  }
  else
  {
    activeStates = v11->fields.activeStates;
    if ( !activeStates )
LABEL_29:
      sub_B7769C(this, isDisp);
    v28 = (System_Int32_array **)sub_B775DC(bool___TypeInfo, activeStates->max_length);
    v11[1].klass = (WarBoardControlPlayTalkUiComponent_c *)v28;
    sub_B77560((BattleServantConfConponent_o *)&v11[1], v28, v29, v30, v31, v32, v33, v34);
    v12 = 1;
  }
  v13 = v11->fields.activeStates;
  if ( !v13 )
    goto LABEL_29;
  v14 = 0LL;
  v15 = v11 + 1;
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
      goto LABEL_35;
    v18 = &v13->obj.klass + v14;
    v19 = (UnityEngine_GameObject_o *)v18[4];
    if ( !v19 )
      goto LABEL_29;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v18[4],
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( isDisp )
      {
        klass = v15->klass;
        if ( !v15->klass )
          goto LABEL_28;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)v14 + 1 > namespaze )
          goto LABEL_28;
        if ( (unsigned int)v14 >= namespaze )
          goto LABEL_35;
        v23 = *((_BYTE *)&klass->_1.byval_arg.data + v14);
        v24 = v19;
      }
      else
      {
        if ( v12 )
        {
          v25 = v15->klass;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v19, 0LL);
          if ( !v25 )
            goto LABEL_29;
          if ( (unsigned int)v14 >= LODWORD(v25->_1.namespaze) )
          {
LABEL_35:
            v35 = sub_B776C8(this);
            sub_B77668(v35, 0LL);
          }
          *((_BYTE *)&v25->_1.byval_arg.data + v14) = (unsigned __int8)this & 1;
        }
        v24 = v19;
        v23 = 0;
      }
      UnityEngine_GameObject__SetActive(v24, v23, 0LL);
    }
LABEL_28:
    transform = UnityEngine_GameObject__get_transform(v19, 0LL);
    BasicHelper__AddNotExistComponent_UIWidget_(
      transform,
      (const MethodInfo_1C65D24 *)Method_BasicHelper_AddNotExistComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v19, time, v16, 0LL);
    v13 = v11->fields.activeStates;
    ++v14;
    if ( !v13 )
      goto LABEL_29;
  }
  if ( isDisp )
  {
    v15->klass = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v11[1], 0LL, (System_String_array **)method, v4, v5, v6, v7, v8);
  }
}