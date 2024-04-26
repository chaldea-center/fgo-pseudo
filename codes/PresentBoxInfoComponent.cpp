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
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_4351C16 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351C16 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Instance, v3);
  return UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, (int64_t)Instance, 0LL);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  PresentBoxInfoComponent_o *v2; // x19
  SimpleAnimation_o *PresentList; // x0
  __int64 v4; // x1
  int32_t m_Version; // w20
  __int64 v6; // x8
  int v7; // w9
  int v8; // w10
  struct System_String_array *animFiles; // x8
  int32_t v10; // w24
  int32_t max_length; // w10
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v15; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v19; // w1
  __int64 v20; // x0

  v2 = this;
  if ( (byte_4351C15 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (PresentBoxInfoComponent_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4351C15 = 1;
  }
  PresentList = (SimpleAnimation_o *)PresentBoxInfoComponent__GetPresentList(this, method);
  if ( !PresentList )
    goto LABEL_53;
  m_Version = PresentList->fields.m_Graph.fields.m_Version;
  PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  v6 = *(_QWORD *)&PresentList[1].fields.m_WrapMode;
  v7 = *(_DWORD *)(v6 + 112);
  v8 = *(_DWORD *)(v6 + 124);
  animFiles = v2->fields.animFiles;
  v10 = v7 - v8 <= m_Version ? 2 : m_Version > 0;
  if ( !animFiles )
    goto LABEL_53;
  max_length = animFiles->max_length;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v10 <= max_length )
  {
    if ( v10 >= (unsigned int)max_length )
      goto LABEL_54;
    v13 = animFiles->m_Items[v10];
  }
  sprFiles = v2->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_53;
  v15 = sprFiles->max_length;
  if ( v10 <= v15 )
  {
    if ( v10 < (unsigned int)v15 )
    {
      v12 = sprFiles->m_Items[v10];
      goto LABEL_18;
    }
LABEL_54:
    v20 = sub_B70798(PresentList);
    sub_B70738(v20, 0LL);
  }
LABEL_18:
  presentBoxSimpleAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxSimpleAnimation, 0LL, 0LL) )
  {
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_53;
    SimpleAnimation__Stop(PresentList, 0LL);
    PresentList = v2->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_53;
    if ( SimpleAnimation__GetClipCount(PresentList, 0LL) >= v10 && !System_String__IsNullOrEmpty(v13, 0LL) )
    {
      PresentList = v2->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_53;
      SimpleAnimation__Play_16672920(PresentList, v13, 0LL);
    }
  }
  else
  {
    presentBoxAnimation = (UnityEngine_Object_o *)v2->fields.presentBoxAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(presentBoxAnimation, 0LL, 0LL) )
    {
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_53;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)PresentList, 0LL);
      PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_53;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0LL) >= v10
        && !System_String__IsNullOrEmpty(v13, 0LL) )
      {
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_53;
        UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)PresentList, v13, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v12, 0LL) )
  {
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_53;
    UISprite__set_spriteName((UISprite_o *)PresentList, v12, 0LL);
  }
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0LL)) == 0LL )
  {
LABEL_53:
    sub_B7076C(PresentList, v4);
  }
  if ( !v10 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0LL);
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v19 = 0;
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0LL);
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_53;
  v19 = m_Version;
LABEL_52:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v19, 0LL);
}