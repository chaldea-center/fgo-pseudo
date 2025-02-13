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
  __int64 methodPtr_low; // x10
  Il2CppObject *v6; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  int max_length; // w22
  void *monitor; // x8
  __int64 v10; // x9
  int32_t v11; // w20
  int32_t v12; // w21
  int v13; // w20
  il2cpp_array_size_t v14; // w21
  struct UnityEngine_GameObject_array *v15; // x8
  il2cpp_array_size_t v16; // w20
  struct UnityEngine_GameObject_array *v17; // x8

  v4 = this;
  if ( (byte_4BDD9D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C21E38(&RaceResultEffectParam_TypeInfo);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD9D3 = 1;
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
    goto LABEL_31;
  max_length = switchObjectList->max_length;
  if ( !v6 )
    goto LABEL_24;
  monitor = v6[1].monitor;
  if ( !monitor )
    goto LABEL_24;
  v10 = *((_QWORD *)monitor + 3);
  if ( !v10 || (int)v10 <= 1 )
    goto LABEL_24;
  v11 = *((_DWORD *)monitor + 8);
  v12 = *((_DWORD *)monitor + 10);
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v11, v12, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v13 = (int)this;
      v14 = 0;
      while ( 1 )
      {
        v15 = v4->fields.switchObjectList;
        if ( !v15 )
          goto LABEL_31;
        if ( v14 >= v15->max_length )
          goto LABEL_32;
        this = (TermObjectSwitchEffectSubComponent_o *)v15->m_Items[v14];
        if ( !this )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13 == v14++, 0LL);
        if ( max_length == v14 )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v4->fields.switchObjectList;
        if ( !v17 )
          break;
        if ( v16 >= v17->max_length )
LABEL_32:
          sub_1C2209C(this, param);
        this = (TermObjectSwitchEffectSubComponent_o *)v17->m_Items[v16];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( max_length == ++v16 )
          return;
      }
LABEL_31:
      sub_1C22094(this, param);
    }
  }
}