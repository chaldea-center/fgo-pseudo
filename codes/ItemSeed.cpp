void ItemSeed___ctor(ItemSeed_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o ItemSeed__GetLocalPosition(ItemSeed_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *parent; // x0
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v5; // x1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  parent = this->fields.parent;
  if ( !parent
    || (transform = UnityEngine_GameObject__get_transform(parent, 0),
        Position = ItemSeed__GetPosition(this, v5),
        !transform) )
  {
    sub_1C71608(parent, method);
  }
  return UnityEngine_Transform__InverseTransformPoint(transform, Position, 0);
}


UnityEngine_Vector3_o ItemSeed__GetPosition(ItemSeed_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C71608(0, v3);
  return UnityEngine_Transform__TransformPoint_71751388(transform, 0.0, 0.0, 0.0, 0);
}


void ItemSeed__SetTransform(ItemSeed_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  ItemSeed_o *v4; // x20
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4CC8B30 & 1) == 0 )
  {
    this = (ItemSeed_o *)sub_1C713B0(&StringLiteral_12796/*"SetBaseTransform"*/);
    byte_4CC8B30 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  LocalPosition = ItemSeed__GetLocalPosition(v4, v6);
  if ( !transform )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(transform, LocalPosition, 0);
  v7 = UnityEngine_GameObject__get_transform(obj, 0);
  this = (ItemSeed_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  if ( !this
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0), !v7)
    || (UnityEngine_Transform__set_localRotation(v7, localRotation, 0),
        v8 = UnityEngine_GameObject__get_transform(obj, 0),
        (this = (ItemSeed_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0), !v8) )
  {
LABEL_10:
    sub_1C71608(this, obj);
  }
  UnityEngine_Transform__set_localScale(v8, localScale, 0);
  UnityEngine_GameObject__SendMessage_71705976(obj, (System_String_o *)StringLiteral_12796/*"SetBaseTransform"*/, 0);
}


UnityEngine_GameObject_o *ItemSeed__get_Parent(ItemSeed_o *this, const MethodInfo *method)
{
  return this->fields.parent;
}


UnityEngine_GameObject_o *ItemSeed__get_Prefab(ItemSeed_o *this, const MethodInfo *method)
{
  return this->fields.prefab;
}