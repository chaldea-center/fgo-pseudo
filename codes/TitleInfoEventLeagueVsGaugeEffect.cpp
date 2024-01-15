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
  UnityEngine_ParticleSystem_o *v16; // x0
  struct UnityEngine_ParticleSystem_array *v17; // x8
  UnityEngine_ParticleSystem_o *v18; // x0
  struct UnityEngine_ParticleSystem_array *v19; // x8
  UnityEngine_ParticleSystem_o *v20; // x0
  struct UnityEngine_ParticleSystem_array *v21; // x8
  UnityEngine_ParticleSystem_o *v22; // x0
  struct UnityEngine_ParticleSystem_array *v23; // x8
  UnityEngine_Component_o *v24; // x0
  float v25; // s9
  float v26; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_ParticleSystem_array *v28; // x8
  UnityEngine_Component_o *v29; // x0
  float v30; // s8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Object_o *gaugeSimpleAnim; // x20
  SimpleAnimation_o *v33; // x0
  __int64 *v34; // x8
  UnityEngine_ParticleSystem_o *v35; // x0
  struct UnityEngine_ParticleSystem_array *v36; // x8
  UnityEngine_ParticleSystem_o *v37; // x0
  struct UnityEngine_ParticleSystem_array *v38; // x8
  UnityEngine_ParticleSystem_o *v39; // x0
  struct UnityEngine_ParticleSystem_array *v40; // x8
  UnityEngine_ParticleSystem_o *v41; // x0
  struct UnityEngine_ParticleSystem_array *v42; // x8
  UnityEngine_Component_o *v43; // x0
  float v44; // s9
  float v45; // s8
  UnityEngine_GameObject_o *v46; // x0
  struct UnityEngine_ParticleSystem_array *v47; // x8
  UnityEngine_Component_o *v48; // x0
  float v49; // s8
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *v51; // x20
  UnityEngine_Object_o *gaugeAnim; // x20
  UnityEngine_Animation_o *v53; // x0
  __int64 *v54; // x8
  UnityEngine_Object_o *v55; // x20
  UnityEngine_ParticleSystem_MinMaxCurve_o v56; // [xsp+0h] [xbp-1C0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v57; // [xsp+20h] [xbp-1A0h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v58; // [xsp+40h] [xbp-180h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+60h] [xbp-160h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v60; // [xsp+80h] [xbp-140h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v61; // [xsp+A0h] [xbp-120h] BYREF
  struct UnityEngine_ParticleSystem_o *v62; // [xsp+C8h] [xbp-F8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v63; // [xsp+D0h] [xbp-F0h] BYREF
  struct UnityEngine_ParticleSystem_o *v64; // [xsp+F8h] [xbp-C8h] BYREF
  struct UnityEngine_ParticleSystem_o *v65; // [xsp+100h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v66; // [xsp+108h] [xbp-B8h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v67; // [xsp+110h] [xbp-B0h] BYREF
  struct UnityEngine_ParticleSystem_o *v68; // [xsp+138h] [xbp-88h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v69; // [xsp+140h] [xbp-80h] BYREF
  struct UnityEngine_ParticleSystem_o *v70; // [xsp+160h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v71; // [xsp+168h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+178h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v73; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v74; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v75; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v76; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v77; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v78; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v79; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v80; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v81; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v82; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v83; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v84; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v85; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v86; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v87; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v88; // 0:x0.8
  UnityEngine_Vector3_o scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_40FDFD3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, point1);
    sub_B16FFC(&StringLiteral_16779/*"bit_vs_gauge_part_1"*/, v9);
    this = (TitleInfoEventLeagueVsGaugeEffect_o *)sub_B16FFC(&StringLiteral_16780/*"bit_vs_gauge_part_2"*/, v10);
    byte_40FDFD3 = 1;
  }
  m_ParticleSystem = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v64 = 0LL;
  v62 = 0LL;
  memset(&v69, 0, sizeof(v69));
  memset(&v67, 0, sizeof(v67));
  memset(&v63, 0, sizeof(v63));
  memset(&v61, 0, sizeof(v61));
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
      v16 = gaugeParticle->m_Items[3];
      if ( !v16 )
        goto LABEL_69;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_shape(v16, 0LL).fields.m_ParticleSystem;
      v73.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      scale = UnityEngine_ParticleSystem_ShapeModule__get_scale(v73, 0LL);
      scale.fields.x = v12 + v12;
      v74.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_ShapeModule__set_scale(v74, scale, 0LL);
      v17 = v8->fields.gaugeParticle;
      if ( !v17 )
        goto LABEL_69;
      if ( v17->max_length > 2 )
      {
        v18 = v17->m_Items[2];
        if ( !v18 )
          goto LABEL_69;
        v71 = UnityEngine_ParticleSystem__get_shape(v18, 0LL).fields.m_ParticleSystem;
        v75.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v71;
        v90 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v75, 0LL);
        v90.fields.x = v11 + v11;
        v76.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v71;
        UnityEngine_ParticleSystem_ShapeModule__set_scale(v76, v90, 0LL);
        v19 = v8->fields.gaugeParticle;
        if ( !v19 )
          goto LABEL_69;
        if ( v19->max_length > 3 )
        {
          v20 = v19->m_Items[3];
          if ( !v20 )
            goto LABEL_69;
          v70 = UnityEngine_ParticleSystem__get_emission(v20, 0LL).fields.m_ParticleSystem;
          v77.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v70;
          UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v77, 0LL);
          v69 = v60;
          UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v69, v12 * 35.0, 0LL);
          v78.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v70;
          v59 = v69;
          UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v78, &v59, 0LL);
          v21 = v8->fields.gaugeParticle;
          if ( !v21 )
            goto LABEL_69;
          if ( v21->max_length > 2 )
          {
            v22 = v21->m_Items[2];
            if ( !v22 )
              goto LABEL_69;
            v68 = UnityEngine_ParticleSystem__get_emission(v22, 0LL).fields.m_ParticleSystem;
            v79.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v68;
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v79, 0LL);
            v67 = v60;
            UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v67, v11 * 35.0, 0LL);
            v80.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v68;
            v58 = v67;
            UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v80, &v58, 0LL);
            v23 = v8->fields.gaugeParticle;
            if ( !v23 )
              goto LABEL_69;
            if ( v23->max_length > 3 )
            {
              v24 = (UnityEngine_Component_o *)v23->m_Items[3];
              if ( !v24 )
                goto LABEL_69;
              v25 = v11 * 10.0;
              v26 = (float)((float)(v25 + (float)((float)(v12 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
                  * v8->fields.GAUGE_SIZE_FACTOR;
              gameObject = UnityEngine_Component__get_gameObject(v24, 0LL);
              GameObjectExtensions__SetLocalPositionX(gameObject, v26, 0LL);
              v28 = v8->fields.gaugeParticle;
              if ( !v28 )
                goto LABEL_69;
              if ( v28->max_length > 2 )
              {
                v29 = (UnityEngine_Component_o *)v28->m_Items[2];
                if ( !v29 )
                  goto LABEL_69;
                v30 = (float)((float)(v25 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
                v31 = UnityEngine_Component__get_gameObject(v29, 0LL);
                GameObjectExtensions__SetLocalPositionX(v31, v30, 0LL);
                gaugeSimpleAnim = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(gaugeSimpleAnim, 0LL, 0LL) )
                {
                  v33 = v8->fields.gaugeSimpleAnim;
                  if ( v33 )
                  {
                    v34 = &StringLiteral_16780/*"bit_vs_gauge_part_2"*/;
LABEL_54:
                    SimpleAnimation__Play_16380456(v33, (System_String_o *)*v34, 0LL);
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
                  v53 = v8->fields.gaugeAnim;
                  if ( !v53 )
                    goto LABEL_69;
                  v54 = &StringLiteral_16780/*"bit_vs_gauge_part_2"*/;
LABEL_67:
                  UnityEngine_Animation__Play_49744236(v53, (System_String_o *)*v54, 0LL);
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
    sub_B17100(this, point1, point2);
    sub_B170A0();
  }
  if ( max_length <= 1 )
    goto LABEL_70;
  v35 = gaugeParticle->m_Items[1];
  if ( !v35 )
    goto LABEL_69;
  v66 = UnityEngine_ParticleSystem__get_shape(v35, 0LL).fields.m_ParticleSystem;
  v81.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v66;
  v91 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v81, 0LL);
  v91.fields.x = v12 + v12;
  v82.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v66;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v82, v91, 0LL);
  v36 = v8->fields.gaugeParticle;
  if ( !v36 )
    goto LABEL_69;
  if ( !v36->max_length )
    goto LABEL_70;
  v37 = v36->m_Items[0];
  if ( !v37 )
    goto LABEL_69;
  v65 = UnityEngine_ParticleSystem__get_shape(v37, 0LL).fields.m_ParticleSystem;
  v83.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v65;
  v92 = UnityEngine_ParticleSystem_ShapeModule__get_scale(v83, 0LL);
  v92.fields.x = v11 + v11;
  v84.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v65;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v84, v92, 0LL);
  v38 = v8->fields.gaugeParticle;
  if ( !v38 )
    goto LABEL_69;
  if ( v38->max_length <= 1 )
    goto LABEL_70;
  v39 = v38->m_Items[1];
  if ( !v39 )
    goto LABEL_69;
  v64 = UnityEngine_ParticleSystem__get_emission(v39, 0LL).fields.m_ParticleSystem;
  v85.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v64;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v85, 0LL);
  v63 = v60;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v63, v12 * 35.0, 0LL);
  v86.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v64;
  v57 = v63;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v86, &v57, 0LL);
  v40 = v8->fields.gaugeParticle;
  if ( !v40 )
    goto LABEL_69;
  if ( !v40->max_length )
    goto LABEL_70;
  v41 = v40->m_Items[0];
  if ( !v41 )
    goto LABEL_69;
  v62 = UnityEngine_ParticleSystem__get_emission(v41, 0LL).fields.m_ParticleSystem;
  v87.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v62;
  UnityEngine_ParticleSystem_EmissionModule__get_rateOverTime(&v60, v87, 0LL);
  v61 = v60;
  UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax(&v61, v11 * 35.0, 0LL);
  v88.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v62;
  v56 = v61;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v88, &v56, 0LL);
  v42 = v8->fields.gaugeParticle;
  if ( !v42 )
    goto LABEL_69;
  if ( v42->max_length <= 1 )
    goto LABEL_70;
  v43 = (UnityEngine_Component_o *)v42->m_Items[1];
  if ( !v43 )
    goto LABEL_69;
  v44 = v11 * 10.0;
  v45 = (float)((float)(v44 + (float)((float)(v12 * 10.0) * 0.5)) * v8->fields.GAUGE_SIZE_DEF)
      * v8->fields.GAUGE_SIZE_FACTOR;
  v46 = UnityEngine_Component__get_gameObject(v43, 0LL);
  GameObjectExtensions__SetLocalPositionX(v46, v45, 0LL);
  v47 = v8->fields.gaugeParticle;
  if ( !v47 )
    goto LABEL_69;
  if ( !v47->max_length )
    goto LABEL_70;
  v48 = (UnityEngine_Component_o *)v47->m_Items[0];
  if ( !v48 )
    goto LABEL_69;
  v49 = (float)((float)(v44 * 0.5) * v8->fields.GAUGE_SIZE_DEF) * v8->fields.GAUGE_SIZE_FACTOR;
  v50 = UnityEngine_Component__get_gameObject(v48, 0LL);
  GameObjectExtensions__SetLocalPositionX(v50, v49, 0LL);
  v51 = (UnityEngine_Object_o *)v8->fields.gaugeSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    v33 = v8->fields.gaugeSimpleAnim;
    if ( v33 )
    {
      v34 = &StringLiteral_16779/*"bit_vs_gauge_part_1"*/;
      goto LABEL_54;
    }
LABEL_69:
    sub_B170D4();
  }
  v55 = (UnityEngine_Object_o *)v8->fields.gaugeAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    v53 = v8->fields.gaugeAnim;
    if ( !v53 )
      goto LABEL_69;
    v54 = &StringLiteral_16779/*"bit_vs_gauge_part_1"*/;
    goto LABEL_67;
  }
}