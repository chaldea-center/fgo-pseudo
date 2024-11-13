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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  float v13; // s8
  float v14; // s9
  double v15; // d0
  struct UnityEngine_ParticleSystem_array *gaugeParticle; // x8
  unsigned int max_length; // w9
  struct UnityEngine_ParticleSystem_array *v18; // x8
  struct UnityEngine_ParticleSystem_array *v19; // x8
  struct UnityEngine_ParticleSystem_array *v20; // x8
  struct UnityEngine_ParticleSystem_array *v21; // x8
  float v22; // s10
  float v23; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v25; // x8
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 *v30; // x8
  struct UnityEngine_ParticleSystem_array *v31; // x8
  struct UnityEngine_ParticleSystem_array *v32; // x8
  struct UnityEngine_ParticleSystem_array *v33; // x8
  struct UnityEngine_ParticleSystem_array *v34; // x8
  float v35; // s10
  float v36; // s8
  UnityEngine_GameObject_o *v37; // x0
  struct UnityEngine_ParticleSystem_array *v38; // x8
  float v39; // s8
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v44; // x8
  UnityEngine_Object_o *v45; // x20
  UnityEngine_ParticleSystem_MinMaxCurve_o v46; // [xsp+0h] [xbp-1D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+40h] [xbp-190h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v49; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v50; // [xsp+80h] [xbp-150h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v51; // [xsp+A0h] [xbp-130h] BYREF
  struct UnityEngine_ParticleSystem_o *v52; // [xsp+C8h] [xbp-108h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+D0h] [xbp-100h] BYREF
  struct UnityEngine_ParticleSystem_o *v54; // [xsp+F8h] [xbp-D8h] BYREF
  struct UnityEngine_ParticleSystem_o *v55; // [xsp+100h] [xbp-D0h] BYREF
  struct UnityEngine_ParticleSystem_o *v56; // [xsp+108h] [xbp-C8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v57; // [xsp+110h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v58; // [xsp+138h] [xbp-98h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+140h] [xbp-90h] BYREF
  struct UnityEngine_ParticleSystem_o *v60; // [xsp+168h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *v61; // [xsp+170h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+178h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v63; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v64; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v65; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v66; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v67; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v68; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v69; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v70; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v71; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v72; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v73; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v74; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v75; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v76; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v77; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v78; // 0:x0.8
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4B14507 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, point1, point2);
    sub_1BCA7E0(&StringLiteral_17490/*"bit_vs_gauge_part_1"*/, v9, v10);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_1BCA7E0(&StringLiteral_17491/*"bit_vs_gauge_part_2"*/, v11, v12);
    byte_4B14507 = 1;
  }
  v13 = 0.5;
  v14 = 0.5;
  v61 = 0LL;
  m_ParticleSystem = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  memset(&v59, 0, sizeof(v59));
  memset(&v57, 0, sizeof(v57));
  memset(&v53, 0, sizeof(v53));
  memset(&v51, 0, sizeof(v51));
  if ( point1 != point2 )
  {
    v15 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v14 = v15;
    v13 = 1.0 - v15;
  }
  gaugeParticle = v8->fields.gaugeParticle;
  if ( !gaugeParticle )
    goto LABEL_64;
  max_length = gaugeParticle->max_length;
  if ( isBoss )
  {
    if ( max_length > 3 )
    {
      this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[3];
      if ( !this )
        goto LABEL_64;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v63.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v63, 0LL);
      scale.fields.x = v14 + v14;
      v64.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v64, scale, 0LL);
      v18 = v8->fields.gaugeParticle;
      if ( !v18 )
        goto LABEL_64;
      if ( v18->max_length > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v18->m_Items[2];
        if ( !this )
          goto LABEL_64;
        v61 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
        v65.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v61;
        v80 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v65, 0LL);
        v80.fields.x = v13 + v13;
        v66.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v61;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v66, v80, 0LL);
        v19 = v8->fields.gaugeParticle;
        if ( !v19 )
          goto LABEL_64;
        if ( v19->max_length > 3 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v19->m_Items[3];
          if ( !this )
            goto LABEL_64;
          v60 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
          v67.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v60;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v50, v67, 0LL);
          v59 = v50;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v59, v14 * 35.0, 0LL);
          v68.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v60;
          v49 = v59;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v68, &v49, 0LL);
          v20 = v8->fields.gaugeParticle;
          if ( !v20 )
            goto LABEL_64;
          if ( v20->max_length > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v20->m_Items[2];
            if ( !this )
              goto LABEL_64;
            v58 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
            v69.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v58;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v50, v69, 0LL);
            v57 = v50;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v57, v13 * 35.0, 0LL);
            v70.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v58;
            v48 = v57;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v70, &v48, 0LL);
            v21 = v8->fields.gaugeParticle;
            if ( !v21 )
              goto LABEL_64;
            if ( v21->max_length > 3 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v21->m_Items[3];
              if ( !this )
                goto LABEL_64;
              v22 = v13 * 10.0;
              v23 = (float)((float)((float)(v13 * 10.0) + (float)((float)(v14 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(gameObject, v23, 0LL);
              v25 = v8->fields.gaugeParticle;
              if ( !v25 )
                goto LABEL_64;
              if ( v25->max_length > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v25->m_Items[2];
                if ( !this )
                  goto LABEL_64;
                v26 = (float)((float)(v22 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(v27, v26, 0LL);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0LL, 0LL) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v30 = &StringLiteral_17491/*"bit_vs_gauge_part_2"*/;
LABEL_51:
                    SimpleAnimation__Play_64539336((SimpleAnimation_o *)this, (System_String_o *)*v30, 0LL);
                    return;
                  }
                  goto LABEL_64;
                }
                gaugeAnim = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point1);
                if ( UnityEngine_Object__op_Inequality(gaugeAnim, 0LL, 0LL) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
                  if ( !this )
                    goto LABEL_64;
                  v44 = &StringLiteral_17491/*"bit_vs_gauge_part_2"*/;
LABEL_62:
                  UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)this, (System_String_o *)*v44, 0LL);
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_1BCAA44(this, point1);
  }
  if ( max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v56 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v71.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v56;
  v81 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v71, 0LL);
  v81.fields.x = v14 + v14;
  v72.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v56;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v72, v81, 0LL);
  v31 = v8->fields.gaugeParticle;
  if ( !v31 )
    goto LABEL_64;
  if ( !v31->max_length )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v31->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v55 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v73.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
  v82 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v73, 0LL);
  v82.fields.x = v13 + v13;
  v74.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v74, v82, 0LL);
  v32 = v8->fields.gaugeParticle;
  if ( !v32 )
    goto LABEL_64;
  if ( v32->max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v32->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v54 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v75.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v54;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v50, v75, 0LL);
  v53 = v50;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v53, v14 * 35.0, 0LL);
  v76.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v54;
  v47 = v53;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v76, &v47, 0LL);
  v33 = v8->fields.gaugeParticle;
  if ( !v33 )
    goto LABEL_64;
  if ( !v33->max_length )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v33->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v52 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v77.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v50, v77, 0LL);
  v51 = v50;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v51, v13 * 35.0, 0LL);
  v78.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
  v46 = v51;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v78, &v46, 0LL);
  v34 = v8->fields.gaugeParticle;
  if ( !v34 )
    goto LABEL_64;
  if ( v34->max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v34->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v35 = v13 * 10.0;
  v36 = (float)((float)((float)(v13 * 10.0) + (float)((float)(v14 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v37, v36, 0LL);
  v38 = v8->fields.gaugeParticle;
  if ( !v38 )
    goto LABEL_64;
  if ( !v38->max_length )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v38->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v39 = (float)((float)(v35 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v40, v39, 0LL);
  v42 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v30 = &StringLiteral_17490/*"bit_vs_gauge_part_1"*/;
      goto LABEL_51;
    }
LABEL_64:
    sub_1BCAA3C(this, point1);
  }
  v45 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point1);
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_64;
    v44 = &StringLiteral_17490/*"bit_vs_gauge_part_1"*/;
    goto LABEL_62;
  }
}