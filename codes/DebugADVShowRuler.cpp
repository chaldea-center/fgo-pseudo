void DebugADVShowRuler___ctor(DebugADVShowRuler_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugADVShowRuler__Awake(DebugADVShowRuler_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v4; // x1
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596E52E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
    byte_596E52E = 1;
  }
  if ( !UnityEngine_SystemInfo__get_supportsComputeShaders(0) )
  {
    ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91731488);
    if ( !ComponentInChildren_object )
      sub_2213CDC(0, v4);
    v5.fields.g = 0.0;
    v5.fields.b = 0.0;
    v5.fields.r = 1.0;
    v5.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ComponentInChildren_object, v5, 0);
  }
}


void DebugADVShowRuler__OnClickShowRuler(DebugADVShowRuler_o *this, const MethodInfo *method)
{
  char *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_ComputeShader_o *rulerComputeShader; // x1
  System_String_o *v18; // x19
  System_String_o *v19; // x20
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_596E52F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_PostProcessorRuler___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PostProcessorRuler___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_26787/*"お使いの環境では、Compute Shaderがサポートされていないため、この機能を利用することができません。\r\nお手数ですが、以下のいずれかをご確認ください：\r\n\r\n１．お使いのデバイスやグラフィックカードがCompute Shaderに対応しているか\r\n２．最新のグラフィックドライバーがインストールされているか"*/);
    sub_2213A60(&StringLiteral_26897/*"機能がサポートされていません"*/);
    sub_2213A60(&StringLiteral_9258/*"Management/CommonUI/UI Root/CommonUICamera"*/);
    byte_596E52F = 1;
  }
  if ( UnityEngine_SystemInfo__get_supportsComputeShaders(0) )
  {
    Component_object = (char *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_9258/*"Management/CommonUI/UI Root/CommonUICamera"*/, 0);
    if ( !Component_object )
      goto LABEL_18;
    Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_18;
    v5 = (UnityEngine_Component_o *)Component_object;
    Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !Component_object )
      goto LABEL_18;
    v8 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Component_object,
           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PostProcessorRuler___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0) )
    {
      Component_object = (char *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( Component_object )
      {
        Component_object = (char *)UnityEngine_GameObject__AddComponent_object_(
                                     (UnityEngine_GameObject_o *)Component_object,
                                     (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_PostProcessorRuler___);
        if ( Component_object )
        {
          rulerComputeShader = this->fields.rulerComputeShader;
          *((_QWORD *)Component_object + 16) = rulerComputeShader;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(Component_object + 128),
            (int32_t)rulerComputeShader,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          return;
        }
      }
LABEL_18:
      sub_2213CDC(Component_object, v4);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v8, 0);
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_26897/*"機能がサポートされていません"*/;
    v19 = (System_String_o *)StringLiteral_26787/*"お使いの環境では、Compute Shaderがサポートされていないため、この機能を利用することができません。\r\nお手数ですが、以下のいずれかをご確認ください：\r\n\r\n１．お使いのデバイスやグラフィックカードがCompute Shaderに対応しているか\r\n２．最新のグラフィックドライバーがインストールされているか"*/;
    Component_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    *(_QWORD *)&effectDistance.fields.hasValue = 0;
    effectDistance.fields.value.fields.y = 0.0;
    CommonUI__OpenWarningDialog((CommonUI_o *)Component_object, v18, v19, 0, 1, 0, -1.0, 1, effectDistance, 0);
  }
}


bool DebugADVShowRuler__get_SupportComputeShaders(const MethodInfo *method)
{
  return UnityEngine_SystemInfo__get_supportsComputeShaders(0);
}