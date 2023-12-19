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
  WebViewManager_o *Instance; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  int v18; // w21
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x20
  struct UnityEngine_GameObject_array *v22; // x8
  UnityEngine_GameObject_o *v23; // x0

  v4 = this;
  if ( (byte_40F6C66 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, param);
    sub_B16FFC(&RaceResultEffectParam_TypeInfo, v5);
    this = (TermObjectSwitchEffectSubComponent_o *)sub_B16FFC(
                                                     &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                     v6);
    byte_40F6C66 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  this = (TermObjectSwitchEffectSubComponent_o *)EventRaceMaster__GetTermIndex(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v13,
                                                   v14,
                                                   0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    if ( max_length >= 1 )
    {
      v17 = 0LL;
      v18 = (int)this;
      while ( 1 )
      {
        v19 = v4->fields.switchObjectList;
        if ( !v19 )
          goto LABEL_31;
        if ( (unsigned int)v17 >= v19->max_length )
          goto LABEL_32;
        v20 = v19->m_Items[v17];
        if ( !v20 )
          goto LABEL_31;
        UnityEngine_GameObject__SetActive(v20, v18 == (_DWORD)v17++, 0LL);
        if ( (int)v17 >= max_length )
          return;
      }
    }
  }
  else
  {
LABEL_24:
    if ( max_length >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        v22 = v4->fields.switchObjectList;
        if ( !v22 )
          break;
        if ( (unsigned int)v21 >= v22->max_length )
        {
LABEL_32:
          sub_B17100(this, param, method);
          sub_B170A0();
        }
        v23 = v22->m_Items[v21];
        if ( !v23 )
          break;
        UnityEngine_GameObject__SetActive(v23, 0, 0LL);
        if ( (int)++v21 >= max_length )
          return;
      }
LABEL_31:
      sub_B170D4();
    }
  }
}