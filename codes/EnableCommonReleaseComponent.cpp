void EnableCommonReleaseComponent___ctor(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  this->fields.visibleCommonReleaseIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EnableCommonReleaseComponent__Awake(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CEDB17 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDB17 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.target = gameObject;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.target, (int32_t)gameObject, v5, v6, v7, v8, v9, v10);
  }
}


bool EnableCommonReleaseComponent__IsOpen(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEDB18 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEDB18 = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0);
}


void EnableCommonReleaseComponent__OnEnable(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenOnEnable )
    EnableCommonReleaseComponent__Refresh(this, method);
}


void EnableCommonReleaseComponent__Refresh(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  bool IsOpen; // w0
  _BOOL4 visibleCommonReleaseIsOpen; // w21
  bool v5; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  IsOpen = EnableCommonReleaseComponent__IsOpen(this, method);
  visibleCommonReleaseIsOpen = this->fields.visibleCommonReleaseIsOpen;
  v5 = IsOpen;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v7);
  UnityEngine_GameObject__SetActive(gameObject, (v5 ^ !visibleCommonReleaseIsOpen) & 1, 0);
}


void EnableCommonReleaseComponent__Start(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableCommonReleaseComponent__Refresh(this, method);
}