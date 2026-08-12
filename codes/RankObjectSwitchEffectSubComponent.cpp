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
  Il2CppObject *v6; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  il2cpp_array_size_t max_length; // x20
  void *monitor; // x8
  __int64 v10; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  struct UnityEngine_GameObject_array *v13; // x8
  __int64 v14; // x21
  struct UnityEngine_GameObject_array *v15; // x8

  v4 = this;
  if ( (byte_5971FB1 & 1) == 0 )
  {
    this = (RankObjectSwitchEffectSubComponent_o *)sub_2213A60(&RaceResultEffectParam_TypeInfo);
    byte_5971FB1 = 1;
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
    goto LABEL_28;
  max_length = switchObjectList->max_length;
  if ( v6
    && (monitor = v6[1].monitor) != 0
    && *((int *)monitor + 6) >= 4
    && (v10 = *((_QWORD *)monitor + 7), v11 = v10 - 1, v10 >= 1) )
  {
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = v4->fields.switchObjectList;
        if ( !v13 )
          goto LABEL_28;
        if ( (unsigned int)v12 >= LODWORD(v13->max_length) )
          goto LABEL_29;
        this = (RankObjectSwitchEffectSubComponent_o *)v13->m_Items[v12];
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11 == v12++, 0);
        if ( (_DWORD)max_length == (_DWORD)v12 )
          return;
      }
    }
  }
  else if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v4->fields.switchObjectList;
      if ( !v15 )
        break;
      if ( (unsigned int)v14 >= LODWORD(v15->max_length) )
LABEL_29:
        sub_2213CE4(this);
      this = (RankObjectSwitchEffectSubComponent_o *)v15->m_Items[v14];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( (_DWORD)max_length == (_DWORD)++v14 )
        return;
    }
LABEL_28:
    sub_2213CDC(this, param);
  }
}