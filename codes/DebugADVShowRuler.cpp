void DebugADVShowRuler___ctor(DebugADVShowRuler_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugADVShowRuler__Awake(DebugADVShowRuler_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C40DCA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78127288);
    byte_4C40DCA = 1;
  }
  if ( !UnityEngine_SystemInfo__get_supportsComputeShaders(0) )
  {
    ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_30DE8AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78127288);
    if ( !ComponentInChildren_object )
      sub_1C372B4(0);
    v4.fields.r = 1.0;
    v4.fields.g = 0.0;
    v4.fields.b = 0.0;
    v4.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ComponentInChildren_object, v4, 0);
  }
}


void DebugADVShowRuler__OnClickShowRuler(DebugADVShowRuler_o *this, const MethodInfo *method)
{
  char *Component_object; // x0
  UnityEngine_Component_o *v4; // x20
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_ComputeShader_o *rulerComputeShader; // x1
  System_String_o *v9; // x19
  System_String_o *v10; // x20
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4C40DCB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_PostProcessorRuler___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PostProcessorRuler___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_25386/*"お使いの環境では、Compute Shaderがサポートされていないため、この機能を利用することができません。\r\nお手数ですが、以下のいずれかをご確認ください：\r\n\r\n１．お使いのデバイスやグラフィックカードがCompute Shaderに対応しているか\r\n２．最新のグラフィックドライバーがインストールされているか"*/);
    sub_1C37058(&StringLiteral_25497/*"機能がサポートされていません"*/);
    sub_1C37058(&StringLiteral_8890/*"Management/CommonUI/UI Root/CommonUICamera"*/);
    byte_4C40DCB = 1;
  }
  if ( UnityEngine_SystemInfo__get_supportsComputeShaders(0) )
  {
    Component_object = (char *)UnityEngine_GameObject__Find((System_String_o *)StringLiteral_8890/*"Management/CommonUI/UI Root/CommonUICamera"*/, 0);
    if ( !Component_object )
      goto LABEL_18;
    Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_18;
    v4 = (UnityEngine_Component_o *)Component_object;
    Component_object = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !Component_object )
      goto LABEL_18;
    v5 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Component_object,
           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PostProcessorRuler___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0, 0) )
    {
      Component_object = (char *)UnityEngine_Component__get_gameObject(v4, 0);
      if ( Component_object )
      {
        Component_object = (char *)UnityEngine_GameObject__AddComponent_object_(
                                     (UnityEngine_GameObject_o *)Component_object,
                                     (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_PostProcessorRuler___);
        if ( Component_object )
        {
          rulerComputeShader = this->fields.rulerComputeShader;
          *((_QWORD *)Component_object + 16) = rulerComputeShader;
          sub_1C36FFC((CGThumbnailListItem_o *)(Component_object + 128), (int32_t)rulerComputeShader, v6, v7);
          return;
        }
      }
LABEL_18:
      sub_1C372B4(Component_object);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v5, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_25497/*"機能がサポートされていません"*/;
    v10 = (System_String_o *)StringLiteral_25386/*"お使いの環境では、Compute Shaderがサポートされていないため、この機能を利用することができません。\r\nお手数ですが、以下のいずれかをご確認ください：\r\n\r\n１．お使いのデバイスやグラフィックカードがCompute Shaderに対応しているか\r\n２．最新のグラフィックドライバーがインストールされているか"*/;
    Component_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    *(_QWORD *)&effectDistance.fields.hasValue = 0;
    effectDistance.fields.value.fields.y = 0.0;
    CommonUI__OpenWarningDialog((CommonUI_o *)Component_object, v9, v10, 0, 1, 0, -1.0, 1, effectDistance, 0);
  }
}


bool DebugADVShowRuler__get_SupportComputeShaders(const MethodInfo *method)
{
  return UnityEngine_SystemInfo__get_supportsComputeShaders(0);
}