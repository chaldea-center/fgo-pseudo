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
  Il2CppObject *v6; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  il2cpp_array_size_t max_length; // x20
  _DWORD *monitor; // x8
  __int64 parameterIndex; // x9
  int v11; // w10
  __int64 v12; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  struct UnityEngine_GameObject_array *v15; // x8
  __int64 v16; // x21
  struct UnityEngine_GameObject_array *v17; // x8

  v4 = this;
  if ( (byte_5939DC1 & 1) == 0 )
  {
    this = (ObjectSwitchEffectSubComponent_o *)sub_21FFC50(&RaceResultEffectParam_TypeInfo);
    byte_5939DC1 = 1;
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
    goto LABEL_29;
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
LABEL_30:
    sub_21FFED4(this);
  v12 = *(_QWORD *)&monitor[2 * parameterIndex + 8];
  v13 = v12 - 1;
  if ( v12 >= 1 )
  {
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = v4->fields.switchObjectList;
        if ( !v15 )
          goto LABEL_29;
        if ( (unsigned int)v14 >= LODWORD(v15->max_length) )
          goto LABEL_30;
        this = (ObjectSwitchEffectSubComponent_o *)v15->m_Items[v14];
        if ( !this )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13 == v14++, 0);
        if ( (_DWORD)max_length == (_DWORD)v14 )
          return;
      }
    }
  }
  else
  {
LABEL_22:
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v4->fields.switchObjectList;
        if ( !v17 )
          break;
        if ( (unsigned int)v16 >= LODWORD(v17->max_length) )
          goto LABEL_30;
        this = (ObjectSwitchEffectSubComponent_o *)v17->m_Items[v16];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( (_DWORD)max_length == (_DWORD)++v16 )
          return;
      }
LABEL_29:
      sub_21FFECC(this, param);
    }
  }
}