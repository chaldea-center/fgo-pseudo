void PresentBoxInfoComponent___ctor(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UserPresentBoxEntity_array *PresentBoxInfoComponent__GetPresentList(
        PresentBoxInfoComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4CB0B0D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB0B0D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C6BC60(Instance, v3);
  return UserPresentBoxMaster__getVaildList(
           (UserPresentBoxMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           0);
}


void PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4CB0B0C & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (PresentBoxInfoComponent_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0B0C = 1;
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
  v7 = *(_DWORD *)(PresentList[1].fields.m_LayerMixer.fields.m_Handle + 128)
     - *(_DWORD *)(PresentList[1].fields.m_LayerMixer.fields.m_Handle + 140);
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
    sub_1C6BC68(PresentList);
  }
LABEL_17:
  presentBoxSimpleAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxSimpleAnimation, 0, 0) )
  {
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_49;
    SimpleAnimation__Stop(PresentList, 0);
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_49;
    if ( SimpleAnimation__GetClipCount(PresentList, 0) >= v9 && !System_String__IsNullOrEmpty(v12, 0) )
    {
      PresentList = v2->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_49;
      SimpleAnimation__Play_66911856(PresentList, v12, 0);
    }
  }
  else
  {
    presentBoxAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(presentBoxAnimation, 0, 0) )
    {
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_49;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)PresentList, 0);
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_49;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0) >= v9
        && !System_String__IsNullOrEmpty(v12, 0) )
      {
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_49;
        UnityEngine_Animation__Play_71403152((UnityEngine_Animation_o *)PresentList, v12, 0);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0, 0) && !System_String__IsNullOrEmpty(v11, 0) )
  {
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_49;
    UISprite__set_spriteName((UISprite_o *)PresentList, v11, 0);
  }
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0)) == 0 )
  {
LABEL_49:
    sub_1C6BC60(PresentList, v4);
  }
  if ( !v8 || m_CancellationTokenSource >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0);
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v18 = m_CancellationTokenSource;
      goto LABEL_48;
    }
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0);
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_49;
  v18 = 0;
LABEL_48:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v18, 0);
}