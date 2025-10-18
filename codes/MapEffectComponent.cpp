void MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3FAC7 & 1) == 0 )
  {
    sub_1C37058(&CommonEffectComponent_TypeInfo);
    byte_4C3FAC7 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


// attributes: thunk
void MapEffectComponent__LateUpdate(MapEffectComponent_o *this, const MethodInfo *method)
{
  MapEffectComponent__UpdateCameraFollow(this, method);
}


void MapEffectComponent__Setup(
        MapEffectComponent_o *this,
        UnityEngine_GameObject_o *parent,
        MapCamera_o *mapCamera,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36138184(gameObject, parent, 0);
  this->fields.mapCamera = mapCamera;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v8, v9);
}


void MapEffectComponent__UpdateCameraFollow(MapEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapCamera; // x20
  UnityEngine_Camera_o *mCamera; // x0
  struct MapCamera_o *v5; // x8
  struct MapZoom_o *mZoom; // x8
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  struct MapCamera_o *v10; // x8
  float x; // s8
  float v12; // s9
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FAC6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FAC6 = 1;
  }
  if ( this->fields.isCameraFollow )
  {
    mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mCamera = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mapCamera, 0, 0);
    if ( ((unsigned __int8)mCamera & 1) == 0 )
    {
      v5 = this->fields.mapCamera;
      if ( !v5
        || (mZoom = v5->fields.mZoom) == 0
        || (mCamera = mZoom->fields.mCamera) == 0
        || (orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
            GameObjectExtensions__SetLocalScale_36134460(gameObject, orthographicSize, orthographicSize, 0),
            (v10 = this->fields.mapCamera) == 0)
        || (mCamera = (UnityEngine_Camera_o *)v10->fields.mScrl) == 0 )
      {
        sub_1C372B4(mCamera);
      }
      ScrlPosVec3 = MapScroll__GetScrlPosVec3((MapScroll_o *)mCamera, v9);
      x = ScrlPosVec3.fields.x;
      v12 = ScrlPosVec3.fields.y + this->fields._OffestPositionY_k__BackingField;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v14.fields.x = x;
      v14.fields.y = v12;
      GameObjectExtensions__SetLocalPosition_36132288(v13, v14, 0);
    }
  }
}


float MapEffectComponent__get_OffestPositionY(MapEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields._OffestPositionY_k__BackingField;
}


void MapEffectComponent__set_OffestPositionY(MapEffectComponent_o *this, float value, const MethodInfo *method)
{
  this->fields._OffestPositionY_k__BackingField = value;
}