void SetMaterialFloatComponent___ctor(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetMaterialFloatComponent__Finish(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1

  if ( (byte_593C31A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C31A = 1;
  }
  this->fields.targetRenderer = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetRenderer, 0, v2, v3, v4, v5, v6, v7);
  if ( this->fields.destroyOnFinished )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)this, 0);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
}


float SetMaterialFloatComponent__GetFloatValue(
        SetMaterialFloatComponent_o *this,
        float lerpTime,
        const MethodInfo *method)
{
  int32_t interpolationType; // w8
  float v4; // s2
  bool v5; // nf
  float result; // s0
  float v7; // s1
  float v8; // s2

  interpolationType = this->fields.interpolationType;
  if ( lerpTime <= 1.0 )
    v4 = lerpTime;
  else
    v4 = 1.0;
  v5 = lerpTime < 0.0;
  result = this->fields.fromValue;
  if ( v5 )
    v4 = 0.0;
  if ( interpolationType == 1 )
  {
    if ( v4 < 0.0 )
      v4 = 0.0;
    v8 = (float)(v4 * (float)(v4 * 3.0)) - (float)(v4 * (float)(v4 * (float)(v4 + v4)));
    return (float)((float)(1.0 - v8) * result) + (float)(v8 * this->fields.toValue);
  }
  else if ( !interpolationType )
  {
    v7 = 0.0;
    if ( v4 >= 0.0 )
      v7 = v4;
    return result + (float)(v7 * (float)(this->fields.toValue - result));
  }
  return result;
}


void SetMaterialFloatComponent__SetMaterialFloat(
        SetMaterialFloatComponent_o *this,
        float floatValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v6; // x1
  UnityEngine_Renderer_o *materials; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *material; // x20
  __int64 materialIndex; // x8
  UnityEngine_Material_array *v11; // x20

  if ( (byte_593C31B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C31B = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(targetRenderer, 0, 0) )
  {
    materials = this->fields.targetRenderer;
    if ( !materials )
      goto LABEL_24;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(materials, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Equality(material, 0, 0) )
    {
      materials = this->fields.targetRenderer;
      if ( this->fields.materialIndex )
      {
        if ( !materials )
          goto LABEL_24;
        materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_materials(materials, 0);
        if ( !materials )
          goto LABEL_24;
        if ( this->fields.materialIndex < SLODWORD(materials[1].klass) )
        {
          materials = this->fields.targetRenderer;
          if ( materials )
          {
            materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_materials(materials, 0);
            if ( materials )
            {
              materialIndex = this->fields.materialIndex;
              v11 = (UnityEngine_Material_array *)materials;
              if ( (unsigned int)materialIndex >= LODWORD(materials[1].klass) )
                sub_21FFED4(materials);
              materials = (UnityEngine_Renderer_o *)*((_QWORD *)&materials[1].monitor + materialIndex);
              if ( materials )
              {
                UnityEngine_Material__SetFloat_83072080(
                  (UnityEngine_Material_o *)materials,
                  this->fields.propertyId,
                  floatValue,
                  0);
                materials = this->fields.targetRenderer;
                if ( materials )
                {
                  UnityEngine_Renderer__set_materials(materials, v11, 0);
                  return;
                }
              }
            }
          }
LABEL_24:
          sub_21FFECC(materials, v6);
        }
      }
      else
      {
        if ( !materials )
          goto LABEL_24;
        materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(materials, 0);
        if ( !materials )
          goto LABEL_24;
        UnityEngine_Material__SetFloat_83072080(
          (UnityEngine_Material_o *)materials,
          this->fields.propertyId,
          floatValue,
          0);
      }
    }
  }
}


void SetMaterialFloatComponent__Setup(
        SetMaterialFloatComponent_o *this,
        System_String_o *propertyName,
        int32_t interpolationType,
        float fromValue,
        float toValue,
        float time,
        bool realTime,
        int32_t materialIndex,
        bool destroyOnFinished,
        const MethodInfo *method)
{
  bool v17; // w25
  bool v18; // w24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  UnityEngine_Object_o *targetRenderer; // x21
  bool v28; // w0
  const MethodInfo *v29; // x1
  UnityEngine_Renderer_o *materials; // x0

  v17 = realTime;
  v18 = destroyOnFinished;
  if ( (byte_593C318 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C318 = 1;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  this->fields.propertyName = propertyName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.propertyName,
    (int32_t)propertyName,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.interpolationType = interpolationType;
  this->fields.fromValue = fromValue;
  this->fields.toValue = toValue;
  this->fields.time = time;
  this->fields.realTime = v17;
  this->fields.materialIndex = materialIndex;
  this->fields.destroyOnFinished = v18;
  SetMaterialFloatComponent__Setup_55061508(this, v25);
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  v28 = UnityEngine_Object__op_Equality(targetRenderer, 0, 0);
  if ( materialIndex < 0 || v28 )
    goto LABEL_10;
  materials = this->fields.targetRenderer;
  if ( !materials || (materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_materials(materials, 0)) == 0 )
    sub_21FFECC(materials, v29);
  if ( SLODWORD(materials[1].klass) <= materialIndex )
LABEL_10:
    SetMaterialFloatComponent__Finish(this, v29);
}


void SetMaterialFloatComponent__Setup_55061508(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_targetRenderer; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  float realtimeSinceStartup; // s0

  if ( (byte_593C319 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Renderer___);
    byte_593C319 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields.targetRenderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_targetRenderer = &this->fields.targetRenderer;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_targetRenderer, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  *((_DWORD *)p_targetRenderer + 2) = UnityEngine_Shader__PropertyToID((System_String_o *)*(p_targetRenderer - 6), 0);
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  *((_DWORD *)p_targetRenderer - 2) = 0;
  *((float *)p_targetRenderer - 3) = realtimeSinceStartup;
}


// attributes: thunk
void SetMaterialFloatComponent__Start(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  SetMaterialFloatComponent__Setup_55061508(this, method);
}


void SetMaterialFloatComponent__Update(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  float updated; // s8
  const MethodInfo *v4; // x1
  float FloatValue; // s0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  updated = SetMaterialFloatComponent__UpdateTime(this, method);
  FloatValue = SetMaterialFloatComponent__GetFloatValue(this, updated, v4);
  SetMaterialFloatComponent__SetMaterialFloat(this, FloatValue, v6);
  if ( updated >= 1.0 )
    SetMaterialFloatComponent__Finish(this, v7);
}


float SetMaterialFloatComponent__UpdateTime(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  float currentTime; // s8

  if ( this->fields.realTime )
  {
    v3 = UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.startTime;
  }
  else
  {
    currentTime = this->fields.currentTime;
    v3 = currentTime + UnityEngine_Time__get_deltaTime(0);
  }
  this->fields.currentTime = v3;
  return v3 / this->fields.time;
}