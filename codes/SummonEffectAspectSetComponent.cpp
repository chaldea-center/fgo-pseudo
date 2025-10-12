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
    sub_1C32E7C(this);
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
  float v4; // s8
  int32_t v5; // w20
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v8; // s9
  float y; // s10
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
  UnityEngine_ParticleSystem_MainModule_o v25; // x0
  float constantMin; // s0
  float constantMax; // s0
  UnityEngine_ParticleSystem_MainModule_o v28; // x0
  UnityEngine_ParticleSystem_MainModule_o v29; // x0
  float v30; // s0
  float v31; // s0
  UnityEngine_ParticleSystem_MainModule_o v32; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v33; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C390B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    byte_4C390B5 = 1;
  }
  m_ParticleSystem = 0;
  memset(&v36, 0, sizeof(v36));
  width = UnityEngine_Screen__get_width(0);
  v4 = 1.0;
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0)) < 1.7778 )
  {
    v5 = UnityEngine_Screen__get_width(0);
    v4 = (float)((float)v5 / (float)UnityEngine_Screen__get_height(0)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v8 = *(float *)&localScale;
  v38 = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  y = v38.fields.y;
  v39 = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v40.fields.z = v4 * v39.fields.z;
  v40.fields.y = v4 * y;
  v40.fields.x = v4 * v8;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v40, 0);
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
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)Component_object,
    (UnityEngine_ParticleSystem_o *)Component_object,
    v4,
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
                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v13,
              (UnityEngine_ParticleSystem_o *)v13,
              v4,
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
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v15,
    (UnityEngine_ParticleSystem_o *)v15,
    v4,
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
                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v18,
              (UnityEngine_ParticleSystem_o *)v18,
              v4,
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
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v20,
    (UnityEngine_ParticleSystem_o *)v20,
    v4,
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
                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v23,
              (UnityEngine_ParticleSystem_o *)v23,
              v4,
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
  v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v35, v25, 0);
  v36 = v35;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v36, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v36, v4 * constantMin, 0);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v36, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v36, v4 * constantMax, 0);
  v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v34 = v36;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v28, &v34, 0);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_54:
    sub_1C32E7C(go_above_cardScaler);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0).fields.m_ParticleSystem;
  v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v35, v29, 0);
  v36 = v35;
  v30 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v36, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v36, v4 * v30, 0);
  v31 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v36, 0);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v36, v4 * v31, 0);
  v32.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v33 = v36;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v32, &v33, 0);
}