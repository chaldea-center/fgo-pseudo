void TitleInfoEventLeagueVsGaugeEffect___ctor(TitleInfoEventLeagueVsGaugeEffect_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GAUGE_SIZE_DEF = 0x3F666666427D999ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


double TitleInfoEventLeagueVsGaugeEffect__ConvertPointToRate(
        TitleInfoEventLeagueVsGaugeEffect_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void TitleInfoEventLeagueVsGaugeEffect__setup(
        TitleInfoEventLeagueVsGaugeEffect_o *this,
        int64_t point1,
        int64_t point2,
        bool isBoss,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsGaugeEffect_o *v8; // x19
  float v9; // s8
  float v10; // s9
  double v11; // d0
  struct UnityEngine_ParticleSystem_array *gaugeParticle; // x8
  unsigned int max_length; // w9
  UnityEngine_ParticleSystem_ShapeModule_o v14; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v15; // x0
  struct UnityEngine_ParticleSystem_array *v16; // x8
  UnityEngine_ParticleSystem_ShapeModule_o v17; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v18; // x0
  struct UnityEngine_ParticleSystem_array *v19; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v20; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v21; // x0
  struct UnityEngine_ParticleSystem_array *v22; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v23; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v24; // x0
  struct UnityEngine_ParticleSystem_array *v25; // x8
  float v26; // s10
  float v27; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v29; // x8
  float v30; // s8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 *v33; // x8
  UnityEngine_ParticleSystem_ShapeModule_o v34; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v35; // x0
  struct UnityEngine_ParticleSystem_array *v36; // x8
  UnityEngine_ParticleSystem_ShapeModule_o v37; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v38; // x0
  struct UnityEngine_ParticleSystem_array *v39; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v40; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v41; // x0
  struct UnityEngine_ParticleSystem_array *v42; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v43; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v44; // x0
  struct UnityEngine_ParticleSystem_array *v45; // x8
  float v46; // s10
  float v47; // s8
  UnityEngine_GameObject_o *v48; // x0
  struct UnityEngine_ParticleSystem_array *v49; // x8
  float v50; // s8
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Object_o *v52; // x20
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v54; // x8
  UnityEngine_Object_o *v55; // x20
  UnityEngine_ParticleSystem_MinMaxCurve_o v56; // [xsp+0h] [xbp-1D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v57; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v58; // [xsp+40h] [xbp-190h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v60; // [xsp+80h] [xbp-150h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v61; // [xsp+A0h] [xbp-130h] BYREF
  struct UnityEngine_ParticleSystem_o *v62; // [xsp+C8h] [xbp-108h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v63; // [xsp+D0h] [xbp-100h] BYREF
  struct UnityEngine_ParticleSystem_o *v64; // [xsp+F8h] [xbp-D8h] BYREF
  struct UnityEngine_ParticleSystem_o *v65; // [xsp+100h] [xbp-D0h] BYREF
  struct UnityEngine_ParticleSystem_o *v66; // [xsp+108h] [xbp-C8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v67; // [xsp+110h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v68; // [xsp+138h] [xbp-98h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v69; // [xsp+140h] [xbp-90h] BYREF
  struct UnityEngine_ParticleSystem_o *v70; // [xsp+168h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *v71; // [xsp+170h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+178h] [xbp-58h] BYREF
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4C359BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17286/*"bit_vs_gauge_part_1"*/);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_1C32C20(&StringLiteral_17287/*"bit_vs_gauge_part_2"*/);
    byte_4C359BB = 1;
  }
  v9 = 0.5;
  v10 = 0.5;
  v71 = 0;
  m_ParticleSystem = 0;
  v70 = 0;
  v68 = 0;
  v65 = 0;
  v66 = 0;
  v64 = 0;
  v62 = 0;
  memset(&v69, 0, sizeof(v69));
  memset(&v67, 0, sizeof(v67));
  memset(&v63, 0, sizeof(v63));
  memset(&v61, 0, sizeof(v61));
  if ( point1 != point2 )
  {
    v11 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v10 = v11;
    v9 = 1.0 - v11;
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
      m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v14, 0);
      scale.fields.x = v10 + v10;
      v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v15, scale, 0);
      v16 = v8->fields.gaugeParticle;
      if ( !v16 )
        goto LABEL_64;
      if ( LODWORD(v16->max_length) > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v16->m_Items[2];
        if ( !this )
          goto LABEL_64;
        v71 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
        v17.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v71;
        v74 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v17, 0);
        v74.fields.x = v9 + v9;
        v18.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v71;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v18, v74, 0);
        v19 = v8->fields.gaugeParticle;
        if ( !v19 )
          goto LABEL_64;
        if ( LODWORD(v19->max_length) > 3 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v19->m_Items[3];
          if ( !this )
            goto LABEL_64;
          v70 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
          v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v70;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v20, 0);
          v69 = v60;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v69, v10 * 35.0, 0);
          v21.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v70;
          v59 = v69;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v21, &v59, 0);
          v22 = v8->fields.gaugeParticle;
          if ( !v22 )
            goto LABEL_64;
          if ( LODWORD(v22->max_length) > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v22->m_Items[2];
            if ( !this )
              goto LABEL_64;
            v68 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
            v23.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v68;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v23, 0);
            v67 = v60;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v67, v9 * 35.0, 0);
            v24.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v68;
            v58 = v67;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v24, &v58, 0);
            v25 = v8->fields.gaugeParticle;
            if ( !v25 )
              goto LABEL_64;
            if ( LODWORD(v25->max_length) > 3 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v25->m_Items[3];
              if ( !this )
                goto LABEL_64;
              v26 = v9 * 10.0;
              v27 = (float)((float)((float)(v9 * 10.0) + (float)((float)(v10 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(gameObject, v27, 0);
              v29 = v8->fields.gaugeParticle;
              if ( !v29 )
                goto LABEL_64;
              if ( LODWORD(v29->max_length) > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v29->m_Items[2];
                if ( !this )
                  goto LABEL_64;
                v30 = (float)((float)(v26 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(v31, v30, 0);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v33 = &StringLiteral_17287/*"bit_vs_gauge_part_2"*/;
LABEL_51:
                    SimpleAnimation__Play_66464300((SimpleAnimation_o *)this, (System_String_o *)*v33, 0);
                    return;
                  }
                  goto LABEL_64;
                }
                gaugeAnim = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(gaugeAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
                  if ( !this )
                    goto LABEL_64;
                  v54 = &StringLiteral_17287/*"bit_vs_gauge_part_2"*/;
LABEL_62:
                  UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)this, (System_String_o *)*v54, 0);
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
    sub_1C32E84(this);
  }
  if ( max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v66 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v66;
  v75 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v34, 0);
  v75.fields.x = v10 + v10;
  v35.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v66;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v35, v75, 0);
  v36 = v8->fields.gaugeParticle;
  if ( !v36 )
    goto LABEL_64;
  if ( !LODWORD(v36->max_length) )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v36->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v65 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v65;
  v76 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v37, 0);
  v76.fields.x = v9 + v9;
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v65;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v38, v76, 0);
  v39 = v8->fields.gaugeParticle;
  if ( !v39 )
    goto LABEL_64;
  if ( LODWORD(v39->max_length) <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v39->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v64 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v64;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v40, 0);
  v63 = v60;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v63, v10 * 35.0, 0);
  v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v64;
  v57 = v63;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v41, &v57, 0);
  v42 = v8->fields.gaugeParticle;
  if ( !v42 )
    goto LABEL_64;
  if ( !LODWORD(v42->max_length) )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v42->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v62 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v43.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v62;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v43, 0);
  v61 = v60;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v61, v9 * 35.0, 0);
  v44.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v62;
  v56 = v61;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v44, &v56, 0);
  v45 = v8->fields.gaugeParticle;
  if ( !v45 )
    goto LABEL_64;
  if ( LODWORD(v45->max_length) <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v45->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v46 = v9 * 10.0;
  v47 = (float)((float)((float)(v9 * 10.0) + (float)((float)(v10 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v48, v47, 0);
  v49 = v8->fields.gaugeParticle;
  if ( !v49 )
    goto LABEL_64;
  if ( !LODWORD(v49->max_length) )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v49->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v50 = (float)((float)(v46 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v51, v50, 0);
  v52 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v33 = &StringLiteral_17286/*"bit_vs_gauge_part_1"*/;
      goto LABEL_51;
    }
LABEL_64:
    sub_1C32E7C(this);
  }
  v55 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_64;
    v54 = &StringLiteral_17286/*"bit_vs_gauge_part_1"*/;
    goto LABEL_62;
  }
}