void BattleDropPointComponent___ctor(BattleDropPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDropPointComponent__Initialize(
        BattleDropPointComponent_o *this,
        BattleDropPointComponent_DropPointData_o *data,
        UnityEngine_Transform_o *svtPosTr,
        int32_t svtId,
        int32_t limitCount,
        bool isForceAppearance,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleDropPointAdjustSetting_o *Manager__LoadBattleDropPointAdjustSetting; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4CB8D46 & 1) == 0 )
  {
    sub_1C6BA08(&ServantAssetLoadManager_TypeInfo);
    byte_4CB8D46 = 1;
  }
  this->fields.dropPointData = data;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.dropPointData,
    (int32_t)data,
    (int32_t)svtPosTr,
    *(const MethodInfo **)&svtId);
  this->fields.defaultPosTransform = svtPosTr;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.defaultPosTransform, (int32_t)svtPosTr, v13, v14);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleDropPointAdjustSetting = ServantAssetLoadManager__LoadBattleDropPointAdjustSetting(
                                                svtId,
                                                limitCount,
                                                isForceAppearance,
                                                0);
  this->fields.adjustSetting = Manager__LoadBattleDropPointAdjustSetting;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.adjustSetting,
    (int32_t)Manager__LoadBattleDropPointAdjustSetting,
    v16,
    v17);
  BattleDropPointComponent__ReAdjust(this, v18);
}


void BattleDropPointComponent__ReAdjust(BattleDropPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *adjustSetting; // x20
  __int64 transform; // x0
  __int64 v5; // x1
  struct BattleDropPointAdjustSetting_o *v6; // x8
  struct BattleDropPointComponent_DropPointData_o *dropPointData; // x8
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x19
  struct UnityEngine_Vector3_StaticFields *p_adjustPosition; // x8
  float *p_z; // x9
  float *p_y; // x10
  struct BattleDropPointAdjustSetting_o *v13; // x10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB8D47 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8D47 = 1;
  }
  adjustSetting = (UnityEngine_Object_o *)this->fields.adjustSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(adjustSetting, 0, 0);
  if ( (transform & 1) != 0 )
  {
    v6 = this->fields.adjustSetting;
    if ( !v6 )
      goto LABEL_20;
    if ( !v6->fields.isForceActorPosition )
    {
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( transform )
      {
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, this->fields.defaultPosTransform, 0);
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v13 = this->fields.adjustSetting;
        if ( v13 )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          if ( transform )
          {
            p_z = &v13->fields.adjustPosition.fields.z;
            p_adjustPosition = (struct UnityEngine_Vector3_StaticFields *)&v13->fields.adjustPosition;
            p_y = &v13->fields.adjustPosition.fields.y;
            goto LABEL_15;
          }
        }
      }
LABEL_20:
      sub_1C6BC60(transform, v5);
    }
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  dropPointData = this->fields.dropPointData;
  if ( !dropPointData )
    goto LABEL_20;
  v8 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)dropPointData->fields.ActorObject;
  if ( !transform )
    goto LABEL_20;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !v8 )
    goto LABEL_20;
  UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)transform, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v9 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CAFC09 )
  {
    transform = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v9 )
    goto LABEL_20;
  p_adjustPosition = UnityEngine_Vector3_TypeInfo->static_fields;
  p_z = &p_adjustPosition->zeroVector.fields.z;
  p_y = &p_adjustPosition->zeroVector.fields.y;
LABEL_15:
  v14.fields.z = *p_z;
  v14.fields.y = *p_y;
  v14.fields.x = p_adjustPosition->zeroVector.fields.x;
  UnityEngine_Transform__set_localPosition(v9, v14, 0);
}


UnityEngine_Transform_o *BattleDropPointComponent__get_Transform(
        BattleDropPointComponent_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


void BattleDropPointComponent_DropPointData___ctor(
        BattleDropPointComponent_DropPointData_o *this,
        const MethodInfo *method)
{
  this->fields.UniqueID = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}