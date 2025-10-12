void UVScrollAnimation___ctor(UVScrollAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UVScrollAnimation__Start(UVScrollAnimation_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void UVScrollAnimation__Update(UVScrollAnimation_o *this, const MethodInfo *method)
{
  UVScrollAnimation__UpdateUVOffset(this, method);
}


// local variable allocation has failed, the output may be wrong!
void UVScrollAnimation__UpdateUVOffset(UVScrollAnimation_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *material; // x0
  float time; // s0
  float offsetXPerSec; // s10
  float v7; // s8
  float v8; // s0
  float offsetYPerSec; // s11
  float v10; // s9
  float v11; // s0
  float v12; // s1
  bool v13; // nf
  float v14; // s1 OVERLAPPED
  float v15; // s2
  float v16; // s0

  if ( (byte_4C34E2D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16262/*"_MainTex"*/);
    byte_4C34E2D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)material & 1) != 0 )
    goto LABEL_17;
  if ( !Component_object
    || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0)) == 0 )
  {
LABEL_18:
    sub_1C32E7C(material);
  }
  if ( !UnityEngine_Material__HasProperty_71089776(material, (System_String_o *)StringLiteral_16262/*"_MainTex"*/, 0) )
  {
LABEL_17:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    return;
  }
  time = UnityEngine_Time__get_time(0);
  offsetXPerSec = this->fields.offsetXPerSec;
  v7 = time;
  v8 = UnityEngine_Time__get_time(0);
  offsetYPerSec = this->fields.offsetYPerSec;
  v10 = v8;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !material )
    goto LABEL_18;
  v11 = (float)(v7 * offsetXPerSec) - floorf(v7 * offsetXPerSec);
  v12 = (float)(v10 * offsetYPerSec) - floorf(v10 * offsetYPerSec);
  v13 = v12 < 0.0;
  v14 = fminf(v12, 1.0);
  v15 = fminf(v11, 1.0);
  if ( v13 )
    v14 = 0.0;
  if ( v11 < 0.0 )
    v16 = 0.0;
  else
    v16 = v15;
  UnityEngine_Material__SetTextureOffset(
    material,
    (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
    *(UnityEngine_Vector2_o *)(&v14 - 1),
    0);
}