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
  __int64 v7; // x1
  float time; // s0
  float offsetXPerSec; // s10
  float v10; // s8
  float v11; // s0
  float offsetYPerSec; // s11
  float v13; // s9
  float v14; // s0
  float v15; // s1
  bool v16; // nf
  float v17; // s1
  float v18; // s2
  float v19; // s0

  if ( (byte_48DFF39 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_16030/*"_MainTex"*/, v4);
    byte_48DFF39 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_1B00F28(material, v7);
  }
  if ( !UnityEngine_Material__HasProperty_67943924(material, (System_String_o *)StringLiteral_16030/*"_MainTex"*/, 0LL) )
  {
LABEL_17:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    return;
  }
  time = UnityEngine_Time__get_time(0LL);
  offsetXPerSec = this->fields.offsetXPerSec;
  v10 = time;
  v11 = UnityEngine_Time__get_time(0LL);
  offsetYPerSec = this->fields.offsetYPerSec;
  v13 = v11;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0LL);
  if ( !material )
    goto LABEL_18;
  v14 = (float)(v10 * offsetXPerSec) - floorf(v10 * offsetXPerSec);
  v15 = (float)(v13 * offsetYPerSec) - floorf(v13 * offsetYPerSec);
  v16 = v15 < 0.0;
  v17 = fminf(v15, 1.0);
  v18 = fminf(v14, 1.0);
  if ( v16 )
    v17 = 0.0;
  if ( v14 < 0.0 )
    v19 = 0.0;
  else
    v19 = v18;
  UnityEngine_Material__SetTextureOffset(
    material,
    (System_String_o *)StringLiteral_16030/*"_MainTex"*/,
    *(UnityEngine_Vector2_o *)(&v17 - 1),
    0LL);
}