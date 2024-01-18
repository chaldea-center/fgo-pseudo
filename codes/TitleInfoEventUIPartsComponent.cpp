void __fastcall TitleInfoEventUIPartsComponent___ctor(TitleInfoEventUIPartsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventUIPartsComponent__UpdateDisp(
        TitleInfoEventUIPartsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  bool IsOpen; // w20

  if ( (byte_41863D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_41863D0 = 1;
  }
  if ( SLODWORD(this[1].klass) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL
      || (IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, (int32_t)this[1].klass, 0LL, 0, 0LL),
          (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B2C434(Instance, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsOpen, 0LL);
  }
}