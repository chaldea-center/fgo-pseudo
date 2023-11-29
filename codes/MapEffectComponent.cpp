void __fastcall MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// attributes: thunk
void __fastcall MapEffectComponent__LateUpdate(MapEffectComponent_o *this, const MethodInfo *method)
{
  MapEffectComponent__UpdateCameraFollow(this, method);
}


void __fastcall MapEffectComponent__Setup(
        MapEffectComponent_o *this,
        UnityEngine_GameObject_o *parent,
        MapCamera_o *mapCamera,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(gameObject, parent, 0LL);
  *(_QWORD *)&this->fields._OffestPositionY_k__BackingField = mapCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._OffestPositionY_k__BackingField,
    (System_Int32_array **)mapCamera,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall MapEffectComponent__UpdateCameraFollow(MapEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  UnityEngine_Camera_o *v6; // x0
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x8
  MapScroll_o *v11; // x0
  float x; // s8
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB5A7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB5A7 = 1;
  }
  if ( BYTE1(this->fields.mapCamera) )
  {
    v3 = *(UnityEngine_Object_o **)&this->fields._OffestPositionY_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
    {
      v4 = *(_QWORD *)&this->fields._OffestPositionY_k__BackingField;
      if ( !v4
        || (v5 = *(_QWORD *)(v4 + 72)) == 0
        || (v6 = *(UnityEngine_Camera_o **)(v5 + 48)) == 0LL
        || (orthographicSize = UnityEngine_Camera__get_orthographicSize(v6, 0LL),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
            GameObjectExtensions__SetLocalScale_27422188(gameObject, orthographicSize, orthographicSize, 0LL),
            (v10 = *(_QWORD *)&this->fields._OffestPositionY_k__BackingField) == 0)
        || (v11 = *(MapScroll_o **)(v10 + 64)) == 0LL )
      {
        sub_B170D4();
      }
      ScrlPosVec3 = MapScroll__GetScrlPosVec3(v11, v9);
      x = ScrlPosVec3.fields.x;
      v13 = ScrlPosVec3.fields.y + *(float *)&this[1].klass;
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v15.fields.x = x;
      v15.fields.y = v13;
      GameObjectExtensions__SetLocalPosition_27419860(v14, v15, 0LL);
    }
  }
}


float __fastcall MapEffectComponent__get_OffestPositionY(MapEffectComponent_o *this, const MethodInfo *method)
{
  return *(float *)&this[1].klass;
}


void __fastcall MapEffectComponent__set_OffestPositionY(
        MapEffectComponent_o *this,
        float value,
        const MethodInfo *method)
{
  *(float *)&this[1].klass = value;
}