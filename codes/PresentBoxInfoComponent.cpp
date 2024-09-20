void __fastcall PresentBoxInfoComponent___ctor(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UserPresentBoxEntity_array *__fastcall PresentBoxInfoComponent__GetPresentList(
        PresentBoxInfoComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4A5F3C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F3C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v3);
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, (int64_t)Instance, 0LL);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  PresentBoxInfoComponent_o *v2; // x19
  SimpleAnimation_o *PresentList; // x0
  __int64 v4; // x1
  int m_CancellationTokenSource; // w20
  struct System_String_array *animFiles; // x8
  int v7; // w9
  bool v8; // w25
  int32_t v9; // w27
  int32_t max_length; // w10
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v14; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v18; // w1

  v2 = this;
  if ( (byte_4A5F3C1 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (PresentBoxInfoComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F3C1 = 1;
  }
  PresentList = (SimpleAnimation_o *)PresentBoxInfoComponent__GetPresentList(this, method);
  if ( !PresentList )
    goto LABEL_49;
  m_CancellationTokenSource = (int)PresentList->fields.m_CancellationTokenSource;
  PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  animFiles = v2->fields.animFiles;
  v7 = PresentList[1].fields.m_Playable[1].fields.m_ActualPlayable.fields.m_Handle.fields.m_Version
     - *((_DWORD *)&PresentList[1].fields.m_Playable[1].fields.m_Mixer + 2);
  v8 = v7 > m_CancellationTokenSource;
  v9 = v7 <= m_CancellationTokenSource ? 2 : m_CancellationTokenSource > 0;
  if ( !animFiles )
    goto LABEL_49;
  max_length = animFiles->max_length;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v9 <= max_length )
  {
    if ( v9 >= (unsigned int)max_length )
      goto LABEL_50;
    v12 = animFiles->m_Items[v9];
  }
  sprFiles = v2->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_49;
  v14 = sprFiles->max_length;
  if ( v9 <= v14 )
  {
    if ( v9 < (unsigned int)v14 )
    {
      v11 = sprFiles->m_Items[v9];
      goto LABEL_17;
    }
LABEL_50:
    sub_1B88814(PresentList, v4);
  }
LABEL_17:
  presentBoxSimpleAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxSimpleAnimation, 0LL, 0LL) )
  {
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_49;
    SimpleAnimation__Stop(PresentList, 0LL);
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_49;
    if ( SimpleAnimation__GetClipCount(PresentList, 0LL) >= v9 && !System_String__IsNullOrEmpty(v12, 0LL) )
    {
      PresentList = v2->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_49;
      SimpleAnimation__Play_63844704(PresentList, v12, 0LL);
    }
  }
  else
  {
    presentBoxAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(presentBoxAnimation, 0LL, 0LL) )
    {
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_49;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)PresentList, 0LL);
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_49;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0LL) >= v9
        && !System_String__IsNullOrEmpty(v12, 0LL) )
      {
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_49;
        UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)PresentList, v12, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v11, 0LL) )
  {
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_49;
    UISprite__set_spriteName((UISprite_o *)PresentList, v11, 0LL);
  }
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0LL)) == 0LL )
  {
LABEL_49:
    sub_1B8880C(PresentList, v4);
  }
  if ( !v8 || m_CancellationTokenSource >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0LL);
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v18 = m_CancellationTokenSource;
      goto LABEL_48;
    }
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0LL);
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_49;
  v18 = 0;
LABEL_48:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v18, 0LL);
}