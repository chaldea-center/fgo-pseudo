void __fastcall SummonEffectAspectSetComponent___ctor(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectAspectSetComponent__Start(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  int32_t v4; // w20
  float v5; // s10
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v8; // s8
  float v9; // s1
  float v10; // s9
  float v11; // s2
  UnityEngine_ParticleSystem_o *v12; // x20
  float startSize; // s0
  int32_t v14; // w20
  UnityEngine_ParticleSystem_o *v15; // x21
  float v16; // s0
  UnityEngine_ParticleSystem_o *v17; // x20
  float v18; // s0
  int32_t v19; // w20
  UnityEngine_ParticleSystem_o *v20; // x21
  float v21; // s0
  UnityEngine_ParticleSystem_o *v22; // x20
  float v23; // s0
  int32_t v24; // w20
  UnityEngine_ParticleSystem_o *v25; // x21
  float v26; // s0
  float constantMin; // s0
  float constantMax; // s0
  float v29; // s0
  float v30; // s0
  UnityEngine_ParticleSystem_MinMaxCurve_o v31; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v32; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v33; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v36; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v37; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v38; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v39; // 0:x0.8
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218474 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    byte_4218474 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v34, 0, sizeof(v34));
  width = UnityEngine_Screen__get_width(0LL);
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) >= 1.7778 )
  {
    v5 = 1.0;
  }
  else
  {
    v4 = UnityEngine_Screen__get_width(0LL);
    v5 = (float)((float)v4 / (float)UnityEngine_Screen__get_height(0LL)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v8 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v10 = v9;
  *(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v40.fields.z = v5 * v11;
  v40.fields.y = v5 * v10;
  v40.fields.x = v5 * v8;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v40, 0LL);
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
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v12 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  startSize = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v12, v5 * startSize, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v14 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v14 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v14, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v15 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v16 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v15, v5 * v16, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine00;
              ++v14;
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
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v17 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  v18 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v17, v5 * v18, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v19 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v19 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v19, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v20 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v21 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v20, v5 * v21, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine01;
              ++v19;
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
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v22 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  v23 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v22, v5 * v23, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v24 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v24 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v24, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v25 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v26 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v25, v5 * v26, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine02;
              ++v24;
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
  v36.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v33, v36, 0LL);
  v34 = v33;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v34, v5 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v34, v5 * constantMax, 0LL);
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v32 = v34;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v37, &v32, 0LL);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_61:
    sub_B0D97C(go_above_cardScaler);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v33, v38, 0LL);
  v34 = v33;
  v29 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v34, v5 * v29, 0LL);
  v30 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v34, v5 * v30, 0LL);
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v31 = v34;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v39, &v31, 0LL);
}