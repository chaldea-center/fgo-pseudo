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
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_4186B74 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4186B74 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v5);
  return UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, (int64_t)Instance, 0LL);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  PresentBoxInfoComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  SimpleAnimation_o *PresentList; // x0
  __int64 v6; // x1
  int32_t m_Version; // w20
  __int64 v8; // x8
  int v9; // w9
  int v10; // w10
  struct System_String_array *animFiles; // x8
  int32_t v12; // w24
  int32_t max_length; // w10
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v17; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v21; // w1
  __int64 v22; // x0

  v2 = this;
  if ( (byte_4186B73 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    this = (PresentBoxInfoComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186B73 = 1;
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
  v8 = *(_QWORD *)&PresentList[1].fields.m_WrapMode;
  v9 = *(_DWORD *)(v8 + 112);
  v10 = *(_DWORD *)(v8 + 124);
  animFiles = v2->fields.animFiles;
  v12 = v9 - v10 <= m_Version ? 2 : m_Version > 0;
  if ( !animFiles )
    goto LABEL_53;
  max_length = animFiles->max_length;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v12 <= max_length )
  {
    if ( v12 >= (unsigned int)max_length )
      goto LABEL_54;
    v15 = animFiles->m_Items[v12];
  }
  sprFiles = v2->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_53;
  v17 = sprFiles->max_length;
  if ( v12 <= v17 )
  {
    if ( v12 < (unsigned int)v17 )
    {
      v14 = sprFiles->m_Items[v12];
      goto LABEL_18;
    }
LABEL_54:
    v22 = sub_B2C460(PresentList);
    sub_B2C400(v22, 0LL);
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
    if ( SimpleAnimation__GetClipCount(PresentList, 0LL) >= v12 && !System_String__IsNullOrEmpty(v15, 0LL) )
    {
      PresentList = v2->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_53;
      SimpleAnimation__Play_16486620(PresentList, v15, 0LL);
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
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0LL) >= v12
        && !System_String__IsNullOrEmpty(v15, 0LL) )
      {
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_53;
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)PresentList, v15, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v14, 0LL) )
  {
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_53;
    UISprite__set_spriteName((UISprite_o *)PresentList, v14, 0LL);
  }
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0LL)) == 0LL )
  {
LABEL_53:
    sub_B2C434(PresentList, v6);
  }
  if ( !v12 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0LL);
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v21 = 0;
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0LL);
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_53;
  v21 = m_Version;
LABEL_52:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v21, 0LL);
}