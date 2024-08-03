void __fastcall SummonEffectAspectSetComponent___ctor(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonEffectAspectSetComponent__SetStartSize(
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
  UnityEngine_ParticleSystem_MainModule_o v10; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v11; // 0:x0.8

  memset(&v8, 0, sizeof(v8));
  if ( !particle )
    sub_1B64324(this);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(particle, 0LL).fields.m_ParticleSystem;
  v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v7, v10, 0LL);
  v8 = v7;
  constant = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v8, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constant(&v8, constant * aspect, 0LL);
  v11.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v6 = v8;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v11, &v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonEffectAspectSetComponent__Start(SummonEffectAspectSetComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s8
  int32_t v5; // w20
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v8; // s9
  float v9; // s1
  float v10; // s10
  float v11; // s2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w20
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // w20
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x2
  int32_t v24; // w20
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x2
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

  if ( (byte_49FD7AE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    byte_49FD7AE = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v34, 0, sizeof(v34));
  width = UnityEngine_Screen__get_width(0LL);
  v4 = 1.0;
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) < 1.7778 )
  {
    v5 = UnityEngine_Screen__get_width(0LL);
    v4 = (float)((float)v5 / (float)UnityEngine_Screen__get_height(0LL)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v8 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v10 = v9;
  *(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v40.fields.z = v4 * v11;
  v40.fields.y = v4 * v10;
  v40.fields.x = v4 * v8;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v40, 0LL);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)go_above_cardScaler,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)Component_object,
    (UnityEngine_ParticleSystem_o *)Component_object,
    v4,
    v13);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v14 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
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
            v15 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v15,
              (UnityEngine_ParticleSystem_o *)v15,
              v4,
              v16);
            go_above_cardScaler = this->fields.go_msg_shine00;
            ++v14;
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
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v17,
    (UnityEngine_ParticleSystem_o *)v17,
    v4,
    v18);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v19 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
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
            v20 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v20,
              (UnityEngine_ParticleSystem_o *)v20,
              v4,
              v21);
            go_above_cardScaler = this->fields.go_msg_shine01;
            ++v19;
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
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v22 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v22,
    (UnityEngine_ParticleSystem_o *)v22,
    v4,
    v23);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v24 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
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
            v25 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v25,
              (UnityEngine_ParticleSystem_o *)v25,
              v4,
              v26);
            go_above_cardScaler = this->fields.go_msg_shine02;
            ++v24;
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
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v36.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v33, v36, 0LL);
  v34 = v33;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v34, v4 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v34, v4 * constantMax, 0LL);
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v32 = v34;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v37, &v32, 0LL);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_54:
    sub_1B64324(go_above_cardScaler);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v33, v38, 0LL);
  v34 = v33;
  v29 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v34, v4 * v29, 0LL);
  v30 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v34, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v34, v4 * v30, 0LL);
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v31 = v34;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v39, &v31, 0LL);
}