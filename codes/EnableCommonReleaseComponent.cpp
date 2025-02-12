void __fastcall EnableCommonReleaseComponent___ctor(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  this->fields.visibleCommonReleaseIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EnableCommonReleaseComponent__Awake(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC7230 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC7230 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this->fields.target = gameObject;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)gameObject, v5, v6, v7, v8, v9, v10);
  }
}


bool __fastcall EnableCommonReleaseComponent__IsOpen(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC7231 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7231 = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
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
    sub_1C1AE30(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, (v5 ^ !visibleCommonReleaseIsOpen) & 1, 0LL);
}


void __fastcall EnableCommonReleaseComponent__Start(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableCommonReleaseComponent__Refresh(this, method);
}