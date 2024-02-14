void __fastcall TermObjectSwitchEffectSubComponent___ctor(
        TermObjectSwitchEffectSubComponent_o *this,
        const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall TermObjectSwitchEffectSubComponent__RecvParam(
        TermObjectSwitchEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  TermObjectSwitchEffectSubComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x10
  Il2CppObject *v8; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  int max_length; // w22
  void *monitor; // x8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w21
  __int64 v15; // x20
  int v16; // w21
  struct UnityEngine_GameObject_array *v17; // x8
  __int64 v18; // x20
  struct UnityEngine_GameObject_array *v19; // x8
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4211957 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceMaster___, param);
    sub_B0D8A4(&RaceResultEffectParam_TypeInfo, v5);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_B0D8A4(
                                                     &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                     v6);
    byte_4211957 = 1;
  }
  if ( param
    && (v7 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v7 - 1] == RaceResultEffectParam_TypeInfo )
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
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v13, v14, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      v16 = (int)this;
      while ( 1 )
      {
        v17 = v4->fields.switchObjectList;
        if ( !v17 )
          goto LABEL_31;
        if ( (unsigned int)v15 >= v17->max_length )
          goto LABEL_32;
        this = (TermObjectSwitchEffectSubComponent_o *)v17->m_Items[v15];
        if ( !this )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16 == (_DWORD)v15++, 0LL);
        if ( (int)v15 >= max_length )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v19 = v4->fields.switchObjectList;
        if ( !v19 )
          break;
        if ( (unsigned int)v18 >= v19->max_length )
        {
LABEL_32:
          v20 = sub_B0D9A8(this);
          sub_B0D948(v20, 0LL);
        }
        this = (TermObjectSwitchEffectSubComponent_o *)v19->m_Items[v18];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( (int)++v18 >= max_length )
          return;
      }
LABEL_31:
      sub_B0D97C(this);
    }
  }
}