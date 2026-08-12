void MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596D0E6 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_596D0E6 = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method, v2);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42897308(gameObject, parent, 0);
  this->fields.mapCamera = mapCamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mapCamera,
    (int32_t)mapCamera,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void MapEffectComponent__UpdateCameraFollow(MapEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapCamera; // x20
  UnityEngine_Camera_o *mCamera; // x0
  const MethodInfo *v6; // x1
  struct MapCamera_o *v7; // x8
  struct MapZoom_o *mZoom; // x8
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v11; // x8
  float v12; // s8
  UnityEngine_GameObject_o *v13; // x0
  unsigned __int64 ScrlPosVec3; // kr00_8
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  if ( (byte_596D0E5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0E5 = 1;
  }
  if ( this->fields.isCameraFollow )
  {
    mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    mCamera = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mapCamera, 0, 0);
    if ( ((unsigned __int8)mCamera & 1) == 0 )
    {
      v7 = this->fields.mapCamera;
      if ( !v7
        || (mZoom = v7->fields.mZoom) == 0
        || (mCamera = mZoom->fields.mCamera) == 0
        || (orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
            GameObjectExtensions__SetLocalScale_42893584(gameObject, orthographicSize, orthographicSize, 0),
            (v11 = this->fields.mapCamera) == 0)
        || (mCamera = (UnityEngine_Camera_o *)v11->fields.mScrl) == 0 )
      {
        sub_2213CDC(mCamera, v6);
      }
      ScrlPosVec3 = (unsigned __int64)MapScroll__GetScrlPosVec3((MapScroll_o *)mCamera, v6);
      v12 = *((float *)&ScrlPosVec3 + 1) + this->fields._OffestPositionY_k__BackingField;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LODWORD(v15.fields.x) = ScrlPosVec3;
      v15.fields.y = v12;
      GameObjectExtensions__SetLocalPosition_42891412(v13, v15, 0);
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