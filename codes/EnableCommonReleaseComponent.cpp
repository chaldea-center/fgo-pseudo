void __fastcall EnableCommonReleaseComponent___ctor(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  this->fields.visibleCommonReleaseIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EnableCommonReleaseComponent__Awake(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A1F4A3 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1F4A3 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this->fields.target = gameObject;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.target, (int32_t)gameObject, v5, v6);
  }
}


bool __fastcall EnableCommonReleaseComponent__IsOpen(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A1F4A4 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A1F4A4 = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B71828(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}


void __fastcall EnableCommonReleaseComponent__OnEnable(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenOnEnable )
    EnableCommonReleaseComponent__Refresh(this, method);
}


void __fastcall EnableCommonReleaseComponent__Refresh(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  bool IsOpen; // w0
  _BOOL4 visibleCommonReleaseIsOpen; // w21
  bool v5; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  IsOpen = EnableCommonReleaseComponent__IsOpen(this, method);
  visibleCommonReleaseIsOpen = this->fields.visibleCommonReleaseIsOpen;
  v5 = IsOpen;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B71828(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, (v5 ^ !visibleCommonReleaseIsOpen) & 1, 0LL);
}


void __fastcall EnableCommonReleaseComponent__Start(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableCommonReleaseComponent__Refresh(this, method);
}