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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  int32_t width; // w20
  __int64 v5; // x1
  float v6; // s8
  int32_t v7; // w20
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v10; // s9
  float v11; // s1
  float v12; // s10
  float v13; // s2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w20
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w20
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // w20
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x2
  float constantMin; // s0
  float constantMax; // s0
  float v31; // s0
  float v32; // s0
  UnityEngine_ParticleSystem_MinMaxCurve_o v33; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+60h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v38; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v39; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v40; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v41; // 0:x0.8
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17601 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method, v2);
    byte_4B17601 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v36, 0, sizeof(v36));
  width = UnityEngine_Screen__get_width(0LL);
  v6 = 1.0;
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) < 1.7778 )
  {
    v7 = UnityEngine_Screen__get_width(0LL);
    v6 = (float)((float)v7 / (float)UnityEngine_Screen__get_height(0LL)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v10 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v12 = v11;
  *(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v42.fields.z = v6 * v13;
  v42.fields.y = v6 * v12;
  v42.fields.x = v6 * v10;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v42, 0LL);
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)Component_object,
    (UnityEngine_ParticleSystem_o *)Component_object,
    v6,
    v15);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v16 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v16 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v16, 0LL);
          if ( go_above_cardScaler )
          {
            v17 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v17,
              (UnityEngine_ParticleSystem_o *)v17,
              v6,
              v18);
            go_above_cardScaler = this->fields.go_msg_shine00;
            ++v16;
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
  v19 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v19,
    (UnityEngine_ParticleSystem_o *)v19,
    v6,
    v20);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v21 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v21 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v21, 0LL);
          if ( go_above_cardScaler )
          {
            v22 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v22,
              (UnityEngine_ParticleSystem_o *)v22,
              v6,
              v23);
            go_above_cardScaler = this->fields.go_msg_shine01;
            ++v21;
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
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v24,
    (UnityEngine_ParticleSystem_o *)v24,
    v6,
    v25);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v26 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    if ( v26 >= UnityEngine_Transform__get_childCount(go_above_cardScaler, 0LL) )
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
          go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, v26, 0LL);
          if ( go_above_cardScaler )
          {
            v27 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v27,
              (UnityEngine_ParticleSystem_o *)v27,
              v6,
              v28);
            go_above_cardScaler = this->fields.go_msg_shine02;
            ++v26;
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
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v35, v38, 0LL);
  v36 = v35;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v36, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v36, v6 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v36, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v36, v6 * constantMax, 0LL);
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v34 = v36;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v39, &v34, 0LL);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_54:
    sub_1BCAA3C(go_above_cardScaler, v5);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v35, v40, 0LL);
  v36 = v35;
  v31 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v36, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v36, v6 * v31, 0LL);
  v32 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v36, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v36, v6 * v32, 0LL);
  v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v33 = v36;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v41, &v33, 0LL);
}