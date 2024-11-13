void __fastcall MapShakerComponent___ctor(MapShakerComponent_o *this, const MethodInfo *method)
{
  this->fields.shakeType = 1;
  *(_OWORD *)&this->fields.MagnitudeXMax = xmmword_BD21C0;
  this->fields.flag = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapShakerComponent__OnDisable(MapShakerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *toShake; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x19

  if ( (byte_4B12FAF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12FAF = 1;
  }
  toShake = (UnityEngine_Object_o *)this->fields.toShake;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(toShake, 0LL, 0LL) )
  {
    v7 = this->fields.toShake;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v5, v6);
      byte_4B109C1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
}


// attributes: thunk
void __fastcall MapShakerComponent__Start(MapShakerComponent_o *this, const MethodInfo *method)
{
  MapShakerComponent__getMap(this, method);
}


void __fastcall MapShakerComponent__Update(MapShakerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *toShake; // x20
  const MethodInfo *v5; // x1
  int32_t shakeType; // w8
  int32_t v7; // w0
  float MagnitudeXMin; // s0
  float MagnitudeXMax; // s1
  UnityEngine_GameObject_o *v10; // x20
  int32_t v11; // w8
  float v12; // s0
  int32_t v13; // w0
  float MagnitudeYMin; // s0
  float MagnitudeYMax; // s1
  UnityEngine_GameObject_o *v16; // x20
  int32_t v17; // w8
  float v18; // s0
  UnityEngine_GameObject_o *v19; // x20
  float v20; // s0
  UnityEngine_GameObject_o *v21; // x20
  float v22; // s0
  UnityEngine_GameObject_o *v23; // x20
  float v24; // s0
  UnityEngine_GameObject_o *v25; // x20
  float v26; // s0

  if ( (byte_4B12FAE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12FAE = 1;
  }
  toShake = (UnityEngine_Object_o *)this->fields.toShake;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(toShake, 0LL, 0LL) )
    MapShakerComponent__getMap(this, v5);
  shakeType = this->fields.shakeType;
  switch ( shakeType )
  {
    case 2:
      v19 = this->fields.toShake;
      v20 = UnityEngine_Random__Range(this->fields.MagnitudeXMin, this->fields.MagnitudeXMax, 0LL);
      if ( (float)((float)((float)this->fields.frameCnt * 3.1416) / 1.4) < 0.0 )
        v20 = -v20;
      GameObjectExtensions__SetLocalPositionX(v19, v20, 0LL);
      v21 = this->fields.toShake;
      v22 = UnityEngine_Random__Range(this->fields.MagnitudeYMin, this->fields.MagnitudeYMax, 0LL);
      if ( (float)((float)this->fields.frameCnt * 3.1416) < 0.0 )
        v22 = -v22;
      GameObjectExtensions__SetLocalPositionY(v21, v22, 0LL);
      ++this->fields.frameCnt;
      break;
    case 1:
      v23 = this->fields.toShake;
      v24 = UnityEngine_Random__Range(this->fields.MagnitudeXMin, this->fields.MagnitudeXMax, 0LL);
      GameObjectExtensions__SetLocalPositionX(v23, v24 * (float)this->fields.flag, 0LL);
      v25 = this->fields.toShake;
      v26 = UnityEngine_Random__Range(this->fields.MagnitudeYMin, this->fields.MagnitudeYMax, 0LL);
      GameObjectExtensions__SetLocalPositionY(v25, v26 * (float)this->fields.flag, 0LL);
      this->fields.flag = -this->fields.flag;
      break;
    case 0:
      v7 = UnityEngine_Random__Range_70113984(0, 2, 0LL);
      MagnitudeXMax = this->fields.MagnitudeXMax;
      MagnitudeXMin = this->fields.MagnitudeXMin;
      v10 = this->fields.toShake;
      if ( v7 )
        v11 = 1;
      else
        v11 = -1;
      this->fields.flag = v11;
      v12 = UnityEngine_Random__Range(MagnitudeXMin, MagnitudeXMax, 0LL);
      GameObjectExtensions__SetLocalPositionX(v10, v12 * (float)this->fields.flag, 0LL);
      v13 = UnityEngine_Random__Range_70113984(0, 2, 0LL);
      MagnitudeYMax = this->fields.MagnitudeYMax;
      MagnitudeYMin = this->fields.MagnitudeYMin;
      v16 = this->fields.toShake;
      if ( v13 )
        v17 = 1;
      else
        v17 = -1;
      this->fields.flag = v17;
      v18 = UnityEngine_Random__Range(MagnitudeYMin, MagnitudeYMax, 0LL);
      GameObjectExtensions__SetLocalPositionY(v16, v18 * (float)this->fields.flag, 0LL);
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

  if ( (byte_4B12FB0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B12FB0 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1BCAA3C(v9, method);
  dispRoot = mTerminalMap->fields.dispRoot;
  this->fields.toShake = dispRoot;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.toShake, (int64_t)dispRoot, v2, v3, v4, v5, v6, v7);
}