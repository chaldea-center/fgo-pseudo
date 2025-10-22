void ObjectSwitchEffectSubComponent___ctor(ObjectSwitchEffectSubComponent_o *this, const MethodInfo *method)
{
  this->fields.parameterIndex = 3;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ObjectSwitchEffectSubComponent__RecvParam(
        ObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  ObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 naturalAligment; // x10
  Il2CppObject *v6; // x9
  struct UnityEngine_GameObject_array *switchObjectList; // x8
  int max_length; // w20
  _DWORD *monitor; // x9
  __int64 parameterIndex; // x10
  int v11; // w11
  __int64 v12; // x21
  int v13; // w22
  unsigned int v14; // w21

  v4 = this;
  if ( (byte_4C5845C & 1) == 0 )
  {
    this = (ObjectSwitchEffectSubComponent_o *)sub_1C3E564(&RaceResultEffectParam_TypeInfo);
    byte_4C5845C = 1;
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
LABEL_28:
    sub_1C3E7C0(this, param);
  max_length = switchObjectList->max_length;
  if ( !v6 )
    goto LABEL_22;
  monitor = v6[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  parameterIndex = v4->fields.parameterIndex;
  v11 = monitor[6];
  if ( (int)parameterIndex >= v11 )
    goto LABEL_22;
  if ( (unsigned int)parameterIndex >= v11 )
    goto LABEL_30;
  v12 = *(_QWORD *)&monitor[2 * parameterIndex + 8];
  if ( v12 >= 1 )
  {
    if ( max_length >= 1 )
    {
      v13 = 1;
      while ( (unsigned int)(v13 - 1) < LODWORD(switchObjectList->max_length) )
      {
        this = (ObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v13 - 1];
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 == v13, 0);
        if ( max_length == v13 )
          return;
        switchObjectList = v4->fields.switchObjectList;
        ++v13;
        if ( !switchObjectList )
          goto LABEL_28;
      }
      goto LABEL_30;
    }
  }
  else
  {
LABEL_22:
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( v14 < LODWORD(switchObjectList->max_length) )
      {
        this = (ObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v14];
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( max_length == ++v14 )
          return;
        switchObjectList = v4->fields.switchObjectList;
        if ( !switchObjectList )
          goto LABEL_28;
      }
LABEL_30:
      sub_1C3E7C8(this, param);
    }
  }
}