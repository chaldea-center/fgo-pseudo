void MapModelComponent___ctor(MapModelComponent_o *this, const MethodInfo *method)
{
  this->fields.isMapCamera2DReset = 1;
  *(_OWORD *)&this->fields.mapCamera2DResetPosition.fields.x = xmmword_D009F0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapModelComponent__Awake(MapModelComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Vector3_o MapModelComponent__GetCameraLocationPosition(
        MapModelComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  System_String_o *locationPrefix; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *cameraLocationObjectList; // x8
  System_String_o *v9; // x20
  __int64 v10; // x21
  int max_length; // w9
  unsigned int v12; // w22
  System_String_o *name; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v19 = layer;
  locationPrefix = this->fields.locationPrefix;
  v5 = System_Int32__ToString((int32_t)&v19, 0);
  v6 = System_String__Concat_64425724(locationPrefix, v5, 0);
  cameraLocationObjectList = this->fields.cameraLocationObjectList;
  if ( !cameraLocationObjectList )
    goto LABEL_8;
  v9 = v6;
  v10 = 4;
  while ( 1 )
  {
    max_length = cameraLocationObjectList->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
    {
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      result.fields.x = static_fields->zeroVector.fields.x;
      result.fields.y = static_fields->zeroVector.fields.y;
      result.fields.z = static_fields->zeroVector.fields.z;
      return result;
    }
    if ( v12 >= max_length )
      goto LABEL_15;
    v6 = (System_String_o *)*((_QWORD *)&cameraLocationObjectList->obj.klass + v10);
    if ( !v6 )
      goto LABEL_8;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
    v6 = (System_String_o *)System_String__op_Inequality(name, v9, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    cameraLocationObjectList = this->fields.cameraLocationObjectList;
    ++v10;
    if ( !cameraLocationObjectList )
      goto LABEL_8;
  }
  v18 = this->fields.cameraLocationObjectList;
  if ( !v18 )
LABEL_8:
    sub_1C93D2C(v6, v7);
  if ( v12 >= LODWORD(v18->max_length) )
LABEL_15:
    sub_1C93D34(v6);
  LocalPosition = GameObjectExtensions__GetLocalPosition(
                    (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v10),
                    0);
  result.fields.x = LocalPosition.fields.x;
  result.fields.y = LocalPosition.fields.y;
  result.fields.z = LocalPosition.fields.z;
  return result;
}


void MapModelComponent__PlayAnimation(
        MapModelComponent_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *effectAction; // x0

  effectAction = (char *)this->fields.effectAction;
  if ( !effectAction
    || (*((_QWORD *)effectAction + 5) = endAction,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(effectAction + 40),
          (int32_t)endAction,
          (int32_t)endAction,
          (int32_t)method,
          v4,
          v5,
          v6,
          v7),
        (effectAction = (char *)this->fields.animationComponent) == 0) )
  {
    sub_1C93D2C(effectAction, animationName);
  }
  SimpleAnimation__Play_67370764((SimpleAnimation_o *)effectAction, animationName, 0);
}


bool MapModelComponent__get_IsMapCamera2DReset(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.isMapCamera2DReset;
}


UnityEngine_Vector3_o MapModelComponent__get_MapCamera2DResetPosition(
        MapModelComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.mapCamera2DResetPosition.fields.x;
  result.fields.y = this->fields.mapCamera2DResetPosition.fields.y;
  result.fields.z = this->fields.mapCamera2DResetPosition.fields.z;
  return result;
}


float MapModelComponent__get_MapCamera2DResetSize(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.mapCamera2DResetSize;
}


MapModelCamera_o *MapModelComponent__get_MapModelCamera(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.mapModelCamera;
}


UnityEngine_GameObject_o *MapModelComponent__get_MapModelGimmickRoot(
        MapModelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mapModelGimmickRoot;
}


MapModelCamera_o *MapModelComponent__get_SpotModelCamera(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.spotModelCamera;
}