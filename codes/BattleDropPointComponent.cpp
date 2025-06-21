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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleDropPointAdjustSetting_o *Manager__LoadBattleDropPointAdjustSetting; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4B1ED6C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, data);
    byte_4B1ED6C = 1;
  }
  this->fields.dropPointData = data;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.dropPointData,
    (int32_t)data,
    (int32_t)svtPosTr,
    *(const MethodInfo **)&svtId);
  this->fields.defaultPosTransform = svtPosTr;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.defaultPosTransform, (int32_t)svtPosTr, v13, v14);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleDropPointAdjustSetting = ServantAssetLoadManager__LoadBattleDropPointAdjustSetting(
                                                svtId,
                                                limitCount,
                                                isForceAppearance,
                                                0LL);
  this->fields.adjustSetting = Manager__LoadBattleDropPointAdjustSetting;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.adjustSetting,
    (int32_t)Manager__LoadBattleDropPointAdjustSetting,
    v16,
    v17);
  BattleDropPointComponent__ReAdjust(this, v18);
}


void __fastcall BattleDropPointComponent__ReAdjust(BattleDropPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *adjustSetting; // x20
  __int64 transform; // x0
  __int64 v5; // x1
  struct BattleDropPointAdjustSetting_o *v6; // x8
  struct BattleDropPointComponent_DropPointData_o *dropPointData; // x8
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x19
  struct UnityEngine_Vector3_StaticFields *p_y; // x8
  float *v11; // x9
  float *p_z; // x10
  struct BattleDropPointAdjustSetting_o *v13; // x10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1ED6D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1ED6D = 1;
  }
  adjustSetting = (UnityEngine_Object_o *)this->fields.adjustSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(adjustSetting, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v6 = this->fields.adjustSetting;
    if ( !v6 )
      goto LABEL_20;
    if ( !LOBYTE(v6->fields.adjustPosition.fields.x) )
    {
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, this->fields.defaultPosTransform, 0LL);
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v13 = this->fields.adjustSetting;
        if ( v13 )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          if ( transform )
          {
            v11 = (float *)(&v13->fields + 1);
            p_y = (struct UnityEngine_Vector3_StaticFields *)&v13->fields.adjustPosition.fields.y;
            p_z = &v13->fields.adjustPosition.fields.z;
            goto LABEL_15;
          }
        }
      }
LABEL_20:
      sub_1BCB254(transform, v5);
    }
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dropPointData = this->fields.dropPointData;
  if ( !dropPointData )
    goto LABEL_20;
  v8 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)dropPointData->fields.ActorObject;
  if ( !transform )
    goto LABEL_20;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !v8 )
    goto LABEL_20;
  UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v9 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B16191 )
  {
    transform = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v5);
    byte_4B16191 = 1;
  }
  if ( !v9 )
    goto LABEL_20;
  p_y = UnityEngine_Vector3_TypeInfo->static_fields;
  v11 = &p_y->zeroVector.fields.z;
  p_z = &p_y->zeroVector.fields.y;
LABEL_15:
  v14.fields.z = *v11;
  v14.fields.y = *p_z;
  v14.fields.x = p_y->zeroVector.fields.x;
  UnityEngine_Transform__set_localPosition(v9, v14, 0LL);
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