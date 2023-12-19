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
  UnityEngine_Transform_o *v8; // x0
  float v9; // s8
  float v10; // s1
  UnityEngine_Transform_o *v11; // x0
  float v12; // s9
  float v13; // s2
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Transform_o *go_msg_shine00; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_ParticleSystem_o *Component_WebViewObject; // x0
  UnityEngine_ParticleSystem_o *v19; // x20
  float startSize; // s0
  UnityEngine_Transform_o *v21; // x0
  int32_t v22; // w20
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UnityEngine_ParticleSystem_o *v29; // x0
  UnityEngine_ParticleSystem_o *v30; // x21
  float v31; // s0
  UnityEngine_Transform_o *go_msg_shine01; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_ParticleSystem_o *v35; // x0
  UnityEngine_ParticleSystem_o *v36; // x20
  float v37; // s0
  UnityEngine_Transform_o *v38; // x0
  int32_t v39; // w20
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Transform_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_ParticleSystem_o *v46; // x0
  UnityEngine_ParticleSystem_o *v47; // x21
  float v48; // s0
  UnityEngine_Transform_o *go_msg_shine02; // x0
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_ParticleSystem_o *v52; // x0
  UnityEngine_ParticleSystem_o *v53; // x20
  float v54; // s0
  UnityEngine_Transform_o *v55; // x0
  int32_t v56; // w20
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Transform_o *v58; // x0
  UnityEngine_Transform_o *v59; // x0
  UnityEngine_Transform_o *v60; // x0
  UnityEngine_Transform_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_ParticleSystem_o *v63; // x0
  UnityEngine_ParticleSystem_o *v64; // x21
  float v65; // s0
  UnityEngine_ParticleSystem_o *ps_appear_border; // x0
  float constantMin; // s0
  float constantMax; // s0
  UnityEngine_ParticleSystem_o *ps_appear_lightburst2; // x0
  float v70; // s0
  float v71; // s0
  UnityEngine_ParticleSystem_MinMaxCurve_o v72; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v73; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v74; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v75; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v77; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v78; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v79; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v80; // 0:x0.8
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBFEA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    byte_40FBFEA = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v75, 0, sizeof(v75));
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
  v8 = this->fields.go_above_cardScaler;
  if ( !v8 )
    goto LABEL_61;
  v9 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localScale(v8, 0LL);
  v11 = this->fields.go_above_cardScaler;
  if ( !v11 )
    goto LABEL_61;
  v12 = v10;
  *(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localScale(v11, 0LL);
  v14 = this->fields.go_above_cardScaler;
  if ( !v14 )
    goto LABEL_61;
  v81.fields.z = v5 * v13;
  v81.fields.y = v5 * v12;
  v81.fields.x = v5 * v9;
  UnityEngine_Transform__set_localScale(v14, v81, 0LL);
  go_msg_shine00 = this->fields.go_msg_shine00;
  if ( !go_msg_shine00 )
    goto LABEL_61;
  Child = UnityEngine_Transform__GetChild(go_msg_shine00, 0, 0LL);
  if ( !Child )
    goto LABEL_61;
  v17 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
  if ( !v17 )
    goto LABEL_61;
  Component_WebViewObject = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v17,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !Component_WebViewObject )
    goto LABEL_61;
  v19 = Component_WebViewObject;
  startSize = UnityEngine_ParticleSystem__get_startSize(Component_WebViewObject, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v19, v5 * startSize, 0LL);
  v21 = this->fields.go_msg_shine00;
  if ( !v21 )
    goto LABEL_61;
  v22 = 0;
  while ( 1 )
  {
    v23 = UnityEngine_Transform__GetChild(v21, 0, 0LL);
    if ( !v23 )
      goto LABEL_61;
    v24 = UnityEngine_Transform__GetChild(v23, 0, 0LL);
    if ( !v24 )
      goto LABEL_61;
    if ( v22 >= UnityEngine_Transform__get_childCount(v24, 0LL) )
      break;
    v25 = this->fields.go_msg_shine00;
    if ( v25 )
    {
      v26 = UnityEngine_Transform__GetChild(v25, 0, 0LL);
      if ( v26 )
      {
        v27 = UnityEngine_Transform__GetChild(v26, 0, 0LL);
        if ( v27 )
        {
          v28 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v27, v22, 0LL);
          if ( v28 )
          {
            v29 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    v28,
                                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( v29 )
            {
              v30 = v29;
              v31 = UnityEngine_ParticleSystem__get_startSize(v29, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v30, v5 * v31, 0LL);
              v21 = this->fields.go_msg_shine00;
              ++v22;
              if ( v21 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  go_msg_shine01 = this->fields.go_msg_shine01;
  if ( !go_msg_shine01 )
    goto LABEL_61;
  v33 = UnityEngine_Transform__GetChild(go_msg_shine01, 0, 0LL);
  if ( !v33 )
    goto LABEL_61;
  v34 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v33, 0, 0LL);
  if ( !v34 )
    goto LABEL_61;
  v35 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v34,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !v35 )
    goto LABEL_61;
  v36 = v35;
  v37 = UnityEngine_ParticleSystem__get_startSize(v35, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v36, v5 * v37, 0LL);
  v38 = this->fields.go_msg_shine01;
  if ( !v38 )
    goto LABEL_61;
  v39 = 0;
  while ( 1 )
  {
    v40 = UnityEngine_Transform__GetChild(v38, 0, 0LL);
    if ( !v40 )
      goto LABEL_61;
    v41 = UnityEngine_Transform__GetChild(v40, 0, 0LL);
    if ( !v41 )
      goto LABEL_61;
    if ( v39 >= UnityEngine_Transform__get_childCount(v41, 0LL) )
      break;
    v42 = this->fields.go_msg_shine01;
    if ( v42 )
    {
      v43 = UnityEngine_Transform__GetChild(v42, 0, 0LL);
      if ( v43 )
      {
        v44 = UnityEngine_Transform__GetChild(v43, 0, 0LL);
        if ( v44 )
        {
          v45 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v44, v39, 0LL);
          if ( v45 )
          {
            v46 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    v45,
                                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( v46 )
            {
              v47 = v46;
              v48 = UnityEngine_ParticleSystem__get_startSize(v46, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v47, v5 * v48, 0LL);
              v38 = this->fields.go_msg_shine01;
              ++v39;
              if ( v38 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  go_msg_shine02 = this->fields.go_msg_shine02;
  if ( !go_msg_shine02 )
    goto LABEL_61;
  v50 = UnityEngine_Transform__GetChild(go_msg_shine02, 0, 0LL);
  if ( !v50 )
    goto LABEL_61;
  v51 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v50, 0, 0LL);
  if ( !v51 )
    goto LABEL_61;
  v52 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v51,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !v52 )
    goto LABEL_61;
  v53 = v52;
  v54 = UnityEngine_ParticleSystem__get_startSize(v52, 0LL);
  UnityEngine_ParticleSystem__set_startSize(v53, v5 * v54, 0LL);
  v55 = this->fields.go_msg_shine02;
  if ( !v55 )
    goto LABEL_61;
  v56 = 0;
  while ( 1 )
  {
    v57 = UnityEngine_Transform__GetChild(v55, 0, 0LL);
    if ( !v57 )
      goto LABEL_61;
    v58 = UnityEngine_Transform__GetChild(v57, 0, 0LL);
    if ( !v58 )
      goto LABEL_61;
    if ( v56 >= UnityEngine_Transform__get_childCount(v58, 0LL) )
      break;
    v59 = this->fields.go_msg_shine02;
    if ( v59 )
    {
      v60 = UnityEngine_Transform__GetChild(v59, 0, 0LL);
      if ( v60 )
      {
        v61 = UnityEngine_Transform__GetChild(v60, 0, 0LL);
        if ( v61 )
        {
          v62 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v61, v56, 0LL);
          if ( v62 )
          {
            v63 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    v62,
                                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            if ( v63 )
            {
              v64 = v63;
              v65 = UnityEngine_ParticleSystem__get_startSize(v63, 0LL);
              UnityEngine_ParticleSystem__set_startSize(v64, v5 * v65, 0LL);
              v55 = this->fields.go_msg_shine02;
              ++v56;
              if ( v55 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  ps_appear_border = this->fields.ps_appear_border;
  if ( !ps_appear_border )
    goto LABEL_61;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ps_appear_border, 0LL).fields.m_ParticleSystem;
  v77.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v74, v77, 0LL);
  v75 = v74;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v75, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v75, v5 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v75, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v75, v5 * constantMax, 0LL);
  v78.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v73 = v75;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v78, &v73, 0LL);
  ps_appear_lightburst2 = this->fields.ps_appear_lightburst2;
  if ( !ps_appear_lightburst2 )
LABEL_61:
    sub_B170D4();
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ps_appear_lightburst2, 0LL).fields.m_ParticleSystem;
  v79.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v74, v79, 0LL);
  v75 = v74;
  v70 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v75, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v75, v5 * v70, 0LL);
  v71 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v75, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v75, v5 * v71, 0LL);
  v80.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v72 = v75;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v80, &v72, 0LL);
}