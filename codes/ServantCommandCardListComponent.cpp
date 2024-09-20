void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct UISprite_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct UISprite_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A6B7 & 1) == 0 )
  {
    sub_1B885B0(&UISprite___TypeInfo);
    byte_4A5A6B7 = 1;
  }
  v3 = (struct UISprite_array *)sub_1B88658(UISprite___TypeInfo, 5LL);
  this->fields.cardSpriteList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardSpriteList, (int32_t)v3, v4, v5);
  v6 = (struct UISprite_array *)sub_1B88658(UISprite___TypeInfo, 5LL);
  this->fields.grantSpriteList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.grantSpriteList, (int32_t)v6, v7, v8);
  v9 = (struct UISprite_array *)sub_1B88658(UISprite___TypeInfo, 5LL);
  this->fields.cardRankSpriteList = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardRankSpriteList, (int32_t)v9, v10, v11);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COMMAND_CARD_NORMAL = _Q1;
  this->fields.COMMAND_CARD_GRAY_OUT = (struct UnityEngine_Color_o)xmmword_BB4160;
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
    sub_1B8880C(this, method);
  v6 = this;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1B88814(this, method);
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
  ServantCommandCardListComponent_o *v2; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v5; // w21
  il2cpp_array_size_t v6; // w9
  __int64 v7; // x23
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v10; // x20
  struct UISprite_array *v11; // x8

  v2 = this;
  if ( (byte_4A5A6B1 & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6B1 = 1;
  }
  cardSpriteList = v2->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_22;
  max_length = cardSpriteList->max_length;
  v5 = max_length - 1;
  if ( max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= cardSpriteList->max_length )
LABEL_24:
        sub_1B88814(this, method);
      v7 = (int)v6;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v6];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      grantSpriteList = v2->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v7 >= grantSpriteList->max_length )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v7];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      cardRankSpriteList = v2->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v7 >= cardRankSpriteList->max_length )
        goto LABEL_24;
      v10 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v2->fields.cardRankSpriteList;
        if ( !v11 )
          break;
        if ( (unsigned int)v7 >= v11->max_length )
          goto LABEL_24;
        this = (ServantCommandCardListComponent_o *)v11->m_Items[v7];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      }
      if ( v5 == (_DWORD)v7 )
        return;
      cardSpriteList = v2->fields.cardSpriteList;
      v6 = v7 + 1;
    }
    while ( cardSpriteList );
LABEL_22:
    sub_1B8880C(this, method);
  }
}


