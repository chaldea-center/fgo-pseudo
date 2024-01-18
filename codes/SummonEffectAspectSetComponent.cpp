void __fastcall SummonEffectAspectSetComponent___ctor(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectAspectSetComponent__Start(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  __int64 v4; // x1
  int32_t v5; // w20
  float v6; // s10
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v9; // s8
  float v10; // s1
  float v11; // s9
  float v12; // s2
  UnityEngine_ParticleSystem_o *v13; // x20
  float startSize; // s0
  int32_t v15; // w20
  UnityEngine_ParticleSystem_o *v16; // x21
  float v17; // s0
  UnityEngine_ParticleSystem_o *v18; // x20
  float v19; // s0
  int32_t v20; // w20
  UnityEngine_ParticleSystem_o *v21; // x21
  float v22; // s0
  UnityEngine_ParticleSystem_o *v23; // x20
  float v24; // s0
  int32_t v25; // w20
  UnityEngine_ParticleSystem_o *v26; // x21
  float v27; // s0
  float constantMin; // s0
  float constantMax; // s0
  float v30; // s0
  float v31; // s0
  UnityEngine_ParticleSystem_MinMaxCurve_o v32; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v33; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v37; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v38; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v39; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v40; // 0:x0.8
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189AE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    byte_4189AE8 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v35, 0, sizeof(v35));
  width = UnityEngine_Screen__get_width(0LL);
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) >= 1.7778 )
  {
    v6 = 1.0;
  }
  else
  {
    v5 = UnityEngine_Screen__get_width(0LL);
    v6 = (float)((float)v5 / (float)UnityEngine_Screen__get_height(0LL)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v9 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v11 = v10;
  *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v41.fields.z = v6 * v12;
  v41.fields.y = v6 * v11;
  v41.fields.x = v6 * v9;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v41, 0LL);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v13 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  startSize = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v13, v6 * startSize, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v15 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v15 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v15, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v16 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v17 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v16, v6 * v17, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine00;
              ++v15;
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v18 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  v19 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v18, v6 * v19, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v20 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v20 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v20, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v21 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v22 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v21, v6 * v22, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine01;
              ++v20;
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v23 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
  v24 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v23, v6 * v24, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_61;
  v25 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_61;
    if ( v25 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v25, 0LL);
          if ( go_above_cardScaler )
          {
            go_above_cardScaler = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)go_above_cardScaler,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( go_above_cardScaler )
            {
              v26 = (UnityEngine_ParticleSystem_o *)go_above_cardScaler;
              v27 = UnityEngine_ParticleSystem__get_startSize((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v26, v6 * v27, 0LL);
              go_above_cardScaler = this->fields.go_msg_shine02;
              ++v25;
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
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v34, v37, 0LL);
  v35 = v34;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v35, v6 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v35, v6 * constantMax, 0LL);
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v33 = v35;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v38, &v33, 0LL);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_61:
    sub_B2C434(go_above_cardScaler, v4);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v34, v39, 0LL);
  v35 = v34;
  v30 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v35, v6 * v30, 0LL);
  v31 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v35, v6 * v31, 0LL);
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v32 = v35;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v40, &v32, 0LL);
}