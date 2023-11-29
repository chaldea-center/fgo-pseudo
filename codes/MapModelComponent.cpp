void __fastcall MapModelComponent___ctor(MapModelComponent_o *this, const MethodInfo *method)
{
  this->fields.isMapCamera2DReset = 1;
  *(_OWORD *)&this->fields.mapCamera2DResetPosition.fields.x = xmmword_3137150;
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
  __int64 v8; // x2
  struct UnityEngine_GameObject_array *cameraLocationObjectList; // x8
  System_String_o *v10; // x20
  __int64 v11; // x21
  int max_length; // w9
  il2cpp_array_size_t v13; // w22
  UnityEngine_Object_o *v14; // x0
  System_String_o *name; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  struct UnityEngine_GameObject_array *v19; // x8
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v20 = layer;
  locationPrefix = this->fields.locationPrefix;
  v5 = System_Int32__ToString((int32_t)&v20, 0LL);
  v6 = System_String__Concat_43743732(locationPrefix, v5, 0LL);
  cameraLocationObjectList = this->fields.cameraLocationObjectList;
  if ( !cameraLocationObjectList )
    goto LABEL_8;
  v10 = v6;
  v11 = 4LL;
  while ( 1 )
  {
    max_length = cameraLocationObjectList->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
    {
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
      goto LABEL_15;
    }
    if ( v13 >= max_length )
      goto LABEL_14;
    v14 = (UnityEngine_Object_o *)*((_QWORD *)&cameraLocationObjectList->obj.klass + v11);
    if ( !v14 )
      goto LABEL_8;
    name = UnityEngine_Object__get_name(v14, 0LL);
    v6 = (System_String_o *)System_String__op_Inequality(name, v10, 0LL);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    cameraLocationObjectList = this->fields.cameraLocationObjectList;
    ++v11;
    if ( !cameraLocationObjectList )
      goto LABEL_8;
  }
  v19 = this->fields.cameraLocationObjectList;
  if ( !v19 )
LABEL_8:
    sub_B170D4();
  if ( v13 >= v19->max_length )
  {
LABEL_14:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*((_QWORD *)&v19->obj.klass + v11),
                                     0LL);
LABEL_15:
  result.fields.z = v18;
  result.fields.y = v17;
  result.fields.x = v16;
  return result;
}


void __fastcall MapModelComponent__PlayAnimation(
        MapModelComponent_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct CommonEffectActionComponent_o *effectAction; // x0
  SimpleAnimation_o *animationComponent; // x0

  effectAction = this->fields.effectAction;
  if ( !effectAction
    || (effectAction->fields.endAction = endAction,
        sub_B16F98(
          (BattleServantConfConponent_o *)&effectAction->fields.endAction,
          (System_Int32_array **)endAction,
          (System_String_array **)endAction,
          (System_String_array **)method,
          v4,
          v5,
          v6,
          v7),
        (animationComponent = this->fields.animationComponent) == 0LL) )
  {
    sub_B170D4();
  }
  SimpleAnimation__Play_16380456(animationComponent, animationName, 0LL);
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