void __fastcall ServantCommandCardListComponent__Set(
        ServantCommandCardListComponent_o *this,
        int64_t userSvtId,
        bool isChkLock,
        int32_t cardIconType,
        const MethodInfo *method)
{
  bool v8; // w22
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x3

  v8 = isChkLock;
  if ( (byte_4A5A6B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6B2 = 1;
  }
  this->fields.isChkLock = v8;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_38213956(this, (UserServantEntity_o *)Entity, cardIconType, v12);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_38212736(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_38135136(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4A5A6B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6B5 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       svtId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_1B8880C(Instance, v14);
    }
    ServantCommandCardListComponent__Set_38212736(
      this,
      (System_Int32_array *)Instance[9].klass,
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v15);
  }
}


void __fastcall ServantCommandCardListComponent__Set_38212736(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x26
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v18; // w19
  il2cpp_array_size_t v19; // w9
  struct UISprite_array *grantSpriteList; // x10
  __int64 v21; // x21
  struct UISprite_array *cardRankSpriteList; // x9
  UISprite_o *v23; // x28
  UnityEngine_Behaviour_o *v24; // x26
  UnityEngine_Object_o *v25; // x25
  int32_t v26; // w27
  int32_t v27; // w29
  il2cpp_array_size_t v28; // w8
  il2cpp_array_size_t v29; // w8
  UserServantCommandCodeEntity_o *v30; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v32; // w9
  float *p_a; // x8
  struct UnityEngine_Color_o *p_COMMAND_CARD_NORMAL; // x11
  float *p_b; // x9
  float *p_g; // x10
  bool v37; // w1
  UnityEngine_Behaviour_o *v38; // x0
  unsigned __int8 v41; // [xsp+50h] [xbp-70h]
  signed int v42; // [xsp+54h] [xbp-6Ch]
  UserServantCommandCodeEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5A6B6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6B6 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      sub_1B8880C(Instance, v14);
    }
    max_length = cardSpriteList->max_length;
    v18 = max_length - 1;
    if ( max_length >= 1 )
    {
      v19 = 0;
      v41 = Instance;
      v42 = cardIds->max_length;
      while ( 1 )
      {
        if ( v19 >= cardSpriteList->max_length )
          goto LABEL_65;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_62;
        v21 = (int)v19;
        if ( v19 >= grantSpriteList->max_length )
          goto LABEL_65;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_62;
        if ( (unsigned int)v21 >= cardRankSpriteList->max_length )
LABEL_65:
          sub_1B88814(Instance, v14);
        v23 = cardSpriteList->m_Items[v21];
        v24 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v21];
        v25 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v21];
        v26 = 0;
        if ( collectionStatus == 4 )
        {
          v27 = 0;
          LODWORD(v14) = 0;
        }
        else
        {
          v27 = 0;
          v14 = 0LL;
          if ( (int)v21 >= v42 )
            goto LABEL_30;
          if ( (unsigned int)v21 >= cardIds->max_length )
            goto LABEL_65;
          v14 = (unsigned int)cardIds->m_Items[v21 + 1];
          if ( codeIds && (v28 = codeIds->max_length, (int)v21 < (int)v28) )
          {
            if ( (unsigned int)v21 >= v28 )
              goto LABEL_65;
            v27 = codeIds->m_Items[v21 + 1];
            if ( !cardParams )
            {
LABEL_28:
              v26 = 0;
              goto LABEL_30;
            }
          }
          else
          {
            v27 = 0;
            if ( !cardParams )
              goto LABEL_28;
          }
          v29 = cardParams->max_length;
          if ( (int)v21 >= (int)v29 )
            goto LABEL_28;
          if ( (unsigned int)v21 >= v29 )
            goto LABEL_65;
          v26 = cardParams->m_Items[v21 + 1];
        }
LABEL_30:
        BattleCommand__setSprite(v23, v14, 0LL);
        if ( this->fields.isChkLock )
        {
          v30 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_62;
            v32 = userCommandCodeIds->max_length;
            if ( (int)v21 >= v32 )
            {
              v30 = 0LL;
            }
            else
            {
              if ( (unsigned int)v21 >= v32 )
                goto LABEL_65;
              v30 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v21];
            }
          }
          if ( ((v30 != (UserServantCommandCodeEntity_o *)-1LL) & v41) != 0 )
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_NORMAL;
            p_a = &this->fields.COMMAND_CARD_NORMAL.fields.a;
            p_g = &this->fields.COMMAND_CARD_NORMAL.fields.g;
            p_b = &this->fields.COMMAND_CARD_NORMAL.fields.b;
            if ( !v23 )
              goto LABEL_62;
          }
          else
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_GRAY_OUT;
            p_a = &this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
            p_g = &this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            p_b = &this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            if ( !v23 )
              goto LABEL_62;
          }
          v44.fields.a = *p_a;
          v44.fields.b = *p_b;
          v44.fields.g = *p_g;
          v44.fields.r = p_COMMAND_CARD_NORMAL->fields.r;
          UIWidget__set_color((UIWidget_o *)v23, v44, 0LL);
        }
        if ( !v24 )
          goto LABEL_62;
        if ( v27 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v24, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v24, 1, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v24, v27, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
        if ( v26 < 1 )
        {
          if ( (Instance & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_62;
            v38 = (UnityEngine_Behaviour_o *)v25;
            v37 = 0;
LABEL_59:
            UnityEngine_Behaviour__set_enabled(v38, v37, 0LL);
          }
        }
        else if ( (Instance & 1) != 0 )
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          Instance = AtlasManager__SetCommandCardIconImage((UISprite_o *)v25, v26, cardIconType, 0, 0LL);
          if ( !v25 )
            goto LABEL_62;
          v37 = Instance & 1;
          v38 = (UnityEngine_Behaviour_o *)v25;
          goto LABEL_59;
        }
        if ( v18 == (_DWORD)v21 )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        v19 = v21 + 1;
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


void __fastcall ServantCommandCardListComponent__Set_38213956(
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

  if ( (byte_4A5A6B3 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6B3 = 1;
  }
  if ( userSvtEntity )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_38135136(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_38214152(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x24
  __int64 v14; // x8
  __int64 v15; // x0
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v17; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A6B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6B4 = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                svtId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
          v14 = sub_1BDA48C(v14);
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
        if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
          v15 = sub_1BDA48C(v15);
        Instance = **(_QWORD **)(v15 + 184);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
            if ( v13 )
            {
              ServantCommandCardListComponent__Set_38212736(
                this,
                (System_Int32_array *)v13[9].klass,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v17);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B8880C(Instance, v12);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}