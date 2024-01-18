void __fastcall MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418634E & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_418634E = 1;
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
  GameObjectExtensions__SafeSetParent_31331952(gameObject, parent, 0LL);
  this->fields.mapCamera = mapCamera;
  sub_B2C2F8(
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
  __int64 v5; // x1
  struct MapCamera_o *v6; // x8
  float ZoomSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v9; // x8
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  float v11; // s9
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4

  if ( (byte_418634D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418634D = 1;
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
      v6 = this->fields.mapCamera;
      if ( !v6
        || (mZoom = v6->fields.mZoom) == 0LL
        || (ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
            GameObjectExtensions__SetLocalScale_31328144(gameObject, ZoomSize, ZoomSize, 0LL),
            (v9 = this->fields.mapCamera) == 0LL)
        || (mZoom = (MapZoom_o *)v9->fields.mScrl) == 0LL )
      {
        sub_B2C434(mZoom, v5);
      }
      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)mZoom, 0LL);
      v11 = ScrlPos.fields.y + this->fields._OffestPositionY_k__BackingField;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v13.fields.x = ScrlPos.fields.x;
      v13.fields.y = v11;
      GameObjectExtensions__SetLocalPosition_31325816(v12, v13, 0LL);
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