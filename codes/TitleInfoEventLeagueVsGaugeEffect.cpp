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
  struct UnityEngine_ParticleSystem_array *v13; // x8
  struct UnityEngine_ParticleSystem_array *v14; // x8
  struct UnityEngine_ParticleSystem_array *v15; // x8
  struct UnityEngine_ParticleSystem_array *v16; // x8
  float v17; // s1
  float v18; // s9
  float v19; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v21; // x8
  float v22; // s8
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 v27; // x2
  __int64 *v28; // x8
  struct UnityEngine_ParticleSystem_array *v29; // x8
  struct UnityEngine_ParticleSystem_array *v30; // x8
  struct UnityEngine_ParticleSystem_array *v31; // x8
  struct UnityEngine_ParticleSystem_array *v32; // x8
  float v33; // s1
  float v34; // s9
  float v35; // s8
  UnityEngine_GameObject_o *v36; // x0
  struct UnityEngine_ParticleSystem_array *v37; // x8
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *v42; // x20
  __int64 v43; // x2
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v45; // x8
  UnityEngine_Object_o *v46; // x20
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+0h] [xbp-1E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+20h] [xbp-1C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v49; // [xsp+40h] [xbp-1A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v50; // [xsp+60h] [xbp-180h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v51; // [xsp+80h] [xbp-160h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v52; // [xsp+A0h] [xbp-140h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+C0h] [xbp-120h] BYREF
  struct UnityEngine_ParticleSystem_o *v54; // [xsp+E8h] [xbp-F8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v55; // [xsp+F0h] [xbp-F0h] BYREF
  struct UnityEngine_ParticleSystem_o *v56; // [xsp+118h] [xbp-C8h] BYREF
  struct UnityEngine_ParticleSystem_o *v57; // [xsp+120h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v58; // [xsp+128h] [xbp-B8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+130h] [xbp-B0h] BYREF
  struct UnityEngine_ParticleSystem_o *v60; // [xsp+158h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v61; // [xsp+160h] [xbp-80h] BYREF
  struct UnityEngine_ParticleSystem_o *v62; // [xsp+180h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v63; // [xsp+188h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+1A8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o scale; // 0:kr00_12.12
  UnityEngine_Vector3_o v66; // 0:kr14_12.12
  UnityEngine_Vector3_o v67; // 0:kr20_12.12
  UnityEngine_Vector3_o v68; // 0:kr34_12.12
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_596E7B8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18027/*"bit_vs_gauge_part_1"*/);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_2213A60(&StringLiteral_18028/*"bit_vs_gauge_part_2"*/);
    byte_596E7B8 = 1;
  }
  v9 = 0.5;
  v10 = 0.5;
  m_ParticleSystem = 0;
  v62 = 0;
  v63 = 0;
  v60 = 0;
  memset(&v55, 0, sizeof(v55));
  memset(&v59, 0, sizeof(v59));
  memset(&v61, 0, sizeof(v61));
  v57 = 0;
  v58 = 0;
  memset(&v53, 0, sizeof(v53));
  v56 = 0;
  v54 = 0;
  if ( point1 != point2 )
  {
    v11 = (double)point1 / (double)(point2 + point1);
    if ( v11 >= 1.0 )
      v11 = 1.0;
    v10 = v11;
    v9 = 1.0 - v11;
  }
  gaugeParticle = v8->fields.gaugeParticle;
  if ( isBoss )
  {
    if ( !gaugeParticle )
      goto LABEL_67;
    if ( (gaugeParticle->max_length & 0xFFFFFFFC) != 0 )
    {
      this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[3];
      if ( !this )
        goto LABEL_67;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(
                (UnityEngine_ParticleSystem_ShapeModule_o)&m_ParticleSystem,
                0);
      v69.fields.y = scale.fields.y;
      v69.fields.z = scale.fields.z;
      v69.fields.x = v10 + v10;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(
        (UnityEngine_ParticleSystem_ShapeModule_o)&m_ParticleSystem,
        v69,
        0);
      v13 = v8->fields.gaugeParticle;
      if ( !v13 )
        goto LABEL_67;
      if ( LODWORD(v13->max_length) > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v13->m_Items[2];
        if ( !this )
          goto LABEL_67;
        v63 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
        v66 = UnityEngine_ParticleSystem_ShapeModule__get_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v63, 0);
        v70.fields.y = v66.fields.y;
        v70.fields.z = v66.fields.z;
        v70.fields.x = v9 + v9;
        UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v63, v70, 0);
        v14 = v8->fields.gaugeParticle;
        if ( !v14 )
          goto LABEL_67;
        if ( (v14->max_length & 0xFFFFFFFC) != 0 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v14->m_Items[3];
          if ( !this )
            goto LABEL_67;
          v62 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
            &v52,
            (UnityEngine_ParticleSystem_EmissionModule_o)&v62,
            0);
          v61 = v52;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v61, v10 * 35.0, 0);
          v51 = v61;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
            (UnityEngine_ParticleSystem_EmissionModule_o)&v62,
            &v51,
            0);
          v15 = v8->fields.gaugeParticle;
          if ( !v15 )
            goto LABEL_67;
          if ( LODWORD(v15->max_length) > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v15->m_Items[2];
            if ( !this )
              goto LABEL_67;
            v60 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
              &v50,
              (UnityEngine_ParticleSystem_EmissionModule_o)&v60,
              0);
            v59 = v50;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v59, v9 * 35.0, 0);
            v49 = v59;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
              (UnityEngine_ParticleSystem_EmissionModule_o)&v60,
              &v49,
              0);
            v16 = v8->fields.gaugeParticle;
            if ( !v16 )
              goto LABEL_67;
            if ( (v16->max_length & 0xFFFFFFFC) != 0 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v16->m_Items[3];
              if ( !this )
                goto LABEL_67;
              v17 = v10 * 10.0;
              v18 = v9 * 10.0;
              v19 = (float)((float)((float)(v9 * 10.0) + (float)(v17 * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(gameObject, v19, 0);
              v21 = v8->fields.gaugeParticle;
              if ( !v21 )
                goto LABEL_67;
              if ( LODWORD(v21->max_length) > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v21->m_Items[2];
                if ( !this )
                  goto LABEL_67;
                v22 = (float)((float)(v18 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(v23, v22, 0);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v28 = &StringLiteral_18028/*"bit_vs_gauge_part_2"*/;
LABEL_54:
                    SimpleAnimation__Play_78552168((SimpleAnimation_o *)this, (System_String_o *)*v28, 0);
                    return;
                  }
                  goto LABEL_67;
                }
                gaugeAnim = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point1, v27);
                if ( UnityEngine_Object__op_Inequality(gaugeAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
                  if ( !this )
                    goto LABEL_67;
                  v45 = &StringLiteral_18028/*"bit_vs_gauge_part_2"*/;
LABEL_65:
                  UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)this, (System_String_o *)*v45, 0);
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
LABEL_68:
    sub_2213CE4(this);
  }
  if ( !gaugeParticle )
    goto LABEL_67;
  if ( (gaugeParticle->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_67;
  v58 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v67 = UnityEngine_ParticleSystem_ShapeModule__get_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v58, 0);
  v71.fields.y = v67.fields.y;
  v71.fields.z = v67.fields.z;
  v71.fields.x = v10 + v10;
  UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v58, v71, 0);
  v29 = v8->fields.gaugeParticle;
  if ( !v29 )
    goto LABEL_67;
  if ( !LODWORD(v29->max_length) )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v29->m_Items[0];
  if ( !this )
    goto LABEL_67;
  v57 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v68 = UnityEngine_ParticleSystem_ShapeModule__get_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v57, 0);
  v72.fields.y = v68.fields.y;
  v72.fields.z = v68.fields.z;
  v72.fields.x = v9 + v9;
  UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v57, v72, 0);
  v30 = v8->fields.gaugeParticle;
  if ( !v30 )
    goto LABEL_67;
  if ( (v30->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v30->m_Items[1];
  if ( !this )
    goto LABEL_67;
  v56 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
    &v52,
    (UnityEngine_ParticleSystem_EmissionModule_o)&v56,
    0);
  v55 = v52;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v55, v10 * 35.0, 0);
  v48 = v55;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
    (UnityEngine_ParticleSystem_EmissionModule_o)&v56,
    &v48,
    0);
  v31 = v8->fields.gaugeParticle;
  if ( !v31 )
    goto LABEL_67;
  if ( !LODWORD(v31->max_length) )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v31->m_Items[0];
  if ( !this )
    goto LABEL_67;
  v54 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(
    &v50,
    (UnityEngine_ParticleSystem_EmissionModule_o)&v54,
    0);
  v53 = v50;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v53, v9 * 35.0, 0);
  v47 = v53;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
    (UnityEngine_ParticleSystem_EmissionModule_o)&v54,
    &v47,
    0);
  v32 = v8->fields.gaugeParticle;
  if ( !v32 )
    goto LABEL_67;
  if ( (v32->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v32->m_Items[1];
  if ( !this )
    goto LABEL_67;
  v33 = v10 * 10.0;
  v34 = v9 * 10.0;
  v35 = (float)((float)((float)(v9 * 10.0) + (float)(v33 * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v36, v35, 0);
  v37 = v8->fields.gaugeParticle;
  if ( !v37 )
    goto LABEL_67;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v37->m_Items[0];
  if ( !this )
    goto LABEL_67;
  v38 = (float)((float)(v34 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v39, v38, 0);
  v42 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
  if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v28 = &StringLiteral_18027/*"bit_vs_gauge_part_1"*/;
      goto LABEL_54;
    }
LABEL_67:
    sub_2213CDC(this, point1);
  }
  v46 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point1, v43);
  if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_67;
    v45 = &StringLiteral_18027/*"bit_vs_gauge_part_1"*/;
    goto LABEL_65;
  }
}