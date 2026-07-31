void EnableCommonReleaseComponent___ctor(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  this->fields.visibleCommonReleaseIsOpen = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EnableCommonReleaseComponent__Awake(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5937A35 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A35 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.target = gameObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.target, (int32_t)gameObject, v6, v7, v8, v9, v10, v11);
  }
}


bool EnableCommonReleaseComponent__IsOpen(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5937A36 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937A36 = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
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
    sub_21FFECC(0, v7);
  UnityEngine_GameObject__SetActive(gameObject, (v5 ^ !visibleCommonReleaseIsOpen) & 1, 0);
}


void EnableCommonReleaseComponent__Start(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.refreshingWhenStart )
    EnableCommonReleaseComponent__Refresh(this, method);
}