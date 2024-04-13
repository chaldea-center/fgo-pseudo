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
  __int64 v3; // x3
  RankObjectSwitchEffectSubComponent_o *v5; // x19
  __int64 v6; // x10
  Il2CppObject *v7; // x9
  struct UnityEngine_GameObject_array *switchObjectList; // x8
  int max_length; // w20
  void *monitor; // x9
  __int64 v11; // x9
  __int64 v12; // x21
  __int64 v13; // x22
  il2cpp_array_size_t v14; // w21
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42E6F77 & 1) == 0 )
  {
    this = (RankObjectSwitchEffectSubComponent_o *)sub_B5D5C4(
                                                     &RaceResultEffectParam_TypeInfo,
                                                     (_DWORD)param,
                                                     (_DWORD)method,
                                                     v3);
    byte_42E6F77 = 1;
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
  switchObjectList = v5->fields.switchObjectList;
  if ( !switchObjectList )
LABEL_27:
    sub_B5D69C(this, param);
  max_length = switchObjectList->max_length;
  if ( v7
    && (monitor = v7[1].monitor) != 0LL
    && *((int *)monitor + 6) >= 4
    && (v11 = *((_QWORD *)monitor + 7), v12 = v11 - 1, v11 >= 1) )
  {
    if ( max_length >= 1 )
    {
      v13 = 0LL;
      while ( (unsigned int)v13 < switchObjectList->max_length )
      {
        this = (RankObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[(int)v13];
        if ( !this )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 == v13, 0LL);
        if ( (int)v13 + 1 >= max_length )
          return;
        switchObjectList = v5->fields.switchObjectList;
        ++v13;
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
      this = (RankObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v14];
      if ( !this )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v14 >= max_length )
        return;
      switchObjectList = v5->fields.switchObjectList;
      if ( !switchObjectList )
        goto LABEL_27;
    }
LABEL_29:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
}