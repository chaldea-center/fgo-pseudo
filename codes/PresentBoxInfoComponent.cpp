void __fastcall PresentBoxInfoComponent___ctor(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UserPresentBoxEntity_array *__fastcall PresentBoxInfoComponent__GetPresentList(
        PresentBoxInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_42E8451 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E8451 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( Instance )
  {
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    JUMPOUT(0x1788060LL);
  }
  sub_B5D69C(0LL, v11);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PresentBoxInfoComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SimpleAnimation_o *PresentList; // x0
  __int64 v12; // x1
  int32_t m_Version; // w20
  __int64 v14; // x8
  int v15; // w9
  int v16; // w10
  struct System_String_array *animFiles; // x8
  int32_t v18; // w24
  int32_t max_length; // w10
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v23; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v27; // w1
  __int64 v28; // x0

  v4 = this;
  if ( (byte_42E8450 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    this = (PresentBoxInfoComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E8450 = 1;
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
  v14 = *(_QWORD *)&PresentList[1].fields.m_WrapMode;
  v15 = *(_DWORD *)(v14 + 112);
  v16 = *(_DWORD *)(v14 + 124);
  animFiles = v4->fields.animFiles;
  v18 = v15 - v16 <= m_Version ? 2 : m_Version > 0;
  if ( !animFiles )
    goto LABEL_53;
  max_length = animFiles->max_length;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v18 <= max_length )
  {
    if ( v18 >= (unsigned int)max_length )
      goto LABEL_54;
    v21 = animFiles->m_Items[v18];
  }
  sprFiles = v4->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_53;
  v23 = sprFiles->max_length;
  if ( v18 <= v23 )
  {
    if ( v18 < (unsigned int)v23 )
    {
      v20 = sprFiles->m_Items[v18];
      goto LABEL_18;
    }
LABEL_54:
    v28 = sub_B5D6C8(PresentList);
    sub_B5D668(v28, 0LL);
  }
LABEL_18:
  presentBoxSimpleAnimation = (UnityEngine_Object_o *)v4->fields.presentBoxSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxSimpleAnimation, 0LL, 0LL) )
  {
    PresentList = v4->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_53;
    SimpleAnimation__Stop(PresentList, 0LL);
    PresentList = v4->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_53;
    if ( SimpleAnimation__GetClipCount(PresentList, 0LL) >= v18 && !System_String__IsNullOrEmpty(v21, 0LL) )
    {
      PresentList = v4->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_53;
      SimpleAnimation__Play_16676044(PresentList, v21, 0LL);
    }
  }
  else
  {
    presentBoxAnimation = (UnityEngine_Object_o *)v4->fields.presentBoxAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(presentBoxAnimation, 0LL, 0LL) )
    {
      PresentList = (SimpleAnimation_o *)v4->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_53;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)PresentList, 0LL);
      PresentList = (SimpleAnimation_o *)v4->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_53;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0LL) >= v18
        && !System_String__IsNullOrEmpty(v21, 0LL) )
      {
        PresentList = (SimpleAnimation_o *)v4->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_53;
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)PresentList, v21, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v4->fields.presentBoxSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v20, 0LL) )
  {
    PresentList = (SimpleAnimation_o *)v4->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_53;
    UISprite__set_spriteName((UISprite_o *)PresentList, v20, 0LL);
  }
  PresentList = (SimpleAnimation_o *)v4->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0LL)) == 0LL )
  {
LABEL_53:
    sub_B5D69C(PresentList, v12);
  }
  if ( !v18 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0LL);
    PresentList = (SimpleAnimation_o *)v4->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v27 = 0;
      goto LABEL_52;
    }
    goto LABEL_53;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0LL);
  PresentList = (SimpleAnimation_o *)v4->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_53;
  v27 = m_Version;
LABEL_52:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v27, 0LL);
}