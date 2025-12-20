void SummonEffectAspectSetComponent___ctor(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SummonEffectAspectSetComponent__SetStartSize(
        SummonEffectAspectSetComponent_o *this,
        UnityEngine_ParticleSystem_o *particle,
        float aspect,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_MainModule_o v5; // x0
  float constant; // s0
  UnityEngine_ParticleSystem_MainModule_o v7; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v8; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v9; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v10; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+68h] [xbp-18h] BYREF

  memset(&v10, 0, sizeof(v10));
  if ( !particle )
    sub_1C942F0(this, 0);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(particle, 0).fields.m_ParticleSystem;
  v5.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v9, v5, 0);
  v10 = v9;
  constant = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v10, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constant(&v10, constant * aspect, 0);
  v7.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v8 = v10;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v7, &v8, 0);
}


void SummonEffectAspectSetComponent__Start(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  __int64 v4; // x1
  float v5; // s8
  int32_t v6; // w20
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v9; // s9
  float y; // s10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w20
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w20
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x2
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x2
  int32_t v23; // w20
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x2
  UnityEngine_ParticleSystem_MainModule_o v26; // x0
  float constantMin; // s0
  float constantMax; // s0
  UnityEngine_ParticleSystem_MainModule_o v29; // x0
  UnityEngine_ParticleSystem_MainModule_o v30; // x0
  float v31; // s0
  float v32; // s0
  UnityEngine_ParticleSystem_MainModule_o v33; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v37; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2DFB0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    byte_4D2DFB0 = 1;
  }
  m_ParticleSystem = 0;
  memset(&v37, 0, sizeof(v37));
  width = UnityEngine_Screen__get_width(0);
  v5 = 1.0;
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0)) < 1.7778 )
  {
    v6 = UnityEngine_Screen__get_width(0);
    v5 = (float)((float)v6 / (float)UnityEngine_Screen__get_height(0)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v9 = *(float *)&localScale;
  v39 = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  y = v39.fields.y;
  v40 = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v41.fields.z = v5 * v40.fields.z;
  v41.fields.y = v5 * y;
  v41.fields.x = v5 * v9;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v41, 0);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)go_above_cardScaler,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)Component_object,
    (UnityEngine_ParticleSystem_o *)Component_object,
    v5,
    v12);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v13 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v13 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0) )
      break;
    go_above_cardScaler = this->fields.go_msg_shine00;
    if ( go_above_cardScaler )
    {
      go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
      if ( go_above_cardScaler )
      {
        go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
        if ( go_above_cardScaler )
        {
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v13, 0);
          if ( go_above_cardScaler )
          {
            v14 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v14,
              (UnityEngine_ParticleSystem_o *)v14,
              v5,
              v15);
            go_above_cardScaler = this->fields.go_msg_shine00;
            ++v13;
            if ( go_above_cardScaler )
              continue;
          }
        }
      }
    }
    goto LABEL_54;
  }
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v16 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v16,
    (UnityEngine_ParticleSystem_o *)v16,
    v5,
    v17);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v18 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v18 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0) )
      break;
    go_above_cardScaler = this->fields.go_msg_shine01;
    if ( go_above_cardScaler )
    {
      go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
      if ( go_above_cardScaler )
      {
        go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
        if ( go_above_cardScaler )
        {
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v18, 0);
          if ( go_above_cardScaler )
          {
            v19 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v19,
              (UnityEngine_ParticleSystem_o *)v19,
              v5,
              v20);
            go_above_cardScaler = this->fields.go_msg_shine01;
            ++v18;
            if ( go_above_cardScaler )
              continue;
          }
        }
      }
    }
    goto LABEL_54;
  }
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v21 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v21,
    (UnityEngine_ParticleSystem_o *)v21,
    v5,
    v22);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v23 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v23 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0) )
      break;
    go_above_cardScaler = this->fields.go_msg_shine02;
    if ( go_above_cardScaler )
    {
      go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
      if ( go_above_cardScaler )
      {
        go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
        if ( go_above_cardScaler )
        {
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v23, 0);
          if ( go_above_cardScaler )
          {
            v24 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v24,
              (UnityEngine_ParticleSystem_o *)v24,
              v5,
              v25);
            go_above_cardScaler = this->fields.go_msg_shine02;
            ++v23;
            if ( go_above_cardScaler )
              continue;
          }
        }
      }
    }
    goto LABEL_54;
  }
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_border;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0).fields.m_ParticleSystem;
  v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v36, v26, 0);
  v37 = v36;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v37, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v37, v5 * constantMin, 0);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v37, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v37, v5 * constantMax, 0);
  v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v35 = v37;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v29, &v35, 0);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_54:
    sub_1C942F0(go_above_cardScaler, v4);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0).fields.m_ParticleSystem;
  v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v36, v30, 0);
  v37 = v36;
  v31 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v37, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v37, v5 * v31, 0);
  v32 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v37, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v37, v5 * v32, 0);
  v33.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v34 = v37;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v33, &v34, 0);
}