void ScriptActionSetRenderTextureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_59727FB & 1) == 0 )
  {
    sub_2213A60(&ScriptActionSetRenderTextureComponent_TypeInfo);
    byte_59727FB = 1;
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  __int64 v5; // x1
  int32_t textureType; // w8
  ScriptManager_o *ComponentsInChildren_object__59472212; // x0
  UnityEngine_Object_o *captureTexture; // x19
  struct UnityEngine_GameObject_array *TargetObjects; // x23
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v11; // x26
  int m_CancellationTokenSource; // w8
  UnityEngine_GameObject_o *v13; // x20
  unsigned int v14; // w27
  UnityEngine_GameObject_c **v15; // x8
  UnityEngine_Renderer_o *v16; // x21
  UnityEngine_Material_o *v17; // x22

  if ( (byte_59727FA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptActionSetRenderTextureComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_59727FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return;
  textureType = this->fields.textureType;
  if ( textureType == 1 )
  {
    ComponentsInChildren_object__59472212 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !ComponentsInChildren_object__59472212 )
      goto LABEL_34;
    captureTexture = (UnityEngine_Object_o *)ComponentsInChildren_object__59472212->fields.captureTexture;
  }
  else if ( textureType )
  {
    captureTexture = 0;
  }
  else
  {
    ComponentsInChildren_object__59472212 = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !ComponentsInChildren_object__59472212 )
      goto LABEL_34;
    captureTexture = (UnityEngine_Object_o *)ScriptManager__GetRenderTargetTexture(
                                               ComponentsInChildren_object__59472212,
                                               0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  ComponentsInChildren_object__59472212 = (ScriptManager_o *)UnityEngine_Object__op_Equality(captureTexture, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__59472212 & 1) != 0 )
    return;
  TargetObjects = this->fields.TargetObjects;
  if ( !TargetObjects )
LABEL_34:
    sub_2213CDC(ComponentsInChildren_object__59472212, v5);
  max_length_low = LODWORD(TargetObjects->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length_low )
        goto LABEL_35;
      ComponentsInChildren_object__59472212 = (ScriptManager_o *)TargetObjects->m_Items[v11];
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_34;
      ComponentsInChildren_object__59472212 = (ScriptManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                   (UnityEngine_GameObject_o *)ComponentsInChildren_object__59472212,
                                                                   (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer___);
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_34;
      m_CancellationTokenSource = (int)ComponentsInChildren_object__59472212->fields.m_CancellationTokenSource;
      v13 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__59472212;
      if ( m_CancellationTokenSource >= 1 )
        break;
LABEL_32:
      max_length_low = LODWORD(TargetObjects->max_length);
      if ( (int)++v11 >= (int)max_length_low )
        return;
    }
    v14 = 0;
    while ( v14 < m_CancellationTokenSource )
    {
      v15 = &v13->klass + (int)v14;
      v16 = (UnityEngine_Renderer_o *)v15[4];
      if ( !v16 )
        goto LABEL_34;
      ComponentsInChildren_object__59472212 = (ScriptManager_o *)UnityEngine_Renderer__get_material(
                                                                   (UnityEngine_Renderer_o *)v15[4],
                                                                   0);
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTexture(
        (UnityEngine_Material_o *)ComponentsInChildren_object__59472212,
        (UnityEngine_Texture_o *)captureTexture,
        0);
      ComponentsInChildren_object__59472212 = (ScriptManager_o *)UnityEngine_Renderer__get_material(v16, 0);
      v17 = (UnityEngine_Material_o *)ComponentsInChildren_object__59472212;
      if ( !*(&ScriptActionSetRenderTextureComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptActionSetRenderTextureComponent_TypeInfo, v5);
      if ( !v17 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTextureScale(
        v17,
        ScriptActionSetRenderTextureComponent_TypeInfo->static_fields->mainTextureScale,
        0);
      ComponentsInChildren_object__59472212 = (ScriptManager_o *)UnityEngine_Renderer__get_material(v16, 0);
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_34;
      UnityEngine_Material__set_mainTextureOffset(
        (UnityEngine_Material_o *)ComponentsInChildren_object__59472212,
        ScriptActionSetRenderTextureComponent_TypeInfo->static_fields->mainTextureOffset,
        0);
      m_CancellationTokenSource = (int)v13[1].klass;
      if ( (int)++v14 >= m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_35:
    sub_2213CE4(ComponentsInChildren_object__59472212);
  }
}