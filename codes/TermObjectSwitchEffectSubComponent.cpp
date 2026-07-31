void TermObjectSwitchEffectSubComponent___ctor(TermObjectSwitchEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TermObjectSwitchEffectSubComponent__RecvParam(
        TermObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  TermObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 naturalAligment; // x10
  Il2CppObject *v6; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  il2cpp_array_size_t max_length; // x22
  int *monitor; // x8
  int32_t v10; // w20
  int32_t v11; // w21
  __int64 v12; // x20
  int v13; // w21
  struct UnityEngine_GameObject_array *v14; // x8
  __int64 v15; // x20
  struct UnityEngine_GameObject_array *v16; // x8

  v4 = this;
  if ( (byte_5939DE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_21FFC50(&RaceResultEffectParam_TypeInfo);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939DE1 = 1;
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
    goto LABEL_30;
  max_length = switchObjectList->max_length;
  if ( !v6 )
    goto LABEL_23;
  monitor = (int *)v6[1].monitor;
  if ( !monitor || monitor[6] <= 1 )
    goto LABEL_23;
  v10 = monitor[8];
  v11 = monitor[10];
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_30;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v10, v11, 0);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      v13 = (int)this;
      while ( 1 )
      {
        v14 = v4->fields.switchObjectList;
        if ( !v14 )
          goto LABEL_30;
        if ( (unsigned int)v12 >= LODWORD(v14->max_length) )
          goto LABEL_31;
        this = (TermObjectSwitchEffectSubComponent_o *)v14->m_Items[v12];
        if ( !this )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13 == (_DWORD)v12++, 0);
        if ( (_DWORD)max_length == (_DWORD)v12 )
          return;
      }
    }
  }
  else
  {
LABEL_23:
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = v4->fields.switchObjectList;
        if ( !v16 )
          break;
        if ( (unsigned int)v15 >= LODWORD(v16->max_length) )
LABEL_31:
          sub_21FFED4(this);
        this = (TermObjectSwitchEffectSubComponent_o *)v16->m_Items[v15];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( (_DWORD)max_length == (_DWORD)++v15 )
          return;
      }
LABEL_30:
      sub_21FFECC(this, param);
    }
  }
}