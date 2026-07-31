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
  UnityEngine_ParticleSystem_ShapeModule_o v13; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v14; // x0
  struct UnityEngine_ParticleSystem_array *v15; // x8
  UnityEngine_ParticleSystem_ShapeModule_o v16; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v17; // x0
  struct UnityEngine_ParticleSystem_array *v18; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v19; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v20; // x0
  struct UnityEngine_ParticleSystem_array *v21; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v22; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v23; // x0
  struct UnityEngine_ParticleSystem_array *v24; // x8
  float v25; // s1
  float v26; // s9
  float v27; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v29; // x8
  float v30; // s8
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 v35; // x2
  __int64 *v36; // x8
  UnityEngine_ParticleSystem_ShapeModule_o v37; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v38; // x0
  struct UnityEngine_ParticleSystem_array *v39; // x8
  UnityEngine_ParticleSystem_ShapeModule_o v40; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v41; // x0
  struct UnityEngine_ParticleSystem_array *v42; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v43; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v44; // x0
  struct UnityEngine_ParticleSystem_array *v45; // x8
  UnityEngine_ParticleSystem_EmissionModule_o v46; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v47; // x0
  struct UnityEngine_ParticleSystem_array *v48; // x8
  float v49; // s1
  float v50; // s9
  float v51; // s8
  UnityEngine_GameObject_o *v52; // x0
  struct UnityEngine_ParticleSystem_array *v53; // x8
  float v54; // s8
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Object_o *v58; // x20
  __int64 v59; // x2
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v61; // x8
  UnityEngine_Object_o *v62; // x20
  UnityEngine_ParticleSystem_MinMaxCurve_o v63; // [xsp+0h] [xbp-1E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v64; // [xsp+20h] [xbp-1C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v65; // [xsp+40h] [xbp-1A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v66; // [xsp+60h] [xbp-180h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v67; // [xsp+80h] [xbp-160h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v68; // [xsp+A0h] [xbp-140h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v69; // [xsp+C0h] [xbp-120h] BYREF
  struct UnityEngine_ParticleSystem_o *v70; // [xsp+E8h] [xbp-F8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v71; // [xsp+F0h] [xbp-F0h] BYREF
  struct UnityEngine_ParticleSystem_o *v72; // [xsp+118h] [xbp-C8h] BYREF
  struct UnityEngine_ParticleSystem_o *v73; // [xsp+120h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v74; // [xsp+128h] [xbp-B8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v75; // [xsp+130h] [xbp-B0h] BYREF
  struct UnityEngine_ParticleSystem_o *v76; // [xsp+158h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v77; // [xsp+160h] [xbp-80h] BYREF
  struct UnityEngine_ParticleSystem_o *v78; // [xsp+180h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v79; // [xsp+188h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+1A8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_5936F27 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_17989/*"bit_vs_gauge_part_1"*/);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_21FFC50(&StringLiteral_17990/*"bit_vs_gauge_part_2"*/);
    byte_5936F27 = 1;
  }
  v9 = 0.5;
  v10 = 0.5;
  m_ParticleSystem = 0;
  v78 = 0;
  v79 = 0;
  v76 = 0;
  memset(&v71, 0, sizeof(v71));
  memset(&v75, 0, sizeof(v75));
  memset(&v77, 0, sizeof(v77));
  v73 = 0;
  v74 = 0;
  memset(&v69, 0, sizeof(v69));
  v72 = 0;
  v70 = 0;
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
      v13.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v13, 0);
      scale.fields.x = v10 + v10;
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v14, scale, 0);
      v15 = v8->fields.gaugeParticle;
      if ( !v15 )
        goto LABEL_67;
      if ( LODWORD(v15->max_length) > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v15->m_Items[2];
        if ( !this )
          goto LABEL_67;
        v79 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
        v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v79;
        v82 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v16, 0);
        v82.fields.x = v9 + v9;
        v17.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v79;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v17, v82, 0);
        v18 = v8->fields.gaugeParticle;
        if ( !v18 )
          goto LABEL_67;
        if ( (v18->max_length & 0xFFFFFFFC) != 0 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v18->m_Items[3];
          if ( !this )
            goto LABEL_67;
          v78 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
          v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v78;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v68, v19, 0);
          v77 = v68;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v77, v10 * 35.0, 0);
          v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v78;
          v67 = v77;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v20, &v67, 0);
          v21 = v8->fields.gaugeParticle;
          if ( !v21 )
            goto LABEL_67;
          if ( LODWORD(v21->max_length) > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v21->m_Items[2];
            if ( !this )
              goto LABEL_67;
            v76 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
            v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v76;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v66, v22, 0);
            v75 = v66;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v75, v9 * 35.0, 0);
            v23.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v76;
            v65 = v75;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v23, &v65, 0);
            v24 = v8->fields.gaugeParticle;
            if ( !v24 )
              goto LABEL_67;
            if ( (v24->max_length & 0xFFFFFFFC) != 0 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v24->m_Items[3];
              if ( !this )
                goto LABEL_67;
              v25 = v10 * 10.0;
              v26 = v9 * 10.0;
              v27 = (float)((float)((float)(v9 * 10.0) + (float)(v25 * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(gameObject, v27, 0);
              v29 = v8->fields.gaugeParticle;
              if ( !v29 )
                goto LABEL_67;
              if ( LODWORD(v29->max_length) > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v29->m_Items[2];
                if ( !this )
                  goto LABEL_67;
                v30 = (float)((float)(v26 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(v31, v30, 0);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v36 = &StringLiteral_17990/*"bit_vs_gauge_part_2"*/;
LABEL_54:
                    SimpleAnimation__Play_78338864((SimpleAnimation_o *)this, (System_String_o *)*v36, 0);
                    return;
                  }
                  goto LABEL_67;
                }
                gaugeAnim = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point1, v35);
                if ( UnityEngine_Object__op_Inequality(gaugeAnim, 0, 0) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
                  if ( !this )
                    goto LABEL_67;
                  v61 = &StringLiteral_17990/*"bit_vs_gauge_part_2"*/;
LABEL_65:
                  UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)this, (System_String_o *)*v61, 0);
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
    sub_21FFED4(this);
  }
  if ( !gaugeParticle )
    goto LABEL_67;
  if ( (gaugeParticle->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_67;
  v74 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v74;
  v83 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v37, 0);
  v83.fields.x = v10 + v10;
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v74;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v38, v83, 0);
  v39 = v8->fields.gaugeParticle;
  if ( !v39 )
    goto LABEL_67;
  if ( !LODWORD(v39->max_length) )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v39->m_Items[0];
  if ( !this )
    goto LABEL_67;
  v73 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v73;
  v84 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v40, 0);
  v84.fields.x = v9 + v9;
  v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v73;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v41, v84, 0);
  v42 = v8->fields.gaugeParticle;
  if ( !v42 )
    goto LABEL_67;
  if ( (v42->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v42->m_Items[1];
  if ( !this )
    goto LABEL_67;
  v72 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v43.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v72;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v68, v43, 0);
  v71 = v68;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v71, v10 * 35.0, 0);
  v44.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v72;
  v64 = v71;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v44, &v64, 0);
  v45 = v8->fields.gaugeParticle;
  if ( !v45 )
    goto LABEL_67;
  if ( !LODWORD(v45->max_length) )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v45->m_Items[0];
  if ( !this )
    goto LABEL_67;
  v70 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
  v46.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v70;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v66, v46, 0);
  v69 = v66;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v69, v9 * 35.0, 0);
  v47.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v70;
  v63 = v69;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v47, &v63, 0);
  v48 = v8->fields.gaugeParticle;
  if ( !v48 )
    goto LABEL_67;
  if ( (v48->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v48->m_Items[1];
  if ( !this )
    goto LABEL_67;
  v49 = v10 * 10.0;
  v50 = v9 * 10.0;
  v51 = (float)((float)((float)(v9 * 10.0) + (float)(v49 * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v52, v51, 0);
  v53 = v8->fields.gaugeParticle;
  if ( !v53 )
    goto LABEL_67;
  if ( !LODWORD(v53->max_length) )
    goto LABEL_68;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v53->m_Items[0];
  if ( !this )
    goto LABEL_67;
  v54 = (float)((float)(v50 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v55, v54, 0);
  v58 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
  if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v36 = &StringLiteral_17989/*"bit_vs_gauge_part_1"*/;
      goto LABEL_54;
    }
LABEL_67:
    sub_21FFECC(this, point1);
  }
  v62 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point1, v59);
  if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_67;
    v61 = &StringLiteral_17989/*"bit_vs_gauge_part_1"*/;
    goto LABEL_65;
  }
}