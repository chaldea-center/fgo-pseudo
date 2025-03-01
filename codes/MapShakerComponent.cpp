void __fastcall MapShakerComponent___ctor(MapShakerComponent_o *this, const MethodInfo *method)
{
  this->fields.shakeType = 1;
  *(_OWORD *)&this->fields.MagnitudeXMax = xmmword_C05BD0;
  this->fields.flag = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapShakerComponent__OnDisable(MapShakerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *toShake; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19

  if ( (byte_4BFA469 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFA469 = 1;
  }
  toShake = (UnityEngine_Object_o *)this->fields.toShake;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(toShake, 0LL, 0LL) )
  {
    v5 = this->fields.toShake;
    if ( !byte_4BF7D91 )
    {
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4BF7D91 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
}


// attributes: thunk
void __fastcall MapShakerComponent__Start(MapShakerComponent_o *this, const MethodInfo *method)
{
  MapShakerComponent__getMap(this, method);
}


void __fastcall MapShakerComponent__Update(MapShakerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *toShake; // x20
  const MethodInfo *v4; // x1
  int32_t shakeType; // w8
  int32_t v6; // w0
  float MagnitudeXMin; // s0
  float MagnitudeXMax; // s1
  UnityEngine_GameObject_o *v9; // x20
  int32_t v10; // w8
  float v11; // s0
  int32_t v12; // w0
  float MagnitudeYMin; // s0
  float MagnitudeYMax; // s1
  UnityEngine_GameObject_o *v15; // x20
  int32_t v16; // w8
  float v17; // s0
  UnityEngine_GameObject_o *v18; // x20
  float v19; // s0
  UnityEngine_GameObject_o *v20; // x20
  float v21; // s0
  UnityEngine_GameObject_o *v22; // x20
  float v23; // s0
  UnityEngine_GameObject_o *v24; // x20
  float v25; // s0

  if ( (byte_4BFA468 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFA468 = 1;
  }
  toShake = (UnityEngine_Object_o *)this->fields.toShake;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(toShake, 0LL, 0LL) )
    MapShakerComponent__getMap(this, v4);
  shakeType = this->fields.shakeType;
  switch ( shakeType )
  {
    case 2:
      v18 = this->fields.toShake;
      v19 = UnityEngine_Random__Range(this->fields.MagnitudeXMin, this->fields.MagnitudeXMax, 0LL);
      if ( (float)((float)((float)this->fields.frameCnt * 3.1416) / 1.4) < 0.0 )
        v19 = -v19;
      GameObjectExtensions__SetLocalPositionX(v18, v19, 0LL);
      v20 = this->fields.toShake;
      v21 = UnityEngine_Random__Range(this->fields.MagnitudeYMin, this->fields.MagnitudeYMax, 0LL);
      if ( (float)((float)this->fields.frameCnt * 3.1416) < 0.0 )
        v21 = -v21;
      GameObjectExtensions__SetLocalPositionY(v20, v21, 0LL);
      ++this->fields.frameCnt;
      break;
    case 1:
      v22 = this->fields.toShake;
      v23 = UnityEngine_Random__Range(this->fields.MagnitudeXMin, this->fields.MagnitudeXMax, 0LL);
      GameObjectExtensions__SetLocalPositionX(v22, v23 * (float)this->fields.flag, 0LL);
      v24 = this->fields.toShake;
      v25 = UnityEngine_Random__Range(this->fields.MagnitudeYMin, this->fields.MagnitudeYMax, 0LL);
      GameObjectExtensions__SetLocalPositionY(v24, v25 * (float)this->fields.flag, 0LL);
      this->fields.flag = -this->fields.flag;
      break;
    case 0:
      v6 = UnityEngine_Random__Range_70949460(0, 2, 0LL);
      MagnitudeXMax = this->fields.MagnitudeXMax;
      MagnitudeXMin = this->fields.MagnitudeXMin;
      v9 = this->fields.toShake;
      if ( v6 )
        v10 = 1;
      else
        v10 = -1;
      this->fields.flag = v10;
      v11 = UnityEngine_Random__Range(MagnitudeXMin, MagnitudeXMax, 0LL);
      GameObjectExtensions__SetLocalPositionX(v9, v11 * (float)this->fields.flag, 0LL);
      v12 = UnityEngine_Random__Range_70949460(0, 2, 0LL);
      MagnitudeYMax = this->fields.MagnitudeYMax;
      MagnitudeYMin = this->fields.MagnitudeYMin;
      v15 = this->fields.toShake;
      if ( v12 )
        v16 = 1;
      else
        v16 = -1;
      this->fields.flag = v16;
      v17 = UnityEngine_Random__Range(MagnitudeYMin, MagnitudeYMax, 0LL);
      GameObjectExtensions__SetLocalPositionY(v15, v17 * (float)this->fields.flag, 0LL);
      break;
  }
}


void __fastcall MapShakerComponent__getMap(MapShakerComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct UnityEngine_GameObject_o *dispRoot; // x1

  if ( (byte_4BFA46A & 1) == 0 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, method);
    byte_4BFA46A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, method);
    byte_4BF8363 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1C2E388(v9, method);
  dispRoot = mTerminalMap->fields.dispRoot;
  this->fields.toShake = dispRoot;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.toShake, (int64_t)dispRoot, v2, v3, v4, v5, v6, v7);
}