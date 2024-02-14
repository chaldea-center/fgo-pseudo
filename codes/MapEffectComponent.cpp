void __fastcall MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4213030 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_4213030 = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
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
  GameObjectExtensions__SafeSetParent_31184716(gameObject, parent, 0LL);
  this->fields.mapCamera = mapCamera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
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
  UnityEngine_Object_o *mapCamera; // x20
  MapZoom_o *mZoom; // x0
  struct MapCamera_o *v5; // x8
  float ZoomSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v8; // x8
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  float v10; // s9
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  if ( (byte_421302F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421302F = 1;
  }
  if ( this->fields.isCameraFollow )
  {
    mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mapCamera, 0LL, 0LL);
    if ( ((unsigned __int8)mZoom & 1) == 0 )
    {
      v5 = this->fields.mapCamera;
      if ( !v5
        || (mZoom = v5->fields.mZoom) == 0LL
        || (ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
            GameObjectExtensions__SetLocalScale_31180908(gameObject, ZoomSize, ZoomSize, 0LL),
            (v8 = this->fields.mapCamera) == 0LL)
        || (mZoom = (MapZoom_o *)v8->fields.mScrl) == 0LL )
      {
        sub_B0D97C(mZoom);
      }
      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)mZoom, 0LL);
      v10 = ScrlPos.fields.y + this->fields._OffestPositionY_k__BackingField;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v12.fields.x = ScrlPos.fields.x;
      v12.fields.y = v10;
      GameObjectExtensions__SetLocalPosition_31178580(v11, v12, 0LL);
    }
  }
}


float __fastcall MapEffectComponent__get_OffestPositionY(MapEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields._OffestPositionY_k__BackingField;
}


void __fastcall MapEffectComponent__set_OffestPositionY(
        MapEffectComponent_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._OffestPositionY_k__BackingField = value;
}