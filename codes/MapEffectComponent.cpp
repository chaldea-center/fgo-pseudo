void __fastcall MapEffectComponent___ctor(MapEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B33EEF & 1) == 0 )
  {
    sub_1BD3458(&CommonEffectComponent_TypeInfo, method);
    byte_4B33EEF = 1;
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
  const MethodInfo *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34386852(gameObject, parent, v8);
  this->fields.mapCamera = mapCamera;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mapCamera, (int64_t)mapCamera, v9, v10, v11, v12, v13, v14);
}


void __fastcall MapEffectComponent__UpdateCameraFollow(MapEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v5; // x1
  struct MapCamera_o *v6; // x8
  float ZoomSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  struct MapCamera_o *v10; // x8
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  float v12; // s9
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  if ( (byte_4B33EEE & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B33EEE = 1;
  }
  if ( this->fields.isCameraFollow )
  {
    mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mapCamera, 0LL, 0LL);
    if ( ((unsigned __int8)mZoom & 1) == 0 )
    {
      v6 = this->fields.mapCamera;
      if ( !v6
        || (mZoom = v6->fields.mZoom) == 0LL
        || (ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL),
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
            GameObjectExtensions__SetLocalScale_34383084(gameObject, ZoomSize, ZoomSize, v9),
            (v10 = this->fields.mapCamera) == 0LL)
        || (mZoom = (MapZoom_o *)v10->fields.mScrl) == 0LL )
      {
        sub_1BD36B4(mZoom, v5);
      }
      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)mZoom, 0LL);
      v12 = ScrlPos.fields.y + this->fields._OffestPositionY_k__BackingField;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v15.fields.x = ScrlPos.fields.x;
      v15.fields.y = v12;
      GameObjectExtensions__SetLocalPosition_34380800(v13, v15, v14);
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