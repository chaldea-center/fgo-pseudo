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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v7; // x1
  float time; // s0
  float v9; // s8
  float v10; // s0
  float v11; // s9
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  if ( (byte_418BFF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v4);
    byte_418BFF2 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_13;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_WebViewObject, 0LL);
    if ( !material )
      goto LABEL_13;
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_16013/*"_MainTex"*/, 0LL) )
    {
      time = UnityEngine_Time__get_time(0LL);
      v9 = UnityEngine_Mathf__Repeat(time * this->fields.offsetYPerSec, 1.0, 0LL);
      v10 = UnityEngine_Time__get_time(0LL);
      v11 = UnityEngine_Mathf__Repeat(v10 * *((float *)&this->fields + 3), 1.0, 0LL);
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_WebViewObject, 0LL);
      if ( material )
      {
        v12.fields.x = v9;
        v12.fields.y = v11;
        UnityEngine_Material__SetTextureOffset(material, (System_String_o *)StringLiteral_16013/*"_MainTex"*/, v12, 0LL);
        return;
      }
LABEL_13:
      sub_B2C434(material, v7);
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}