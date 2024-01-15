void __fastcall UVScrollAnimation___ctor(UVScrollAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UVScrollAnimation__Start(UVScrollAnimation_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall UVScrollAnimation__Update(UVScrollAnimation_o *this, const MethodInfo *method)
{
  UVScrollAnimation__UpdateUVOffset(this, method);
}


void __fastcall UVScrollAnimation__UpdateUVOffset(UVScrollAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Renderer_o *Component_WebViewObject; // x20
  UnityEngine_Material_o *material; // x0
  float time; // s0
  float v8; // s8
  float v9; // s0
  float v10; // s9
  UnityEngine_Material_o *v11; // x0
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  if ( (byte_40FE43A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v4);
    byte_40FE43A = 1;
  }
  Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_13;
    material = UnityEngine_Renderer__get_material(Component_WebViewObject, 0LL);
    if ( !material )
      goto LABEL_13;
    if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15950/*"_MainTex"*/, 0LL) )
    {
      time = UnityEngine_Time__get_time(0LL);
      v8 = UnityEngine_Mathf__Repeat(time * this->fields.offsetYPerSec, 1.0, 0LL);
      v9 = UnityEngine_Time__get_time(0LL);
      v10 = UnityEngine_Mathf__Repeat(v9 * *((float *)&this->fields + 3), 1.0, 0LL);
      v11 = UnityEngine_Renderer__get_material(Component_WebViewObject, 0LL);
      if ( v11 )
      {
        v12.fields.x = v8;
        v12.fields.y = v10;
        UnityEngine_Material__SetTextureOffset(v11, (System_String_o *)StringLiteral_15950/*"_MainTex"*/, v12, 0LL);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}