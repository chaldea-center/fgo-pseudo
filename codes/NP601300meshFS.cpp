void NP601300meshFS___ctor(NP601300meshFS_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.startParentPosZ = 0x41C0000041840000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NP601300meshFS__Update(NP601300meshFS_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  int32_t height; // w0
  float endParentPosZ; // s10
  int v6; // w21
  UnityEngine_Transform_o *transform; // x0
  float v8; // s9
  float v9; // s13
  float v10; // s11
  float startParentPosZ; // s12
  float z; // s8
  float v13; // s13
  float v14; // s9
  float v15; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  endParentPosZ = this->fields.endParentPosZ;
  v6 = height;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_11;
  v8 = (float)width / (float)v6;
  v9 = (float)(fminf(v8, 2.3333) * 9.0) * 0.0625;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  startParentPosZ = this->fields.startParentPosZ;
  v10 = this->fields.endParentPosZ;
  z = localPosition.fields.z;
  v13 = v8 < 1.7778 ? 0.0 : v9 + -1.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_11;
  LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (v15 = (float)((float)(v13 * (float)(endParentPosZ - z)) / (float)(v10 - startParentPosZ)) + 1.0,
        v17.fields.x = (float)(1.0 - v15) * v14,
        v17.fields.y = 0.0,
        v17.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(transform, v17, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C372B4(transform);
  }
  v18.fields.x = v15;
  v18.fields.z = v15;
  v18.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(transform, v18, 0);
}