UnityEngine_Color_o MaterialExtensions__GetColorOrDefault(
        UnityEngine_Material_o *self,
        System_String_o *propertyName,
        UnityEngine_Color_o defaultValue,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o Color; // 0:kr00_16.16
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !self )
    sub_1C93D2C(0, propertyName);
  a = defaultValue.fields.a;
  b = defaultValue.fields.b;
  g = defaultValue.fields.g;
  r = defaultValue.fields.r;
  if ( UnityEngine_Material__HasProperty_71985380(self, propertyName, 0) )
  {
    Color = UnityEngine_Material__GetColor(self, propertyName, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  result.fields.b = b;
  result.fields.a = a;
  result.fields.r = r;
  result.fields.g = g;
  return result;
}