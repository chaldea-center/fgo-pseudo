void __fastcall StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Camera_o *Component_WebViewObject; // x0
  UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_Object_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v12; // w23
  UnityEngine_Camera_o *v13; // x0
  UnityEngine_Camera_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_RenderTexture_o *Temporary_34868996; // x0
  UnityEngine_Camera_o *v22; // x0
  UnityEngine_Object_o *v23; // x0
  const MethodInfo *v24; // x2
  StandFigureManager_o *manager; // x0

  if ( (byte_40FAE4F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_11303/*"RednerTexture"*/, v4);
    sub_B16FFC(&StringLiteral_13540/*"TempStandFigurenRednerTexture"*/, v5);
    byte_40FAE4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_WebViewObject )
    {
      targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
      if ( targetTexture )
      {
        v8 = (UnityEngine_Object_o *)targetTexture;
        if ( !UnityEngine_RenderTexture__IsCreated(targetTexture, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          p_recycleTexture = &this->fields.recycleTexture;
          recycleTexture = (UnityEngine_Object_o *)this->fields.recycleTexture;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v12 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          v13 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v14 = v13;
          if ( v12 )
          {
            if ( !v13 )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(v13, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_B16F98((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v15, v16, v17, v18, v19, v20);
          }
          else
          {
            Temporary_34868996 = UnityEngine_RenderTexture__GetTemporary_34868996(1024, 1024, 0, 0, 0LL);
            if ( !v14 )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(v14, Temporary_34868996, 0LL);
          }
          v22 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( v22 )
          {
            v23 = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v22, 0LL);
            if ( v23 )
            {
              UnityEngine_Object__set_name(v23, (System_String_o *)StringLiteral_11303/*"RednerTexture"*/, 0LL);
              UnityEngine_Object__set_name(v8, (System_String_o *)StringLiteral_13540/*"TempStandFigurenRednerTexture"*/, 0LL);
              manager = this->fields.manager;
              if ( manager )
              {
                StandFigureManager__OnRenderEnd(manager, (UnityEngine_RenderTexture_o *)v8, v24);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall StandFigureCamera__OnPreRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


bool __fastcall StandFigureCamera__Request(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool v8; // w19
  UnityEngine_Camera_o *Component_WebViewObject; // x0
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Camera_o *v20; // x0
  UnityEngine_Camera_o *v21; // x22
  UnityEngine_RenderTexture_o *Temporary_34868996; // x0
  UnityEngine_Camera_o *v23; // x0
  UnityEngine_Object_o *v24; // x0
  UnityEngine_Camera_o *v25; // x0
  UnityEngine_Texture_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FAE4D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11303/*"RednerTexture"*/, v6);
    sub_B16FFC(&StringLiteral_11297/*"RecycleRednerTexture"*/, v7);
    byte_40FAE4D = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.recycleTexture,
    (System_Int32_array **)targetTexture,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (UnityEngine_Object_o *)this->fields.recycleTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v20 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !v20 )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(v20, 1.0, 0LL);
  v21 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Temporary_34868996 = UnityEngine_RenderTexture__GetTemporary_34868996(1024, 1024, 0, 0, 0LL);
  if ( !v21 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v21, Temporary_34868996, 0LL);
  v23 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !v23 )
    goto LABEL_27;
  v24 = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v23, 0LL);
  if ( !v24 )
    goto LABEL_27;
  UnityEngine_Object__set_name(v24, (System_String_o *)StringLiteral_11303/*"RednerTexture"*/, 0LL);
  v25 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !v25 )
    goto LABEL_27;
  v26 = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(v25, 0LL);
  if ( !v26 )
    goto LABEL_27;
  UnityEngine_Texture__set_filterMode(v26, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)recycleTexture, 0LL, 0LL) )
  {
    *p_recycleTexture = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v27, v28, v29, v30, v31, v32);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11297/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        !*p_recycleTexture) )
  {
LABEL_27:
    sub_B170D4();
  }
  v8 = 1;
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*p_recycleTexture, 1, 0LL);
  return v8;
}


bool __fastcall StandFigureCamera__RequestTypePoint(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Camera_o *Component_WebViewObject; // x0
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Camera_o *v20; // x0
  UnityEngine_Camera_o *v21; // x22
  UnityEngine_RenderTexture_o *Temporary_34868996; // x0
  UnityEngine_Camera_o *v23; // x0
  UnityEngine_Object_o *v24; // x0
  UnityEngine_Camera_o *v25; // x0
  UnityEngine_Texture_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FAE4E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11303/*"RednerTexture"*/, v6);
    sub_B16FFC(&StringLiteral_11297/*"RecycleRednerTexture"*/, v7);
    byte_40FAE4E = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.recycleTexture,
    (System_Int32_array **)targetTexture,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (UnityEngine_Object_o *)this->fields.recycleTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v20 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !v20 )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(v20, 1.0, 0LL);
  v21 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Temporary_34868996 = UnityEngine_RenderTexture__GetTemporary_34868996(1024, 1024, 0, 0, 0LL);
  if ( !v21 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v21, Temporary_34868996, 0LL);
  v23 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !v23 )
    goto LABEL_27;
  v24 = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v23, 0LL);
  if ( !v24 )
    goto LABEL_27;
  UnityEngine_Object__set_name(v24, (System_String_o *)StringLiteral_11303/*"RednerTexture"*/, 0LL);
  v25 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !v25 )
    goto LABEL_27;
  v26 = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(v25, 0LL);
  if ( !v26 )
    goto LABEL_27;
  UnityEngine_Texture__set_filterMode(v26, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)recycleTexture, 0LL, 0LL) )
  {
    *p_recycleTexture = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v27, v28, v29, v30, v31, v32);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11297/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        !*p_recycleTexture) )
  {
LABEL_27:
    sub_B170D4();
  }
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*p_recycleTexture, 0, 0LL);
  return 1;
}