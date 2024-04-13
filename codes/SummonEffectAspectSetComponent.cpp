void __fastcall SummonEffectAspectSetComponent___ctor(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectAspectSetComponent__Start(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t width; // w20
  __int64 v6; // x1
  int32_t v7; // w20
  float v8; // s10
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v11; // s8
  float v12; // s1
  float v13; // s9
  float v14; // s2
  UnityEngine_ParticleSystem_o *v15; // x20
  float startSize; // s0
  int32_t v17; // w20
  UnityEngine_ParticleSystem_o *v18; // x21
  float v19; // s0
  UnityEngine_ParticleSystem_o *v20; // x20
  float v21; // s0
  int32_t v22; // w20
  UnityEngine_ParticleSystem_o *v23; // x21
  float v24; // s0
  UnityEngine_ParticleSystem_o *v25; // x20
  float v26; // s0
  int32_t v27; // w20
  UnityEngine_ParticleSystem_o *v28; // x21
  float v29; // s0
  float constantMin; // s0
  float constantMax; // s0
  float v32; // s0
  float v33; // s0
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v37; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v39; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v40; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v41; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v42; // 0:x0.8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC8DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, (_DWORD)method, v2, v3);
    byte_42EC8DD = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v37, 0, sizeof(v37));
  width = UnityEngine_Screen__get_width(0LL);
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) >= 1.7778 )
  {
    v8 = 1.0;
  }
  else
  {
    v7 = UnityEngine_Screen__get_width(0LL);
    v8 = (float)((float)v7 / (float)UnityEngine_Screen__get_height(0LL)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v11 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v13 = v12;
  *(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v43.fields.z = v8 * v14;
  v43.fields.y = v8 * v13;
  v43.fields.x = v8 * v11;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v43, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)go_above_cardScaler,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v15 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  startSize = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v15, v8 * startSize, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v17 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v17 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
      break;
    go_above_cardScaler = this->fields.go_msg_shine00;
    if ( go_above_cardScaler )
    {
      go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
      if ( go_above_cardScaler )
      {
        go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
        if ( go_above_cardScaler )
        {
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v17, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v18 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v19 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v18, v8 * v19, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine00;
              ++v17;
              if ( go_above_cardScaler )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)go_above_cardScaler,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v20 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  v21 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v20, v8 * v21, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v22 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v22 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
      break;
    go_above_cardScaler = this->fields.go_msg_shine01;
    if ( go_above_cardScaler )
    {
      go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
      if ( go_above_cardScaler )
      {
        go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
        if ( go_above_cardScaler )
        {
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v22, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v23 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v24 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v23, v8 * v24, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine01;
              ++v22;
              if ( go_above_cardScaler )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)go_above_cardScaler,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v25 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  v26 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v25, v8 * v26, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v27 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v27 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
      break;
    go_above_cardScaler = this->fields.go_msg_shine02;
    if ( go_above_cardScaler )
    {
      go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
      if ( go_above_cardScaler )
      {
        go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
        if ( go_above_cardScaler )
        {
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v27, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v28 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v29 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v28, v8 * v29, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine02;
              ++v27;
              if ( go_above_cardScaler )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_border;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v36, v39, 0LL);
  v37 = v36;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v37, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v37, v8 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v37, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v37, v8 * constantMax, 0LL);
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v35 = v37;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v40, &v35, 0LL);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_61:
    sub_B5D69C(go_above_cardScaler, v6);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v36, v41, 0LL);
  v37 = v36;
  v32 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v37, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v37, v8 * v32, 0LL);
  v33 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v37, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v37, v8 * v33, 0LL);
  v42.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v34 = v37;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v42, &v34, 0LL);
}