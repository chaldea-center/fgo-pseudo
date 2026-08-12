void SummonInfoLayout___ctor(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SummonInfoLayout__Awake(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo_3820CA8 *v5; // x1
  Il2CppObject *Component_object; // x0
  struct FSOffset_o **p_fsOffset; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  UnityEngine_Vector3_o localScale; // 0:kr14_12.12

  if ( (byte_596CB0E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    byte_596CB0E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  this->fields.infoControlLayoutDefault.fields.Position = UnityEngine_Transform__get_localPosition(transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  localScale = UnityEngine_Transform__get_localScale(transform, 0);
  v5 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_FSOffset___;
  this->fields.infoControlLayoutDefault.fields.Scale = localScale;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v5);
  this->fields.fsOffset = (struct FSOffset_o *)Component_object;
  p_fsOffset = &this->fields.fsOffset;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fsOffset,
    (int32_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (UnityEngine_Transform_o *)this->fields.fsOffset;
  if ( !transform )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)transform, 0) )
    return;
  transform = (UnityEngine_Transform_o *)*p_fsOffset;
  if ( !*p_fsOffset )
LABEL_9:
    sub_2213CDC(transform, v4);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
  SummonInfoLayout__UpdateOffset(this, v14);
}


int32_t SummonInfoLayout__GetLayoutType(SummonInfoLayout_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


void SummonInfoLayout__UpdateCustom(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.infoControlLayoutCustom.fields.Position, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v4);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.infoControlLayoutCustom.fields.Scale, 0);
  SummonInfoLayout__UpdateOffset(this, v5);
}


void SummonInfoLayout__UpdateDefault(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.infoControlLayoutDefault.fields.Position, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v4);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.infoControlLayoutDefault.fields.Scale, 0);
  SummonInfoLayout__UpdateOffset(this, v5);
}


void SummonInfoLayout__UpdateOffset(SummonInfoLayout_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v5; // x1
  FSOffset_o *v6; // x0

  if ( (byte_596CB0F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB0F = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(fsOffset, 0, 0) )
  {
    v6 = this->fields.fsOffset;
    if ( !v6 )
      sub_2213CDC(0, v5);
    FSOffset__UpdateOffset(v6, 0);
  }
}