void __fastcall StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Camera_o *Component_WebViewObject; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v19; // w23
  UnityEngine_Camera_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2

  if ( (byte_42E92E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Camera___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11472/*"RednerTexture"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13752/*"TempStandFigurenRednerTexture"*/, v11, v12, v13);
    byte_42E92E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_WebViewObject )
    {
      Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(
                                                          Component_WebViewObject,
                                                          0LL);
      if ( Component_WebViewObject )
      {
        v16 = (UnityEngine_Object_o *)Component_WebViewObject;
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
          v19 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v20 = Component_WebViewObject;
          if ( v19 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(Component_WebViewObject, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v21, v22, v23, v24, v25, v26);
          }
          else
          {
            Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_35679768(
                                                                2048,
                                                                1024,
                                                                0,
                                                                0,
                                                                0LL);
            if ( !v20 )
              goto LABEL_21;
            UnityEngine_Camera__set_targetTexture(v20, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
          }
          Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_WebViewObject )
          {
            Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(
                                                                Component_WebViewObject,
                                                                0LL);
            if ( Component_WebViewObject )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_WebViewObject,
                (System_String_o *)StringLiteral_11472/*"RednerTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v16, (System_String_o *)StringLiteral_13752/*"TempStandFigurenRednerTexture"*/, 0LL);
              Component_WebViewObject = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_WebViewObject )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_WebViewObject,
                  (UnityEngine_RenderTexture_o *)v16,
                  v27);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(Component_WebViewObject, v15);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  bool v15; // w19
  UnityEngine_Camera_o *Component_WebViewObject; // x0
  __int64 v17; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Camera_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E92E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Camera___, (_DWORD)recycleTexture, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11472/*"RednerTexture"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11466/*"RecycleRednerTexture"*/, v12, v13, v14);
    byte_42E92E5 = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recycleTexture,
    (System_Int32_array **)targetTexture,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (UnityEngine_Object_o *)this->fields.recycleTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(Component_WebViewObject, 2.0, 0LL);
  v27 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_35679768(
                                                      2048,
                                                      1024,
                                                      0,
                                                      0,
                                                      0LL);
  if ( !v27 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v27, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Object__set_name(
    (UnityEngine_Object_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_11472/*"RednerTexture"*/,
    0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v28, v29, v30, v31, v32, v33);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11466/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        (Component_WebViewObject = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(Component_WebViewObject, v17);
  }
  v15 = 1;
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 1, 0LL);
  return v15;
}


bool __fastcall StandFigureCamera__RequestTypePoint(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Camera_o *Component_WebViewObject; // x0
  __int64 v17; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Camera_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E92E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Camera___, (_DWORD)recycleTexture, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11472/*"RednerTexture"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11466/*"RecycleRednerTexture"*/, v12, v13, v14);
    byte_42E92E6 = 1;
  }
  if ( this->fields.state )
    return 0;
  this->fields.state = 1;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  targetTexture = UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  this->fields.recycleTexture = targetTexture;
  p_recycleTexture = &this->fields.recycleTexture;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recycleTexture,
    (System_Int32_array **)targetTexture,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (UnityEngine_Object_o *)this->fields.recycleTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Camera__set_aspect(Component_WebViewObject, 2.0, 0LL);
  v27 = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_35679768(
                                                      2048,
                                                      1024,
                                                      0,
                                                      0,
                                                      0LL);
  if ( !v27 )
    goto LABEL_27;
  UnityEngine_Camera__set_targetTexture(v27, (UnityEngine_RenderTexture_o *)Component_WebViewObject, 0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_27;
  UnityEngine_Object__set_name(
    (UnityEngine_Object_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_11472/*"RednerTexture"*/,
    0LL);
  Component_WebViewObject = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.recycleTexture, 0LL, v28, v29, v30, v31, v32, v33);
    return 1;
  }
  if ( !recycleTexture
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)recycleTexture,
          (System_String_o *)StringLiteral_11466/*"RecycleRednerTexture"*/,
          0LL),
        *p_recycleTexture = recycleTexture,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.recycleTexture,
          (System_Int32_array **)recycleTexture,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        (Component_WebViewObject = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(Component_WebViewObject, v17);
  }
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_WebViewObject, 0, 0LL);
  return 1;
}