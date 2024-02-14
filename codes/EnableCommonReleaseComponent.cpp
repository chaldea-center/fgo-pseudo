void __fastcall EnableCommonReleaseComponent___ctor(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  *(&this->fields.refreshingWhenOnEnable + 2) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EnableCommonReleaseComponent__Awake(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4218B81 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218B81 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this->fields.target = gameObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.target,
      (System_Int32_array **)gameObject,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


bool __fastcall EnableCommonReleaseComponent__IsOpen(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4218B82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4218B82 = 1;
  }
  if ( *(int *)&this->fields.visibleCommonReleaseIsOpen < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Instance,
           *(_DWORD *)&this->fields.visibleCommonReleaseIsOpen,
           0LL,
           0,
           0LL);
}


void __fastcall EnableCommonReleaseComponent__OnEnable(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( *(&this->fields.refreshingWhenOnEnable + 4) )
    EnableCommonReleaseComponent__Refresh(this, method);
}


void __fastcall EnableCommonReleaseComponent__Refresh(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  bool IsOpen; // w0
  int v4; // w21
  bool v5; // w19
  UnityEngine_GameObject_o *gameObject; // x0

  IsOpen = EnableCommonReleaseComponent__IsOpen(this, method);
  v4 = *((unsigned __int8 *)&this->fields.refreshingWhenOnEnable + 2);
  v5 = IsOpen;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, (v5 ^ (v4 == 0)) & 1, 0LL);
}


void __fastcall EnableCommonReleaseComponent__Start(EnableCommonReleaseComponent_o *this, const MethodInfo *method)
{
  if ( *(&this->fields.refreshingWhenOnEnable + 3) )
    EnableCommonReleaseComponent__Refresh(this, method);
}