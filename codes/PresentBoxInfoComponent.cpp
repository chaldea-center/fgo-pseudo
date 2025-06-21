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
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4B16E8C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v2);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B16E8C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1BCB254(Instance, v5);
  return UserPresentBoxMaster__getVaildList(
           (UserPresentBoxMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           0LL);
}


void __fastcall PresentBoxInfoComponent__SetPresentBoxInfo(PresentBoxInfoComponent_o *this, const MethodInfo *method)
{
  PresentBoxInfoComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  SimpleAnimation_o *PresentList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int m_CancellationTokenSource; // w20
  struct System_String_array *animFiles; // x8
  int v10; // w9
  bool v11; // w25
  int32_t v12; // w27
  int32_t max_length; // w10
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v17; // w9
  UnityEngine_Object_o *presentBoxSimpleAnimation; // x23
  UnityEngine_Object_o *presentBoxAnimation; // x23
  UnityEngine_Object_o *presentBoxSprite; // x22
  int32_t v21; // w1

  v2 = this;
  if ( (byte_4B16E8B & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    this = (PresentBoxInfoComponent_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B16E8B = 1;
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
  v10 = LODWORD(PresentList[1].fields.m_Playable[1].fields.onDone)
      - *(&PresentList[1].fields.m_Playable[1].fields.m_StatesVersion + 1);
  v11 = v10 > m_CancellationTokenSource;
  v12 = v10 <= m_CancellationTokenSource ? 2 : m_CancellationTokenSource > 0;
  if ( !animFiles )
    goto LABEL_49;
  max_length = animFiles->max_length;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v12 <= max_length )
  {
    if ( v12 >= (unsigned int)max_length )
      goto LABEL_50;
    v15 = animFiles->m_Items[v12];
  }
  sprFiles = v2->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_49;
  v17 = sprFiles->max_length;
  if ( v12 <= v17 )
  {
    if ( v12 < (unsigned int)v17 )
    {
      v14 = sprFiles->m_Items[v12];
      goto LABEL_17;
    }
LABEL_50:
    sub_1BCB25C(PresentList, v6, v7);
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
    if ( SimpleAnimation__GetClipCount(PresentList, 0LL) >= v12 && !System_String__IsNullOrEmpty(v15, 0LL) )
    {
      PresentList = v2->fields.presentBoxSimpleAnimation;
      if ( !PresentList )
        goto LABEL_49;
      SimpleAnimation__Play_65395744(PresentList, v15, 0LL);
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
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)PresentList, 0LL) >= v12
        && !System_String__IsNullOrEmpty(v15, 0LL) )
      {
        PresentList = (SimpleAnimation_o *)v2->fields.presentBoxAnimation;
        if ( !PresentList )
          goto LABEL_49;
        UnityEngine_Animation__Play_69881360((UnityEngine_Animation_o *)PresentList, v15, 0LL);
      }
    }
  }
  presentBoxSprite = (UnityEngine_Object_o *)v2->fields.presentBoxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v14, 0LL) )
  {
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxSprite;
    if ( !PresentList )
      goto LABEL_49;
    UISprite__set_spriteName((UISprite_o *)PresentList, v14, 0LL);
  }
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList
    || (PresentList = (SimpleAnimation_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)PresentList,
                                             0LL)) == 0LL )
  {
LABEL_49:
    sub_1BCB254(PresentList, v6);
  }
  if ( !v11 || m_CancellationTokenSource >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 1, 0LL);
    PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
    if ( PresentList )
    {
      v21 = m_CancellationTokenSource;
      goto LABEL_48;
    }
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PresentList, 0, 0LL);
  PresentList = (SimpleAnimation_o *)v2->fields.presentBoxNoticeNumber;
  if ( !PresentList )
    goto LABEL_49;
  v21 = 0;
LABEL_48:
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)PresentList, v21, 0LL);
}