void __fastcall BattleDropPointComponent___ctor(BattleDropPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropPointComponent__Initialize(
        BattleDropPointComponent_o *this,
        BattleDropPointComponent_DropPointData_o *data,
        UnityEngine_Transform_o *svtPosTr,
        int32_t svtId,
        int32_t limitCount,
        bool isForceAppearance,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct BattleDropPointAdjustSetting_o *Manager__LoadBattleDropPointAdjustSetting; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4BFFDFF & 1) == 0 )
  {
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, data);
    byte_4BFFDFF = 1;
  }
  this->fields.dropPointData = data;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.dropPointData,
    (int64_t)data,
    (int64_t)svtPosTr,
    svtId,
    *(System_String_o **)&limitCount,
    (BattleSetupInfo_o *)isForceAppearance,
    (FollowerInfo_o *)method,
    v7);
  this->fields.defaultPosTransform = svtPosTr;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.defaultPosTransform,
    (int64_t)svtPosTr,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleDropPointAdjustSetting = ServantAssetLoadManager__LoadBattleDropPointAdjustSetting(
                                                svtId,
                                                limitCount,
                                                isForceAppearance,
                                                0LL);
  this->fields.adjustSetting = Manager__LoadBattleDropPointAdjustSetting;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.adjustSetting,
    (int64_t)Manager__LoadBattleDropPointAdjustSetting,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  BattleDropPointComponent__ReAdjust(this, v27);
}


void __fastcall BattleDropPointComponent__ReAdjust(BattleDropPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *adjustSetting; // x20
  __int64 transform; // x0
  __int64 v5; // x1
  struct BattleDropPointAdjustSetting_o *v6; // x8
  int x_low; // w21
  __int64 v8; // x20
  struct BattleDropPointComponent_DropPointData_o *dropPointData; // x8
  UnityEngine_Transform_o *defaultPosTransform; // x1
  UnityEngine_Transform_o *v11; // x19
  struct UnityEngine_Vector3_StaticFields *p_y; // x8
  float *v13; // x9
  float *p_z; // x10
  struct BattleDropPointAdjustSetting_o *v15; // x10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFE00 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE00 = 1;
  }
  adjustSetting = (UnityEngine_Object_o *)this->fields.adjustSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(adjustSetting, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v6 = this->fields.adjustSetting;
    if ( !v6 )
      goto LABEL_23;
    x_low = LOBYTE(v6->fields.adjustPosition.fields.x);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v8 = transform;
    if ( !x_low )
    {
      if ( transform )
      {
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, this->fields.defaultPosTransform, 0LL);
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v15 = this->fields.adjustSetting;
        if ( v15 )
        {
          v11 = (UnityEngine_Transform_o *)transform;
          if ( transform )
          {
            v13 = (float *)(&v15->fields + 1);
            p_y = (struct UnityEngine_Vector3_StaticFields *)&v15->fields.adjustPosition.fields.y;
            p_z = &v15->fields.adjustPosition.fields.z;
            goto LABEL_18;
          }
        }
      }
LABEL_23:
      sub_1C2E388(transform, v5);
    }
    dropPointData = this->fields.dropPointData;
    if ( !dropPointData )
      goto LABEL_23;
    transform = (__int64)dropPointData->fields.ActorObject;
    if ( !transform )
      goto LABEL_23;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !v8 )
      goto LABEL_23;
    defaultPosTransform = (UnityEngine_Transform_o *)transform;
    transform = v8;
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_23;
    defaultPosTransform = this->fields.defaultPosTransform;
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, defaultPosTransform, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BF7D91 )
  {
    transform = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v5);
    byte_4BF7D91 = 1;
  }
  if ( !v11 )
    goto LABEL_23;
  p_y = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = &p_y->zeroVector.fields.z;
  p_z = &p_y->zeroVector.fields.y;
LABEL_18:
  v16.fields.z = *v13;
  v16.fields.y = *p_z;
  v16.fields.x = p_y->zeroVector.fields.x;
  UnityEngine_Transform__set_localPosition(v11, v16, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleDropPointComponent__get_Transform(
        BattleDropPointComponent_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
}


void __fastcall BattleDropPointComponent_DropPointData___ctor(
        BattleDropPointComponent_DropPointData_o *this,
        const MethodInfo *method)
{
  this->fields.UniqueID = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}