void __fastcall TitleInfoEventLeagueVsGaugeEffect___ctor(
        TitleInfoEventLeagueVsGaugeEffect_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GAUGE_SIZE_DEF = 0x3F666666427D999ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


double __fastcall TitleInfoEventLeagueVsGaugeEffect__ConvertPointToRate(
        TitleInfoEventLeagueVsGaugeEffect_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void __fastcall TitleInfoEventLeagueVsGaugeEffect__setup(
        TitleInfoEventLeagueVsGaugeEffect_o *this,
        int64_t point1,
        int64_t point2,
        bool isBoss,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsGaugeEffect_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  float v11; // s9
  float v12; // s8
  double v13; // d0
  struct UnityEngine_ParticleSystem_array *gaugeParticle; // x8
  unsigned int max_length; // w9
  struct UnityEngine_ParticleSystem_array *v16; // x8
  struct UnityEngine_ParticleSystem_array *v17; // x8
  struct UnityEngine_ParticleSystem_array *v18; // x8
  struct UnityEngine_ParticleSystem_array *v19; // x8
  float v20; // s9
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v23; // x8
  float v24; // s8
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 *v27; // x8
  struct UnityEngine_ParticleSystem_array *v28; // x8
  struct UnityEngine_ParticleSystem_array *v29; // x8
  struct UnityEngine_ParticleSystem_array *v30; // x8
  struct UnityEngine_ParticleSystem_array *v31; // x8
  float v32; // s9
  float v33; // s8
  UnityEngine_GameObject_o *v34; // x0
  struct UnityEngine_ParticleSystem_array *v35; // x8
  float v36; // s8
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Object_o *v38; // x20
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v40; // x8
  UnityEngine_Object_o *v41; // x20
  __int64 v42; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v43; // [xsp+0h] [xbp-1C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v44; // [xsp+20h] [xbp-1A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v45; // [xsp+40h] [xbp-180h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v46; // [xsp+60h] [xbp-160h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+80h] [xbp-140h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+A0h] [xbp-120h] BYREF
  struct UnityEngine_ParticleSystem_o *v49; // [xsp+C8h] [xbp-F8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v50; // [xsp+D0h] [xbp-F0h] BYREF
  struct UnityEngine_ParticleSystem_o *v51; // [xsp+F8h] [xbp-C8h] BYREF
  struct UnityEngine_ParticleSystem_o *v52; // [xsp+100h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v53; // [xsp+108h] [xbp-B8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v54; // [xsp+110h] [xbp-B0h] BYREF
  struct UnityEngine_ParticleSystem_o *v55; // [xsp+138h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v56; // [xsp+140h] [xbp-80h] BYREF
  struct UnityEngine_ParticleSystem_o *v57; // [xsp+160h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v58; // [xsp+168h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+178h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v60; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v61; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v62; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v63; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v64; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v65; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v66; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v67; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v68; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v69; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v70; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v71; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v72; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v73; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v74; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v75; // 0:x0.8
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_418BA0D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, point1);
    sub_B2C35C(&StringLiteral_16845/*"bit_vs_gauge_part_1"*/, v9);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_B2C35C(&StringLiteral_16846/*"bit_vs_gauge_part_2"*/, v10);
    byte_418BA0D = 1;
  }
  m_ParticleSystem = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  memset(&v56, 0, sizeof(v56));
  memset(&v54, 0, sizeof(v54));
  memset(&v50, 0, sizeof(v50));
  memset(&v48, 0, sizeof(v48));
  if ( point1 == point2 )
  {
    v11 = 0.5;
    v12 = 0.5;
  }
  else
  {
    v13 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v12 = v13;
    v11 = 1.0 - v13;
  }
  gaugeParticle = v8->fields.gaugeParticle;
  if ( !gaugeParticle )
    goto LABEL_69;
  max_length = gaugeParticle->max_length;
  if ( isBoss )
  {
    if ( max_length > 3 )
    {
      this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[3];
      if ( !this )
        goto LABEL_69;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v60.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v60, 0LL);
      scale.fields.x = v12 + v12;
      v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v61, scale, 0LL);
      v16 = v8->fields.gaugeParticle;
      if ( !v16 )
        goto LABEL_69;
      if ( v16->max_length > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v16->m_Items[2];
        if ( !this )
          goto LABEL_69;
        v58 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
        v62.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v58;
        v77 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v62, 0LL);
        v77.fields.x = v11 + v11;
        v63.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v58;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v63, v77, 0LL);
        v17 = v8->fields.gaugeParticle;
        if ( !v17 )
          goto LABEL_69;
        if ( v17->max_length > 3 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v17->m_Items[3];
          if ( !this )
            goto LABEL_69;
          v57 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
          v64.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v57;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v47, v64, 0LL);
          v56 = v47;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v56, v12 * 35.0, 0LL);
          v65.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v57;
          v46 = v56;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v65, &v46, 0LL);
          v18 = v8->fields.gaugeParticle;
          if ( !v18 )
            goto LABEL_69;
          if ( v18->max_length > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v18->m_Items[2];
            if ( !this )
              goto LABEL_69;
            v55 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
            v66.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v47, v66, 0LL);
            v54 = v47;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v54, v11 * 35.0, 0LL);
            v67.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
            v45 = v54;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v67, &v45, 0LL);
            v19 = v8->fields.gaugeParticle;
            if ( !v19 )
              goto LABEL_69;
            if ( v19->max_length > 3 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v19->m_Items[3];
              if ( !this )
                goto LABEL_69;
              v20 = v11 * 10.0;
              v21 = (float)((float)(v20 + (float)((float)(v12 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(gameObject, v21, 0LL);
              v23 = v8->fields.gaugeParticle;
              if ( !v23 )
                goto LABEL_69;
              if ( v23->max_length > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v23->m_Items[2];
                if ( !this )
                  goto LABEL_69;
                v24 = (float)((float)(v20 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(v25, v24, 0LL);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0LL, 0LL) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v27 = &StringLiteral_16846/*"bit_vs_gauge_part_2"*/;
LABEL_54:
                    SimpleAnimation__Play_16486620((SimpleAnimation_o *)this, (System_String_o *)*v27, 0LL);
                    return;
                  }
                  goto LABEL_69;
                }
                gaugeAnim = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(gaugeAnim, 0LL, 0LL) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
                  if ( !this )
                    goto LABEL_69;
                  v40 = &StringLiteral_16846/*"bit_vs_gauge_part_2"*/;
LABEL_67:
                  UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)this, (System_String_o *)*v40, 0LL);
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
LABEL_70:
    v42 = sub_B2C460(this);
    sub_B2C400(v42, 0LL);
  }
  if ( max_length <= 1 )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v53 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v68.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v53;
  v78 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v68, 0LL);
  v78.fields.x = v12 + v12;
  v69.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v53;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v69, v78, 0LL);
  v28 = v8->fields.gaugeParticle;
  if ( !v28 )
    goto LABEL_69;
  if ( !v28->max_length )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v28->m_Items[0];
  if ( !this )
    goto LABEL_69;
  v52 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v70.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
  v79 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v70, 0LL);
  v79.fields.x = v11 + v11;
  v71.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v71, v79, 0LL);
  v29 = v8->fields.gaugeParticle;
  if ( !v29 )
    goto LABEL_69;
  if ( v29->max_length <= 1 )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v29->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v51 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v72.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v51;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v47, v72, 0LL);
  v50 = v47;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v50, v12 * 35.0, 0LL);
  v73.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v51;
  v44 = v50;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v73, &v44, 0LL);
  v30 = v8->fields.gaugeParticle;
  if ( !v30 )
    goto LABEL_69;
  if ( !v30->max_length )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v30->m_Items[0];
  if ( !this )
    goto LABEL_69;
  v49 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v74.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v49;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v47, v74, 0LL);
  v48 = v47;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v48, v11 * 35.0, 0LL);
  v75.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v49;
  v43 = v48;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v75, &v43, 0LL);
  v31 = v8->fields.gaugeParticle;
  if ( !v31 )
    goto LABEL_69;
  if ( v31->max_length <= 1 )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v31->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v32 = v11 * 10.0;
  v33 = (float)((float)(v32 + (float)((float)(v12 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v34, v33, 0LL);
  v35 = v8->fields.gaugeParticle;
  if ( !v35 )
    goto LABEL_69;
  if ( !v35->max_length )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v35->m_Items[0];
  if ( !this )
    goto LABEL_69;
  v36 = (float)((float)(v32 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v37, v36, 0LL);
  v38 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v27 = &StringLiteral_16845/*"bit_vs_gauge_part_1"*/;
      goto LABEL_54;
    }
LABEL_69:
    sub_B2C434(this, point1);
  }
  v41 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_69;
    v40 = &StringLiteral_16845/*"bit_vs_gauge_part_1"*/;
    goto LABEL_67;
  }
}