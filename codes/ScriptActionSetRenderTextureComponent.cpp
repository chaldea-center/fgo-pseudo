void ScriptActionSetRenderTextureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C398E1 & 1) == 0 )
  {
    sub_1C32C20(&ScriptActionSetRenderTextureComponent_TypeInfo);
    byte_4C398E1 = 1;
  }
  ScriptActionSetRenderTextureComponent_TypeInfo->static_fields->mainTextureScale = (struct UnityEngine_Vector2_o)0x3EDB6DB73F800000LL;
  ScriptActionSetRenderTextureComponent_TypeInfo->static_fields->mainTextureOffset = (struct UnityEngine_Vector2_o)0x3E92492400000000LL;
}


void ScriptActionSetRenderTextureComponent___ctor(
        ScriptActionSetRenderTextureComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptActionSetRenderTextureComponent__Start(
        ScriptActionSetRenderTextureComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  int32_t textureType; // w8
  ScriptManager_o *ComponentsInChildren_object__51598740; // x0
  UnityEngine_Object_o *captureTexture; // x19
  struct UnityEngine_GameObject_array *TargetObjects; // x23
  int max_length; // w8
  unsigned int v9; // w24
  int m_CancellationTokenSource; // w8
  UnityEngine_GameObject_o *v11; // x20
  unsigned int v12; // w27
  UnityEngine_GameObject_c **v13; // x8
  UnityEngine_Renderer_o *v14; // x21
  ScriptActionSetRenderTextureComponent_c *v15; // x8
  UnityEngine_Material_o *v16; // x22

  if ( (byte_4C398E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ScriptActionSetRenderTextureComponent_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C398E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return;
  textureType = this->fields.textureType;
  if ( textureType == 1 )
  {
    ComponentsInChildren_object__51598740 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !ComponentsInChildren_object__51598740 )
      goto LABEL_34;
    captureTexture = (UnityEngine_Object_o *)ComponentsInChildren_object__51598740->fields.captureTexture;
  }
  else if ( textureType )
  {
    captureTexture = 0;
  }
  else
  {
    ComponentsInChildren_object__51598740 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !ComponentsInChildren_object__51598740 )
      goto LABEL_34;
    captureTexture = (UnityEngine_Object_o *)ScriptManager__GetRenderTargetTexture(
                                               ComponentsInChildren_object__51598740,
                                               0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__51598740 = (ScriptManager_o *)UnityEngine_Object__op_Equality(captureTexture, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__51598740 & 1) != 0 )
    return;
  TargetObjects = this->fields.TargetObjects;
  if ( !TargetObjects )
LABEL_34:
    sub_1C32E7C(ComponentsInChildren_object__51598740);
  max_length = TargetObjects->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_35;
      ComponentsInChildren_object__51598740 = (ScriptManager_o *)TargetObjects->m_Items[v9];
      if ( !ComponentsInChildren_object__51598740 )
        goto LABEL_34;
      ComponentsInChildren_object__51598740 = (ScriptManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                                   (UnityEngine_GameObject_o *)ComponentsInChildren_object__51598740,
                                                                   (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer___);
      if ( !ComponentsInChildren_object__51598740 )
        goto LABEL_34;
      m_CancellationTokenSource = (int)ComponentsInChildren_object__51598740->fields.m_CancellationTokenSource;
      v11 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__51598740;
      if ( m_CancellationTokenSource >= 1 )
        break;
LABEL_32:
      max_length = TargetObjects->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
    v12 = 0;
    while ( v12 < m_CancellationTokenSource )
    {
      v13 = &v11->klass + (int)v12;
      v14 = (UnityEngine_Renderer_o *)v13[4];
      if ( !v14 )
        goto LABEL_34;
      ComponentsInChildren_object__51598740 = (ScriptManager_o *)UnityEngine_Renderer__get_material(
                                                                   (UnityEngine_Renderer_o *)v13[4],
                                                                   0);
      if ( !ComponentsInChildren_object__51598740 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTexture(
        (UnityEngine_Material_o *)ComponentsInChildren_object__51598740,
        (UnityEngine_Texture_o *)captureTexture,
        0);
      ComponentsInChildren_object__51598740 = (ScriptManager_o *)UnityEngine_Renderer__get_material(v14, 0);
      v15 = ScriptActionSetRenderTextureComponent_TypeInfo;
      v16 = (UnityEngine_Material_o *)ComponentsInChildren_object__51598740;
      if ( !ScriptActionSetRenderTextureComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptActionSetRenderTextureComponent_TypeInfo);
        v15 = ScriptActionSetRenderTextureComponent_TypeInfo;
      }
      if ( !v16 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTextureScale(v16, v15->static_fields->mainTextureScale, 0);
      ComponentsInChildren_object__51598740 = (ScriptManager_o *)UnityEngine_Renderer__get_material(v14, 0);
      if ( !ComponentsInChildren_object__51598740 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTextureOffset(
        (UnityEngine_Material_o *)ComponentsInChildren_object__51598740,
        ScriptActionSetRenderTextureComponent_TypeInfo->static_fields->mainTextureOffset,
        0);
      m_CancellationTokenSource = (int)v11[1].klass;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_35:
    sub_1C32E84(ComponentsInChildren_object__51598740);
  }
}