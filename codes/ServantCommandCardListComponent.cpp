void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct UISprite_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UISprite_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B15721 & 1) == 0 )
  {
    sub_1BCA7E0(&UISprite___TypeInfo, method, v2);
    byte_4B15721 = 1;
  }
  v4 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, 5LL);
  this->fields.cardSpriteList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardSpriteList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, 5LL);
  this->fields.grantSpriteList = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.grantSpriteList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, 5LL);
  this->fields.cardRankSpriteList = v18;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cardRankSpriteList,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COMMAND_CARD_NORMAL = _Q1;
  this->fields.COMMAND_CARD_GRAY_OUT = (struct UnityEngine_Color_o)xmmword_BD2330;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCommandCardListComponent__AdjustCardSpriteListPosX(
        ServantCommandCardListComponent_o *this,
        float start,
        float interval,
        const MethodInfo *method)
{
  struct UISprite_array *cardSpriteList; // x8
  ServantCommandCardListComponent_o *v6; // x19
  __int64 v8; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0

  cardSpriteList = this->fields.cardSpriteList;
  if ( !cardSpriteList )
LABEL_7:
    sub_1BCAA3C(this, method);
  v6 = this;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1BCAA44(this, method);
    this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v8];
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, start, 0LL);
      cardSpriteList = v6->fields.cardSpriteList;
      start = start + interval;
      ++v8;
      if ( cardSpriteList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantCommandCardListComponent__Clear(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCommandCardListComponent_o *v3; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v6; // w21
  il2cpp_array_size_t v7; // w9
  __int64 v8; // x23
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v11; // x20
  struct UISprite_array *v12; // x8

  v3 = this;
  if ( (byte_4B1571B & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1571B = 1;
  }
  cardSpriteList = v3->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_22;
  max_length = cardSpriteList->max_length;
  v6 = max_length - 1;
  if ( max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= cardSpriteList->max_length )
LABEL_24:
        sub_1BCAA44(this, method);
      v8 = (int)v7;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v7];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      grantSpriteList = v3->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v8 >= grantSpriteList->max_length )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v8];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      cardRankSpriteList = v3->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v8 >= cardRankSpriteList->max_length )
        goto LABEL_24;
      v11 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v3->fields.cardRankSpriteList;
        if ( !v12 )
          break;
        if ( (unsigned int)v8 >= v12->max_length )
          goto LABEL_24;
        this = (ServantCommandCardListComponent_o *)v12->m_Items[v8];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      }
      if ( v6 == (_DWORD)v8 )
        return;
      cardSpriteList = v3->fields.cardSpriteList;
      v7 = v8 + 1;
    }
    while ( cardSpriteList );
LABEL_22:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set(
        ServantCommandCardListComponent_o *this,
        int64_t userSvtId,
        bool isChkLock,
        int32_t cardIconType,
        const MethodInfo *method)
{
  bool v8; // w22
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v16; // x3

  v8 = isChkLock;
  if ( (byte_4B1571C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, isChkLock);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1571C = 1;
  }
  this->fields.isChkLock = v8;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v14);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_38924704(this, (UserServantEntity_o *)Entity, cardIconType, v16);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_38923484(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


void __fastcall ServantCommandCardListComponent__Set_38923484(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x26
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v27; // w19
  il2cpp_array_size_t v28; // w9
  struct UISprite_array *grantSpriteList; // x10
  __int64 v30; // x21
  struct UISprite_array *cardRankSpriteList; // x9
  UISprite_o *v32; // x28
  UnityEngine_Behaviour_o *v33; // x26
  UnityEngine_Object_o *v34; // x25
  int32_t v35; // w27
  int32_t v36; // w29
  il2cpp_array_size_t v37; // w8
  il2cpp_array_size_t v38; // w8
  UserServantCommandCodeEntity_o *v39; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v41; // w9
  float *p_a; // x8
  struct UnityEngine_Color_o *p_COMMAND_CARD_NORMAL; // x11
  float *p_b; // x9
  float *p_g; // x10
  __int64 v46; // x1
  __int64 v47; // x1
  bool v48; // w1
  UnityEngine_Behaviour_o *v49; // x0
  unsigned __int8 v52; // [xsp+50h] [xbp-70h]
  signed int v53; // [xsp+54h] [xbp-6Ch]
  UserServantCommandCodeEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B15720 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, cardIds, cardParams);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B15720 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object
      || (Instance = UserServantCommandCodeMaster__TryGetEntity(
                       (UserServantCommandCodeMaster_o *)MasterData_object,
                       &entity,
                       Instance,
                       svtId,
                       0LL),
          (cardSpriteList = this->fields.cardSpriteList) == 0LL) )
    {
LABEL_62:
      sub_1BCAA3C(Instance, v22);
    }
    max_length = cardSpriteList->max_length;
    v27 = max_length - 1;
    if ( max_length >= 1 )
    {
      v28 = 0;
      v52 = Instance;
      v53 = cardIds->max_length;
      while ( 1 )
      {
        if ( v28 >= cardSpriteList->max_length )
          goto LABEL_65;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_62;
        v30 = (int)v28;
        if ( v28 >= grantSpriteList->max_length )
          goto LABEL_65;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_62;
        if ( (unsigned int)v30 >= cardRankSpriteList->max_length )
LABEL_65:
          sub_1BCAA44(Instance, v22);
        v32 = cardSpriteList->m_Items[v30];
        v33 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v30];
        v34 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v30];
        v35 = 0;
        if ( collectionStatus == 4 )
        {
          v36 = 0;
          LODWORD(v22) = 0;
        }
        else
        {
          v36 = 0;
          v22 = 0LL;
          if ( (int)v30 >= v53 )
            goto LABEL_30;
          if ( (unsigned int)v30 >= cardIds->max_length )
            goto LABEL_65;
          v22 = (unsigned int)cardIds->m_Items[v30 + 1];
          if ( codeIds && (v37 = codeIds->max_length, (int)v30 < (int)v37) )
          {
            if ( (unsigned int)v30 >= v37 )
              goto LABEL_65;
            v36 = codeIds->m_Items[v30 + 1];
            if ( !cardParams )
            {
LABEL_28:
              v35 = 0;
              goto LABEL_30;
            }
          }
          else
          {
            v36 = 0;
            if ( !cardParams )
              goto LABEL_28;
          }
          v38 = cardParams->max_length;
          if ( (int)v30 >= (int)v38 )
            goto LABEL_28;
          if ( (unsigned int)v30 >= v38 )
            goto LABEL_65;
          v35 = cardParams->m_Items[v30 + 1];
        }
