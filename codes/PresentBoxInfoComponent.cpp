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
  __int64 v4; // x2
  Il2CppObject *MasterData_object; // x19

  if ( (byte_5932B62 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932B62 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_21FFECC(Instance, v3);
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
  __int64 v5; // x2
  int m_CancellationTokenSource; // w20
  struct System_String_array *animFiles; // x8
  int32_t v8; // w26
  _BOOL4 v9; // w24
  int32_t max_length; // w10
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v14; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  __int64 v16; // x2
  __int64 v17; // x2
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v20; // w1

  v2 = this;
  if ( (byte_5932B61 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (PresentBoxInfoComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932B61 = 1;
  }
  PresentList = (SimpleAnimation_o *)PresentBoxInfoComponent__GetPresentList(this, method);
  if ( !PresentList )
    goto LABEL_54;
  m_CancellationTokenSource = (int)PresentList->fields.m_CancellationTokenSource;
  PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  animFiles = v2->fields.animFiles;
  v8 = *(_DWORD *)(PresentList[1].fields.m_LayerMixer.fields.m_Handle + 128)
     - *(_DWORD *)(PresentList[1].fields.m_LayerMixer.fields.m_Handle + 140) <= m_CancellationTokenSource
     ? 2
     : m_CancellationTokenSource > 0;
  v9 = m_CancellationTokenSource < 1
    && *(_DWORD *)(PresentList[1].fields.m_LayerMixer.fields.m_Handle + 128)
     - *(_DWORD *)(PresentList[1].fields.m_LayerMixer.fields.m_Handle + 140) > m_CancellationTokenSource;
  if ( !animFiles )
    goto LABEL_54;
  max_length = animFiles->max_length;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v8 <= max_length )
  {
    if ( v8 >= (unsigned int)max_length )
      goto LABEL_55;
    v12 = animFiles->m_Items[v8];
  }
  sprFiles = v2->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_54;
  v14 = sprFiles->max_length;
  if ( v8 <= v14 )
  {
    if ( v8 < (unsigned int)v14 )
    {
      v11 = sprFiles->m_Items[v8];
      goto LABEL_20;
    }
LABEL_55:
    sub_21FFED4(PresentList);
  }
LABEL_20:
  presentBoxSimpleAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(presentBoxSimpleAnimation, 0, 0) )
  {
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_54;
    SimpleAnimation__Stop(PresentList, 0);
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_54;
    if ( SimpleAnimation__GetClipCount(PresentList, 0) >= v8 && !System_String__IsNullOrEmpty(v12, 0) )
    {
      PresentList = v2->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_54;
      SimpleAnimation__Play_78338864(PresentList, v12, 0);
    }
  }
  else
  {
    presentBoxAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v16);
    if ( UnityEngine_Object__op_Inequality(presentBoxAnimation, 0, 0) )
    {
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_54;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)PresentList, 0);
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_54;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0) >= v8
        && !System_String__IsNullOrEmpty(v12, 0) )
      {
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_54;
        UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)PresentList, v12, 0);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v17);
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0, 0) && !System_String__IsNullOrEmpty(v11, 0) )
  {
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)PresentList, v11, 0);
  }
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !v9 )
  {
    if ( PresentList )
    {
      PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)PresentList,
                                           0);
      if ( PresentList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0);
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
        if ( PresentList )
        {
          v20 = m_CancellationTokenSource;
          goto LABEL_53;
        }
      }
    }
LABEL_54:
    sub_21FFECC(PresentList, v4);
  }
  if ( !PresentList )
    goto LABEL_54;
  PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)PresentList, 0);
  if ( !PresentList )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0);
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_54;
  v20 = 0;
LABEL_53:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v20, 0);
}