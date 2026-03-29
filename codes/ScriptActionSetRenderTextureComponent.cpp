void ScriptActionSetRenderTextureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D328FD & 1) == 0 )
  {
    sub_1C93AD4(&ScriptActionSetRenderTextureComponent_TypeInfo);
    byte_4D328FD = 1;
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
  ScriptManager_o *ComponentsInChildren_object__52415656; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *captureTexture; // x19
  struct UnityEngine_GameObject_array *TargetObjects; // x23
  int max_length; // w8
  unsigned int v10; // w24
  int m_CancellationTokenSource; // w8
  UnityEngine_GameObject_o *v12; // x20
  unsigned int v13; // w27
  UnityEngine_GameObject_c **v14; // x8
  UnityEngine_Renderer_o *v15; // x21
  ScriptActionSetRenderTextureComponent_c *v16; // x8
  UnityEngine_Material_o *v17; // x22

  if ( (byte_4D328FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScriptActionSetRenderTextureComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4D328FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return;
  textureType = this->fields.textureType;
  if ( textureType == 1 )
  {
    ComponentsInChildren_object__52415656 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !ComponentsInChildren_object__52415656 )
      goto LABEL_34;
    captureTexture = (UnityEngine_Object_o *)ComponentsInChildren_object__52415656->fields.captureTexture;
  }
  else if ( textureType )
  {
    captureTexture = 0;
  }
  else
  {
    ComponentsInChildren_object__52415656 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !ComponentsInChildren_object__52415656 )
      goto LABEL_34;
    captureTexture = (UnityEngine_Object_o *)ScriptManager__GetRenderTargetTexture(
                                               ComponentsInChildren_object__52415656,
                                               0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__52415656 = (ScriptManager_o *)UnityEngine_Object__op_Equality(captureTexture, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__52415656 & 1) != 0 )
    return;
  TargetObjects = this->fields.TargetObjects;
  if ( !TargetObjects )
LABEL_34:
    sub_1C93D2C(ComponentsInChildren_object__52415656, v6);
  max_length = TargetObjects->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_35;
      ComponentsInChildren_object__52415656 = (ScriptManager_o *)TargetObjects->m_Items[v10];
      if ( !ComponentsInChildren_object__52415656 )
        goto LABEL_34;
      ComponentsInChildren_object__52415656 = (ScriptManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                                   (UnityEngine_GameObject_o *)ComponentsInChildren_object__52415656,
                                                                   (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer___);
      if ( !ComponentsInChildren_object__52415656 )
        goto LABEL_34;
      m_CancellationTokenSource = (int)ComponentsInChildren_object__52415656->fields.m_CancellationTokenSource;
      v12 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__52415656;
      if ( m_CancellationTokenSource >= 1 )
        break;
LABEL_32:
      max_length = TargetObjects->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
    v13 = 0;
    while ( v13 < m_CancellationTokenSource )
    {
      v14 = &v12->klass + (int)v13;
      v15 = (UnityEngine_Renderer_o *)v14[4];
      if ( !v15 )
        goto LABEL_34;
      ComponentsInChildren_object__52415656 = (ScriptManager_o *)UnityEngine_Renderer__get_material(
                                                                   (UnityEngine_Renderer_o *)v14[4],
                                                                   0);
      if ( !ComponentsInChildren_object__52415656 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTexture(
        (UnityEngine_Material_o *)ComponentsInChildren_object__52415656,
        (UnityEngine_Texture_o *)captureTexture,
        0);
      ComponentsInChildren_object__52415656 = (ScriptManager_o *)UnityEngine_Renderer__get_material(v15, 0);
      v16 = ScriptActionSetRenderTextureComponent_TypeInfo;
      v17 = (UnityEngine_Material_o *)ComponentsInChildren_object__52415656;
      if ( !ScriptActionSetRenderTextureComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptActionSetRenderTextureComponent_TypeInfo);
        v16 = ScriptActionSetRenderTextureComponent_TypeInfo;
      }
      if ( !v17 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTextureScale(v17, v16->static_fields->mainTextureScale, 0);
      ComponentsInChildren_object__52415656 = (ScriptManager_o *)UnityEngine_Renderer__get_material(v15, 0);
      if ( !ComponentsInChildren_object__52415656 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTextureOffset(
        (UnityEngine_Material_o *)ComponentsInChildren_object__52415656,
        ScriptActionSetRenderTextureComponent_TypeInfo->static_fields->mainTextureOffset,
        0);
      m_CancellationTokenSource = (int)v12[1].klass;
      if ( (int)++v13 >= m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_35:
    sub_1C93D34(ComponentsInChildren_object__52415656);
  }
}