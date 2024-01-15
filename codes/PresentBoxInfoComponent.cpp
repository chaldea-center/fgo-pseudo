void __fastcall PresentBoxInfoComponent___ctor(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UserPresentBoxEntity_array *__fastcall PresentBoxInfoComponent__GetPresentList(
        PresentBoxInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0

  if ( (byte_40F8FD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F8FD9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  return UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, UserId, 0LL);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  PresentBoxInfoComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  UserPresentBoxEntity_array *PresentList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t max_length; // w20
  BalanceConfig_c *v9; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t PresentBoxMax; // w9
  int32_t PresentBoxNearMaxOffset; // w10
  struct System_String_array *animFiles; // x8
  int32_t v14; // w24
  int32_t v15; // w10
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v19; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  SimpleAnimation_o *v21; // x0
  SimpleAnimation_o *v22; // x0
  SimpleAnimation_o *v23; // x0
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Animation_o *v25; // x0
  UnityEngine_Animation_o *v26; // x0
  UnityEngine_Animation_o *v27; // x0
  UnityEngine_Object_o *presentBoxSprite; // x22
  UISprite_o *v29; // x0
  UnityEngine_Component_o *presentBoxNoticeNumber; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  NoticeNumberComponent_o *v32; // x0
  int32_t v33; // w1

  v2 = this;
  if ( (byte_40F8FD8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    this = (PresentBoxInfoComponent_o *)sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F8FD8 = 1;
  }
  PresentList = PresentBoxInfoComponent__GetPresentList(this, method);
  if ( !PresentList )
    goto LABEL_53;
  max_length = PresentList->max_length;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  static_fields = v9->static_fields;
  PresentBoxMax = static_fields->PresentBoxMax;
  PresentBoxNearMaxOffset = static_fields->PresentBoxNearMaxOffset;
  animFiles = v2->fields.animFiles;
  v14 = PresentBoxMax - PresentBoxNearMaxOffset <= max_length ? 2 : max_length > 0;
  if ( !animFiles )
    goto LABEL_53;
  v15 = animFiles->max_length;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v14 <= v15 )
  {
    if ( v14 >= (unsigned int)v15 )
      goto LABEL_54;
    v17 = animFiles->m_Items[v14];
  }
  sprFiles = v2->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_53;
  v19 = sprFiles->max_length;
  if ( v14 <= v19 )
  {
    if ( v14 < (unsigned int)v19 )
    {
      v16 = sprFiles->m_Items[v14];
      goto LABEL_18;
    }
LABEL_54:
    sub_B17100(v9, v6, v7);
    sub_B170A0();
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
    v21 = v2->fields.presentBoxSimpleAnimation;
    if ( !v21 )
      goto LABEL_53;
    SimpleAnimation__Stop(v21, 0LL);
    v22 = v2->fields.presentBoxSimpleAnimation;
    if ( !v22 )
      goto LABEL_53;
    if ( SimpleAnimation__GetClipCount(v22, 0LL) >= v14 && !System_String__IsNullOrEmpty(v17, 0LL) )
    {
      v23 = v2->fields.presentBoxSimpleAnimation;
      if ( !v23 )
        goto LABEL_53;
      SimpleAnimation__Play_16380456(v23, v17, 0LL);
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
      v25 = v2->fields.presentBoxAnimation;
      if ( !v25 )
        goto LABEL_53;
      UnityEngine_Animation__Stop(v25, 0LL);
      v26 = v2->fields.presentBoxAnimation;
      if ( !v26 )
        goto LABEL_53;
      if ( UnityEngine_Animation__GetClipCount(v26, 0LL) >= v14 && !System_String__IsNullOrEmpty(v17, 0LL) )
      {
        v27 = v2->fields.presentBoxAnimation;
        if ( !v27 )
          goto LABEL_53;
        UnityEngine_Animation__Play_49744236(v27, v17, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    v29 = v2->fields.presentBoxSprite;
    if ( !v29 )
      goto LABEL_53;
    UISprite__set_spriteName(v29, v16, 0LL);
  }
  presentBoxNoticeNumber = (UnityEngine_Component_o *)v2->fields.presentBoxNoticeNumber;
  if ( !presentBoxNoticeNumber
    || (gameObject = UnityEngine_Component__get_gameObject(presentBoxNoticeNumber, 0LL)) == 0LL )
  {
LABEL_53:
    sub_B170D4();
  }
  if ( !v14 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v32 = v2->fields.presentBoxNoticeNumber;
    if ( v32 )
    {
      v33 = 0;
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v32 = v2->fields.presentBoxNoticeNumber;
  if ( !v32 )
    goto LABEL_53;
  v33 = max_length;
LABEL_52:
  NoticeNumberComponent__SetNumber(v32, v33, 0LL);
}