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
  float v10; // s2
  float v11; // s3
  float v12; // s0
  float v13; // s1
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !self )
    sub_1C3E7C0(0, propertyName);
  a = defaultValue.fields.a;
  b = defaultValue.fields.b;
  g = defaultValue.fields.g;
  r = defaultValue.fields.r;
  if ( UnityEngine_Material__HasProperty_71207700(self, propertyName, 0) )
  {
    Color = UnityEngine_Material__GetColor(self, propertyName, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  v10 = b;
  v11 = a;
  v12 = r;
  v13 = g;
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v13;
  result.fields.r = v12;
  return result;
}