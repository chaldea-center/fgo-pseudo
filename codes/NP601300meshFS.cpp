void __fastcall NP601300meshFS___ctor(NP601300meshFS_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.endParentPosZ = 0x41C0000041840000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NP601300meshFS__Update(NP601300meshFS_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  int32_t height; // w0
  float v5; // s0
  float v6; // s11
  float v7; // s8
  UnityEngine_Transform_o *transform; // x0
  float endParentPosZ; // s12
  float v10; // s13
  float z; // s9
  float v12; // s10
  float v13; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v5 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  v6 = *((float *)&this->fields + 3);
  v7 = v5;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_8;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_8;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  endParentPosZ = this->fields.endParentPosZ;
  v10 = *((float *)&this->fields + 3);
  z = localPosition.fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_8;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_8;
  LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (v13 = (float)((float)((float)((float)((float)(v7 * 9.0) * 0.0625) + -1.0) * (float)(v6 - z))
                    / (float)(v10 - endParentPosZ))
            + 1.0,
        v15.fields.x = (float)(1.0 - v13) * v12,
        v15.fields.y = 0.0,
        v15.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(transform, v15, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(transform);
  }
  v16.fields.x = v13;
  v16.fields.z = v13;
  v16.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(transform, v16, 0LL);
}