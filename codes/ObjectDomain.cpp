void __fastcall ObjectDomain___ctor(
        ObjectDomain_o *this,
        float x,
        float y,
        float width,
        float height,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._X_k__BackingField = x;
  this->fields._Y_k__BackingField = y;
  this->fields._Width_k__BackingField = width;
  this->fields._Height_k__BackingField = height;
}


void __fastcall ObjectDomain___ctor_19799388(ObjectDomain_o *this, ObjectDomain_o *domain, const MethodInfo *method)
{
  ObjectDomain_Fields fields; // [xsp+0h] [xbp-20h]

  if ( !domain )
    sub_B0D97C(this);
  fields = domain->fields;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = fields;
}


float __fastcall ObjectDomain__get_Height(ObjectDomain_o *this, const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


float __fastcall ObjectDomain__get_Width(ObjectDomain_o *this, const MethodInfo *method)
{
  return this->fields._Width_k__BackingField;
}


float __fastcall ObjectDomain__get_X(ObjectDomain_o *this, const MethodInfo *method)
{
  return this->fields._X_k__BackingField;
}


float __fastcall ObjectDomain__get_Y(ObjectDomain_o *this, const MethodInfo *method)
{
  return this->fields._Y_k__BackingField;
}


UnityEngine_Vector3_o __fastcall ObjectDomain__get_center(ObjectDomain_o *this, const MethodInfo *method)
{
  unsigned __int64 v2; // d0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = vadd_f32(
         *(float32x2_t *)&this->fields._X_k__BackingField,
         vmul_f32(*(float32x2_t *)&this->fields._Width_k__BackingField, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v3 = *((float *)&v2 + 1);
  v4 = 0.0;
  result.fields.x = *(float *)&v2;
  result.fields.z = v4;
  result.fields.y = v3;
  return result;
}


void __fastcall ObjectDomain__set_Height(ObjectDomain_o *this, float value, const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}


void __fastcall ObjectDomain__set_Width(ObjectDomain_o *this, float value, const MethodInfo *method)
{
  this->fields._Width_k__BackingField = value;
}


void __fastcall ObjectDomain__set_X(ObjectDomain_o *this, float value, const MethodInfo *method)
{
  this->fields._X_k__BackingField = value;
}


void __fastcall ObjectDomain__set_Y(ObjectDomain_o *this, float value, const MethodInfo *method)
{
  this->fields._Y_k__BackingField = value;
}