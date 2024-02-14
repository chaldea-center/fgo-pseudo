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
  UnityEngine_Object_o *v7; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v10; // w23
  UnityEngine_Camera_o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4215393 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11366/*"RednerTexture"*/, v4);
    sub_B0D8A4(&StringLiteral_13640/*"TempStandFigurenRednerTexture"*/, v5);
    byte_4215393 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_WebViewObject )
    {
      Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(
                                                          Component_WebViewObject,
                                                          0LL);
      if ( Component_WebViewObject )
      {
        v7 = (UnityEngine_Object_o *)Component_WebViewObject;
        if ( !UnityEngine_RenderTexture__IsCreated((UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL) )
          return;
        Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
        if ( Component_WebViewObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
          p_recycleTexture = &this->fields.recycleTexture;
          recycleTexture = (UnityEngine_Object_o *)this->fields.recycleTexture;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v10 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v11 = Component_WebViewObject;
          if ( v10 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(Component_WebViewObject, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_B0D840((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v12, v13, v14, v15, v16, v17);
          }
          else
          {
            Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_34994808(
                                                                2048,
                                                                1024,
                                                                0,
                                                                0,
                                                                0LL);
            if ( !v11 )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(v11, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
          }
          Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_WebViewObject )
          {
            Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(
                                                                Component_WebViewObject,
                                                                0LL);
            if ( Component_WebViewObject )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_WebViewObject,
                (System_String_o *)StringLiteral_11366/*"RednerTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v7, (System_String_o *)StringLiteral_13640/*"TempStandFigurenRednerTexture"*/, 0LL);
              Component_WebViewObject = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_WebViewObject )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_WebViewObject,
                  (UnityEngine_RenderTexture_o *)v7,
                  v18);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(Component_WebViewObject);
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
  UnityEngine_Camera_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4215391 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11366/*"RednerTexture"*/, v6);
    sub_B0D8A4(&StringLiteral_11360/*"RecycleRednerTexture"*/, v7);
    byte_4215391 = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B0D840(
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
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(Component_WebViewObject, 2.0, 0LL);
  v19 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_34994808(
                                                      2048,
                                                      1024,
                                                      0,
                                                      0,
                                                      0LL);
  if ( !v19 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v19, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Object__set_name(
    (UnityEngine_Object_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_11366/*"RednerTexture"*/,
    0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)recycleTexture,
                                                      0LL,
                                                      0LL);
  if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
  {
    *p_recycleTexture = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v20, v21, v22, v23, v24, v25);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11360/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (Component_WebViewObject = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
  {
LABEL_27:
    sub_B0D97C(Component_WebViewObject);
  }
  v8 = 1;
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 1, 0LL);
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
  UnityEngine_Camera_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4215392 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11366/*"RednerTexture"*/, v6);
    sub_B0D8A4(&StringLiteral_11360/*"RecycleRednerTexture"*/, v7);
    byte_4215392 = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B0D840(
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
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(Component_WebViewObject, 2.0, 0LL);
  v19 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_34994808(
                                                      2048,
                                                      1024,
                                                      0,
                                                      0,
                                                      0LL);
  if ( !v19 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v19, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Object__set_name(
    (UnityEngine_Object_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_11366/*"RednerTexture"*/,
    0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)recycleTexture,
                                                      0LL,
                                                      0LL);
  if ( ((unsigned __int8)Component_WebViewObject & 1) == 0 )
  {
    *p_recycleTexture = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v20, v21, v22, v23, v24, v25);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11360/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (Component_WebViewObject = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
  {
LABEL_27:
    sub_B0D97C(Component_WebViewObject);
  }
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 0, 0LL);
  return 1;
}