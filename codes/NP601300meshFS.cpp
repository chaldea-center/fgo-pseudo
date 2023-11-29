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
  UnityEngine_Transform_o *parent; // x0
  float endParentPosZ; // s12
  float v11; // s13
  float z; // s9
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  float v15; // s10
  UnityEngine_Transform_o *v16; // x0
  float v17; // s8
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v5 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  v6 = *((float *)&this->fields + 3);
  v7 = v5;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_8;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_8;
  localPosition = UnityEngine_Transform__get_localPosition(parent, 0LL);
  endParentPosZ = this->fields.endParentPosZ;
  v11 = *((float *)&this->fields + 3);
  z = localPosition.fields.z;
  v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v13 )
    goto LABEL_8;
  v14 = UnityEngine_Transform__get_parent(v13, 0LL);
  if ( !v14 )
    goto LABEL_8;
  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition(v14, 0LL);
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v16
    || (v17 = (float)((float)((float)((float)((float)(v7 * 9.0) * 0.0625) + -1.0) * (float)(v6 - z))
                    / (float)(v11 - endParentPosZ))
            + 1.0,
        v20.fields.x = (float)(1.0 - v17) * v15,
        v20.fields.y = 0.0,
        v20.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v16, v20, 0LL),
        (v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  v21.fields.x = v17;
  v21.fields.z = v17;
  v21.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(v18, v21, 0LL);
}