// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthTransform___ctor(
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
  float z; // [xsp+58h] [xbp-18h]
  float w; // [xsp+5Ch] [xbp-14h]
  float v16; // [xsp+88h] [xbp+18h]
  __int64 v17; // [xsp+90h] [xbp+20h]
  float v18; // [xsp+98h] [xbp+28h]
  float v19; // [xsp+A0h] [xbp+30h]

  x = blankEarthRot.fields.x;
  z = earthRootRot.fields.z;
  w = earthRootRot.fields.w;
  y = earthRootRot.fields.y;
  v9 = earthRootRot.fields.x;
  v10 = blankEarthRot.fields.w;
  v11 = blankEarthRot.fields.z;
  v12 = blankEarthRot.fields.y;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.blankEarthRotation.fields.x = x;
  this->fields.blankEarthRotation.fields.y = v12;
  this->fields.blankEarthRotation.fields.z = v11;
  this->fields.blankEarthRotation.fields.w = v10;
  this->fields.earthRootRotation.fields.x = v9;
  this->fields.earthRootRotation.fields.y = y;
  *(_QWORD *)&this->fields.earthRootLocalPosition.fields.x = *(_QWORD *)&totalAng;
  this->fields.earthRootLocalPosition.fields.z = v16;
  *(_QWORD *)&this->fields.earthRootLocalScale.fields.x = v17;
  this->fields.earthRootRotation.fields.z = z;
  this->fields.earthRootRotation.fields.w = w;
  this->fields.earthRootLocalScale.fields.z = v18;
  this->fields.totalAngle = v19;
}