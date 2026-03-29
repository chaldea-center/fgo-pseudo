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
  float constant; // s0
  UnityEngine_ParticleSystem_MinMaxCurve_o v6; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v7; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v8; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+68h] [xbp-18h] BYREF

  memset(&v8, 0, sizeof(v8));
  if ( !particle )
    sub_1C93D2C(this, 0);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(particle, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(
    &v7,
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    0);
  v8 = v7;
  constant = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v8, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constant(&v8, constant * aspect, 0);
  v6 = v8;
  UnityEngine_ParticleSystem_MainModule__set_startSize(
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    &v6,
    0);
}


void SummonEffectAspectSetComponent__Start(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  __int64 v4; // x1
  float v5; // s8
  int32_t v6; // w20
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  float v8; // s9
  float v9; // s10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w20
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x2
  int32_t v22; // w20
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  float constantMin; // s0
  float constantMax; // s0
  float v27; // s0
  float v28; // s0
  unsigned int localScale; // s0
  float y; // s1
  float z; // s2
  UnityEngine_ParticleSystem_MinMaxCurve_o v32; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v33; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D320A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    byte_4D320A1 = 1;
  }
  m_ParticleSystem = 0;
  memset(&v35, 0, sizeof(v35));
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
  v8 = *(float *)&localScale;
  y = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0).fields.y;
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v9 = y;
  z = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0).fields.z;
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v37.fields.z = v5 * z;
  v37.fields.y = v5 * v9;
  v37.fields.x = v5 * v8;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v37, 0);
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
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)Component_object,
    (UnityEngine_ParticleSystem_o *)Component_object,
    v5,
    v11);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v12 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v12 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v12, 0);
          if ( go_above_cardScaler )
          {
            v13 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v13,
              (UnityEngine_ParticleSystem_o *)v13,
              v5,
              v14);
            go_above_cardScaler = this->fields.go_msg_shine00;
            ++v12;
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
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v15,
    (UnityEngine_ParticleSystem_o *)v15,
    v5,
    v16);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v17 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v17 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v17, 0);
          if ( go_above_cardScaler )
          {
            v18 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v18,
              (UnityEngine_ParticleSystem_o *)v18,
              v5,
              v19);
            go_above_cardScaler = this->fields.go_msg_shine01;
            ++v17;
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
  v20 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v20,
    (UnityEngine_ParticleSystem_o *)v20,
    v5,
    v21);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v22 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v22 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v22, 0);
          if ( go_above_cardScaler )
          {
            v23 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v23,
              (UnityEngine_ParticleSystem_o *)v23,
              v5,
              v24);
            go_above_cardScaler = this->fields.go_msg_shine02;
            ++v22;
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
  UnityEngine_ParticleSystem_MainModule__get_startSize(
    &v34,
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    0);
  v35 = v34;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v35, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v35, v5 * constantMin, 0);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v35, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v35, v5 * constantMax, 0);
  v33 = v35;
  UnityEngine_ParticleSystem_MainModule__set_startSize(
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    &v33,
    0);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_54:
    sub_1C93D2C(go_above_cardScaler, v4);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(
    &v34,
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    0);
  v35 = v34;
  v27 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v35, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v35, v5 * v27, 0);
  v28 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v35, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v35, v5 * v28, 0);
  v32 = v35;
  UnityEngine_ParticleSystem_MainModule__set_startSize(
    (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
    &v32,
    0);
}