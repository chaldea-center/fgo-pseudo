void ListViewItemSeed___ctor(ListViewItemSeed_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)&this->fields.arrangementVolume.fields.x = _Q0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o ListViewItemSeed__GetBlank(
        ListViewItemSeed_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ListViewItemSeed_o *v4; // x19
  float y; // s8
  float v6; // s1
  float v7; // s2
  float v8; // s0
  float x; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C446D8 & 1) == 0 )
  {
    this = (ListViewItemSeed_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4C446D8 = 1;
  }
  if ( !obj )
    goto LABEL_9;
  this = (ListViewItemSeed_o *)UnityEngine_GameObject__GetComponent_object_(
                                 obj,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v4->fields.arrangement )
  {
    if ( this )
    {
      x = v4->fields.arrangementPich.fields.x;
      v8 = x - COERCE_FLOAT(UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0));
      v6 = 0.0;
      v7 = 0.0;
      goto LABEL_10;
    }
LABEL_9:
    sub_1C372B4(this);
  }
  if ( !this )
    goto LABEL_9;
  y = v4->fields.arrangementPich.fields.y;
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
  v6 = y - size.fields.y;
  v7 = 10.0;
  v8 = 0.0;
LABEL_10:
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v8;
  return result;
}


UnityEngine_Vector3_o ListViewItemSeed__GetLocalPosition(
        ListViewItemSeed_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parent; // x0
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v7; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  parent = this->fields.parent;
  if ( !parent
    || (transform = UnityEngine_GameObject__get_transform(parent, 0),
        Position = ListViewItemSeed__GetPosition(this, index, v7),
        !transform) )
  {
    sub_1C372B4(parent);
  }
  return UnityEngine_Transform__InverseTransformPoint(transform, Position, 0);
}


UnityEngine_Vector3_o ListViewItemSeed__GetPosition(ListViewItemSeed_o *this, int32_t index, const MethodInfo *method)
{
  float x; // s0
  int v5; // w8
  float v6; // s9
  float v7; // s8
  float y; // s0
  int v9; // w8
  UnityEngine_Transform_o *transform; // x0

  if ( this->fields.arrangement )
  {
    x = this->fields.arrangementVolume.fields.x;
    v5 = (int)x;
    if ( x == INFINITY )
      v5 = 0x80000000;
    if ( v5 <= 1 )
      v5 = 1;
    v6 = (float)(index % v5) + (float)((float)(v5 - 1) * -0.5);
    v7 = (float)(index / v5);
  }
  else
  {
    y = this->fields.arrangementVolume.fields.y;
    v9 = (int)y;
    if ( y == INFINITY )
      v9 = 0x80000000;
    if ( v9 <= 1 )
      v9 = 1;
    v7 = (float)(index % v9) + (float)((float)(v9 - 1) * -0.5);
    v6 = (float)(index / v9);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  return UnityEngine_Transform__TransformPoint_71293352(
           transform,
           v6 * this->fields.arrangementPich.fields.x,
           v7 * this->fields.arrangementPich.fields.y,
           0.0,
           0);
}


void ListViewItemSeed__SetTransform(
        ListViewItemSeed_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ListViewItemSeed_o *v6; // x20
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4C446D9 & 1) == 0 )
  {
    this = (ListViewItemSeed_o *)sub_1C37058(&StringLiteral_12786/*"SetBaseTransform"*/);
    byte_4C446D9 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  LocalPosition = ListViewItemSeed__GetLocalPosition(v6, index, v8);
  if ( !transform )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(transform, LocalPosition, 0);
  v9 = UnityEngine_GameObject__get_transform(obj, 0);
  this = (ListViewItemSeed_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0);
  if ( !this
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0), !v9)
    || (UnityEngine_Transform__set_localRotation(v9, localRotation, 0),
        v10 = UnityEngine_GameObject__get_transform(obj, 0),
        (this = (ListViewItemSeed_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0), !v10) )
  {
LABEL_10:
    sub_1C372B4(this);
  }
  UnityEngine_Transform__set_localScale(v10, localScale, 0);
  UnityEngine_GameObject__SendMessage_71248628(obj, (System_String_o *)StringLiteral_12786/*"SetBaseTransform"*/, 0);
}