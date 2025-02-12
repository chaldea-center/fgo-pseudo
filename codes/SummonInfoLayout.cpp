void __fastcall SummonInfoLayout___ctor(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonInfoLayout__Awake(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  struct FSOffset_o **p_fsOffset; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4BB0E4E & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_FSOffset___, method);
    byte_4BB0E4E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  this->fields.infoControlLayoutDefault.fields.Position = UnityEngine_Transform__get_localPosition(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  this->fields.infoControlLayoutDefault.fields.Scale = UnityEngine_Transform__get_localScale(transform, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
  this->fields.fsOffset = (struct FSOffset_o *)Component_object;
  p_fsOffset = &this->fields.fsOffset;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.fsOffset,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  transform = (UnityEngine_Transform_o *)this->fields.fsOffset;
  if ( !transform )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)transform, 0LL) )
    return;
  transform = (UnityEngine_Transform_o *)*p_fsOffset;
  if ( !*p_fsOffset )
LABEL_9:
    sub_1C13F80(transform, v4);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
  SummonInfoLayout__UpdateOffset(this, v13);
}


int32_t __fastcall SummonInfoLayout__GetLayoutType(SummonInfoLayout_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


void __fastcall SummonInfoLayout__UpdateCustom(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.infoControlLayoutCustom.fields.Position, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(transform, v4);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.infoControlLayoutCustom.fields.Scale, 0LL);
  SummonInfoLayout__UpdateOffset(this, v5);
}


void __fastcall SummonInfoLayout__UpdateDefault(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.infoControlLayoutDefault.fields.Position, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(transform, v4);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.infoControlLayoutDefault.fields.Scale, 0LL);
  SummonInfoLayout__UpdateOffset(this, v5);
}


void __fastcall SummonInfoLayout__UpdateOffset(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v4; // x1
  FSOffset_o *v5; // x0

  if ( (byte_4BB0E4F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB0E4F = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(fsOffset, 0LL, 0LL) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 )
      sub_1C13F80(0LL, v4);
    FSOffset__UpdateOffset(v5, 0LL);
  }
}