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
  __int64 v3; // x3
  TermObjectSwitchEffectSubComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x10
  Il2CppObject *v13; // x8
  struct UnityEngine_GameObject_array *switchObjectList; // x9
  int max_length; // w22
  void *monitor; // x8
  __int64 v17; // x9
  int32_t v18; // w20
  int32_t v19; // w21
  __int64 v20; // x20
  int v21; // w21
  struct UnityEngine_GameObject_array *v22; // x8
  __int64 v23; // x20
  struct UnityEngine_GameObject_array *v24; // x8
  __int64 v25; // x0

  v5 = this;
  if ( (byte_42E5B4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, (_DWORD)param, (_DWORD)method, v3);
    sub_B5D5C4(&RaceResultEffectParam_TypeInfo, v6, v7, v8);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_B5D5C4(
                                                     &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                     v9,
                                                     v10,
                                                     v11);
    byte_42E5B4D = 1;
  }
  if ( param
    && (v12 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1),
        *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v12 - 1] == RaceResultEffectParam_TypeInfo )
      v13 = param;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  switchObjectList = v5->fields.switchObjectList;
  if ( !switchObjectList )
    goto LABEL_31;
  max_length = switchObjectList->max_length;
  if ( !v13 )
    goto LABEL_24;
  monitor = v13[1].monitor;
  if ( !monitor )
    goto LABEL_24;
  v17 = *((_QWORD *)monitor + 3);
  if ( !v17 || (int)v17 <= 1 )
    goto LABEL_24;
  v18 = *((_DWORD *)monitor + 8);
  v19 = *((_DWORD *)monitor + 10);
  this = (TermObjectSwitchEffectSubComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !this )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex((EventRaceMaster_o *)this, v18, v19, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v20 = 0LL;
      v21 = (int)this;
      while ( 1 )
      {
        v22 = v5->fields.switchObjectList;
        if ( !v22 )
          goto LABEL_31;
        if ( (unsigned int)v20 >= v22->max_length )
          goto LABEL_32;
        this = (TermObjectSwitchEffectSubComponent_o *)v22->m_Items[v20];
        if ( !this )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21 == (_DWORD)v20++, 0LL);
        if ( (int)v20 >= max_length )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        v24 = v5->fields.switchObjectList;
        if ( !v24 )
          break;
        if ( (unsigned int)v23 >= v24->max_length )
        {
LABEL_32:
          v25 = sub_B5D6C8(this);
          sub_B5D668(v25, 0LL);
        }
        this = (TermObjectSwitchEffectSubComponent_o *)v24->m_Items[v23];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( (int)++v23 >= max_length )
          return;
      }
LABEL_31:
      sub_B5D69C(this, param);
    }
  }
}