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

  return MapModelCamera__RayCast_21007848(
           this->fields.cameraInstance,
           this->fields.screenUI,
           this->fields.renderTextureSize,
           worldPosition,
           v3);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MapModelCamera__RayCast_21007848(
        UnityEngine_Camera_o *renderTextureCamera,
        UnityEngine_GameObject_o *renderTextureUI,
        UnityEngine_Vector3_o renderTextureSize,
        UnityEngine_Vector3_o worldPosition,
        const MethodInfo *method)
{
  float x; // s10
  UnityEngine_Camera_o *v6; // x19
  float z; // s11
  float y; // s12
  float v9; // s13
  float v10; // s2
  float v11; // s8
  float v12; // s1
  float v13; // s9
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v18; // x20
  unsigned __int64 v19; // x22
  void **i; // x23
  struct UnityEngine_Vector2_o v21; // x9
  __int128 v22; // q0
  __int128 v23; // q1
  int32_t cullingMask; // w21
  __int64 v26; // x0
  UnityEngine_Ray_o v27; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v28; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_RaycastHit_o v29; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  x = renderTextureSize.fields.x;
  memset(&v29, 0, sizeof(v29));
  if ( !renderTextureUI )
    goto LABEL_15;
  v6 = renderTextureCamera;
  z = worldPosition.fields.z;
  y = worldPosition.fields.y;
  v9 = worldPosition.fields.x;
  v11 = v10;
  v13 = v12;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_transform(renderTextureUI, 0LL);
  if ( !renderTextureCamera )
    goto LABEL_15;
  v30.fields.x = v9;
  v30.fields.y = y;
  v30.fields.z = z;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__InverseTransformPoint(
                                     (UnityEngine_Transform_o *)renderTextureCamera,
                                     v30,
                                     0LL);
  if ( !v6 )
    goto LABEL_15;
  v31.fields.x = (float)(x * 0.5) + v14;
  v31.fields.y = (float)(v13 * 0.5) + v15;
  v31.fields.z = (float)(v11 * 0.5) + v16;
  UnityEngine_Camera__ScreenPointToRay_40631244(&v28, v6, v31, 0LL);
  v27 = v28;
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Physics__RaycastAll_16636764(&v27, 0LL);
  if ( !renderTextureCamera )
    goto LABEL_15;
  klass = renderTextureCamera[1].klass;
  v18 = renderTextureCamera;
  if ( (int)klass < 1 )
    return 0LL;
  v19 = 0LL;
  for ( i = &renderTextureCamera[1].monitor; ; i = (void **)((char *)i + 44) )
  {
    if ( v19 >= (unsigned int)klass )
    {
      v26 = sub_B2C460(renderTextureCamera);
      sub_B2C400(v26, 0LL);
    }
    v21 = (struct UnityEngine_Vector2_o)i[4];
    v23 = *(_OWORD *)i;
    v22 = *((_OWORD *)i + 1);
    v29.fields.m_Collider = *((_DWORD *)i + 10);
    v29.fields.m_UV = v21;
    *(_OWORD *)&v29.fields.m_Point.fields.x = v23;
    *(_OWORD *)&v29.fields.m_Normal.fields.y = v22;
    cullingMask = UnityEngine_Camera__get_cullingMask(v6, 0LL);
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v29, 0LL);
    if ( !renderTextureCamera )
      goto LABEL_15;
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)renderTextureCamera,
                                                    0LL);
    if ( !renderTextureCamera )
      goto LABEL_15;
    renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_GameObject__get_layer(
                                                    (UnityEngine_GameObject_o *)renderTextureCamera,
                                                    0LL);
    if ( ((1 << (char)renderTextureCamera) & cullingMask) != 0 )
      break;
    LODWORD(klass) = v18[1].klass;
    if ( (__int64)++v19 >= (int)klass )
      return 0LL;
  }
  renderTextureCamera = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v29, 0LL);
  if ( !renderTextureCamera )
LABEL_15:
    sub_B2C434(renderTextureCamera, renderTextureUI);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)renderTextureCamera, 0LL);
}


void __fastcall MapModelCamera__Setup(
        MapModelCamera_o *this,
        UnityEngine_GameObject_o *screen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 screenUI; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Camera_o *cameraInstance; // x20
  __int64 v11; // x10
  UnityEngine_RenderTexture_o *v12; // x1
  int v13; // w20
  int v14; // w0

  if ( (byte_41858C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, screen);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_RenderTexture_TypeInfo, v6);
    byte_41858C9 = 1;
  }
  this->fields.screenUI = screen;
  sub_B2C2F8(&this->fields.screenUI, screen);
  screenUI = (__int64)this->fields.screenUI;
  if ( !screenUI )
    goto LABEL_22;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)screenUI,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  screenUI = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( (screenUI & 1) == 0 )
  {
    if ( Component_srcLineSprite )
    {
      cameraInstance = this->fields.cameraInstance;
      screenUI = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))Component_srcLineSprite->klass[1].vtable._3_ToString.method)(
                   Component_srcLineSprite,
                   Component_srcLineSprite->klass[2]._1.image);
      if ( cameraInstance )
      {
        if ( screenUI
          && (v11 = *(&UnityEngine_RenderTexture_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)screenUI + 300LL) >= (unsigned int)v11) )
        {
          v12 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)screenUI + 200LL) + 8 * v11 - 8) == UnityEngine_RenderTexture_TypeInfo
              ? (UnityEngine_RenderTexture_o *)screenUI
              : 0LL;
        }
        else
        {
          v12 = 0LL;
        }
        UnityEngine_Camera__set_targetTexture(cameraInstance, v12, 0LL);
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
              v13 = screenUI;
              screenUI = (__int64)UnityEngine_Camera__get_targetTexture(this->fields.cameraInstance, 0LL);
              if ( screenUI )
              {
                v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)screenUI + 408LL))(
                        screenUI,
                        *(_QWORD *)(*(_QWORD *)screenUI + 416LL));
                this->fields.renderTextureSize.fields.x = (float)v13;
                this->fields.renderTextureSize.fields.y = (float)v14;
                this->fields.renderTextureSize.fields.z = 0.0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(screenUI, v7);
  }
}