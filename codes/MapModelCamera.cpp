void __fastcall MapModelCamera___ctor(MapModelCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapModelCamera__Awake(MapModelCamera_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Camera_o *__fastcall MapModelCamera__GetCamera(MapModelCamera_o *this, const MethodInfo *method)
{
  return this->fields.cameraInstance;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MapModelCamera__RayCast(
        MapModelCamera_o *this,
        UnityEngine_Vector3_o worldPosition,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  return MapModelCamera__RayCast_27710752(
           this->fields.cameraInstance,
           this->fields.screenUI,
           this->fields.renderTextureSize,
           worldPosition,
           v3);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MapModelCamera__RayCast_27710752(
        UnityEngine_Camera_o *renderTextureCamera,
        UnityEngine_GameObject_o *renderTextureUI,
        UnityEngine_Vector3_o renderTextureSize,
        UnityEngine_Vector3_o worldPosition,
        const MethodInfo *method)
{
  float x; // s10
  float z; // s11
  float y; // s12
  float v9; // s13
  float v10; // s2
  float v11; // s8
  float v12; // s1
  float v13; // s9
  UnityEngine_Transform_o *transform; // x0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_RaycastHit_array *layer; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x8
  UnityEngine_RaycastHit_array *v22; // x20
  unsigned __int64 v23; // x22
  float *i; // x23
  struct UnityEngine_Vector2_o v25; // x9
  __int128 v26; // q0
  __int128 v27; // q1
  int32_t cullingMask; // w21
  UnityEngine_Component_o *collider; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Ray_o v33; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v34; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_RaycastHit_o v35; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  x = renderTextureSize.fields.x;
  memset(&v35, 0, sizeof(v35));
  if ( !renderTextureUI )
    goto LABEL_15;
  z = worldPosition.fields.z;
  y = worldPosition.fields.y;
  v9 = worldPosition.fields.x;
  v11 = v10;
  v13 = v12;
  transform = UnityEngine_GameObject__get_transform(renderTextureUI, 0LL);
  if ( !transform )
    goto LABEL_15;
  v36.fields.x = v9;
  v36.fields.y = y;
  v36.fields.z = z;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__InverseTransformPoint(transform, v36, 0LL);
  if ( !renderTextureCamera )
    goto LABEL_15;
  v37.fields.x = (float)(x * 0.5) + v15;
  v37.fields.y = (float)(v13 * 0.5) + v16;
  v37.fields.z = (float)(v11 * 0.5) + v17;
  UnityEngine_Camera__ScreenPointToRay_40664072(&v34, renderTextureCamera, v37, 0LL);
  v33 = v34;
  layer = UnityEngine_Physics__RaycastAll_16530600(&v33, 0LL);
  if ( !layer )
    goto LABEL_15;
  v21 = *(_QWORD *)&layer->max_length;
  v22 = layer;
  if ( (int)v21 < 1 )
    return 0LL;
  v23 = 0LL;
  for ( i = &layer->m_Items[0].fields.m_Point.fields.y; ; i += 11 )
  {
    if ( v23 >= (unsigned int)v21 )
    {
      sub_B17100(layer, v19, v20);
      sub_B170A0();
    }
    v25 = (struct UnityEngine_Vector2_o)*((_QWORD *)i + 4);
    v27 = *(_OWORD *)i;
    v26 = *((_OWORD *)i + 1);
    v35.fields.m_Collider = (int32_t)i[10];
    v35.fields.m_UV = v25;
    *(_OWORD *)&v35.fields.m_Point.fields.x = v27;
    *(_OWORD *)&v35.fields.m_Normal.fields.y = v26;
    cullingMask = UnityEngine_Camera__get_cullingMask(renderTextureCamera, 0LL);
    collider = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v35, 0LL);
    if ( !collider )
      goto LABEL_15;
    gameObject = UnityEngine_Component__get_gameObject(collider, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    layer = (UnityEngine_RaycastHit_array *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( ((1 << (char)layer) & cullingMask) != 0 )
      break;
    LODWORD(v21) = v22->max_length;
    if ( (__int64)++v23 >= (int)v21 )
      return 0LL;
  }
  v32 = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v35, 0LL);
  if ( !v32 )
LABEL_15:
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v32, 0LL);
}


void __fastcall MapModelCamera__Setup(
        MapModelCamera_o *this,
        UnityEngine_GameObject_o *screen,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *screenUI; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Camera_o *cameraInstance; // x20
  __int64 v15; // x0
  __int64 v16; // x10
  UnityEngine_RenderTexture_o *v17; // x1
  UnityEngine_Camera_o *v18; // x0
  UnityEngine_RenderTexture_o *targetTexture; // x0
  int v20; // w0
  int v21; // w20
  UnityEngine_RenderTexture_o *v22; // x0
  int v23; // w0

  if ( (byte_40FB5FA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, screen);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_RenderTexture_TypeInfo, v11);
    byte_40FB5FA = 1;
  }
  this->fields.screenUI = screen;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.screenUI,
    (System_Int32_array **)screen,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  screenUI = this->fields.screenUI;
  if ( !screenUI )
    goto LABEL_22;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      screenUI,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      cameraInstance = this->fields.cameraInstance;
      v15 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[1].vtable._3_ToString.method)(
              Component_srcLineSprite,
              Component_srcLineSprite->klass[2]._1.image);
      if ( cameraInstance )
      {
        if ( v15
          && (v16 = *(&UnityEngine_RenderTexture_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) >= (unsigned int)v16) )
        {
          v17 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v16 - 8) == UnityEngine_RenderTexture_TypeInfo
              ? (UnityEngine_RenderTexture_o *)v15
              : 0LL;
        }
        else
        {
          v17 = 0LL;
        }
        UnityEngine_Camera__set_targetTexture(cameraInstance, v17, 0LL);
        v18 = this->fields.cameraInstance;
        if ( v18 )
        {
          targetTexture = UnityEngine_Camera__get_targetTexture(v18, 0LL);
          if ( targetTexture )
          {
            v20 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))targetTexture->klass->vtable._4_get_width.method)(
                    targetTexture,
                    targetTexture->klass->vtable._5_set_width.methodPtr);
            if ( this->fields.cameraInstance )
            {
              v21 = v20;
              v22 = UnityEngine_Camera__get_targetTexture(this->fields.cameraInstance, 0LL);
              if ( v22 )
              {
                v23 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v22->klass->vtable._6_get_height.method)(
                        v22,
                        v22->klass->vtable._7_set_height.methodPtr);
                this->fields.renderTextureSize.fields.x = (float)v21;
                this->fields.renderTextureSize.fields.y = (float)v23;
                this->fields.renderTextureSize.fields.z = 0.0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
}