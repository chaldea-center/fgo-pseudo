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
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v11; // w23
  UnityEngine_Camera_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2

  if ( (byte_4AB5046 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_11228/*"RednerTexture"*/, v4);
    sub_1BAB41C(&StringLiteral_13613/*"TempStandFigurenRednerTexture"*/, v5);
    byte_4AB5046 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
      if ( Component_object )
      {
        v8 = (UnityEngine_Object_o *)Component_object;
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
          v11 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v12 = Component_object;
          if ( v11 )
          {
            if ( !Component_object )
              goto LABEL_20;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v13, v14);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69708904(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0LL);
            if ( !v12 )
              goto LABEL_20;
            UnityEngine_Camera__set_targetTexture(v12, (UnityEngine_RenderTexture_o *)Component_object, 0LL);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11228/*"RednerTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v8, (System_String_o *)StringLiteral_13613/*"TempStandFigurenRednerTexture"*/, 0LL);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v8,
                  v15);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BAB678(Component_object, v7);
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
  __int64 v10; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *v15; // x22
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4AB5044 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_11228/*"RednerTexture"*/, v6);
    sub_1BAB41C(&StringLiteral_11224/*"RecycleRednerTexture"*/, v7);
    byte_4AB5044 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v13, v14);
    v15 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69708904(2048, 2048, 0, 0, 0LL);
    if ( !v16 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v16,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11228/*"RednerTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v17, v18);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11224/*"RecycleRednerTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v19,
            v20),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1BAB678(Component_object, v10);
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
  __int64 v10; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *v15; // x22
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4AB5045 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_11228/*"RednerTexture"*/, v6);
    sub_1BAB41C(&StringLiteral_11224/*"RecycleRednerTexture"*/, v7);
    byte_4AB5045 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v13, v14);
    v15 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69708904(2048, 2048, 0, 0, 0LL);
    if ( !v16 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v16,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11228/*"RednerTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v17, v18);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11224/*"RecycleRednerTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v19,
            v20),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1BAB678(Component_object, v10);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL);
  }
  return state == 0;
}