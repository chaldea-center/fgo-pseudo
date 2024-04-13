void __fastcall TitleInfoEventUIPartsComponent___ctor(TitleInfoEventUIPartsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventUIPartsComponent__UpdateDisp(
        TitleInfoEventUIPartsComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  bool IsOpen; // w20

  if ( (byte_42E6C58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E6C58 = 1;
  }
  if ( SLODWORD(this[1].klass) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL
      || (IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, (int32_t)this[1].klass, 0LL, 0, 0LL),
          (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B5D69C(Instance, v9);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsOpen, 0LL);
  }
}