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
  UnityEngine_ParticleSystem_ShapeModule_o v57; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v58; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v59; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v60; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v61; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v62; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v63; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v64; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v65; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v66; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v67; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v68; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v69; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v70; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v71; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v72; // 0:x0.8
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4BDA804 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17605/*"bit_vs_gauge_part_1"*/);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_1C21E38(&StringLiteral_17606/*"bit_vs_gauge_part_2"*/);
    byte_4BDA804 = 1;
  }
  v9 = 0.5;
  v10 = 0.5;
  v55 = 0LL;
  m_ParticleSystem = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
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
      m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v57.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v57, 0LL);
      scale.fields.x = v10 + v10;
      v58.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v58, scale, 0LL);
      v14 = v8->fields.gaugeParticle;
      if ( !v14 )
        goto LABEL_64;
      if ( v14->max_length > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v14->m_Items[2];
        if ( !this )
          goto LABEL_64;
        v55 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
        v59.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
        v74 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v59, 0LL);
        v74.fields.x = v9 + v9;
        v60.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v60, v74, 0LL);
        v15 = v8->fields.gaugeParticle;
        if ( !v15 )
          goto LABEL_64;
        if ( v15->max_length > 3 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v15->m_Items[3];
          if ( !this )
            goto LABEL_64;
          v54 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
          v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v54;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v44, v61, 0LL);
          v53 = v44;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v53, v10 * 35.0, 0LL);
          v62.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v54;
          v43 = v53;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v62, &v43, 0LL);
          v16 = v8->fields.gaugeParticle;
          if ( !v16 )
            goto LABEL_64;
          if ( v16->max_length > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v16->m_Items[2];
            if ( !this )
              goto LABEL_64;
            v52 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
            v63.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v44, v63, 0LL);
            v51 = v44;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v51, v9 * 35.0, 0LL);
            v64.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
            v42 = v51;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v64, &v42, 0LL);
            v17 = v8->fields.gaugeParticle;
            if ( !v17 )
              goto LABEL_64;
            if ( v17->max_length > 3 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v17->m_Items[3];
              if ( !this )
                goto LABEL_64;
              v18 = v9 * 10.0;
              v19 = (float)((float)((float)(v9 * 10.0) + (float)((float)(v10 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(gameObject, v19, 0LL);
              v21 = v8->fields.gaugeParticle;
              if ( !v21 )
                goto LABEL_64;
              if ( v21->max_length > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v21->m_Items[2];
                if ( !this )
                  goto LABEL_64;
                v22 = (float)((float)(v18 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(v23, v22, 0LL);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0LL, 0LL) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
                  if ( this )
                  {
                    v25 = &StringLiteral_17606/*"bit_vs_gauge_part_2"*/;
LABEL_51:
                    SimpleAnimation__Play_65253852((SimpleAnimation_o *)this, (System_String_o *)*v25, 0LL);
                    return;
                  }
                  goto LABEL_64;
                }
                gaugeAnim = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(gaugeAnim, 0LL, 0LL) )
                {
                  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
                  if ( !this )
                    goto LABEL_64;
                  v38 = &StringLiteral_17606/*"bit_vs_gauge_part_2"*/;
LABEL_62:
                  UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)this, (System_String_o *)*v38, 0LL);
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
    sub_1C2209C(this, point1);
  }
  if ( max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v50 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v65.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v50;
  v75 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v65, 0LL);
  v75.fields.x = v10 + v10;
  v66.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v50;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v66, v75, 0LL);
  v26 = v8->fields.gaugeParticle;
  if ( !v26 )
    goto LABEL_64;
  if ( !v26->max_length )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v26->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v49 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v67.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v49;
  v76 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v67, 0LL);
  v76.fields.x = v9 + v9;
  v68.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v49;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v68, v76, 0LL);
  v27 = v8->fields.gaugeParticle;
  if ( !v27 )
    goto LABEL_64;
  if ( v27->max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v27->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v48 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v69.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v48;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v44, v69, 0LL);
  v47 = v44;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v47, v10 * 35.0, 0LL);
  v70.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v48;
  v41 = v47;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v70, &v41, 0LL);
  v28 = v8->fields.gaugeParticle;
  if ( !v28 )
    goto LABEL_64;
  if ( !v28->max_length )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v28->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v46 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v71.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v46;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v44, v71, 0LL);
  v45 = v44;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v45, v9 * 35.0, 0LL);
  v72.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v46;
  v40 = v45;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v72, &v40, 0LL);
  v29 = v8->fields.gaugeParticle;
  if ( !v29 )
    goto LABEL_64;
  if ( v29->max_length <= 1 )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v29->m_Items[1];
  if ( !this )
    goto LABEL_64;
  v30 = v9 * 10.0;
  v31 = (float)((float)((float)(v9 * 10.0) + (float)((float)(v10 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v32, v31, 0LL);
  v33 = v8->fields.gaugeParticle;
  if ( !v33 )
    goto LABEL_64;
  if ( !v33->max_length )
    goto LABEL_65;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v33->m_Items[0];
  if ( !this )
    goto LABEL_64;
  v34 = (float)((float)(v30 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v35, v34, 0LL);
  v36 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v25 = &StringLiteral_17605/*"bit_vs_gauge_part_1"*/;
      goto LABEL_51;
    }
LABEL_64:
    sub_1C22094(this, point1);
  }
  v39 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_64;
    v38 = &StringLiteral_17605/*"bit_vs_gauge_part_1"*/;
    goto LABEL_62;
  }
}