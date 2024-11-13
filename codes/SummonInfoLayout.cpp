void __fastcall SummonInfoLayout___ctor(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonInfoLayout__Awake(SummonInfoLayout_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  struct FSOffset_o **p_fsOffset; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4B129CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_FSOffset___, method, v2);
    byte_4B129CF = 1;
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
  this->fields.fsOffset = (struct FSOffset_o *)Component_object;
  p_fsOffset = &this->fields.fsOffset;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fsOffset,
    (int64_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (UnityEngine_Transform_o *)this->fields.fsOffset;
  if ( !transform )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)transform, 0LL) )
    return;
  transform = (UnityEngine_Transform_o *)*p_fsOffset;
  if ( !*p_fsOffset )
LABEL_9:
    sub_1BCAA3C(transform, v5);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
  SummonInfoLayout__UpdateOffset(this, v14);
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
    sub_1BCAA3C(transform, v4);
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
    sub_1BCAA3C(transform, v4);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.infoControlLayoutDefault.fields.Scale, 0LL);
  SummonInfoLayout__UpdateOffset(this, v5);
}


void __fastcall SummonInfoLayout__UpdateOffset(SummonInfoLayout_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v5; // x1
  FSOffset_o *v6; // x0

  if ( (byte_4B129D0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B129D0 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(fsOffset, 0LL, 0LL) )
  {
    v6 = this->fields.fsOffset;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    FSOffset__UpdateOffset(v6, 0LL);
  }
}