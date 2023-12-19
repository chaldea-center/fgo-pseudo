void __fastcall RankObjectSwitchEffectSubComponent___ctor(
        RankObjectSwitchEffectSubComponent_o *this,
        const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall RankObjectSwitchEffectSubComponent__RecvParam(
        RankObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  RankObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 v5; // x10
  Il2CppObject *v6; // x9
  struct UnityEngine_GameObject_array *switchObjectList; // x8
  int max_length; // w20
  void *monitor; // x9
  __int64 v10; // x9
  __int64 v11; // x21
  __int64 v12; // x22
  UnityEngine_GameObject_o *v13; // x0
  il2cpp_array_size_t v14; // w21
  UnityEngine_GameObject_o *v15; // x0

  v4 = this;
  if ( (byte_40F8293 & 1) == 0 )
  {
    this = (RankObjectSwitchEffectSubComponent_o *)sub_B16FFC(&RaceResultEffectParam_TypeInfo, param);
    byte_40F8293 = 1;
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
  switchObjectList = v4->fields.switchObjectList;
  if ( !switchObjectList )
LABEL_27:
    sub_B170D4();
  max_length = switchObjectList->max_length;
  if ( v6
    && (monitor = v6[1].monitor) != 0LL
    && *((int *)monitor + 6) >= 4
    && (v10 = *((_QWORD *)monitor + 7), v11 = v10 - 1, v10 >= 1) )
  {
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      while ( (unsigned int)v12 < switchObjectList->max_length )
      {
        v13 = switchObjectList->m_Items[(int)v12];
        if ( !v13 )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive(v13, v11 == v12, 0LL);
        if ( (int)v12 + 1 >= max_length )
          return;
        switchObjectList = v4->fields.switchObjectList;
        ++v12;
        if ( !switchObjectList )
          goto LABEL_27;
      }
      goto LABEL_29;
    }
  }
  else if ( max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < switchObjectList->max_length )
    {
      v15 = switchObjectList->m_Items[v14];
      if ( !v15 )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
      if ( (int)++v14 >= max_length )
        return;
      switchObjectList = v4->fields.switchObjectList;
      if ( !switchObjectList )
        goto LABEL_27;
    }
LABEL_29:
    sub_B17100(this, param, method);
    sub_B170A0();
  }
}