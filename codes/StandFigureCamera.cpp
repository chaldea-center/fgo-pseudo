void __fastcall StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Camera_o *Component_object; // x0
  UnityEngine_Object_o *v7; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v10; // w23
  UnityEngine_Camera_o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2

  if ( (byte_49FB73E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11165/*"RednerTexture"*/, v4);
    sub_1B640C8(&StringLiteral_13513/*"TempStandFigurenRednerTexture"*/, v5);
    byte_49FB73E = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
      if ( Component_object )
      {
        v7 = (UnityEngine_Object_o *)Component_object;
        if ( !UnityEngine_RenderTexture__IsCreated((UnityEngine_RenderTexture_o *)Component_object, 0LL) )
          return;
        Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( Component_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
          p_recycleTexture = &this->fields.recycleTexture;
          recycleTexture = (UnityEngine_Object_o *)this->fields.recycleTexture;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v11 = Component_object;
          if ( v10 )
          {
            if ( !Component_object )
              goto LABEL_20;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v12, v13);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69036020(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0LL);
            if ( !v11 )
              goto LABEL_20;
            UnityEngine_Camera__set_targetTexture(v11, (UnityEngine_RenderTexture_o *)Component_object, 0LL);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11165/*"RednerTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v7, (System_String_o *)StringLiteral_13513/*"TempStandFigurenRednerTexture"*/, 0LL);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v7,
                  v14);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B64324(Component_object);
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
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x22
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FB73C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11165/*"RednerTexture"*/, v6);
    sub_1B640C8(&StringLiteral_11161/*"RecycleRednerTexture"*/, v7);
    byte_49FB73C = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v12, v13);
    v14 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69036020(2048, 2048, 0, 0, 0LL);
    if ( !v15 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v15,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11165/*"RednerTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v16, v17);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11161/*"RecycleRednerTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v18,
            v19),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1B64324(Component_object);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0LL);
  }
  return state == 0;
}


bool __fastcall StandFigureCamera__RequestTypePoint(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x22
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FB73D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11165/*"RednerTexture"*/, v6);
    sub_1B640C8(&StringLiteral_11161/*"RecycleRednerTexture"*/, v7);
    byte_49FB73D = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v12, v13);
    v14 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69036020(2048, 2048, 0, 0, 0LL);
    if ( !v15 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v15,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11165/*"RednerTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v16, v17);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11161/*"RecycleRednerTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v18,
            v19),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1B64324(Component_object);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL);
  }
  return state == 0;
}