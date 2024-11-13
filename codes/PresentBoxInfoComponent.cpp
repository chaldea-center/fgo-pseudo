void __fastcall PresentBoxInfoComponent___ctor(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UserPresentBoxEntity_array *__fastcall PresentBoxInfoComponent__GetPresentList(
        PresentBoxInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4B111BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B111BF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v8);
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, (int64_t)Instance, 0LL);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PresentBoxInfoComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  SimpleAnimation_o *PresentList; // x0
  __int64 v9; // x1
  int m_CancellationTokenSource; // w20
  struct System_String_array *animFiles; // x8
  int v12; // w9
  bool v13; // w25
  int32_t v14; // w27
  int32_t max_length; // w10
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v19; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v23; // w1

  v3 = this;
  if ( (byte_4B111BE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    this = (PresentBoxInfoComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B111BE = 1;
  }
  PresentList = (SimpleAnimation_o *)PresentBoxInfoComponent__GetPresentList(this, method);
  if ( !PresentList )
    goto LABEL_49;
  m_CancellationTokenSource = (int)PresentList->fields.m_CancellationTokenSource;
  PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
    PresentList = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  animFiles = v3->fields.animFiles;
  v12 = PresentList[1].fields.m_Playable[1].fields.m_ActualPlayable.fields.m_Handle.fields.m_Version
      - *((_DWORD *)&PresentList[1].fields.m_Playable[1].fields.m_Mixer + 2);
  v13 = v12 > m_CancellationTokenSource;
  v14 = v12 <= m_CancellationTokenSource ? 2 : m_CancellationTokenSource > 0;
  if ( !animFiles )
    goto LABEL_49;
  max_length = animFiles->max_length;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v14 <= max_length )
  {
    if ( v14 >= (unsigned int)max_length )
      goto LABEL_50;
    v17 = animFiles->m_Items[v14];
  }
  sprFiles = v3->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_49;
  v19 = sprFiles->max_length;
  if ( v14 <= v19 )
  {
    if ( v14 < (unsigned int)v19 )
    {
      v16 = sprFiles->m_Items[v14];
      goto LABEL_17;
    }
LABEL_50:
    sub_1BCAA44(PresentList, v9);
  }
LABEL_17:
  presentBoxSimpleAnimation = (UnityEngine_Object_o *)v3->fields.presentBoxSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(presentBoxSimpleAnimation, 0LL, 0LL) )
  {
    PresentList = v3->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_49;
    SimpleAnimation__Stop(PresentList, 0LL);
    PresentList = v3->fields.presentBoxSimpleAnimation;
    if ( !PresentList )
      goto LABEL_49;
    if ( SimpleAnimation__GetClipCount(PresentList, 0LL) >= v14 && !System_String__IsNullOrEmpty(v17, 0LL) )
    {
      PresentList = v3->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_49;
      SimpleAnimation__Play_64539336(PresentList, v17, 0LL);
    }
  }
  else
  {
    presentBoxAnimation = (UnityEngine_Object_o *)v3->fields.presentBoxAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(presentBoxAnimation, 0LL, 0LL) )
    {
      PresentList = (SimpleAnimation_o *)v3->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_49;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)PresentList, 0LL);
      PresentList = (SimpleAnimation_o *)v3->fields.presentBoxAnimation;
      if ( !PresentList )
        goto LABEL_49;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0LL) >= v14
        && !System_String__IsNullOrEmpty(v17, 0LL) )
      {
        PresentList = (SimpleAnimation_o *)v3->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_49;
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)PresentList, v17, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v3->fields.presentBoxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    PresentList = (SimpleAnimation_o *)v3->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_49;
    UISprite__set_spriteName((UISprite_o *)PresentList, v16, 0LL);
  }
  PresentList = (SimpleAnimation_o *)v3->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0LL)) == 0LL )
  {
LABEL_49:
    sub_1BCAA3C(PresentList, v9);
  }
  if ( !v13 || m_CancellationTokenSource >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0LL);
    PresentList = (SimpleAnimation_o *)v3->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v23 = m_CancellationTokenSource;
      goto LABEL_48;
    }
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0LL);
  PresentList = (SimpleAnimation_o *)v3->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_49;
  v23 = 0;
LABEL_48:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v23, 0LL);
}