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
  struct UnityEngine_ParticleSystem_array *v14; // x8
  struct UnityEngine_ParticleSystem_array *v15; // x8
  struct UnityEngine_ParticleSystem_array *v16; // x8
  struct UnityEngine_ParticleSystem_array *v17; // x8
  float v18; // s10
  float v19; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v21; // x8
  float v22; // s8
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 *v25; // x8
  struct UnityEngine_ParticleSystem_array *v26; // x8
  struct UnityEngine_ParticleSystem_array *v27; // x8
  struct UnityEngine_ParticleSystem_array *v28; // x8
  struct UnityEngine_ParticleSystem_array *v29; // x8
  float v30; // s10
  float v31; // s8
  UnityEngine_GameObject_o *v32; // x0
  struct UnityEngine_ParticleSystem_array *v33; // x8
  float v34; // s8
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Object_o *v36; // x20
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v38; // x8
  UnityEngine_Object_o *v39; // x20
  UnityEngine_ParticleSystem_MinMaxCurve_o v40; // [xsp+0h] [xbp-1D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v41; // [xsp+20h] [xbp-1B0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v42; // [xsp+40h] [xbp-190h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v43; // [xsp+60h] [xbp-170h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v44; // [xsp+80h] [xbp-150h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v45; // [xsp+A0h] [xbp-130h] BYREF
  struct UnityEngine_ParticleSystem_o *v46; // [xsp+C8h] [xbp-108h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+D0h] [xbp-100h] BYREF
  struct UnityEngine_ParticleSystem_o *v48; // [xsp+F8h] [xbp-D8h] BYREF
  struct UnityEngine_ParticleSystem_o *v49; // [xsp+100h] [xbp-D0h] BYREF
  struct UnityEngine_ParticleSystem_o *v50; // [xsp+108h] [xbp-C8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v51; // [xsp+110h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v52; // [xsp+138h] [xbp-98h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+140h] [xbp-90h] BYREF
  struct UnityEngine_ParticleSystem_o *v54; // [xsp+168h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *v55; // [xsp+170h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+178h] [xbp-58h] BYREF
  UnityEngine_Vector3_o scale; // 0:kr00_12.12
  UnityEngine_Vector3_o v58; // 0:kr14_12.12
  UnityEngine_Vector3_o v59; // 0:kr20_12.12
  UnityEngine_Vector3_o v60; // 0:kr34_12.12
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4D2F1D5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17416/*"bit_vs_gauge_part_1"*/);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_1C93AD4(&StringLiteral_17417/*"bit_vs_gauge_part_2"*/);
    byte_4D2F1D5 = 1;
  }
  v9 = 0.5;
  v10 = 0.5;
  v55 = 0;
  m_ParticleSystem = 0;
  v54 = 0;
  v52 = 0;
  v49 = 0;
  v50 = 0;
  v48 = 0;
  v46 = 0;
  memset(&v53, 0, sizeof(v53));
  memset(&v51, 0, sizeof(v51));
  memset(&v47, 0, sizeof(v47));
  memset(&v45, 0, sizeof(v45));
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
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(
                (UnityEngine_ParticleSystem_ShapeModule_o)&m_ParticleSystem,
                0);
      v61.fields.y = scale.fields.y;
      v61.fields.z = scale.fields.z;
      v61.fields.x = v10 + v10;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(
        (UnityEngine_ParticleSystem_ShapeModule_o)&m_ParticleSystem,
        v61,
        0);
      v14 = v8->fields.gaugeParticle;
      if ( !v14 )
        goto LABEL_64;
      if ( LODWORD(v14->max_length) > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v14->m_Items[2];
        if ( !this )
          goto LABEL_64;
        v55 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
        v58 = UnityEngine_ParticleSystem_ShapeModule__get_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v55, 0);
        v62.fields.y = v58.fields.y;
        v62.fields.z = v58.fields.z;
        v62.fields.x = v9 + v9;
        UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v55, v62, 0);
        v15 = v8->fields.gaugeParticle;
        if ( !v15 )
          goto LABEL_64;
        if ( LODWORD(v15->max_length) > 3 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v15->m_Items[3];
          if ( !this )
            goto LABEL_64;
          v54 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
            &v44,
            (UnityEngine_ParticleSystem_EmissionModule_o)&v54,
            0);
          v53 = v44;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v53, v10 * 35.0, 0);
          v43 = v53;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
            (UnityEngine_ParticleSystem_EmissionModule_o)&v54,
            &v43,
            0);
          v16 = v8->fields.gaugeParticle;
          if ( !v16 )
            goto LABEL_64;
          if ( LODWORD(v16->max_length) > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v16->m_Items[2];
            if ( !this )
              goto LABEL_64;
            v52 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
              &v44,
              (UnityEngine_ParticleSystem_EmissionModule_o)&v52,
              0);
            v51 = v44;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v51, v9 * 35.0, 0);
            v42 = v51;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
              (UnityEngine_ParticleSystem_EmissionModule_o)&v52,
              &v42,
              0);
            v17 = v8->fields.gaugeParticle;
            if ( !v17 )
              goto LABEL_64;
            if ( LODWORD(v17->max_length) > 3 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v17->m_Items[3];
              if ( !this )
                goto LABEL_64;
              v18 = v9 * 10.0;
              v19 = (float)((float)((float)(v9 * 10.0) + (float)((float)(v10 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(gameObject, v19, 0);
              v21 = v8->fields.gaugeParticle;
              if ( !v21 )
                goto LABEL_64;
              if ( LODWORD(v21->max_length) > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v21->m_Items[2];
                if ( !this )
                  goto LABEL_64;
                v22 = (float)((float)(v18 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(v23, v22, 0);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v25 = &StringLiteral_17417/*"bit_vs_gauge_part_2"*/;
LABEL_51:
                    SimpleAnimation__Play_67370764((SimpleAnimation_o *)this, (System_String_o *)*v25, 0);
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
                  v38 = &StringLiteral_17417/*"bit_vs_gauge_part_2"*/;
LABEL_62:
                  UnityEngine_Animation__Play_71862428((UnityEngine_Animation_o *)this, (System_String_o *)*v38, 0);
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
    sub_1C93D34(this);
  }
  if ( max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v50 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v59 = UnityEngine_ParticleSystem_ShapeModule__get_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v50, 0);
  v63.fields.y = v59.fields.y;
  v63.fields.z = v59.fields.z;
  v63.fields.x = v10 + v10;
  UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v50, v63, 0);
  v26 = v8->fields.gaugeParticle;
  if ( !v26 )
    goto LABEL_64;
  if ( !LODWORD(v26->max_length) )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v26->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v49 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v60 = UnityEngine_ParticleSystem_ShapeModule__get_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v49, 0);
  v64.fields.y = v60.fields.y;
  v64.fields.z = v60.fields.z;
  v64.fields.x = v9 + v9;
  UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v49, v64, 0);
  v27 = v8->fields.gaugeParticle;
  if ( !v27 )
    goto LABEL_64;
  if ( LODWORD(v27->max_length) <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v27->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v48 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
    &v44,
    (UnityEngine_ParticleSystem_EmissionModule_o)&v48,
    0);
  v47 = v44;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v47, v10 * 35.0, 0);
  v41 = v47;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
    (UnityEngine_ParticleSystem_EmissionModule_o)&v48,
    &v41,
    0);
  v28 = v8->fields.gaugeParticle;
  if ( !v28 )
    goto LABEL_64;
  if ( !LODWORD(v28->max_length) )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v28->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v46 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
    &v44,
    (UnityEngine_ParticleSystem_EmissionModule_o)&v46,
    0);
  v45 = v44;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v45, v9 * 35.0, 0);
  v40 = v45;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
    (UnityEngine_ParticleSystem_EmissionModule_o)&v46,
    &v40,
    0);
  v29 = v8->fields.gaugeParticle;
  if ( !v29 )
    goto LABEL_64;
  if ( LODWORD(v29->max_length) <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v29->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v30 = v9 * 10.0;
  v31 = (float)((float)((float)(v9 * 10.0) + (float)((float)(v10 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v32, v31, 0);
  v33 = v8->fields.gaugeParticle;
  if ( !v33 )
    goto LABEL_64;
  if ( !LODWORD(v33->max_length) )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v33->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v34 = (float)((float)(v30 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v35, v34, 0);
  v36 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v36, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v25 = &StringLiteral_17416/*"bit_vs_gauge_part_1"*/;
      goto LABEL_51;
    }
LABEL_64:
    sub_1C93D2C(this, point1);
  }
  v39 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_64;
    v38 = &StringLiteral_17416/*"bit_vs_gauge_part_1"*/;
    goto LABEL_62;
  }
}