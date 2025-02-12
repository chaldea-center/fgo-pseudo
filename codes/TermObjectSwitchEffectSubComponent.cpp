void __fastcall TermObjectSwitchEffectSubComponent___ctor(
        TermObjectSwitchEffectSubComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TermObjectSwitchEffectSubComponent__RecvParam(
        TermObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  TermObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v8; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  int max_length; // w22
  void *monitor; // x8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w21
  int v15; // w20
  il2cpp_array_size_t v16; // w21
  struct UnityEngine_GameObject_array *v17; // x8
  il2cpp_array_size_t v18; // w20
  struct UnityEngine_GameObject_array *v19; // x8

  v4 = this;
  if ( (byte_4BC8F29 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventRaceMaster___, param);
    sub_1C1ABD4(&RaceResultEffectParam_TypeInfo, v5);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_1C1ABD4(
                                                     &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                     v6);
    byte_4BC8F29 = 1;
  }
  if ( param
    && (methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo )
      v8 = param;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  switchObjectList = v4->fields.switchObjectList;
  if ( !switchObjectList )
    goto LABEL_31;
  max_length = switchObjectList->max_length;
  if ( !v8 )
    goto LABEL_24;
  monitor = v8[1].monitor;
  if ( !monitor )
    goto LABEL_24;
  v12 = *((_QWORD *)monitor + 3);
  if ( !v12 || (int)v12 <= 1 )
    goto LABEL_24;
  v13 = *((_DWORD *)monitor + 8);
  v14 = *((_DWORD *)monitor + 10);
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v13, v14, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v15 = (int)this;
      v16 = 0;
      while ( 1 )
      {
        v17 = v4->fields.switchObjectList;
        if ( !v17 )
          goto LABEL_31;
        if ( v16 >= v17->max_length )
          goto LABEL_32;
        this = (TermObjectSwitchEffectSubComponent_o *)v17->m_Items[v16];
        if ( !this )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15 == v16++, 0LL);
        if ( max_length == v16 )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = v4->fields.switchObjectList;
        if ( !v19 )
          break;
        if ( v18 >= v19->max_length )
LABEL_32:
          sub_1C1AE38(this, param);
        this = (TermObjectSwitchEffectSubComponent_o *)v19->m_Items[v18];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( max_length == ++v18 )
          return;
      }
LABEL_31:
      sub_1C1AE30(this, param);
    }
  }
}