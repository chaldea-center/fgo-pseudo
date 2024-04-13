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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v13; // x1
  float time; // s0
  float v15; // s8
  float v16; // s0
  float v17; // s9
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  if ( (byte_42ECD94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v8, v9, v10);
    byte_42ECD94 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16205/*"_MainTex"*/, 0LL) )
    {
      time = UnityEngine_Time__get_time(0LL);
      v15 = UnityEngine_Mathf__Repeat(time * this->fields.offsetYPerSec, 1.0, 0LL);
      v16 = UnityEngine_Time__get_time(0LL);
      v17 = UnityEngine_Mathf__Repeat(v16 * *((float *)&this->fields + 3), 1.0, 0LL);
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_WebViewObject, 0LL);
      if ( material )
      {
        v18.fields.x = v15;
        v18.fields.y = v17;
        UnityEngine_Material__SetTextureOffset(material, (System_String_o *)StringLiteral_16205/*"_MainTex"*/, v18, 0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(material, v13);
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}