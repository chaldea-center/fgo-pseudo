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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v11; // x1
  float time; // s0
  float offsetXPerSec; // s10
  float v14; // s8
  float v15; // s0
  float offsetYPerSec; // s11
  float v17; // s9
  float v18; // s0
  float v19; // s1
  bool v20; // nf
  float v21; // s1
  float v22; // s2
  float v23; // s0

  if ( (byte_4B137E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v6, v7);
    byte_4B137E4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(material, v11);
  }
  if ( !UnityEngine_Material__HasProperty_70020424(material, (System_String_o *)StringLiteral_16431/*"_MainTex"*/, 0LL) )
  {
LABEL_17:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    return;
  }
  time = UnityEngine_Time__get_time(0LL);
  offsetXPerSec = this->fields.offsetXPerSec;
  v14 = time;
  v15 = UnityEngine_Time__get_time(0LL);
  offsetYPerSec = this->fields.offsetYPerSec;
  v17 = v15;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0LL);
  if ( !material )
    goto LABEL_18;
  v18 = (float)(v14 * offsetXPerSec) - floorf(v14 * offsetXPerSec);
  v19 = (float)(v17 * offsetYPerSec) - floorf(v17 * offsetYPerSec);
  v20 = v19 < 0.0;
  v21 = fminf(v19, 1.0);
  v22 = fminf(v18, 1.0);
  if ( v20 )
    v21 = 0.0;
  if ( v18 < 0.0 )
    v23 = 0.0;
  else
    v23 = v22;
  UnityEngine_Material__SetTextureOffset(
    material,
    (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
    *(UnityEngine_Vector2_o *)(&v21 - 1),
    0LL);
}