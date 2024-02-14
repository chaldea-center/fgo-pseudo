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
  il2cpp_array_size_t v13; // w21
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4212EF5 & 1) == 0 )
  {
    this = (RankObjectSwitchEffectSubComponent_o *)sub_B0D8A4(&RaceResultEffectParam_TypeInfo, param);
    byte_4212EF5 = 1;
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
    sub_B0D97C(this);
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
        this = (RankObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[(int)v12];
        if ( !this )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 == v12, 0LL);
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
    v13 = 0;
    while ( v13 < switchObjectList->max_length )
    {
      this = (RankObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v13];
      if ( !this )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v13 >= max_length )
        return;
      switchObjectList = v4->fields.switchObjectList;
      if ( !switchObjectList )
        goto LABEL_27;
    }
LABEL_29:
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
}