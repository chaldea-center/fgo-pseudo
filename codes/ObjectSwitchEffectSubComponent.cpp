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
  UnityEngine_GameObject_o *v15; // x0
  unsigned int v16; // w21
  UnityEngine_GameObject_o *v17; // x0

  v4 = this;
  if ( (byte_40F7F40 & 1) == 0 )
  {
    this = (ObjectSwitchEffectSubComponent_o *)sub_B16FFC(&RaceResultEffectParam_TypeInfo, param);
    byte_40F7F40 = 1;
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
    sub_B170D4();
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
        v15 = (UnityEngine_GameObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v14);
        if ( !v15 )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive(v15, v13 == v14, 0LL);
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
      v16 = 0;
      while ( v16 < LODWORD(klass->_1.namespaze) )
      {
        v17 = (UnityEngine_GameObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v16);
        if ( !v17 )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive(v17, 0, 0LL);
        if ( (int)++v16 >= namespaze )
          return;
        klass = v4[1].klass;
        if ( !klass )
          goto LABEL_28;
      }
LABEL_30:
      sub_B17100(this, param, method);
      sub_B170A0();
    }
  }
}