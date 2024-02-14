void __fastcall ObjectSwitchEffectSubComponent___ctor(ObjectSwitchEffectSubComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.switchObjectList) = 3;
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall ObjectSwitchEffectSubComponent__RecvParam(
        ObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  ObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 v5; // x10
  Il2CppObject *v6; // x9
  ObjectSwitchEffectSubComponent_c *klass; // x8
  int namespaze; // w20
  _DWORD *monitor; // x9
  __int64 switchObjectList_low; // x10
  int v11; // w11
  __int64 v12; // x9
  __int64 v13; // x21
  __int64 v14; // x22
  unsigned int v15; // w21
  __int64 v16; // x0

  v4 = this;
  if ( (byte_421200D & 1) == 0 )
  {
    this = (ObjectSwitchEffectSubComponent_o *)sub_B0D8A4(&RaceResultEffectParam_TypeInfo, param);
    byte_421200D = 1;
  }
  if ( param
    && (v5 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v5 - 1] == RaceResultEffectParam_TypeInfo )
      v6 = param;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  klass = v4[1].klass;
  if ( !klass )
LABEL_28:
    sub_B0D97C(this);
  namespaze = (int)klass->_1.namespaze;
  if ( !v6 )
    goto LABEL_22;
  monitor = v6[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  switchObjectList_low = SLODWORD(v4->fields.switchObjectList);
  v11 = monitor[6];
  if ( (int)switchObjectList_low >= v11 )
    goto LABEL_22;
  if ( (unsigned int)switchObjectList_low >= v11 )
    goto LABEL_30;
  v12 = *(_QWORD *)&monitor[2 * switchObjectList_low + 8];
  v13 = v12 - 1;
  if ( v12 >= 1 )
  {
    if ( namespaze >= 1 )
    {
      v14 = 0LL;
      while ( (unsigned int)v14 < LODWORD(klass->_1.namespaze) )
      {
        this = (ObjectSwitchEffectSubComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v14);
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13 == v14, 0LL);
        if ( (int)v14 + 1 >= namespaze )
          return;
        klass = v4[1].klass;
        ++v14;
        if ( !klass )
          goto LABEL_28;
      }
      goto LABEL_30;
    }
  }
  else
  {
LABEL_22:
    if ( namespaze >= 1 )
    {
      v15 = 0;
      while ( v15 < LODWORD(klass->_1.namespaze) )
      {
        this = (ObjectSwitchEffectSubComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v15);
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( (int)++v15 >= namespaze )
          return;
        klass = v4[1].klass;
        if ( !klass )
          goto LABEL_28;
      }
LABEL_30:
      v16 = sub_B0D9A8(this);
      sub_B0D948(v16, 0LL);
    }
  }
}