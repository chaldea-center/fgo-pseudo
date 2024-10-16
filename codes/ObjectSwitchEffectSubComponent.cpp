void __fastcall ObjectSwitchEffectSubComponent___ctor(ObjectSwitchEffectSubComponent_o *this, const MethodInfo *method)
{
  this->fields.parameterIndex = 3;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ObjectSwitchEffectSubComponent__RecvParam(
        ObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  ObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 methodPtr_low; // x10
  Il2CppObject *v6; // x9
  struct UnityEngine_GameObject_array *switchObjectList; // x8
  int max_length; // w20
  _DWORD *monitor; // x9
  __int64 parameterIndex; // x10
  int v11; // w11
  __int64 v12; // x21
  int v13; // w22
  il2cpp_array_size_t v14; // w21

  v4 = this;
  if ( (byte_4AB7121 & 1) == 0 )
  {
    this = (ObjectSwitchEffectSubComponent_o *)sub_1BAB41C(&RaceResultEffectParam_TypeInfo, param);
    byte_4AB7121 = 1;
  }
  if ( param
    && (methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo )
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
LABEL_28:
    sub_1BAB678(this, param);
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
      while ( v13 - 1 < switchObjectList->max_length )
      {
        this = (ObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v13 - 1];
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 == v13, 0LL);
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
      while ( v14 < switchObjectList->max_length )
      {
        this = (ObjectSwitchEffectSubComponent_o *)switchObjectList->m_Items[v14];
        if ( !this )
          goto LABEL_28;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( max_length == ++v14 )
          return;
        switchObjectList = v4->fields.switchObjectList;
        if ( !switchObjectList )
          goto LABEL_28;
      }
LABEL_30:
      sub_1BAB680(this, param);
    }
  }
}