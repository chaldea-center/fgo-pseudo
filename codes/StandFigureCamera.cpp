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
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v11; // w23
  UnityEngine_Camera_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4188C52 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11339/*"RednerTexture"*/, v4);
    sub_B2C35C(&StringLiteral_13596/*"TempStandFigurenRednerTexture"*/, v5);
    byte_4188C52 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_WebViewObject )
    {
      Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(
                                                          Component_WebViewObject,
                                                          0LL);
      if ( Component_WebViewObject )
      {
        v8 = (UnityEngine_Object_o *)Component_WebViewObject;
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
          v11 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v12 = Component_WebViewObject;
          if ( v11 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(Component_WebViewObject, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v13, v14, v15, v16, v17, v18);
          }
          else
          {
            Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_35374428(
                                                                2048,
                                                                1024,
                                                                0,
                                                                0,
                                                                0LL);
            if ( !v12 )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(v12, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
          }
          Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_WebViewObject )
          {
            Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(
                                                                Component_WebViewObject,
                                                                0LL);
            if ( Component_WebViewObject )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_WebViewObject,
                (System_String_o *)StringLiteral_11339/*"RednerTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v8, (System_String_o *)StringLiteral_13596/*"TempStandFigurenRednerTexture"*/, 0LL);
              Component_WebViewObject = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_WebViewObject )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_WebViewObject,
                  (UnityEngine_RenderTexture_o *)v8,
                  v19);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(Component_WebViewObject, v7);
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
  __int64 v10; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Camera_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4188C50 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11339/*"RednerTexture"*/, v6);
    sub_B2C35C(&StringLiteral_11333/*"RecycleRednerTexture"*/, v7);
    byte_4188C50 = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.recycleTexture,
    (System_Int32_array **)targetTexture,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (UnityEngine_Object_o *)this->fields.recycleTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(Component_WebViewObject, 2.0, 0LL);
  v20 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_35374428(
                                                      2048,
                                                      1024,
                                                      0,
                                                      0,
                                                      0LL);
  if ( !v20 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v20, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Object__set_name(
    (UnityEngine_Object_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_11339/*"RednerTexture"*/,
    0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v21, v22, v23, v24, v25, v26);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11333/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (Component_WebViewObject = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
  {
LABEL_27:
    sub_B2C434(Component_WebViewObject, v10);
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
  __int64 v10; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Camera_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4188C51 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11339/*"RednerTexture"*/, v6);
    sub_B2C35C(&StringLiteral_11333/*"RecycleRednerTexture"*/, v7);
    byte_4188C51 = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.recycleTexture,
    (System_Int32_array **)targetTexture,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (UnityEngine_Object_o *)this->fields.recycleTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(Component_WebViewObject, 2.0, 0LL);
  v20 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_35374428(
                                                      2048,
                                                      1024,
                                                      0,
                                                      0,
                                                      0LL);
  if ( !v20 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v20, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Object__set_name(
    (UnityEngine_Object_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_11339/*"RednerTexture"*/,
    0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v21, v22, v23, v24, v25, v26);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11333/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (Component_WebViewObject = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
  {
LABEL_27:
    sub_B2C434(Component_WebViewObject, v10);
  }
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 0, 0LL);
  return 1;
}