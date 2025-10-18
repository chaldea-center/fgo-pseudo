void MapModelComponent___ctor(MapModelComponent_o *this, const MethodInfo *method)
{
  this->fields.isMapCamera2DReset = 1;
  *(_OWORD *)&this->fields.mapCamera2DResetPosition.fields.x = xmmword_C0E960;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapModelComponent__Awake(MapModelComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o MapModelComponent__GetCameraLocationPosition(
        MapModelComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  System_String_o *locationPrefix; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  struct UnityEngine_GameObject_array *cameraLocationObjectList; // x8
  System_String_o *v8; // x20
  __int64 v9; // x21
  int max_length; // w9
  unsigned int v11; // w22
  System_String_o *name; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  struct UnityEngine_GameObject_array *v17; // x8
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v18 = layer;
  locationPrefix = this->fields.locationPrefix;
  v5 = System_Int32__ToString((int32_t)&v18, 0);
  v6 = System_String__Concat_63561656(locationPrefix, v5, 0);
  cameraLocationObjectList = this->fields.cameraLocationObjectList;
  if ( !cameraLocationObjectList )
    goto LABEL_8;
  v8 = v6;
  v9 = 4;
  while ( 1 )
  {
    max_length = cameraLocationObjectList->max_length;
    v11 = v9 - 4;
    if ( (int)v9 - 4 >= max_length )
    {
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      goto LABEL_16;
    }
    if ( v11 >= max_length )
      goto LABEL_15;
    v6 = (System_String_o *)*((_QWORD *)&cameraLocationObjectList->obj.klass + v9);
    if ( !v6 )
      goto LABEL_8;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
    v6 = (System_String_o *)System_String__op_Inequality(name, v8, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    cameraLocationObjectList = this->fields.cameraLocationObjectList;
    ++v9;
    if ( !cameraLocationObjectList )
      goto LABEL_8;
  }
  v17 = this->fields.cameraLocationObjectList;
  if ( !v17 )
LABEL_8:
    sub_1C372B4(v6);
  if ( v11 >= LODWORD(v17->max_length) )
LABEL_15:
    sub_1C372BC(v6);
  *(UnityEngine_Vector3_o *)&x = GameObjectExtensions__GetLocalPosition(
                                   (UnityEngine_GameObject_o *)*((_QWORD *)&v17->obj.klass + v9),
                                   0);
LABEL_16:
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void MapModelComponent__PlayAnimation(
        MapModelComponent_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  char *effectAction; // x0

  effectAction = (char *)this->fields.effectAction;
  if ( !effectAction
    || (*((_QWORD *)effectAction + 5) = endAction,
        sub_1C36FFC((CGThumbnailListItem_o *)(effectAction + 40), (int32_t)endAction, (int32_t)endAction, method),
        (effectAction = (char *)this->fields.animationComponent) == 0) )
  {
    sub_1C372B4(effectAction);
  }
  SimpleAnimation__Play_66507412((SimpleAnimation_o *)effectAction, animationName, 0);
}


bool MapModelComponent__get_IsMapCamera2DReset(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.isMapCamera2DReset;
}


UnityEngine_Vector3_o MapModelComponent__get_MapCamera2DResetPosition(
        MapModelComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mapCamera2DResetPosition.fields.x;
  y = this->fields.mapCamera2DResetPosition.fields.y;
  z = this->fields.mapCamera2DResetPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
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