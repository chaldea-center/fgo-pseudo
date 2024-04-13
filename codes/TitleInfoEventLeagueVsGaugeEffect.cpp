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


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsGaugeEffect__setup(
        TitleInfoEventLeagueVsGaugeEffect_o *this,
        int64_t point1,
        int64_t point2,
        bool isBoss,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsGaugeEffect_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  float v15; // s9
  float v16; // s8
  double v17; // d0
  struct UnityEngine_ParticleSystem_array *gaugeParticle; // x8
  unsigned int max_length; // w9
  struct UnityEngine_ParticleSystem_array *v20; // x8
  struct UnityEngine_ParticleSystem_array *v21; // x8
  struct UnityEngine_ParticleSystem_array *v22; // x8
  struct UnityEngine_ParticleSystem_array *v23; // x8
  float v24; // s9
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v27; // x8
  float v28; // s8
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  __int64 *v31; // x8
  struct UnityEngine_ParticleSystem_array *v32; // x8
  struct UnityEngine_ParticleSystem_array *v33; // x8
  struct UnityEngine_ParticleSystem_array *v34; // x8
  struct UnityEngine_ParticleSystem_array *v35; // x8
  float v36; // s9
  float v37; // s8
  UnityEngine_GameObject_o *v38; // x0
  struct UnityEngine_ParticleSystem_array *v39; // x8
  float v40; // s8
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_o *gaugeAnim; // x20
  __int64 *v44; // x8
  UnityEngine_Object_o *v45; // x20
  __int64 v46; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+0h] [xbp-1C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+20h] [xbp-1A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v49; // [xsp+40h] [xbp-180h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v50; // [xsp+60h] [xbp-160h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v51; // [xsp+80h] [xbp-140h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v52; // [xsp+A0h] [xbp-120h] BYREF
  struct UnityEngine_ParticleSystem_o *v53; // [xsp+C8h] [xbp-F8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v54; // [xsp+D0h] [xbp-F0h] BYREF
  struct UnityEngine_ParticleSystem_o *v55; // [xsp+F8h] [xbp-C8h] BYREF
  struct UnityEngine_ParticleSystem_o *v56; // [xsp+100h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v57; // [xsp+108h] [xbp-B8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v58; // [xsp+110h] [xbp-B0h] BYREF
  struct UnityEngine_ParticleSystem_o *v59; // [xsp+138h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v60; // [xsp+140h] [xbp-80h] BYREF
  struct UnityEngine_ParticleSystem_o *v61; // [xsp+160h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v62; // [xsp+168h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+178h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v64; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v65; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v66; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v67; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v68; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v69; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v70; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v71; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v72; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v73; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v74; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v75; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v76; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v77; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v78; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v79; // 0:x0.8
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_42ECBFA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, point1, point2, isBoss);
    sub_B5D5C4(&StringLiteral_17052/*"bit_vs_gauge_part_1"*/, v9, v10, v11);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_B5D5C4(&StringLiteral_17053/*"bit_vs_gauge_part_2"*/, v12, v13, v14);
    byte_42ECBFA = 1;
  }
  m_ParticleSystem = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v59 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  memset(&v60, 0, sizeof(v60));
  memset(&v58, 0, sizeof(v58));
  memset(&v54, 0, sizeof(v54));
  memset(&v52, 0, sizeof(v52));
  if ( point1 == point2 )
  {
    v15 = 0.5;
    v16 = 0.5;
  }
  else
  {
    v17 = fmin((double)point1 / (double)(point2 + point1), 1.0);
    v16 = v17;
    v15 = 1.0 - v17;
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
      v64.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v64, 0LL);
      scale.fields.x = v16 + v16;
      v65.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v65, scale, 0LL);
      v20 = v8->fields.gaugeParticle;
      if ( !v20 )
        goto LABEL_69;
      if ( v20->max_length > 2 )
      {
        this = (TitleInfoEventLeagueVsGaugeEffect_o *)v20->m_Items[2];
        if ( !this )
          goto LABEL_69;
        v62 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
        v66.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v62;
        v81 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v66, 0LL);
        v81.fields.x = v15 + v15;
        v67.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v62;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v67, v81, 0LL);
        v21 = v8->fields.gaugeParticle;
        if ( !v21 )
          goto LABEL_69;
        if ( v21->max_length > 3 )
        {
          this = (TitleInfoEventLeagueVsGaugeEffect_o *)v21->m_Items[3];
          if ( !this )
            goto LABEL_69;
          v61 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
          v68.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v61;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v51, v68, 0LL);
          v60 = v51;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v60, v16 * 35.0, 0LL);
          v69.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v61;
          v50 = v60;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v69, &v50, 0LL);
          v22 = v8->fields.gaugeParticle;
          if ( !v22 )
            goto LABEL_69;
          if ( v22->max_length > 2 )
          {
            this = (TitleInfoEventLeagueVsGaugeEffect_o *)v22->m_Items[2];
            if ( !this )
              goto LABEL_69;
            v59 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
            v70.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v59;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v51, v70, 0LL);
            v58 = v51;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v58, v15 * 35.0, 0LL);
            v71.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v59;
            v49 = v58;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v71, &v49, 0LL);
            v23 = v8->fields.gaugeParticle;
            if ( !v23 )
              goto LABEL_69;
            if ( v23->max_length > 3 )
            {
              this = (TitleInfoEventLeagueVsGaugeEffect_o *)v23->m_Items[3];
              if ( !this )
                goto LABEL_69;
              v24 = v15 * 10.0;
              v25 = (float)((float)(v24 + (float)((float)(v16 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(gameObject, v25, 0LL);
              v27 = v8->fields.gaugeParticle;
              if ( !v27 )
                goto LABEL_69;
              if ( v27->max_length > 2 )
              {
                this = (TitleInfoEventLeagueVsGaugeEffect_o *)v27->m_Items[2];
                if ( !this )
                  goto LABEL_69;
                v28 = (float)((float)(v24 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(v29, v28, 0LL);
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
                    v31 = &StringLiteral_17053/*"bit_vs_gauge_part_2"*/;
LABEL_54:
                    SimpleAnimation__Play_16676044((SimpleAnimation_o *)this, (System_String_o *)*v31, 0LL);
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
                  v44 = &StringLiteral_17053/*"bit_vs_gauge_part_2"*/;
LABEL_67:
                  UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)this, (System_String_o *)*v44, 0LL);
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
    v46 = sub_B5D6C8(this);
    sub_B5D668(v46, 0LL);
  }
  if ( max_length <= 1 )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)gaugeParticle->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v57 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v72.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v57;
  v82 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v72, 0LL);
  v82.fields.x = v16 + v16;
  v73.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v57;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v73, v82, 0LL);
  v32 = v8->fields.gaugeParticle;
  if ( !v32 )
    goto LABEL_69;
  if ( !v32->max_length )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v32->m_Items[0];
  if ( !this )
    goto LABEL_69;
  v56 = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v74.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v56;
  v83 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v74, 0LL);
  v83.fields.x = v15 + v15;
  v75.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v56;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v75, v83, 0LL);
  v33 = v8->fields.gaugeParticle;
  if ( !v33 )
    goto LABEL_69;
  if ( v33->max_length <= 1 )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v33->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v55 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v76.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v51, v76, 0LL);
  v54 = v51;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v54, v16 * 35.0, 0LL);
  v77.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v55;
  v48 = v54;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v77, &v48, 0LL);
  v34 = v8->fields.gaugeParticle;
  if ( !v34 )
    goto LABEL_69;
  if ( !v34->max_length )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v34->m_Items[0];
  if ( !this )
    goto LABEL_69;
  v53 = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
  v78.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v53;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v51, v78, 0LL);
  v52 = v51;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v52, v15 * 35.0, 0LL);
  v79.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v53;
  v47 = v52;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v79, &v47, 0LL);
  v35 = v8->fields.gaugeParticle;
  if ( !v35 )
    goto LABEL_69;
  if ( v35->max_length <= 1 )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v35->m_Items[1];
  if ( !this )
    goto LABEL_69;
  v36 = v15 * 10.0;
  v37 = (float)((float)(v36 + (float)((float)(v16 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v38, v37, 0LL);
  v39 = v8->fields.gaugeParticle;
  if ( !v39 )
    goto LABEL_69;
  if ( !v39->max_length )
    goto LABEL_70;
  this = (TitleInfoEventLeagueVsGaugeEffect_o *)v39->m_Items[0];
  if ( !this )
    goto LABEL_69;
  v40 = (float)((float)(v36 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v41, v40, 0LL);
  v42 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeSimpleAnim;
    if ( this )
    {
      v31 = &StringLiteral_17052/*"bit_vs_gauge_part_1"*/;
      goto LABEL_54;
    }
LABEL_69:
    sub_B5D69C(this, point1);
  }
  v45 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)v8->fields.gaugeAnim;
    if ( !this )
      goto LABEL_69;
    v44 = &StringLiteral_17052/*"bit_vs_gauge_part_1"*/;
    goto LABEL_67;
  }
}