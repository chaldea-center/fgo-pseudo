void __fastcall MapModelComponent___ctor(MapModelComponent_o *this, const MethodInfo *method)
{
  this->fields.isMapCamera2DReset = 1;
  *(_OWORD *)&this->fields.mapCamera2DResetPosition.fields.x = xmmword_319F7D0;
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
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct UnityEngine_GameObject_array *v17; // x8
  __int64 v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v19 = layer;
  locationPrefix = this->fields.locationPrefix;
  v5 = System_Int32__ToString((int32_t)&v19, 0LL);
  v6 = System_String__Concat_44305532(locationPrefix, v5, 0LL);
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
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
      goto LABEL_15;
    }
    if ( v12 >= max_length )
      goto LABEL_14;
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
  v17 = this->fields.cameraLocationObjectList;
  if ( !v17 )
LABEL_8:
    sub_B2C434(v6, v7);
  if ( v12 >= v17->max_length )
  {
LABEL_14:
    v18 = sub_B2C460(v6);
    sub_B2C400(v18, 0LL);
  }
  *(UnityEngine_Vector3_o *)&v14 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*((_QWORD *)&v17->obj.klass + v10),
                                     0LL);
LABEL_15:
  result.fields.z = v16;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


void __fastcall MapModelComponent__PlayAnimation(
        MapModelComponent_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  SimpleAnimation_o *effectAction; // x0

  effectAction = (SimpleAnimation_o *)this->fields.effectAction;
  if ( !effectAction
    || (*(_QWORD *)&effectAction->fields.m_LayerMixer.fields.m_Version = endAction,
        sub_B2C2F8(&effectAction->fields.m_LayerMixer.fields.m_Version, endAction),
        (effectAction = this->fields.animationComponent) == 0LL) )
  {
    sub_B2C434(effectAction, animationName);
  }
  SimpleAnimation__Play_16486620(effectAction, animationName, 0LL);
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