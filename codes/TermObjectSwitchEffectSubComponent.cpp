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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  int max_length; // w22
  void *monitor; // x8
  __int64 v14; // x9
  int32_t v15; // w20
  int32_t v16; // w21
  int v17; // w20
  il2cpp_array_size_t v18; // w21
  struct UnityEngine_GameObject_array *v19; // x8
  il2cpp_array_size_t v20; // w20
  struct UnityEngine_GameObject_array *v21; // x8

  v4 = this;
  if ( (byte_4B17603 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, param, method);
    sub_1BCA7E0(&RaceResultEffectParam_TypeInfo, v5, v6);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_1BCA7E0(
                                                     &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                     v7,
                                                     v8);
    byte_4B17603 = 1;
  }
  if ( param
    && (methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo )
      v10 = param;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  switchObjectList = v4->fields.switchObjectList;
  if ( !switchObjectList )
    goto LABEL_31;
  max_length = switchObjectList->max_length;
  if ( !v10 )
    goto LABEL_24;
  monitor = v10[1].monitor;
  if ( !monitor )
    goto LABEL_24;
  v14 = *((_QWORD *)monitor + 3);
  if ( !v14 || (int)v14 <= 1 )
    goto LABEL_24;
  v15 = *((_DWORD *)monitor + 8);
  v16 = *((_DWORD *)monitor + 10);
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v15, v16, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v17 = (int)this;
      v18 = 0;
      while ( 1 )
      {
        v19 = v4->fields.switchObjectList;
        if ( !v19 )
          goto LABEL_31;
        if ( v18 >= v19->max_length )
          goto LABEL_32;
        this = (TermObjectSwitchEffectSubComponent_o *)v19->m_Items[v18];
        if ( !this )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17 == v18++, 0LL);
        if ( max_length == v18 )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = v4->fields.switchObjectList;
        if ( !v21 )
          break;
        if ( v20 >= v21->max_length )
LABEL_32:
          sub_1BCAA44(this, param);
        this = (TermObjectSwitchEffectSubComponent_o *)v21->m_Items[v20];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( max_length == ++v20 )
          return;
      }
LABEL_31:
      sub_1BCAA3C(this, param);
    }
  }
}