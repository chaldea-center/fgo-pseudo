void NP601300meshFS___ctor(NP601300meshFS_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.startParentPosZ = 0x41C0000041840000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NP601300meshFS__Update(NP601300meshFS_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  float height; // s1
  float endParentPosZ; // s10
  float v6; // s8
  float v7; // s9
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  float v10; // s9
  float v11; // s11
  float startParentPosZ; // s13
  bool v13; // nf
  float v14; // s8
  float v15; // s12
  float v16; // s9
  float v17; // s8
  float z; // s2
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  width = UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  endParentPosZ = this->fields.endParentPosZ;
  v6 = (float)width / height;
  if ( v6 <= 2.3333 )
    v7 = (float)width / height;
  else
    v7 = 2.3333;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_14;
  v10 = (float)((float)(v7 * 9.0) * 0.0625) + -1.0;
  z = UnityEngine_Transform__get_localPosition(transform, 0).fields.z;
  startParentPosZ = this->fields.startParentPosZ;
  v11 = this->fields.endParentPosZ;
  v13 = v6 < 1.7778;
  v14 = z;
  v15 = v13 ? 0.0 : v10;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (v19.fields.z = 0.0,
        v17 = (float)((float)(v15 * (float)(endParentPosZ - v14)) / (float)(v11 - startParentPosZ)) + 1.0,
        v19.fields.y = 0.0,
        v19.fields.x = (float)(1.0 - v17) * v16,
        UnityEngine_Transform__set_localPosition(transform, v19, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_14:
    sub_2213CDC(transform, v9);
  }
  v20.fields.x = v17;
  v20.fields.z = v17;
  v20.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(transform, v20, 0);
}