LABEL_30:
        BattleCommand__setSprite(v32, v22, 0LL);
        if ( this->fields.isChkLock )
        {
          v39 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_62;
            v41 = userCommandCodeIds->max_length;
            if ( (int)v30 >= v41 )
            {
              v39 = 0LL;
            }
            else
            {
              if ( (unsigned int)v30 >= v41 )
                goto LABEL_65;
              v39 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v30];
            }
          }
          if ( ((v39 != (UserServantCommandCodeEntity_o *)-1LL) & v52) != 0 )
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_NORMAL;
            p_a = &this->fields.COMMAND_CARD_NORMAL.fields.a;
            p_g = &this->fields.COMMAND_CARD_NORMAL.fields.g;
            p_b = &this->fields.COMMAND_CARD_NORMAL.fields.b;
            if ( !v32 )
              goto LABEL_62;
          }
          else
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_GRAY_OUT;
            p_a = &this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
            p_g = &this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            p_b = &this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            if ( !v32 )
              goto LABEL_62;
          }
          v55.fields.a = *p_a;
          v55.fields.b = *p_b;
          v55.fields.g = *p_g;
          v55.fields.r = p_COMMAND_CARD_NORMAL->fields.r;
          UIWidget__set_color((UIWidget_o *)v32, v55, 0LL);
        }
        if ( !v33 )
          goto LABEL_62;
        if ( v36 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v33, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v33, 1, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46);
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v33, v36, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
        Instance = UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
        if ( v35 < 1 )
        {
          if ( (Instance & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_62;
            v49 = (UnityEngine_Behaviour_o *)v34;
            v48 = 0;
LABEL_59:
            UnityEngine_Behaviour__set_enabled(v49, v48, 0LL);
          }
        }
        else if ( (Instance & 1) != 0 )
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
          Instance = AtlasManager__SetCommandCardIconImage((UISprite_o *)v34, v35, cardIconType, 0, 0LL);
          if ( !v34 )
            goto LABEL_62;
          v48 = Instance & 1;
          v49 = (UnityEngine_Behaviour_o *)v34;
          goto LABEL_59;
        }
        if ( v27 == (_DWORD)v30 )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        v28 = v30 + 1;
        if ( !cardSpriteList )
          goto LABEL_62;
      }
    }
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)cardIds);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_38924704(
        ServantCommandCardListComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  System_Int32_array *CommandCardParam; // x23
  System_Int32_array *CommandCodeIdList; // x3
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B1571D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity, *(_QWORD *)&cardIconType);
    byte_4B1571D = 1;
  }
  if ( userSvtEntity )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_38924900(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_38924900(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x7

  if ( (byte_4B1571F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, cardParams);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1571F = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       svtId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_1BCAA3C(Instance, v18);
    }
    ServantCommandCardListComponent__Set_38923484(
      this,
      (System_Int32_array *)Instance[9].klass,
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_38925144(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Instance; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x24
  long double v24; // q0
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v29; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1571E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, codeIds);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B1571E = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v23 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                svtId,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
          v25 = sub_1C1C6BC(v24);
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
        if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
          v26 = sub_1C1C6BC(v24);
        Instance = **(_QWORD **)(v26 + 184);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
          Instance = NetworkManager__get_UserId(0LL);
          if ( MasterData_object )
          {
            Instance = UserServantCommandCardMaster__TryGetEntity(
                         (UserServantCommandCardMaster_o *)MasterData_object,
                         &entity,
                         Instance,
                         (unsigned int)svtId,
                         0LL);
            commandCardParam = 0LL;
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_21;
              commandCardParam = entity->fields.commandCardParam;
            }
            if ( v23 )
            {
              ServantCommandCardListComponent__Set_38923484(
                this,
                (System_Int32_array *)v23[9].klass,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v29);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(Instance, v22);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}