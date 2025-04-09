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
    sub_1B4D1EC(this, 0LL);
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
  __int64 v4; // x1
  float v5; // s8
  int32_t v6; // w20
  UnityEngine_Transform_o *go_above_cardScaler; // x0
  unsigned int localScale; // s0
  float v9; // s9
  float v10; // s1
  float v11; // s10
  float v12; // s2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w20
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x2
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // w20
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x2
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

  if ( (byte_49BC367 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    byte_49BC367 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v35, 0, sizeof(v35));
  width = UnityEngine_Screen__get_width(0LL);
  v5 = 1.0;
  if ( (float)((float)width / (float)UnityEngine_Screen__get_height(0LL)) < 1.7778 )
  {
    v6 = UnityEngine_Screen__get_width(0LL);
    v5 = (float)((float)v6 / (float)UnityEngine_Screen__get_height(0LL)) / 1.7778;
  }
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v9 = *(float *)&localScale;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v11 = v10;
  *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localScale(go_above_cardScaler, 0LL);
  go_above_cardScaler = this->fields.go_above_cardScaler;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v41.fields.z = v5 * v12;
  v41.fields.y = v5 * v11;
  v41.fields.x = v5 * v9;
  UnityEngine_Transform__set_localScale(go_above_cardScaler, v41, 0LL);
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
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)Component_object,
    (UnityEngine_ParticleSystem_o *)Component_object,
    v5,
    v14);
  go_above_cardScaler = this->fields.go_msg_shine00;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v15 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
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
            v16 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v16,
              (UnityEngine_ParticleSystem_o *)v16,
              v5,
              v17);
            go_above_cardScaler = this->fields.go_msg_shine00;
            ++v15;
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
  v18 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v18,
    (UnityEngine_ParticleSystem_o *)v18,
    v5,
    v19);
  go_above_cardScaler = this->fields.go_msg_shine01;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v20 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
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
            v21 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v21,
              (UnityEngine_ParticleSystem_o *)v21,
              v5,
              v22);
            go_above_cardScaler = this->fields.go_msg_shine01;
            ++v20;
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
  v23 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)go_above_cardScaler,
          (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  SummonEffectAspectSetComponent__SetStartSize(
    (SummonEffectAspectSetComponent_o *)v23,
    (UnityEngine_ParticleSystem_o *)v23,
    v5,
    v24);
  go_above_cardScaler = this->fields.go_msg_shine02;
  if ( !go_above_cardScaler )
    goto LABEL_54;
  v25 = 0;
  while ( 1 )
  {
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
    go_above_cardScaler = UnityEngine_Transform__GetChild(go_above_cardScaler, 0, 0LL);
    if ( !go_above_cardScaler )
      goto LABEL_54;
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
            v26 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)go_above_cardScaler,
                    (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
            SummonEffectAspectSetComponent__SetStartSize(
              (SummonEffectAspectSetComponent_o *)v26,
              (UnityEngine_ParticleSystem_o *)v26,
              v5,
              v27);
            go_above_cardScaler = this->fields.go_msg_shine02;
            ++v25;
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
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v34, v37, 0LL);
  v35 = v34;
  constantMin = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v35, v5 * constantMin, 0LL);
  constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v35, v5 * constantMax, 0LL);
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v33 = v35;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v38, &v33, 0LL);
  go_above_cardScaler = (UnityEngine_Transform_o *)this->fields.ps_appear_lightburst2;
  if ( !go_above_cardScaler )
LABEL_54:
    sub_1B4D1EC(go_above_cardScaler, v4);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)go_above_cardScaler, 0LL).fields.m_ParticleSystem;
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&v34, v39, 0LL);
  v35 = v34;
  v30 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin(&v35, v5 * v30, 0LL);
  v31 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v35, 0LL);
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v35, v5 * v31, 0LL);
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v32 = v35;
  UnityEngine_ParticleSystem_MainModule__set_startSize(v40, &v32, 0LL);
}