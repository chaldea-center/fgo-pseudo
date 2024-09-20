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
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *material; // x0
  __int64 v5; // x1
  float time; // s0
  float offsetXPerSec; // s10
  float v8; // s8
  float v9; // s0
  float offsetYPerSec; // s11
  float v11; // s9
  float v12; // s0
  float v13; // s1
  bool v14; // nf
  float v15; // s1
  float v16; // s2
  float v17; // s0

  if ( (byte_4A58889 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A58889 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
    sub_1B8880C(material, v5);
  }
  if ( !UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)StringLiteral_16262/*"_MainTex"*/, 0LL) )
  {
LABEL_17:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    return;
  }
  time = UnityEngine_Time__get_time(0LL);
  offsetXPerSec = this->fields.offsetXPerSec;
  v8 = time;
  v9 = UnityEngine_Time__get_time(0LL);
  offsetYPerSec = this->fields.offsetYPerSec;
  v11 = v9;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Component_object, 0LL);
  if ( !material )
    goto LABEL_18;
  v12 = (float)(v8 * offsetXPerSec) - floorf(v8 * offsetXPerSec);
  v13 = (float)(v11 * offsetYPerSec) - floorf(v11 * offsetYPerSec);
  v14 = v13 < 0.0;
  v15 = fminf(v13, 1.0);
  v16 = fminf(v12, 1.0);
  if ( v14 )
    v15 = 0.0;
  if ( v12 < 0.0 )
    v17 = 0.0;
  else
    v17 = v16;
  UnityEngine_Material__SetTextureOffset(
    material,
    (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
    *(UnityEngine_Vector2_o *)(&v15 - 1),
    0LL);
}