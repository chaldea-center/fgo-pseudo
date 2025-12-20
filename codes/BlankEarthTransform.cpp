// local variable allocation has failed, the output may be wrong!
void BlankEarthTransform___ctor(
        BlankEarthTransform_o *this,
        UnityEngine_Quaternion_o blankEarthRot,
        UnityEngine_Quaternion_o earthRootRot,
        UnityEngine_Vector3_o earthRootLocalPos,
        UnityEngine_Vector3_o earthRootLocalSca,
        float totalAng,
        const MethodInfo *method)
{
  float x; // s15
  float y; // s10
  float v9; // s11
  float v10; // s12
  float v11; // s13
  float v12; // s14
  float z; // [xsp+8h] [xbp-68h]
  float w; // [xsp+Ch] [xbp-64h]
  float v16; // [xsp+78h] [xbp+8h]
  __int64 v17; // [xsp+80h] [xbp+10h]
  float v18; // [xsp+88h] [xbp+18h]
  float v19; // [xsp+90h] [xbp+20h]

  x = blankEarthRot.fields.x;
  z = earthRootRot.fields.z;
  w = earthRootRot.fields.w;
  y = earthRootRot.fields.y;
  v9 = earthRootRot.fields.x;
  v10 = blankEarthRot.fields.w;
  v11 = blankEarthRot.fields.z;
  v12 = blankEarthRot.fields.y;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.blankEarthRotation.fields.x = x;
  this->fields.blankEarthRotation.fields.y = v12;
  this->fields.blankEarthRotation.fields.z = v11;
  this->fields.blankEarthRotation.fields.w = v10;
  this->fields.earthRootRotation.fields.x = v9;
  this->fields.earthRootRotation.fields.y = y;
  this->fields.earthRootRotation.fields.z = z;
  *(_QWORD *)&this->fields.earthRootLocalPosition.fields.x = *(_QWORD *)&totalAng;
  this->fields.earthRootLocalPosition.fields.z = v16;
  *(_QWORD *)&this->fields.earthRootLocalScale.fields.x = v17;
  this->fields.earthRootRotation.fields.w = w;
  this->fields.earthRootLocalScale.fields.z = v18;
  this->fields.totalAngle = v19;
}


void BlankEarthTransform__Reset(BlankEarthTransform_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.earthRootLocalPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.earthRootLocalPosition.fields.z = z;
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    v3 = UnityEngine_Vector3_TypeInfo;
    byte_4D25F1E = 1;
  }
  v6 = v3->static_fields;
  v7 = v6->oneVector.fields.z;
  *(_QWORD *)&this->fields.earthRootLocalScale.fields.x = *(_QWORD *)&v6->oneVector.fields.x;
  this->fields.earthRootLocalScale.fields.z = v7;
}