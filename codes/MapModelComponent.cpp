void __fastcall MapModelComponent___ctor(MapModelComponent_o *this, const MethodInfo *method)
{
  this->fields.isMapCamera2DReset = 1;
  *(_OWORD *)&this->fields.mapCamera2DResetPosition.fields.x = xmmword_BA2DD0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapModelComponent__Awake(MapModelComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelComponent__GetCameraLocationPosition(
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
  il2cpp_array_size_t v12; // w22
  System_String_o *name; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_GameObject_array *v18; // x8
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v19 = layer;
  locationPrefix = this->fields.locationPrefix;
  v5 = System_Int32__ToString((int32_t)&v19, 0LL);
  v6 = System_String__Concat_61375396(locationPrefix, v5, 0LL);
  cameraLocationObjectList = this->fields.cameraLocationObjectList;
  if ( !cameraLocationObjectList )
    goto LABEL_8;
  v9 = v6;
  v10 = 4LL;
  while ( 1 )
  {
    max_length = cameraLocationObjectList->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
    {
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
        byte_49F7111 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      goto LABEL_16;
    }
    if ( v12 >= max_length )
      goto LABEL_15;
    v6 = (System_String_o *)*((_QWORD *)&cameraLocationObjectList->obj.klass + v10);
    if ( !v6 )
      goto LABEL_8;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0LL);
    v6 = (System_String_o *)System_String__op_Inequality(name, v9, 0LL);
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
    sub_1B64324(v6);
  if ( v12 >= v18->max_length )
LABEL_15:
    sub_1B6432C(v6, v7);
  *(UnityEngine_Vector3_o *)&x = GameObjectExtensions__GetLocalPosition(
                                   (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v10),
                                   0LL);
LABEL_16:
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void __fastcall MapModelComponent__PlayAnimation(
        MapModelComponent_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  char *effectAction; // x0

  effectAction = (char *)this->fields.effectAction;
  if ( !effectAction
    || (*((_QWORD *)effectAction + 5) = endAction,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)(effectAction + 40),
          (int32_t)endAction,
          (int32_t)endAction,
          (int32_t)method),
        (effectAction = (char *)this->fields.animationComponent) == 0LL) )
  {
    sub_1B64324(effectAction);
  }
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)effectAction, animationName, 0LL);
}


bool __fastcall MapModelComponent__get_IsMapCamera2DReset(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.isMapCamera2DReset;
}


UnityEngine_Vector3_o __fastcall MapModelComponent__get_MapCamera2DResetPosition(
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


float __fastcall MapModelComponent__get_MapCamera2DResetSize(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.mapCamera2DResetSize;
}


MapModelCamera_o *__fastcall MapModelComponent__get_MapModelCamera(MapModelComponent_o *this, const MethodInfo *method)
{
  return this->fields.mapModelCamera;
}


UnityEngine_GameObject_o *__fastcall MapModelComponent__get_MapModelGimmickRoot(
        MapModelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mapModelGimmickRoot;
}


MapModelCamera_o *__fastcall MapModelComponent__get_SpotModelCamera(
        MapModelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.spotModelCamera;
}