void RankObjectSwitchEffectSubComponent___ctor(RankObjectSwitchEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void RankObjectSwitchEffectSubComponent__RecvParam(
        RankObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  RankObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 naturalAligment; // x10
  Il2CppObject *v6; // x9
  struct UnityEngine_GameObject_array *switchObjectList; // x8
  int max_length; // w20
  void *monitor; // x9
  __int64 v10; // x21
  int v11; // w22
  unsigned int v12; // w21

  v4 = this;
  if ( (byte_4CC8B12 & 1) == 0 )
  {
    this = (RankObjectSwitchEffectSubComponent_o *)sub_1C713B0(&RaceResultEffectParam_TypeInfo);
    byte_4CC8B12 = 1;
  }
  if ( param
    && (naturalAligment = RaceResultEffectParam_TypeInfo->_2.naturalAligment,
        param->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == RaceResultEffectParam_TypeInfo )
      v6 = param;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  switchObjectList = v4->fields.switchObjectList;
  if ( !switchObjectList )
LABEL_27:
    sub_1C71608(this, param);
  max_length = switchObjectList->max_length;
  if ( v6 && (monitor = v6[1].monitor) != 0 && *((int *)monitor + 6) >= 4 && (v10 = *((_QWORD *)monitor + 7), v10 >= 1) )
  {
    if ( max_length >= 1 )
    {
      v11 = 1;
      while ( (unsigned int)(v11 - 1) < LODWORD(switchObjectList->max_length) )
      {
        this = (RankObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v11 - 1];
        if ( !this )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10 == v11, 0);
        if ( max_length == v11 )
          return;
        switchObjectList = v4->fields.switchObjectList;
        ++v11;
        if ( !switchObjectList )
          goto LABEL_27;
      }
      goto LABEL_29;
    }
  }
  else if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < LODWORD(switchObjectList->max_length) )
    {
      this = (RankObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v12];
      if ( !this )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( max_length == ++v12 )
        return;
      switchObjectList = v4->fields.switchObjectList;
      if ( !switchObjectList )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C71610(this);
  }
}