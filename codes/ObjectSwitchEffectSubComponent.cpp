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
  __int64 v3; // x3
  ObjectSwitchEffectSubComponent_o *v5; // x19
  __int64 v6; // x10
  Il2CppObject *v7; // x9
  ObjectSwitchEffectSubComponent_c *klass; // x8
  int namespaze; // w20
  _DWORD *monitor; // x9
  __int64 switchObjectList_low; // x10
  int v12; // w11
  __int64 v13; // x9
  __int64 v14; // x21
  __int64 v15; // x22
  unsigned int v16; // w21
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42E62AA & 1) == 0 )
  {
    this = (ObjectSwitchEffectSubComponent_o *)sub_B5D5C4(
                                                 &RaceResultEffectParam_TypeInfo,
                                                 (_DWORD)param,
                                                 (_DWORD)method,
                                                 v3);
    byte_42E62AA = 1;
  }
  if ( param
    && (v6 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v6 - 1] == RaceResultEffectParam_TypeInfo )
      v7 = param;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  klass = v5[1].klass;
  if ( !klass )
LABEL_28:
    sub_B5D69C(this, param);
  namespaze = (int)klass->_1.namespaze;
  if ( !v7 )
    goto LABEL_22;
  monitor = v7[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  switchObjectList_low = SLODWORD(v5->fields.switchObjectList);
  v12 = monitor[6];
  if ( (int)switchObjectList_low >= v12 )
    goto LABEL_22;
  if ( (unsigned int)switchObjectList_low >= v12 )
    goto LABEL_30;
  v13 = *(_QWORD *)&monitor[2 * switchObjectList_low + 8];
  v14 = v13 - 1;
  if ( v13 >= 1 )
  {
    if ( namespaze >= 1 )
    {
      v15 = 0LL;
      while ( (unsigned int)v15 < LODWORD(klass->_1.namespaze) )
      {
        this = (ObjectSwitchEffectSubComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v15);
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 == v15, 0LL);
        if ( (int)v15 + 1 >= namespaze )
          return;
        klass = v5[1].klass;
        ++v15;
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
      v16 = 0;
      while ( v16 < LODWORD(klass->_1.namespaze) )
      {
        this = (ObjectSwitchEffectSubComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v16);
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( (int)++v16 >= namespaze )
          return;
        klass = v5[1].klass;
        if ( !klass )
          goto LABEL_28;
      }
LABEL_30:
      v17 = sub_B5D6C8(this);
      sub_B5D668(v17, 0LL);
    }
  }
}