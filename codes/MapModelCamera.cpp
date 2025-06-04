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

  return MapModelCamera__RayCast_35288516(
           this->fields.cameraInstance,
           this->fields.screenUI,
           this->fields.renderTextureSize,
           worldPosition,
           v3);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MapModelCamera__RayCast_35288516(
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
  float v13; // s0
  float v14; // s1
  float v15; // s2
  __int64 v16; // x2
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v18; // x20
  unsigned __int64 v19; // x22
  void **i; // x23
  struct UnityEngine_Vector2_o v21; // x9
  __int128 v22; // q0
  __int128 v23; // q1
  unsigned int cullingMask; // w21
  UnityEngine_Ray_o v26; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_Ray_o v27; // [xsp+18h] [xbp-C8h] BYREF
  UnityEngine_Ray_o v28; // [xsp+30h] [xbp-B0h]
  UnityEngine_RaycastHit_o v29; // [xsp+50h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPosition.fields.z;
  y = worldPosition.fields.y;
  x = worldPosition.fields.x;
  v8 = renderTextureSize.fields.z;
  v9 = renderTextureSize.fields.y;
  v10 = renderTextureSize.fields.x;
  v12 = renderTextureCamera;
  if ( (byte_4AFEBE8 & 1) == 0 )
  {
    renderTextureCamera = (UnityEngine_Camera_o *)sub_1BC3008(&UnityEngine_Physics_TypeInfo, renderTextureUI);
    byte_4AFEBE8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !renderTextureUI )
    goto LABEL_19;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_transform(renderTextureUI, 0LL);
  if ( !renderTextureCamera )
    goto LABEL_19;
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__InverseTransformPoint(
                                     (UnityEngine_Transform_o *)renderTextureCamera,
                                     v30,
                                     0LL);
  if ( !v12 )
    goto LABEL_19;
  v31.fields.z = (float)(v8 * 0.5) + v15;
  v31.fields.y = (float)(v9 * 0.5) + v14;
  v31.fields.x = (float)(v10 * 0.5) + v13;
  UnityEngine_Camera__ScreenPointToRay_69841056(&v27, v12, v31, 0LL);
  v28 = v27;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v26 = v28;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Physics__RaycastAll_70353232(&v26, 0LL);
  if ( !renderTextureCamera )
    goto LABEL_19;
  klass = renderTextureCamera[1].klass;
  v18 = renderTextureCamera;
  if ( (int)klass < 1 )
    return 0LL;
  v19 = 0LL;
  for ( i = &renderTextureCamera[1].monitor; ; i = (void **)((char *)i + 44) )
  {
    if ( v19 >= (unsigned int)klass )
      sub_1BC326C(renderTextureCamera, renderTextureUI, v16);
    v21 = (struct UnityEngine_Vector2_o)i[4];
    v23 = *(_OWORD *)i;
    v22 = *((_OWORD *)i + 1);
    v29.fields.m_Collider = *((_DWORD *)i + 10);
    v29.fields.m_UV = v21;
    *(_OWORD *)&v29.fields.m_Point.fields.x = v23;
    *(_OWORD *)&v29.fields.m_Normal.fields.y = v22;
    cullingMask = UnityEngine_Camera__get_cullingMask(v12, 0LL);
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v29, 0LL);
    if ( !renderTextureCamera )
      goto LABEL_19;
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)renderTextureCamera,
                                                    0LL);
    if ( !renderTextureCamera )
      goto LABEL_19;
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_layer(
                                                    (UnityEngine_GameObject_o *)renderTextureCamera,
                                                    0LL);
    if ( ((cullingMask >> (char)renderTextureCamera) & 1) != 0 )
      break;
    LODWORD(klass) = v18[1].klass;
    if ( (__int64)++v19 >= (int)klass )
      return 0LL;
  }
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v29, 0LL);
  if ( !renderTextureCamera )
LABEL_19:
    sub_1BC3264(renderTextureCamera, renderTextureUI);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)renderTextureCamera, 0LL);
}


void __fastcall MapModelCamera__Setup(
        MapModelCamera_o *this,
        UnityEngine_GameObject_o *screen,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 screenUI; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Camera_o *cameraInstance; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_RenderTexture_o *v13; // x1
  int v14; // w20
  int v15; // w0

  if ( (byte_4AFEBE7 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UITexture___, screen);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_RenderTexture_TypeInfo, v7);
    byte_4AFEBE7 = 1;
  }
  this->fields.screenUI = screen;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.screenUI, (int32_t)screen, (int32_t)method, v3);
  screenUI = (__int64)this->fields.screenUI;
  if ( !screenUI )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)screenUI,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  screenUI = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (screenUI & 1) == 0 )
  {
    if ( Component_object )
    {
      cameraInstance = this->fields.cameraInstance;
      screenUI = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[26].method)(
                   Component_object,
                   Component_object->klass->vtable[27].methodPtr);
      if ( cameraInstance )
      {
        if ( screenUI
          && (methodPtr_low = LOBYTE(UnityEngine_RenderTexture_TypeInfo->vtable._0_Equals.methodPtr),
              *(unsigned __int8 *)(*(_QWORD *)screenUI + 304LL) >= (unsigned int)methodPtr_low) )
        {
          v13 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)screenUI + 200LL) + 8 * methodPtr_low - 8) == UnityEngine_RenderTexture_TypeInfo
              ? (UnityEngine_RenderTexture_o *)screenUI
              : 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        UnityEngine_Camera__set_targetTexture(cameraInstance, v13, 0LL);
        screenUI = (__int64)this->fields.cameraInstance;
        if ( screenUI )
        {
          screenUI = (__int64)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)screenUI, 0LL);
          if ( screenUI )
          {
            screenUI = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)screenUI + 376LL))(
                         screenUI,
                         *(_QWORD *)(*(_QWORD *)screenUI + 384LL));
            if ( this->fields.cameraInstance )
            {
              v14 = screenUI;
              screenUI = (__int64)UnityEngine_Camera__get_targetTexture(this->fields.cameraInstance, 0LL);
              if ( screenUI )
              {
                v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)screenUI + 408LL))(
                        screenUI,
                        *(_QWORD *)(*(_QWORD *)screenUI + 416LL));
                this->fields.renderTextureSize.fields.x = (float)v14;
                this->fields.renderTextureSize.fields.y = (float)v15;
                this->fields.renderTextureSize.fields.z = 0.0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BC3264(screenUI, v8);
  }
}