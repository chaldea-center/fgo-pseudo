void __fastcall MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12F65 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B12F65 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
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
  const MethodInfo *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(gameObject, parent, v8);
  this->fields.mapCamera = mapCamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapCamera, (int64_t)mapCamera, v9, v10, v11, v12, v13, v14);
}


void __fastcall MapEffectComponent__UpdateCameraFollow(MapEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v6; // x1
  struct MapCamera_o *v7; // x8
  float ZoomSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  struct MapCamera_o *v11; // x8
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  if ( (byte_4B12F64 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F64 = 1;
  }
  if ( this->fields.isCameraFollow )
  {
    mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mapCamera, 0LL, 0LL);
    if ( ((unsigned __int8)mZoom & 1) == 0 )
    {
      v7 = this->fields.mapCamera;
      if ( !v7
        || (mZoom = v7->fields.mZoom) == 0LL
        || (ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
            GameObjectExtensions__SetLocalScale_34333224(gameObject, ZoomSize, ZoomSize, v10),
            (v11 = this->fields.mapCamera) == 0LL)
        || (mZoom = (MapZoom_o *)v11->fields.mScrl) == 0LL )
      {
        sub_1BCAA3C(mZoom, v6);
      }
      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)mZoom, 0LL);
      v13 = ScrlPos.fields.y + this->fields._OffestPositionY_k__BackingField;
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v16.fields.x = ScrlPos.fields.x;
      v16.fields.y = v13;
      GameObjectExtensions__SetLocalPosition_34330940(v14, v16, v15);
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