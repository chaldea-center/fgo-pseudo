void __fastcall StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v8; // w23
  UnityEngine_Camera_o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_4A5A476 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11219/*"RednerTexture"*/);
    sub_1B885B0(&StringLiteral_13583/*"TempStandFigurenRednerTexture"*/);
    byte_4A5A476 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
      if ( Component_object )
      {
        v5 = (UnityEngine_Object_o *)Component_object;
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
          v8 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
          v9 = Component_object;
          if ( v8 )
          {
            if ( !Component_object )
              goto LABEL_20;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v10, v11);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69367664(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0LL);
            if ( !v9 )
              goto LABEL_20;
            UnityEngine_Camera__set_targetTexture(v9, (UnityEngine_RenderTexture_o *)Component_object, 0LL);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11219/*"RednerTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v5, (System_String_o *)StringLiteral_13583/*"TempStandFigurenRednerTexture"*/, 0LL);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v5,
                  v12);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B8880C(Component_object, v4);
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
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *v12; // x22
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5A474 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11219/*"RednerTexture"*/);
    sub_1B885B0(&StringLiteral_11215/*"RecycleRednerTexture"*/);
    byte_4A5A474 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v10, v11);
    v12 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69367664(2048, 2048, 0, 0, 0LL);
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v13,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11219/*"RednerTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v14, v15);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11215/*"RecycleRednerTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v16,
            v17),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1B8880C(Component_object, v7);
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
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *v12; // x22
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5A475 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11219/*"RednerTexture"*/);
    sub_1B885B0(&StringLiteral_11215/*"RecycleRednerTexture"*/);
    byte_4A5A475 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v10, v11);
    v12 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_69367664(2048, 2048, 0, 0, 0LL);
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v13,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11219/*"RednerTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture, 0, v14, v15);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11215/*"RecycleRednerTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v16,
            v17),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1B8880C(Component_object, v7);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL);
  }
  return state == 0;
}