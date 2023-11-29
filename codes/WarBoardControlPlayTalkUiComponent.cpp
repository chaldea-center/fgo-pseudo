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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int v15; // w24
  struct System_Boolean_array *v16; // x8
  __int64 v17; // x25
  WarBoardControlPlayTalkUiComponent_o *v18; // x21
  float v19; // s9
  int max_length; // w9
  Il2CppClass **v21; // x8
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  WarBoardControlPlayTalkUiComponent_c *klass; // x8
  int namespaze; // w9
  char v26; // w1
  UnityEngine_GameObject_o *v27; // x0
  WarBoardControlPlayTalkUiComponent_c *v28; // x23
  UnityEngine_Transform_o *transform; // x0
  struct System_Boolean_array *activeStates; // x8
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  v11 = this;
  if ( (byte_40F8982 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_AddNotExistComponent_UIWidget___, isDisp);
    sub_B16FFC(&bool___TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v13);
    this = (WarBoardControlPlayTalkUiComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40F8982 = 1;
  }
  if ( isDisp || v11[1].klass )
  {
    v15 = 0;
  }
  else
  {
    activeStates = v11->fields.activeStates;
    if ( !activeStates )
LABEL_29:
      sub_B170D4();
    v31 = (System_Int32_array **)sub_B17014(bool___TypeInfo, activeStates->max_length, method);
    v11[1].klass = (WarBoardControlPlayTalkUiComponent_c *)v31;
    sub_B16F98((BattleServantConfConponent_o *)&v11[1], v31, v32, v33, v34, v35, v36, v37);
    v15 = 1;
  }
  v16 = v11->fields.activeStates;
  if ( !v16 )
    goto LABEL_29;
  v17 = 0LL;
  v18 = v11 + 1;
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
      goto LABEL_35;
    v21 = &v16->obj.klass + v17;
    v22 = (UnityEngine_GameObject_o *)v21[4];
    if ( !v22 )
      goto LABEL_29;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v21[4],
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
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
        klass = v18->klass;
        if ( !v18->klass )
          goto LABEL_28;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)v17 + 1 > namespaze )
          goto LABEL_28;
        if ( (unsigned int)v17 >= namespaze )
          goto LABEL_35;
        v26 = *((_BYTE *)&klass->_1.byval_arg.data + v17);
        v27 = v22;
      }
      else
      {
        if ( v15 )
        {
          v28 = v18->klass;
          this = (WarBoardControlPlayTalkUiComponent_o *)UnityEngine_GameObject__get_activeSelf(v22, 0LL);
          if ( !v28 )
            goto LABEL_29;
          if ( (unsigned int)v17 >= LODWORD(v28->_1.namespaze) )
          {
LABEL_35:
            sub_B17100(this, isDisp, method);
            sub_B170A0();
          }
          *((_BYTE *)&v28->_1.byval_arg.data + v17) = (unsigned __int8)this & 1;
        }
        v27 = v22;
        v26 = 0;
      }
      UnityEngine_GameObject__SetActive(v27, v26, 0LL);
    }
LABEL_28:
    transform = UnityEngine_GameObject__get_transform(v22, 0LL);
    BasicHelper__AddNotExistComponent_UIWidget_(
      transform,
      (const MethodInfo_18B5BA8 *)Method_BasicHelper_AddNotExistComponent_UIWidget___);
    this = (WarBoardControlPlayTalkUiComponent_o *)TweenAlpha__Begin(v22, time, v19, 0LL);
    v16 = v11->fields.activeStates;
    ++v17;
    if ( !v16 )
      goto LABEL_29;
  }
  if ( isDisp )
  {
    v18->klass = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v11[1], 0LL, (System_String_array **)method, v4, v5, v6, v7, v8);
  }
}