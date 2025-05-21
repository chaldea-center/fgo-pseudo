void __fastcall SetMaterialFloatComponent___ctor(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetMaterialFloatComponent__Finish(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4B48193 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48193 = 1;
  }
  this->fields.targetRenderer = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetRenderer, 0, v2, v3);
  if ( this->fields.destroyOnFinished )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)this, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  }
}


float __fastcall SetMaterialFloatComponent__GetFloatValue(
        SetMaterialFloatComponent_o *this,
        float lerpTime,
        const MethodInfo *method)
{
  int32_t interpolationType; // w8
  float v4; // s3
  float v5; // s0
  float v7; // s0
  float v8; // s0

  interpolationType = this->fields.interpolationType;
  v4 = fminf(lerpTime, 1.0);
  if ( lerpTime < 0.0 )
    v5 = 0.0;
  else
    v5 = v4;
  if ( interpolationType == 1 )
  {
    v7 = fmaxf(v5, 0.0);
    v8 = (float)(v7 * (float)(v7 * 3.0)) - (float)(v7 * (float)(v7 * (float)(v7 + v7)));
    return (float)((float)(1.0 - v8) * this->fields.fromValue) + (float)(v8 * this->fields.toValue);
  }
  else if ( interpolationType )
  {
    return this->fields.fromValue;
  }
  else
  {
    return this->fields.fromValue + (float)(fmaxf(v5, 0.0) * (float)(this->fields.toValue - this->fields.fromValue));
  }
}


void __fastcall SetMaterialFloatComponent__SetMaterialFloat(
        SetMaterialFloatComponent_o *this,
        float floatValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v6; // x1
  UnityEngine_Renderer_o *materials; // x0
  UnityEngine_Object_o *material; // x20
  __int64 v9; // x2
  __int64 materialIndex; // x8
  UnityEngine_Material_array *v11; // x20

  if ( (byte_4B48194 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48194 = 1;
  }
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetRenderer, 0LL, 0LL) )
  {
    materials = this->fields.targetRenderer;
    if ( !materials )
      goto LABEL_23;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(materials, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    {
      materials = this->fields.targetRenderer;
      if ( !materials )
        goto LABEL_23;
      if ( this->fields.materialIndex )
      {
        materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_materials(materials, 0LL);
        if ( !materials )
          goto LABEL_23;
        if ( this->fields.materialIndex < SLODWORD(materials[1].klass) )
        {
          materials = this->fields.targetRenderer;
          if ( materials )
          {
            materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_materials(materials, 0LL);
            if ( materials )
            {
              materialIndex = this->fields.materialIndex;
              v11 = (UnityEngine_Material_array *)materials;
              if ( (unsigned int)materialIndex >= LODWORD(materials[1].klass) )
                sub_1BDBADC(materials, v6, v9);
              materials = (UnityEngine_Renderer_o *)*((_QWORD *)&materials[1].monitor + materialIndex);
              if ( materials )
              {
                UnityEngine_Material__SetFloat_70153748(
                  (UnityEngine_Material_o *)materials,
                  this->fields.propertyId,
                  floatValue,
                  0LL);
                materials = this->fields.targetRenderer;
                if ( materials )
                {
                  UnityEngine_Renderer__set_materials(materials, v11, 0LL);
                  return;
                }
              }
            }
          }
LABEL_23:
          sub_1BDBAD4(materials, v6);
        }
      }
      else
      {
        materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(materials, 0LL);
        if ( !materials )
          goto LABEL_23;
        UnityEngine_Material__SetFloat_70153748(
          (UnityEngine_Material_o *)materials,
          this->fields.propertyId,
          floatValue,
          0LL);
      }
    }
  }
}


void __fastcall SetMaterialFloatComponent__Setup(
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *targetRenderer; // x21
  bool v23; // w0
  const MethodInfo *v24; // x1
  UnityEngine_Renderer_o *materials; // x0

  v17 = realTime;
  v18 = destroyOnFinished;
  if ( (byte_4B48191 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, propertyName);
    byte_4B48191 = 1;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this->fields.propertyName = propertyName;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.propertyName, (int32_t)propertyName, v19, v20);
  this->fields.interpolationType = interpolationType;
  this->fields.fromValue = fromValue;
  this->fields.toValue = toValue;
  this->fields.time = time;
  this->fields.realTime = v17;
  this->fields.materialIndex = materialIndex;
  this->fields.destroyOnFinished = v18;
  SetMaterialFloatComponent__Setup_46533140(this, v21);
  targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__op_Equality(targetRenderer, 0LL, 0LL);
  if ( (materialIndex & 0x80000000) != 0 || v23 )
    goto LABEL_10;
  materials = this->fields.targetRenderer;
  if ( !materials || (materials = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_materials(materials, 0LL)) == 0LL )
    sub_1BDBAD4(materials, v24);
  if ( SLODWORD(materials[1].klass) <= materialIndex )
LABEL_10:
    SetMaterialFloatComponent__Finish(this, v24);
}


void __fastcall SetMaterialFloatComponent__Setup_46533140(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_targetRenderer; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B48192 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_4B48192 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields.targetRenderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_targetRenderer = &this->fields.targetRenderer;
  sub_1BDB81C((CGThumbnailListItem_o *)p_targetRenderer, (int32_t)Component_object, v5, v6);
  *((_DWORD *)p_targetRenderer + 2) = UnityEngine_Shader__PropertyToID((System_String_o *)*(p_targetRenderer - 6), 0LL);
  *((float *)p_targetRenderer - 3) = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  *((_DWORD *)p_targetRenderer - 2) = 0;
}


// attributes: thunk
void __fastcall SetMaterialFloatComponent__Start(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  SetMaterialFloatComponent__Setup_46533140(this, method);
}


void __fastcall SetMaterialFloatComponent__Update(SetMaterialFloatComponent_o *this, const MethodInfo *method)
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


float __fastcall SetMaterialFloatComponent__UpdateTime(SetMaterialFloatComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  float currentTime; // s8
  float time; // s1

  if ( this->fields.realTime )
  {
    v3 = UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.startTime;
  }
  else
  {
    currentTime = this->fields.currentTime;
    v3 = currentTime + UnityEngine_Time__get_deltaTime(0LL);
  }
  time = this->fields.time;
  this->fields.currentTime = v3;
  return v3 / time;
}