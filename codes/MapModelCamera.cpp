void MapModelCamera___ctor(MapModelCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapModelCamera__Awake(MapModelCamera_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Camera_o *MapModelCamera__GetCamera(MapModelCamera_o *this, const MethodInfo *method)
{
  return this->fields.cameraInstance;
}


UnityEngine_GameObject_o *MapModelCamera__RayCast(
        MapModelCamera_o *this,
        UnityEngine_Vector3_o worldPosition,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  return MapModelCamera__RayCast_42972988(
           this->fields.cameraInstance,
           this->fields.screenUI,
           this->fields.renderTextureSize,
           worldPosition,
           v3);
}


UnityEngine_GameObject_o *MapModelCamera__RayCast_42972988(
        UnityEngine_Camera_o *renderTextureCamera,
        UnityEngine_GameObject_o *renderTextureUI,
        UnityEngine_Vector3_o renderTextureSize,
        UnityEngine_Vector3_o worldPosition,
        const MethodInfo *method)
{
  float z; // s11
  float y; // s12
  float x; // s13
  float v8; // s10
  float v9; // s9
  float v10; // s8
  UnityEngine_Camera_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  UnityEngine_Camera_o *v16; // x20
  unsigned __int64 v17; // x22
  UnityEngine_Camera_o *i; // x23
  __int128 v19; // q0
  UnityEngine_Camera_Fields fields; // q1
  struct UnityEngine_Vector2_o klass; // x9
  unsigned int cullingMask; // w21
  UnityEngine_Ray_o v24; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v25; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_RaycastHit_o v26; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPosition.fields.z;
  y = worldPosition.fields.y;
  x = worldPosition.fields.x;
  v8 = renderTextureSize.fields.z;
  v9 = renderTextureSize.fields.y;
  v10 = renderTextureSize.fields.x;
  v12 = renderTextureCamera;
  if ( (byte_596D11F & 1) == 0 )
  {
    renderTextureCamera = (UnityEngine_Camera_o *)sub_2213A60(&UnityEngine_Physics_TypeInfo);
    byte_596D11F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !renderTextureUI )
    goto LABEL_19;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_transform(renderTextureUI, 0);
  if ( !renderTextureCamera )
    goto LABEL_19;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v28 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)renderTextureCamera, v27, 0);
  if ( !v12 )
    goto LABEL_19;
  v29.fields.z = (float)(v8 * 0.5) + v28.fields.z;
  v29.fields.y = (float)(v9 * 0.5) + v28.fields.y;
  v29.fields.x = (float)(v10 * 0.5) + v28.fields.x;
  UnityEngine_Camera__ScreenPointToRay_83198808(&v25, v12, v29, 0);
  if ( !*(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v13, v14);
  v24 = v25;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Physics__RaycastAll_83889736(&v24, 0);
  if ( !renderTextureCamera )
    goto LABEL_19;
  v15 = *(_QWORD *)&renderTextureCamera->fields.m_NonSerializedVersion;
  v16 = renderTextureCamera;
  if ( (int)v15 < 1 )
    return 0;
  v17 = 0;
  for ( i = renderTextureCamera + 1; ; i = (UnityEngine_Camera_o *)((char *)i + 44) )
  {
    if ( v17 >= (unsigned int)v15 )
      sub_2213CE4(renderTextureCamera);
    v19 = *(_OWORD *)&i->klass;
    fields = i->fields;
    klass = (struct UnityEngine_Vector2_o)i[1].klass;
    v26.fields.m_Collider = (int32_t)i[1].monitor;
    v26.fields.m_UV = klass;
    *(_OWORD *)&v26.fields.m_Point.fields.x = v19;
    *(UnityEngine_Camera_Fields *)&v26.fields.m_Normal.fields.y = fields;
    cullingMask = UnityEngine_Camera__get_cullingMask(v12, 0);
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v26, 0);
    if ( !renderTextureCamera )
      goto LABEL_19;
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)renderTextureCamera,
                                                    0);
    if ( !renderTextureCamera )
      goto LABEL_19;
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_layer(
                                                    (UnityEngine_GameObject_o *)renderTextureCamera,
                                                    0);
    if ( ((cullingMask >> (char)renderTextureCamera) & 1) != 0 )
      break;
    LODWORD(v15) = v16->fields.m_NonSerializedVersion;
    if ( (__int64)++v17 >= (int)v15 )
      return 0;
  }
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v26, 0);
  if ( !renderTextureCamera )
LABEL_19:
    sub_2213CDC(renderTextureCamera, renderTextureUI);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)renderTextureCamera, 0);
}


void MapModelCamera__Setup(MapModelCamera_o *this, UnityEngine_GameObject_o *screen, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 screenUI; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  UnityEngine_Camera_o *cameraInstance; // x20
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v17; // x1
  int v18; // w20
  int v19; // w0

  if ( (byte_596D11E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_RenderTexture_TypeInfo);
    byte_596D11E = 1;
  }
  this->fields.screenUI = screen;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.screenUI,
    (int32_t)screen,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  screenUI = (__int64)this->fields.screenUI;
  if ( !screenUI )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)screenUI,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  screenUI = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (screenUI & 1) == 0 )
  {
    if ( Component_object )
    {
      cameraInstance = this->fields.cameraInstance;
      screenUI = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[26].methodPtr)(
                   Component_object,
                   Component_object->klass->vtable[26].method);
      if ( cameraInstance )
      {
        if ( screenUI
          && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
              *(unsigned __int8 *)(*(_QWORD *)screenUI + 304LL) >= (unsigned int)naturalAligment) )
        {
          v17 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)screenUI + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo
              ? (UnityEngine_RenderTexture_o *)screenUI
              : 0LL;
        }
        else
        {
          v17 = 0;
        }
        UnityEngine_Camera__set_targetTexture(cameraInstance, v17, 0);
        screenUI = (__int64)this->fields.cameraInstance;
        if ( screenUI )
        {
          screenUI = (__int64)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)screenUI, 0);
          if ( screenUI )
          {
            screenUI = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)screenUI + 376LL))(
                         screenUI,
                         *(_QWORD *)(*(_QWORD *)screenUI + 384LL));
            if ( this->fields.cameraInstance )
            {
              v18 = screenUI;
              screenUI = (__int64)UnityEngine_Camera__get_targetTexture(this->fields.cameraInstance, 0);
              if ( screenUI )
              {
                v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)screenUI + 408LL))(
                        screenUI,
                        *(_QWORD *)(*(_QWORD *)screenUI + 416LL));
                this->fields.renderTextureSize.fields.z = 0.0;
                this->fields.renderTextureSize.fields.x = (float)v18;
                this->fields.renderTextureSize.fields.y = (float)v19;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(screenUI, v10);
  }
}