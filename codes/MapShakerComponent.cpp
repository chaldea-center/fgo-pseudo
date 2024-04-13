void __fastcall MapShakerComponent___ctor(MapShakerComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.toShake) = 1;
  *(_OWORD *)&this->fields.MagnitudeXMin = xmmword_32B49D0;
  LODWORD(this[1].klass) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapShakerComponent__OnDisable(MapShakerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBB3E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB3E = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.flag;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = *(UnityEngine_GameObject_o **)&this->fields.flag;
    zero = UnityEngine_Vector3__get_zero(0LL);
    GameObjectExtensions__SetLocalPosition(v6, zero, 0LL);
  }
}


// attributes: thunk
void __fastcall MapShakerComponent__Start(MapShakerComponent_o *this, const MethodInfo *method)
{
  MapShakerComponent__getMap(this, method);
}


void __fastcall MapShakerComponent__Update(MapShakerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v5; // x20
  const MethodInfo *v6; // x1
  int toShake; // w8
  int32_t v8; // w0
  float MagnitudeYMax; // s0
  float MagnitudeXMin; // s1
  UnityEngine_GameObject_o *v11; // x20
  int v12; // w8
  float v13; // s0
  int32_t v14; // w0
  float v15; // s0
  float MagnitudeYMin; // s1
  UnityEngine_GameObject_o *v17; // x20
  int v18; // w8
  float v19; // s0
  UnityEngine_GameObject_o *v20; // x20
  float v21; // s0
  float v22; // s1
  UnityEngine_GameObject_o *v23; // x20
  float v24; // s0
  float v25; // s1
  UnityEngine_GameObject_o *v26; // x20
  float v27; // s0
  UnityEngine_GameObject_o *v28; // x20
  float v29; // s0

  if ( (byte_42EBB3D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB3D = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.flag;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
    MapShakerComponent__getMap(this, v6);
  toShake = (int)this->fields.toShake;
  switch ( toShake )
  {
    case 2:
      v20 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v21 = UnityEngine_Random__Range(this->fields.MagnitudeYMax, this->fields.MagnitudeXMin, 0LL);
      if ( (float)((float)((float)SHIDWORD(this[1].klass) * 3.1416) / 1.4) >= 0.0 )
        v22 = 1.0;
      else
        v22 = -1.0;
      GameObjectExtensions__SetLocalPositionX(v20, v21 * v22, 0LL);
      v23 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v24 = UnityEngine_Random__Range(*(float *)&this->fields.shakeType, this->fields.MagnitudeYMin, 0LL);
      if ( (float)((float)SHIDWORD(this[1].klass) * 3.1416) >= 0.0 )
        v25 = 1.0;
      else
        v25 = -1.0;
      GameObjectExtensions__SetLocalPositionY(v23, v24 * v25, 0LL);
      ++HIDWORD(this[1].klass);
      break;
    case 1:
      v26 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v27 = UnityEngine_Random__Range(this->fields.MagnitudeYMax, this->fields.MagnitudeXMin, 0LL);
      GameObjectExtensions__SetLocalPositionX(v26, v27 * (float)SLODWORD(this[1].klass), 0LL);
      v28 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      v29 = UnityEngine_Random__Range(*(float *)&this->fields.shakeType, this->fields.MagnitudeYMin, 0LL);
      GameObjectExtensions__SetLocalPositionY(v28, v29 * (float)SLODWORD(this[1].klass), 0LL);
      LODWORD(this[1].klass) = -LODWORD(this[1].klass);
      break;
    case 0:
      v8 = UnityEngine_Random__Range_35654020(0, 2, 0LL);
      MagnitudeXMin = this->fields.MagnitudeXMin;
      MagnitudeYMax = this->fields.MagnitudeYMax;
      v11 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      if ( v8 )
        v12 = 1;
      else
        v12 = -1;
      LODWORD(this[1].klass) = v12;
      v13 = UnityEngine_Random__Range(MagnitudeYMax, MagnitudeXMin, 0LL);
      GameObjectExtensions__SetLocalPositionX(v11, v13 * (float)SLODWORD(this[1].klass), 0LL);
      v14 = UnityEngine_Random__Range_35654020(0, 2, 0LL);
      MagnitudeYMin = this->fields.MagnitudeYMin;
      v15 = *(float *)&this->fields.shakeType;
      v17 = *(UnityEngine_GameObject_o **)&this->fields.flag;
      if ( v14 )
        v18 = 1;
      else
        v18 = -1;
      LODWORD(this[1].klass) = v18;
      v19 = UnityEngine_Random__Range(v15, MagnitudeYMin, 0LL);
      GameObjectExtensions__SetLocalPositionY(v17, v19 * (float)SLODWORD(this[1].klass), 0LL);
      break;
  }
}


void __fastcall MapShakerComponent__getMap(MapShakerComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Int32_array **mapButtonGrid; // x1

  if ( (byte_42EBB3F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBB3F = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E4B1E = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_B5D69C(v9, method);
  mapButtonGrid = (System_Int32_array **)mTerminalMap->fields.mapButtonGrid;
  *(_QWORD *)&this->fields.flag = mapButtonGrid;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.flag, mapButtonGrid, v2, v3, v4, v5, v6, v7);
}