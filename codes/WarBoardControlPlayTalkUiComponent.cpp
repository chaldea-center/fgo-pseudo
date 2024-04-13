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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w24
  struct System_Boolean_array *v22; // x8
  __int64 v23; // x25
  WarBoardControlPlayTalkUiComponent_o *v24; // x21
  float v25; // s9
  int max_length; // w9
  Il2CppClass **v27; // x8
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  WarBoardControlPlayTalkUiComponent_c *klass; // x8
  int namespaze; // w9
  char v32; // w1
  UnityEngine_GameObject_o *v33; // x0
  WarBoardControlPlayTalkUiComponent_c *v34; // x23
  UnityEngine_Transform_o *transform; // x0
  struct System_Boolean_array *activeStates; // x8
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0

  v11 = this;
  if ( (byte_42E7735 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_AddNotExistComponent_UIWidget___, isDisp, (_DWORD)method, v4);
    sub_B5D5C4(&bool___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v15, v16, v17);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E7735 = 1;
  }
  if ( isDisp || v11[1].klass )
  {
    v21 = 0;
  }
  else
  {
    activeStates = v11->fields.activeStates;
    if ( !activeStates )
LABEL_29:
      sub_B5D69C(this, isDisp);
    v37 = (System_Int32_array **)sub_B5D5DC(bool___TypeInfo, activeStates->max_length);
    v11[1].klass = (WarBoardControlPlayTalkUiComponent_c *)v37;
    sub_B5D560((BattleServantConfConponent_o *)&v11[1], v37, v38, v39, v40, v41, v42, v43);
    v21 = 1;
  }
  v22 = v11->fields.activeStates;
  if ( !v22 )
    goto LABEL_29;
  v23 = 0LL;
  v24 = v11 + 1;
  if ( isDisp )
    v25 = 1.0;
  else
    v25 = 0.0;
  while ( 1 )
  {
    max_length = v22->max_length;
    if ( (int)v23 >= max_length )
      break;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_35;
    v27 = &v22->obj.klass + v23;
    v28 = (UnityEngine_GameObject_o *)v27[4];
    if ( !v28 )
      goto LABEL_29;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v27[4],
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
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
        klass = v24->klass;
        if ( !v24->klass )
          goto LABEL_28;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)v23 + 1 > namespaze )
          goto LABEL_28;
        if ( (unsigned int)v23 >= namespaze )
          goto LABEL_35;
        v32 = *((_BYTE *)&klass->_1.byval_arg.data + v23);
        v33 = v28;
      }
      else
      {
        if ( v21 )
        {
          v34 = v24->klass;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v28, 0LL);
          if ( !v34 )
            goto LABEL_29;
          if ( (unsigned int)v23 >= LODWORD(v34->_1.namespaze) )
          {
LABEL_35:
            v44 = sub_B5D6C8(this);
            sub_B5D668(v44, 0LL);
          }
          *((_BYTE *)&v34->_1.byval_arg.data + v23) = (unsigned __int8)this & 1;
        }
        v33 = v28;
        v32 = 0;
      }
      UnityEngine_GameObject__SetActive(v33, v32, 0LL);
    }
LABEL_28:
    transform = UnityEngine_GameObject__get_transform(v28, 0LL);
    BasicHelper__AddNotExistComponent_UIWidget_(
      transform,
      (const MethodInfo_1AD6914 *)Method_BasicHelper_AddNotExistComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v28, time, v25, 0LL);
    v22 = v11->fields.activeStates;
    ++v23;
    if ( !v22 )
      goto LABEL_29;
  }
  if ( isDisp )
  {
    v24->klass = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v11[1], 0LL, (System_String_array **)method, v4, v5, v6, v7, v8);
  }
}