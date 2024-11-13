void __fastcall FollowObjectPositionComponent___ctor(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowObjectPositionComponent__SetObj(
        FollowObjectPositionComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool IsInversion,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UnityEngine_GameObject_o **p_TargetObj; // x19
  bool v9; // w20

  this->fields.TargetObj = obj;
  p_TargetObj = &this->fields.TargetObj;
  v9 = IsInversion;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TargetObj,
    (int64_t)obj,
    IsInversion,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_TargetObj + 8) = v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowObjectPositionComponent__Update(FollowObjectPositionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *TargetObj; // x19
  _BOOL4 IsInversion; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x19
  float v9; // s1
  int v10; // s2
  float v11; // s0
  float v12; // s8
  float v13; // s1
  float v14; // s0

  if ( (byte_4B15691 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15691 = 1;
  }
  TargetObj = (UnityEngine_Object_o *)this->fields.TargetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(TargetObj, 0LL, 0LL) )
  {
    IsInversion = this->fields.IsInversion;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( this->fields.TargetObj )
    {
      v8 = transform;
      transform = UnityEngine_GameObject__get_transform(this->fields.TargetObj, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
        v12 = v11;
        if ( IsInversion )
        {
          transform = (UnityEngine_Transform_o *)this->fields.TargetObj;
          if ( transform )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( transform )
            {
              *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
              if ( v8 )
              {
                v9 = -v13;
                v12 = -v12;
                v10 = 0;
LABEL_14:
                v14 = v12;
                UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)(&v9 - 1), 0LL);
                return;
              }
            }
          }
        }
        else if ( v8 )
        {
          goto LABEL_14;
        }
      }
    }
    sub_1BCAA3C(transform, v7);
  }
}