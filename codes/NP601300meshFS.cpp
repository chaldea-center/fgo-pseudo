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
  __int64 v8; // x1
  float v9; // s9
  float v10; // s13
  float v11; // s11
  float startParentPosZ; // s12
  float v13; // s8
  float v14; // s13
  float v15; // s9
  float v16; // s8
  float z; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

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
  v9 = (float)width / (float)v6;
  v10 = (float)(fminf(v9, 2.3333) * 9.0) * 0.0625;
  z = UnityEngine_Transform__get_localPosition(transform, 0).fields.z;
  startParentPosZ = this->fields.startParentPosZ;
  v11 = this->fields.endParentPosZ;
  v13 = z;
  v14 = v9 < 1.7778 ? 0.0 : v10 + -1.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_11;
  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (v16 = (float)((float)(v14 * (float)(endParentPosZ - v13)) / (float)(v11 - startParentPosZ)) + 1.0,
        v18.fields.x = (float)(1.0 - v16) * v15,
        v18.fields.y = 0.0,
        v18.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(transform, v18, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C93D2C(transform, v8);
  }
  v19.fields.x = v16;
  v19.fields.z = v16;
  v19.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(transform, v19, 0);
}