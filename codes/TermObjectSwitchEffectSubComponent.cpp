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
  __int64 v5; // x10
  Il2CppObject *v6; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  int max_length; // w22
  void *monitor; // x8
  __int64 v10; // x9
  int32_t v11; // w20
  int32_t v12; // w21
  __int64 v13; // x20
  int v14; // w21
  struct UnityEngine_GameObject_array *v15; // x8
  __int64 v16; // x20
  struct UnityEngine_GameObject_array *v17; // x8
  __int64 v18; // x0

  v4 = this;
  if ( (byte_438833D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B775C4(&RaceResultEffectParam_TypeInfo);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438833D = 1;
  }
  if ( param
    && (v5 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v5 - 1] == RaceResultEffectParam_TypeInfo )
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
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v11, v12, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v13 = 0LL;
      v14 = (int)this;
      while ( 1 )
      {
        v15 = v4->fields.switchObjectList;
        if ( !v15 )
          goto LABEL_31;
        if ( (unsigned int)v13 >= v15->max_length )
          goto LABEL_32;
        this = (TermObjectSwitchEffectSubComponent_o *)v15->m_Items[v13];
        if ( !this )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 == (_DWORD)v13++, 0LL);
        if ( (int)v13 >= max_length )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        v17 = v4->fields.switchObjectList;
        if ( !v17 )
          break;
        if ( (unsigned int)v16 >= v17->max_length )
        {
LABEL_32:
          v18 = sub_B776C8(this);
          sub_B77668(v18, 0LL);
        }
        this = (TermObjectSwitchEffectSubComponent_o *)v17->m_Items[v16];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( (int)++v16 >= max_length )
          return;
      }
LABEL_31:
      sub_B7769C(this, param);
    }
  }
}