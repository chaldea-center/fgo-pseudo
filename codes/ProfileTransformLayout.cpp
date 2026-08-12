void ProfileTransformLayout___ctor(ProfileTransformLayout_o *this, const MethodInfo *method)
{
  if ( (byte_596FD80 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseProfileLayout_ProfileTransformLayout_TransformLayout___ctor__);
    byte_596FD80 = 1;
  }
  BaseProfileLayout_object____ctor(
    (BaseProfileLayout_TLayout__o *)this,
    (const MethodInfo_3E58DF4 *)Method_BaseProfileLayout_ProfileTransformLayout_TransformLayout___ctor__);
}


void ProfileTransformLayout__ApplyLayout(
        ProfileTransformLayout_o *this,
        ProfileTransformLayout_TransformLayout_o *layout,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1

  if ( layout )
  {
    if ( this->fields.shouldUsePosition )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_12;
      UnityEngine_Transform__set_localPosition(transform, layout->fields.position, 0);
    }
    if ( this->fields.shouldUseRotation )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_12;
      UnityEngine_Transform__set_localEulerAngles(transform, layout->fields.rotation, 0);
    }
    if ( this->fields.shouldUseScale )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( transform )
      {
        UnityEngine_Transform__set_localScale(transform, layout->fields.scale, 0);
        return;
      }
LABEL_12:
      sub_2213CDC(transform, v6);
    }
  }
}


void ProfileTransformLayout_TransformLayout___ctor(
        ProfileTransformLayout_TransformLayout_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}