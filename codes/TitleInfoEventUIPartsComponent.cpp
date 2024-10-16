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

  if ( (byte_4AB4853 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AB4853 = 1;
  }
  if ( this->fields.commonReleaseId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL
      || (IsOpen = CommonReleaseMaster__IsOpen(
                     (CommonReleaseMaster_o *)Instance,
                     this->fields.commonReleaseId,
                     0LL,
                     0,
                     0LL),
          (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1BAB678(Instance, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsOpen, 0LL);
  }
}