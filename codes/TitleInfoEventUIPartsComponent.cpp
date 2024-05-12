void __fastcall TitleInfoEventUIPartsComponent___ctor(TitleInfoEventUIPartsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventUIPartsComponent__UpdateDisp(
        TitleInfoEventUIPartsComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  bool IsOpen; // w20

  if ( (byte_4389186 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389186 = 1;
  }
  if ( SLODWORD(this[1].klass) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL
      || (IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, (int32_t)this[1].klass, 0LL, 0, 0LL),
          (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B7769C(Instance, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsOpen, 0LL);
  }
}