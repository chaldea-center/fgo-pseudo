void MapShakerComponent___ctor(MapShakerComponent_o *this, const MethodInfo *method)
{
  this->fields.shakeType = 1;
  this->fields.flag = 1;
  *(_OWORD *)&this->fields.MagnitudeXMax = xmmword_E93C50;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapShakerComponent__OnDisable(MapShakerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *toShake; // x20
  UnityEngine_GameObject_o *v5; // x19

  if ( (byte_5935003 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935003 = 1;
  }
  toShake = (UnityEngine_Object_o *)this->fields.toShake;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(toShake, 0, 0) )
  {
    v5 = this->fields.toShake;
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


// attributes: thunk
void MapShakerComponent__Start(MapShakerComponent_o *this, const MethodInfo *method)
{
  MapShakerComponent__getMap(this, method);
}


void MapShakerComponent__Update(MapShakerComponent_o *this, const MethodInfo *method)
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

  if ( (byte_5935002 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935002 = 1;
  }
  toShake = (UnityEngine_Object_o *)this->fields.toShake;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(toShake, 0, 0) )
    MapShakerComponent__getMap(this, v5);
  shakeType = this->fields.shakeType;
  switch ( shakeType )
  {
    case 2:
      v23 = this->fields.toShake;
      v24 = UnityEngine_Random__Range(this->fields.MagnitudeXMin, this->fields.MagnitudeXMax, 0);
      if ( (float)((float)((float)this->fields.frameCnt * 3.1416) / 1.4) < 0.0 )
        v24 = -v24;
      GameObjectExtensions__SetLocalPositionX(v23, v24, 0);
      v25 = this->fields.toShake;
      v26 = UnityEngine_Random__Range(this->fields.MagnitudeYMin, this->fields.MagnitudeYMax, 0);
      if ( (float)((float)this->fields.frameCnt * 3.1416) < 0.0 )
        v26 = -v26;
      GameObjectExtensions__SetLocalPositionY(v25, v26, 0);
      ++this->fields.frameCnt;
      break;
    case 1:
      v19 = this->fields.toShake;
      v20 = UnityEngine_Random__Range(this->fields.MagnitudeXMin, this->fields.MagnitudeXMax, 0);
      GameObjectExtensions__SetLocalPositionX(v19, v20 * (float)this->fields.flag, 0);
      v21 = this->fields.toShake;
      v22 = UnityEngine_Random__Range(this->fields.MagnitudeYMin, this->fields.MagnitudeYMax, 0);
      GameObjectExtensions__SetLocalPositionY(v21, v22 * (float)this->fields.flag, 0);
      this->fields.flag = -this->fields.flag;
      break;
    case 0:
      v7 = UnityEngine_Random__Range_83187376(0, 2, 0);
      MagnitudeXMax = this->fields.MagnitudeXMax;
      MagnitudeXMin = this->fields.MagnitudeXMin;
      v10 = this->fields.toShake;
      if ( v7 )
        v11 = 1;
      else
        v11 = -1;
      this->fields.flag = v11;
      v12 = UnityEngine_Random__Range(MagnitudeXMin, MagnitudeXMax, 0);
      GameObjectExtensions__SetLocalPositionX(v10, v12 * (float)this->fields.flag, 0);
      v13 = UnityEngine_Random__Range_83187376(0, 2, 0);
      MagnitudeYMax = this->fields.MagnitudeYMax;
      MagnitudeYMin = this->fields.MagnitudeYMin;
      v16 = this->fields.toShake;
      if ( v13 )
        v17 = 1;
      else
        v17 = -1;
      this->fields.flag = v17;
      v18 = UnityEngine_Random__Range(MagnitudeYMin, MagnitudeYMax, 0);
      GameObjectExtensions__SetLocalPositionY(v16, v18 * (float)this->fields.flag, 0);
      break;
  }
}


void MapShakerComponent__getMap(MapShakerComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct UnityEngine_GameObject_o *dispRoot; // x1

  if ( (byte_5935004 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935004 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_21FFECC(v9, method);
  dispRoot = mTerminalMap->fields.dispRoot;
  this->fields.toShake = dispRoot;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.toShake, (int32_t)dispRoot, v2, v3, v4, v5, v6, v7);
}