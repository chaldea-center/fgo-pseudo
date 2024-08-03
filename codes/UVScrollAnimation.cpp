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


// local variable allocation has failed, the output may be wrong!
void __fastcall UVScrollAnimation__UpdateUVOffset(UVScrollAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *material; // x0
  float time; // s0
  float offsetXPerSec; // s10
  float v9; // s8
  float v10; // s0
  float offsetYPerSec; // s11
  float v12; // s9
  float v13; // s0
  float v14; // s1
  bool v15; // nf
  float v16; // s1
  float v17; // s2
  float v18; // s0

  if ( (byte_49F9A99 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v4);
    byte_49F9A99 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  material = (UnityEngine_Material_o *)UnityEngine_Object__op_Equality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
  if ( ((unsigned __int8)material & 1) != 0 )
    goto LABEL_17;
  if ( !Component_object
    || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1B64324(material);
  }
  if ( !UnityEngine_Material__HasProperty_68994004(material, (System_String_o *)StringLiteral_16193/*"_MainTex"*/, 0LL) )
  {
LABEL_17:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    return;
  }
  time = UnityEngine_Time__get_time(0LL);
  offsetXPerSec = this->fields.offsetXPerSec;
  v9 = time;
  v10 = UnityEngine_Time__get_time(0LL);
  offsetYPerSec = this->fields.offsetYPerSec;
  v12 = v10;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0LL);
  if ( !material )
    goto LABEL_18;
  v13 = (float)(v9 * offsetXPerSec) - floorf(v9 * offsetXPerSec);
  v14 = (float)(v12 * offsetYPerSec) - floorf(v12 * offsetYPerSec);
  v15 = v14 < 0.0;
  v16 = fminf(v14, 1.0);
  v17 = fminf(v13, 1.0);
  if ( v15 )
    v16 = 0.0;
  if ( v13 < 0.0 )
    v18 = 0.0;
  else
    v18 = v17;
  UnityEngine_Material__SetTextureOffset(
    material,
    (System_String_o *)StringLiteral_16193/*"_MainTex"*/,
    *(UnityEngine_Vector2_o *)(&v16 - 1),
    0LL);
}