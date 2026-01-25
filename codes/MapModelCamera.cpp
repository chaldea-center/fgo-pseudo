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

  return MapModelCamera__RayCast_36685616(
           this->fields.cameraInstance,
           this->fields.screenUI,
           this->fields.renderTextureSize,
           worldPosition,
           v3);
}


UnityEngine_GameObject_o *MapModelCamera__RayCast_36685616(
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
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v14; // x20
  unsigned __int64 v15; // x22
  void **i; // x23
  struct UnityEngine_Vector2_o v17; // x9
  __int128 v18; // q0
  __int128 v19; // q1
  unsigned int cullingMask; // w21
  UnityEngine_Ray_o v22; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_Ray_o v23; // [xsp+18h] [xbp-C8h] BYREF
  UnityEngine_Ray_o v24; // [xsp+30h] [xbp-B0h]
  UnityEngine_RaycastHit_o v25; // [xsp+50h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPosition.fields.z;
  y = worldPosition.fields.y;
  x = worldPosition.fields.x;
  v8 = renderTextureSize.fields.z;
  v9 = renderTextureSize.fields.y;
  v10 = renderTextureSize.fields.x;
  v12 = renderTextureCamera;
  if ( (byte_4CEB122 & 1) == 0 )
  {
    renderTextureCamera = (UnityEngine_Camera_o *)sub_1C7BAE8(&UnityEngine_Physics_TypeInfo);
    byte_4CEB122 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !renderTextureUI )
    goto LABEL_19;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_transform(renderTextureUI, 0);
  if ( !renderTextureCamera )
    goto LABEL_19;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v27 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)renderTextureCamera, v26, 0);
  if ( !v12 )
    goto LABEL_19;
  v28.fields.z = (float)(v8 * 0.5) + v27.fields.z;
  v28.fields.y = (float)(v9 * 0.5) + v27.fields.y;
  v28.fields.x = (float)(v10 * 0.5) + v27.fields.x;
  UnityEngine_Camera__ScreenPointToRay_71675208(&v23, v12, v28, 0);
  v24 = v23;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v22 = v24;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Physics__RaycastAll_72191408(&v22, 0);
  if ( !renderTextureCamera )
    goto LABEL_19;
  klass = renderTextureCamera[1].klass;
  v14 = renderTextureCamera;
  if ( (int)klass < 1 )
    return 0;
  v15 = 0;
  for ( i = &renderTextureCamera[1].monitor; ; i = (void **)((char *)i + 44) )
  {
    if ( v15 >= (unsigned int)klass )
      sub_1C7BD48(renderTextureCamera);
    v17 = (struct UnityEngine_Vector2_o)i[4];
    v19 = *(_OWORD *)i;
    v18 = *((_OWORD *)i + 1);
    v25.fields.m_Collider = *((_DWORD *)i + 10);
    v25.fields.m_UV = v17;
    *(_OWORD *)&v25.fields.m_Point.fields.x = v19;
    *(_OWORD *)&v25.fields.m_Normal.fields.y = v18;
    cullingMask = UnityEngine_Camera__get_cullingMask(v12, 0);
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v25, 0);
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
    LODWORD(klass) = v14[1].klass;
    if ( (__int64)++v15 >= (int)klass )
      return 0;
  }
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v25, 0);
  if ( !renderTextureCamera )
LABEL_19:
    sub_1C7BD40(renderTextureCamera, renderTextureUI);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)renderTextureCamera, 0);
}


void MapModelCamera__Setup(MapModelCamera_o *this, UnityEngine_GameObject_o *screen, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  __int64 screenUI; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Camera_o *cameraInstance; // x20
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v15; // x1
  int v16; // w20
  int v17; // w0

  if ( (byte_4CEB121 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_RenderTexture_TypeInfo);
    byte_4CEB121 = 1;
  }
  this->fields.screenUI = screen;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.screenUI,
    (int32_t)screen,
    (int32_t)method,
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
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v15 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)screenUI + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo
              ? (UnityEngine_RenderTexture_o *)screenUI
              : 0LL;
        }
        else
        {
          v15 = 0;
        }
        UnityEngine_Camera__set_targetTexture(cameraInstance, v15, 0);
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
              v16 = screenUI;
              screenUI = (__int64)UnityEngine_Camera__get_targetTexture(this->fields.cameraInstance, 0);
              if ( screenUI )
              {
                v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)screenUI + 408LL))(
                        screenUI,
                        *(_QWORD *)(*(_QWORD *)screenUI + 416LL));
                this->fields.renderTextureSize.fields.x = (float)v16;
                this->fields.renderTextureSize.fields.y = (float)v17;
                this->fields.renderTextureSize.fields.z = 0.0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C7BD40(screenUI, v10);
  }
}