void __fastcall MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FB9DB & 1) == 0 )
  {
    sub_1B64A00(&CommonEffectComponent_TypeInfo, method);
    byte_49FB9DB = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
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
  int32_t v8; // w2
  int32_t v9; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33382640(gameObject, parent, 0LL);
  this->fields.mapCamera = mapCamera;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v8, v9);
}


void __fastcall MapEffectComponent__UpdateCameraFollow(MapEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapCamera; // x20
  UnityEngine_Camera_o *mCamera; // x0
  const MethodInfo *v5; // x1
  struct MapCamera_o *v6; // x8
  struct MapZoom_o *mZoom; // x8
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v10; // x8
  float x; // s8
  float v12; // s9
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB9DA & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FB9DA = 1;
  }
  if ( this->fields.isCameraFollow )
  {
    mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mCamera = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mapCamera, 0LL, 0LL);
    if ( ((unsigned __int8)mCamera & 1) == 0 )
    {
      v6 = this->fields.mapCamera;
      if ( !v6
        || (mZoom = v6->fields.mZoom) == 0LL
        || (mCamera = mZoom->fields.mCamera) == 0LL
        || (orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
            GameObjectExtensions__SetLocalScale_33378916(gameObject, orthographicSize, orthographicSize, 0LL),
            (v10 = this->fields.mapCamera) == 0LL)
        || (mCamera = (UnityEngine_Camera_o *)v10->fields.mScrl) == 0LL )
      {
        sub_1B64C5C(mCamera, v5);
      }
      ScrlPosVec3 = MapScroll__GetScrlPosVec3((MapScroll_o *)mCamera, v5);
      x = ScrlPosVec3.fields.x;
      v12 = ScrlPosVec3.fields.y + this->fields._OffestPositionY_k__BackingField;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14.fields.x = x;
      v14.fields.y = v12;
      GameObjectExtensions__SetLocalPosition_33376744(v13, v14, 0LL);
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