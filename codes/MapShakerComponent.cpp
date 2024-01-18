void __fastcall MapShakerComponent___ctor(MapShakerComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.toShake) = 1;
  *(_OWORD *)&this->fields.MagnitudeXMin = xmmword_319F7E0;
  LODWORD(this[1].klass) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapShakerComponent__OnDisable(MapShakerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  UnityEngine_GameObject_o *v4; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41858DC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858DC = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.flag;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v4 = *(UnityEngine_GameObject_o **)&this->fields.flag;
    zero = UnityEngine_Vector3__get_zero(0LL);
    GameObjectExtensions__SetLocalPosition(v4, zero, 0LL);
  }
}


// attributes: thunk
void __fastcall MapShakerComponent__Start(MapShakerComponent_o *this, const MethodInfo *method)
{
  MapShakerComponent__getMap(this, method);
}


void __fastcall MapShakerComponent__Update(MapShakerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  const MethodInfo *v4; // x1
  int toShake; // w8
  int32_t v6; // w0
  float MagnitudeYMax; // s0
  float MagnitudeXMin; // s1
  UnityEngine_GameObject_o *v9; // x20
  int v10; // w8
  float v11; // s0
  int32_t v12; // w0
  float v13; // s0
  float MagnitudeYMin; // s1
  UnityEngine_GameObject_o *v15; // x20
  int v16; // w8
  float v17; // s0
  UnityEngine_GameObject_o *v18; // x20
  float v19; // s0
  float v20; // s1
  UnityEngine_GameObject_o *v21; // x20
  float v22; // s0
  float v23; // s1
  UnityEngine_GameObject_o *v24; // x20
  float v25; // s0
  UnityEngine_GameObject_o *v26; // x20
  float v27; // s0

  if ( (byte_41858DB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858DB = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.flag;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
    MapShakerComponent__getMap(this, v4);
  toShake = (int)this->fields.toShake;
  switch ( toShake )
  {
    case 2:
      v18 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v19 = UnityEngine_Random__Range(this->fields.MagnitudeYMax, this->fields.MagnitudeXMin, 0LL);
      if ( (float)((float)((float)SHIDWORD(this[1].klass) * 3.1416) / 1.4) >= 0.0 )
        v20 = 1.0;
      else
        v20 = -1.0;
      GameObjectExtensions__SetLocalPositionX(v18, v19 * v20, 0LL);
      v21 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v22 = UnityEngine_Random__Range(*(float *)&this->fields.shakeType, this->fields.MagnitudeYMin, 0LL);
      if ( (float)((float)SHIDWORD(this[1].klass) * 3.1416) >= 0.0 )
        v23 = 1.0;
      else
        v23 = -1.0;
      GameObjectExtensions__SetLocalPositionY(v21, v22 * v23, 0LL);
      ++HIDWORD(this[1].klass);
      break;
    case 1:
      v24 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v25 = UnityEngine_Random__Range(this->fields.MagnitudeYMax, this->fields.MagnitudeXMin, 0LL);
      GameObjectExtensions__SetLocalPositionX(v24, v25 * (float)SLODWORD(this[1].klass), 0LL);
      v26 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v27 = UnityEngine_Random__Range(*(float *)&this->fields.shakeType, this->fields.MagnitudeYMin, 0LL);
      GameObjectExtensions__SetLocalPositionY(v26, v27 * (float)SLODWORD(this[1].klass), 0LL);
      LODWORD(this[1].klass) = -LODWORD(this[1].klass);
      break;
    case 0:
      v6 = UnityEngine_Random__Range_35348680(0, 2, 0LL);
      MagnitudeXMin = this->fields.MagnitudeXMin;
      MagnitudeYMax = this->fields.MagnitudeYMax;
      v9 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      if ( v6 )
        v10 = 1;
      else
        v10 = -1;
      LODWORD(this[1].klass) = v10;
      v11 = UnityEngine_Random__Range(MagnitudeYMax, MagnitudeXMin, 0LL);
      GameObjectExtensions__SetLocalPositionX(v9, v11 * (float)SLODWORD(this[1].klass), 0LL);
      v12 = UnityEngine_Random__Range_35348680(0, 2, 0LL);
      MagnitudeYMin = this->fields.MagnitudeYMin;
      v13 = *(float *)&this->fields.shakeType;
      v15 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      if ( v12 )
        v16 = 1;
      else
        v16 = -1;
      LODWORD(this[1].klass) = v16;
      v17 = UnityEngine_Random__Range(v13, MagnitudeYMin, 0LL);
      GameObjectExtensions__SetLocalPositionY(v15, v17 * (float)SLODWORD(this[1].klass), 0LL);
      break;
  }
}


void __fastcall MapShakerComponent__getMap(MapShakerComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapButtonControl_o *mapButtonGrid; // x1

  if ( (byte_41858DD & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_41858DD = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_B2C434(v3, method);
  mapButtonGrid = mTerminalMap->fields.mapButtonGrid;
  *(_QWORD *)&this->fields.flag = mapButtonGrid;
  sub_B2C2F8(&this->fields.flag, mapButtonGrid);
}